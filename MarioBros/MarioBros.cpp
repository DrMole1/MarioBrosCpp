#include "framework.h"
#include "MarioBros.h"


// ====================== DRAW METHODS ======================


void OnPaint(HDC hdc, Bloc bloc)
{
    Graphics graphics(hdc);
    Pen pen(Color(255, 0, 255, 255));
    float x1 = bloc.GetPosX() - RAY;
    float x2 = bloc.GetPosX() + RAY;
    float y1 = bloc.GetPosY() - RAY + YMODIFIER;
    float y2 = 2 * RAY;
    graphics.DrawRectangle(&pen, x1, y1, x2, y2);
    x1 = bloc.GetPosX() + 7;
    x2 = bloc.GetPosX() - 7;
    y1 = bloc.GetPosY() - RAY + YMODIFIER;
    y2 = bloc.GetPosY() + RAY + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = bloc.GetPosX() - RAY;
    x2 = bloc.GetPosX() - 5;
    y1 = bloc.GetPosY() + 5 + YMODIFIER;
    y2 = bloc.GetPosY() + RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = bloc.GetPosX() + 5;
    x2 = bloc.GetPosX() + RAY;
    y1 = bloc.GetPosY() - RAY / 2 + YMODIFIER;
    y2 = bloc.GetPosY() - RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
}

