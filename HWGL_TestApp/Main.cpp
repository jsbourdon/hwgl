#include "TestRenderer.h"
#include "Core/RenderCore.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    RenderCore *pRenderCore = RenderCore::CreateCore();
    pRenderCore->Init<TestRenderer>(L"Test", 1280, 720);
    pRenderCore->StartRenderLoop();
    pRenderCore->Release();

    return DXUTGetExitCode();
}