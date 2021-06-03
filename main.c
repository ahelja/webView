// main .c
#include "webview.h"
#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
                   int nCmdShow) {
#else
int main() {
#endif
    webview_t w = webview_create(0, NULL);
    webview_set_title(w, "Webview Example");
    webview_set_size(w, 800, 600, WEBVIEW_HINT_NONE);
    webview_navigate(w, "data:text/html, <html contenteditable>");
    webview_run(w);
    webview_destroy(w);
    return 0;
}