void OnPaint(HDC hdc, DestructibleBloc destructibleBloc)
{
    Graphics graphics(hdc);
    Pen pen(Color(255, 0, 255, 255));
    float x1 = destructibleBloc.GetPosX() - RAY;
    float x2 = RAY * 2;
    float y1 = destructibleBloc.GetPosY() - RAY + YMODIFIER;
    float y2 = RAY * 2;
    graphics.DrawRectangle(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY;
    x2 = destructibleBloc.GetPosX() + RAY;
    y1 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY;
    x2 = destructibleBloc.GetPosX() + RAY;
    y1 = destructibleBloc.GetPosY() + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY;
    x2 = destructibleBloc.GetPosX() + RAY;
    y1 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY / 3;
    x2 = destructibleBloc.GetPosX() - RAY / 3;
    y1 = destructibleBloc.GetPosY() - RAY + YMODIFIER;
    y2 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() + RAY / 1.5;
    x2 = destructibleBloc.GetPosX() + RAY / 1.5;
    y1 = destructibleBloc.GetPosY() - RAY + YMODIFIER;
    y2 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY / 3;
    x2 = destructibleBloc.GetPosX() - RAY / 3;
    y1 = destructibleBloc.GetPosY() + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() + RAY / 1.5;
    x2 = destructibleBloc.GetPosX() + RAY / 1.5;
    y1 = destructibleBloc.GetPosY() + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY / 1.5;
    x2 = destructibleBloc.GetPosX() - RAY / 1.5;
    y1 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() + RAY / 3;
    x2 = destructibleBloc.GetPosX() + RAY / 3;
    y1 = destructibleBloc.GetPosY() - RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() - RAY / 1.5;
    x2 = destructibleBloc.GetPosX() - RAY / 1.5;
    y1 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + RAY + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
    x1 = destructibleBloc.GetPosX() + RAY / 3;
    x2 = destructibleBloc.GetPosX() + RAY / 3;
    y1 = destructibleBloc.GetPosY() + RAY / 2 + YMODIFIER;
    y2 = destructibleBloc.GetPosY() + RAY + YMODIFIER;
    graphics.DrawLine(&pen, x1, y1, x2, y2);
}

void OnPaint(HDC hdc, MysteryBloc mysteryBloc)
{
    Graphics graphics(hdc);
    Pen pen(Color(255, 0, 255, 255));
    float x1 = mysteryBloc.GetPosX() - RAY;
    float x2 = RAY * 2;
    float y1 = mysteryBloc.GetPosY() - RAY + YMODIFIER;
    float y2 = RAY * 2;
    graphics.DrawRectangle(&pen, x1, y1, x2, y2);
    float posX = mysteryBloc.GetPosX() - RAY / 3;
    float posY = mysteryBloc.GetPosY() - RAY / 3 + YMODIFIER - 5;
    float width = RAY / 5;
    float height = RAY / 2;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() - RAY / 5;
    posY = mysteryBloc.GetPosY() - RAY / 2 + YMODIFIER - 5;
    width = RAY / 2;
    height = RAY / 5;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() + RAY / 4;
    posY = mysteryBloc.GetPosY() - RAY / 3 + YMODIFIER - 5;
    width = RAY / 4;
    height = RAY / 2;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() + RAY / 9;
    posY = mysteryBloc.GetPosY() + RAY / 6 + YMODIFIER - 5;
    width = RAY / 5;
    height = RAY / 2.5;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() + RAY / 9;
    posY = mysteryBloc.GetPosY() + RAY / 1.5 + YMODIFIER - 5;
    width = RAY / 5;
    height = RAY / 5;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() - RAY / 1.2;
    posY = mysteryBloc.GetPosY() - RAY / 1.2 + YMODIFIER;
    width = RAY / 7;
    height = RAY / 7;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() + RAY / 1.2;
    posY = mysteryBloc.GetPosY() + RAY / 1.2 + YMODIFIER;
    width = RAY / 7;
    height = RAY / 7;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() - RAY / 1.2;
    posY = mysteryBloc.GetPosY() + RAY / 1.2 + YMODIFIER;
    width = RAY / 7;
    height = RAY / 7;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
    posX = mysteryBloc.GetPosX() + RAY / 1.2;
    posY = mysteryBloc.GetPosY() - RAY / 1.2 + YMODIFIER;
    width = RAY / 7;
    height = RAY / 7;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
}

void EraseDraw(HDC hdc, float _x, float _y)
{
    Graphics graphics(hdc);
    Pen pen(Color(255, 255, 255, 255));

    float y1 = _y - RAY + YMODIFIER;
    float y2 = _y + RAY + YMODIFIER;
    float x1 = _x - RAY;
    float x2 = _x - RAY;

    for (int i = 0; i < RAY * 2; i++)
    {
        x1++;
        x2++;

        graphics.DrawLine(&pen, x1, y1, x2, y2);
    }
}

void OnPaint(HDC hdc, Player player)
{
    Graphics graphics(hdc);
    Pen pen(Color(255, 0, 255, 255));
    float posX = player.GetPosX();
    float posY = player.GetPosY();
    float width = RAY;
    float height = RAY;
    graphics.DrawRectangle(&pen, posX, posY, width, height);
}


// ==========================================================

// ======================= VARIABLES ========================

bool isMovingLeft = false;
bool isMovingRight = false;
bool isSceneLoaded = false;
bool isOnGravity = true;
bool isJumping = false;
Player player = Player(151, 302);
int idTimer = -1;
int jumpTick = 9;
int cptDBloc = 0;
int cptMBloc = 0;

// ==========================================================

/*class CGameManager
{
private:
    STEAM_CALLBACK(CGameManager, OnGameOverlayActivated, GameOverlayActivated_t);
    void OnGetNumberOfCurrentPlayers(NumberOfCurrentPlayers_t* pCallback, bool bIOFailure);
    CCallResult< CGameManager, NumberOfCurrentPlayers_t > m_NumberOfCurrentPlayersCallResult;

public:
    void GetNumberOfCurrentPlayers();
};

void CGameManager::OnGameOverlayActivated(GameOverlayActivated_t* pCallback)
{
    if (pCallback->m_bActive)
        printf("Steam overlay now active\n");
    else
        printf("Steam overlay now inactive\n");
}

// Make the asynchronous request to receive the number of current players.
void CGameManager::GetNumberOfCurrentPlayers()
{
    printf("Getting Number of Current Players\n");
    SteamAPICall_t hSteamAPICall = SteamUserStats()->GetNumberOfCurrentPlayers();
    m_NumberOfCurrentPlayersCallResult.Set(hSteamAPICall, this, &CGameManager::OnGetNumberOfCurrentPlayers);
}

// Called when SteamUserStats()->GetNumberOfCurrentPlayers() returns asynchronously, after a call to SteamAPI_RunCallbacks().
void CGameManager::OnGetNumberOfCurrentPlayers(NumberOfCurrentPlayers_t* pCallback, bool bIOFailure)
{
    if (bIOFailure || !pCallback->m_bSuccess)
    {
        printf("NumberOfCurrentPlayers_t failed!\n");
        return;
    }

    printf("Number of players currently playing: %d\n", pCallback->m_cPlayers);
}*/


// Signature of WndProc
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, PSTR, INT iCmdShow)
{
    HWND                hWnd;
    MSG                 msg;
    WNDCLASS            wndClass;
    GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR           gdiplusToken;

    // Initialize GDI+.
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

    // Initialize window
    wndClass.style = CS_HREDRAW | CS_VREDRAW;
    wndClass.lpfnWndProc = WndProc;
    wndClass.cbClsExtra = 0;
    wndClass.cbWndExtra = 0;
    wndClass.hInstance = hInstance;
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndClass.lpszMenuName = NULL;
    wndClass.lpszClassName = TEXT("MarioBros");

    RegisterClass(&wndClass);

    // Create the window
    hWnd = CreateWindow(
        TEXT("MarioBros"),   // window class name
        TEXT("Mario Bros"),  // window caption
        WS_OVERLAPPEDWINDOW,      // window style
        CW_USEDEFAULT,            // initial x position
        CW_USEDEFAULT,            // initial y position
        1360,            // initial x size
        584,            // initial y size
        NULL,                     // parent window handle
        NULL,                     // window menu handle
        hInstance,                // program instance handle
        NULL);                    // creation parameters

    ShowWindow(hWnd, iCmdShow);
    UpdateWindow(hWnd);

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    GdiplusShutdown(gdiplusToken);

    return msg.wParam;
}

