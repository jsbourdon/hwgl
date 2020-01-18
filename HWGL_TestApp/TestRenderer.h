#pragma once

#include "Core/IRenderer.h"
#include "Inputs/IInputReceiver.h"

namespace lwgl
{
    namespace core
    {
        class RenderCore;
        class GfxDevice;
        class GfxDeviceContext;
    }
}

using namespace lwgl;
using namespace core;
using namespace input;

class TestRenderer : public IRenderer, public IInputReceiver
{
public:

    TestRenderer() = default;
    ~TestRenderer() = default;

    bool Init(RenderCore *pRenderCore, GfxDevice* pDevice, GfxDeviceContext* pContext) override;
    void Destroy(RenderCore *pRenderCore) override;
    void OnUpdate(RenderCore *pRenderCore, GfxDeviceContext* pContext, double fTimeSec, float fElapsedTimeSec, void* pUserContext) override;
    void OnFrameRender(RenderCore *pRenderCore, GfxDevice* pDevice, GfxDeviceContext* pContext, double fTimeSec, float fElapsedTimeSec, void* pUserContext) override;

    void OnKeyDown(uint32_t keyCode, bool firstDown) override;
    void OnKeyUp(uint32_t keyCode) override;
};
