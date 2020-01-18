#include "TestRenderer.h"
#include "Core/RenderCore.h"
#include "Core/GfxDeviceContext.h"
#include "Debugging/DebuggingFeatures.h"
#include "Descriptors/ClearDescriptor.h"

using namespace descriptors;

bool TestRenderer::Init(RenderCore *pRenderCore, GfxDevice* pDevice, GfxDeviceContext* pContext)
{
    pRenderCore->GetDebuggingFeatures()->ShowFPS(true);
    return true;
}

void TestRenderer::Destroy(RenderCore *pRenderCore)
{

}

void TestRenderer::OnUpdate(RenderCore *pRenderCore, GfxDeviceContext* pContext, double fTimeSec, float fElapsedTimeSec, void* pUserContext)
{

}

void TestRenderer::OnFrameRender(RenderCore *pRenderCore, GfxDevice* pDevice, GfxDeviceContext* pContext, double fTimeSec, float fElapsedTimeSec, void* pUserContext)
{
    ClearDescriptor clearDesc
    {
        { 0, 0, 0, 1 }, // Vector4 ColorClearValue;
        0.0f,           // float DepthClearValue;
        0,              // uint8_t StencilClearValue;
        true,           // bool ClearColor;
        true,           // bool ClearDepth;
        false,          // bool ClearStencil;
    };

    pContext->Clear(clearDesc);
}

void TestRenderer::OnKeyDown(uint32_t keyCode, bool firstDown)
{

}

void TestRenderer::OnKeyUp(uint32_t keyCode)
{

}