static int RealMain(const char* pchCmdLine, HINSTANCE hInstance, int nCmdShow)
{

    if (SteamAPI_RestartAppIfNecessary(k_uAppIdInvalid))
    {
        // if Steam is not running or the game wasn't started through Steam, SteamAPI_RestartAppIfNecessary starts the 
        // local Steam client and also launches this game again.

        return EXIT_FAILURE;
    }

    // Initialize SteamAPI, if this fails we bail out since we depend on Steam for lots of stuff.
    // You don't necessarily have to though if you write your code to check whether all the Steam
    // interfaces are NULL before using them and provide alternate paths when they are unavailable.
    //
    // This will also load the in-game steam overlay dll into your process.  That dll is normally
    // injected by steam when it launches games, but by calling this you cause it to always load,
    // even when not launched via steam.
    if (!SteamAPI_Init())
    {
        return EXIT_FAILURE;
    }
    
    const char* name = SteamFriends()->GetPersonaName();

    printf(name);

    //CGameManager gameManager;

    //gameManager.GetNumberOfCurrentPlayers();

    SteamAPI_Shutdown();
}

// Update the window for every proc
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    HDC hdc;
    PAINTSTRUCT ps;
    wchar_t msg[32];
    RECT _rect;
    DestructibleBloc destructibleBlocs[3]{ DestructibleBloc(20 * RAY * 2 + RAY, 55 + RAY), DestructibleBloc(22 * RAY * 2 + RAY, 55 + RAY), DestructibleBloc(24 * RAY * 2 + RAY, 55 + RAY) };
    MysteryBloc mysteryBlocs[4]{ MysteryBloc(16 * RAY * 2 + RAY, 55 + RAY, MysteryBloc::ObjectInBloc::Coin), MysteryBloc(21 * RAY * 2 + RAY, 55 + RAY, MysteryBloc::ObjectInBloc::Coin), MysteryBloc(23 * RAY * 2 + RAY, 55 + RAY, MysteryBloc::ObjectInBloc::Coin), MysteryBloc(22 * RAY * 2 + RAY, -125 + RAY, MysteryBloc::ObjectInBloc::Coin) };


    switch (message)
    {
        case WM_CREATE:   // START SECTION
     
            // Start the timer.  
            SetTimer(hWnd, idTimer = 1, 10, NULL);
            return 0;


        case WM_PAINT:   // PAINT SECTION

            hdc = BeginPaint(hWnd, &ps);

            if (isMovingRight)
            {
                player.SetPosX(SPEED);
                OnPaint(hdc, player);
                isMovingRight = false;
            }
            else if (isMovingLeft)
            {
                player.SetPosX(SPEED * -1);
                OnPaint(hdc, player);
                isMovingLeft = false;
            }

            if (isOnGravity)
            {
                if (player.GetPosY() < YGROUND - GRAVITY)
                {
                    player.SetPosY(GRAVITY);
                }
                else
                {
                    float distance = YGROUND - player.GetPosY();
                    player.SetPosY(distance);
                    isOnGravity = false;
                }

                OnPaint(hdc, player);
            }
            else if (isJumping)
            {
                player.SetPosY(GRAVITY * -5);
                OnPaint(hdc, player);
                jumpTick++;

                if (jumpTick == 9)
                {
                    isJumping = false;
                    isOnGravity = true;
                }
            }

            if(!isSceneLoaded)
            {
                for (int i = 0; i < 27; i++)
                {
                    Bloc bloc1 = Bloc(i * RAY * 2 + RAY, 295 + RAY);
                    OnPaint(hdc, bloc1);
                    Bloc bloc2 = Bloc(i * RAY * 2 + RAY, 295 - RAY);
                    OnPaint(hdc, bloc2);

                    if (i == 20 || i == 22 || i == 24)
                    {
                        OnPaint(hdc, destructibleBlocs[cptDBloc]);
                        cptDBloc++;
                    }

                    if (i == 16 || i == 21 || i == 23)
                    {
                        OnPaint(hdc, mysteryBlocs[cptMBloc]);
                        cptMBloc++;
                    }

                    if (i == 22)
                    {
                        OnPaint(hdc, mysteryBlocs[cptMBloc]);
                        cptMBloc++;

                        OnPaint(hdc, player);
                    }
                }

                isSceneLoaded = true;
            }
            
            EndPaint(hWnd, &ps);
            return 0;


        case WM_DESTROY:   // Quit Application
            // Destroy the specified Timer
            KillTimer(hWnd, 1);
            PostQuitMessage(0);
            return 0;


        case WM_KEYDOWN:   // Inputs Section
            if (wParam == VK_RIGHT)
            {
                _rect = { (long)(player.GetPosX() - RAY * 2), (long)(player.GetPosY() - RAY * 2), (long)(player.GetPosX() + RAY * 2), (long)(player.GetPosY() + RAY + 1) };

                InvalidateRect(hWnd, &_rect, TRUE);
                isMovingRight = true;
            }
            else if (wParam == VK_LEFT)
            {
                _rect = { (long)(player.GetPosX() - RAY * 2), (long)(player.GetPosY() - RAY * 2), (long)(player.GetPosX() + RAY * 2), (long)(player.GetPosY() + RAY + 1) };

                InvalidateRect(hWnd, &_rect, TRUE);
                isMovingLeft = true;
            }

            if (wParam == VK_UP)
            {
                if (isOnGravity)
                    break;
                _rect = { (long)(player.GetPosX() - RAY * 2), (long)(player.GetPosY() - RAY * 2), (long)(player.GetPosX() + RAY * 2), (long)(player.GetPosY() + RAY + 1) };

                InvalidateRect(hWnd, &_rect, TRUE);
                isJumping = true;
                jumpTick = 0;
            }
            break;

        case WM_TIMER:

            if (player.GetPosY() > YGROUND)
                isOnGravity = false;

            if (isOnGravity)
            {
                _rect = { (long)(player.GetPosX()), (long)(player.GetPosY()), (long)(player.GetPosX() + RAY + 1), (long)(player.GetPosY() + RAY + 6) };
                InvalidateRect(hWnd, &_rect, TRUE);
            }
            else if (isJumping)
            {
                _rect = { (long)(player.GetPosX()), (long)(player.GetPosY()), (long)(player.GetPosX() + RAY + 1), (long)(player.GetPosY() + RAY + 1) };
                InvalidateRect(hWnd, &_rect, TRUE);

                bool isCollidingWithBloc = false;
                int cpt01 = 0;
                int cpt02 = 0;

                while(!isCollidingWithBloc && cpt01 != cptDBloc)
                {
                    if (destructibleBlocs[cpt01].GetColliderZoneXMin() < player.GetPosX() && destructibleBlocs[cpt01].GetColliderZoneXMax() > player.GetPosX())
                    {
                        if (player.GetPosY() < destructibleBlocs[cpt01].GetPosY() + RAY * 10)
                        {
                            isCollidingWithBloc = true;
                        }
                    }
                    cpt01++;
                }

                while (!isCollidingWithBloc && cpt02 != cptMBloc)
                {
                    if (mysteryBlocs[cpt02].GetColliderZoneXMin() < player.GetPosX() && mysteryBlocs[cpt02].GetColliderZoneXMax() > player.GetPosX())
                    {
                        if (player.GetPosY() < mysteryBlocs[cpt02].GetPosY() + RAY * 10)
                        {
                            isCollidingWithBloc = true;

                            _rect = { (long)(mysteryBlocs[cpt02].GetPosX() - RAY + 1), (long)(mysteryBlocs[cpt02].GetPosY() + YMODIFIER - RAY + 1), (long)(mysteryBlocs[cpt02].GetPosX() + RAY), (long)(mysteryBlocs[cpt02].GetPosY() + RAY + YMODIFIER) };
                            InvalidateRect(hWnd, &_rect, TRUE);
                        }
                    }
                    cpt02++;
                }

                if (isCollidingWithBloc)
                {
                    isJumping = false;
                    isOnGravity = true;
                }
            }

            return 0;

        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
}