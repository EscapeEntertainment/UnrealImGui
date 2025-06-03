// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/Optional.h"
#include "ImGuiEnums.h"
#include "ImGuiBPFL.generated.h"

struct ImVec2;

UCLASS()
class IMGUI_API UImGuiBPFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

// Context creation and access

/* Main	*/

// Demo, Debug, Information		
// Styles

/* Windows */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", meta = (AutoCreateRefTerm = "bOpen"), BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginMainWindow(FString Name, UPARAM(meta = (Bitmask, BitmaskEnum = "EImGuiWindowFlags")) int WindowFlagsBitmask, bool bClosable, UPARAM(ref) bool& bOpen);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndMainWindow();

/* Child Windows */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bVisible") bool BeginChild(FString HashName, FVector2D Size, bool bBorder, UPARAM(meta = (Bitmask, BitmaskEnum = "EImGuiWindowFlags")) int WindowFlagsBitmask);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndChild();

/* Windows Utilities */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bCollapsed") bool IsWindowCollapsed();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bFocused") bool IsWindowFocused();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bHovered") bool IsWindowHovered();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "Position") FVector2D GetWindowPosition(bool bRelative = false);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "Size") FVector2D GetWindowSize(bool bRelative = false);

/* Window manipulation */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowScreenPosition(FVector2D ScreenPosition, EImGuiConditions Condition = EImGuiConditions::Always);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowSize(FVector2D Size, EImGuiConditions Condition = EImGuiConditions::Always);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowSizeConstraints(FVector2D SizeMin, FVector2D SizeMax);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowContentSize(FVector2D Size);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowCollapsed(bool bCollapsed, EImGuiConditions Condition = EImGuiConditions::Always);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowFocused();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextWindowBackgroundAlpha(float BackgroundAlpha);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetWindowFontScale(float Scale = 1);

// Content region
// Windows Scrolling
// Parameters stacks (shared)
// Parameters stacks (current window)
// Style read access

/* Cursor / Layout */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddSeparator();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void StayInSameLine();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddSpacing();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddDummy(FVector2D Size);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void Indent(float ToRight = 0);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void BeginGroup();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndGroup();

// ID stack/scopes

/* Widgets / Text */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddText(FString Text);

/* Widgets / Main */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool Button(FString Label, FVector2D Size);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool SmallButton(FString Label);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool InvisibleButton(FString HashName, FVector2D Size);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool ArrowButton(FString HashName, EImGuiDirectionType Direction);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bChanged") bool Checkbox(FString Label, UPARAM(ref) bool& CheckedBool);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool RadioButton(FString Label, bool bActive);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool RadioButtonList(TSet<FString> Labels, UPARAM(ref) int& RadioedIntiger);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddProgressBar(float Fraction, FVector2D Size, FString Overlay);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void AddBullet();

/* Widgets / Combo Box */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginCombo(FString Label, FString Preview);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndCombo();

/* Widgets / Drag Sliders */  

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bChanged") bool AddDragFloatArray(FString Label, UPARAM(ref) TArray<float>& DraggedArrayReference, float DragSpeed = 1.0f, float MinValue = 0.0f, float MaxValue = 0.0f);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bChanged") bool AddDragIntArray(FString Label, UPARAM(ref) TArray<int>& DraggedArrayReference, float DragSpeed = 1.0f, int MinValue = 0, int MaxValue = 0);

/* Widgets / Regular Sliders */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bChanged") bool AddSliderFloatArray(FString Label, UPARAM(ref) TArray<float>& SlidedArrayReference, float MinValue = 0.0f, float MaxValue = 100.0f);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bChanged") bool AddSliderIntArray(FString Label, UPARAM(ref) TArray<int>& SlidedArrayReference, int MinValue = 0, int MaxValue = 100);


/* Widgets / Input with Keyboard */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bCallback") bool AddInputTextBox(FString Label, FString Hint, UPARAM(ref) FString& InputedString, int MaxCharactersCount, FVector2D BoxSize, UPARAM(meta = (Bitmask, BitmaskEnum = "EImGuiInputTextFlags")) int InputTextFlagsBitmask);

// Widgets: Color Editor/Picker (tip: the ColorEdit* functions have a little color square that can be left-clicked to open a picker, and right-clicked to open an option menu.)
/* Widgets / Trees */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool TreeNode(FString Label);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndTree();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool CollapsingHeader(FString Label);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextItemOpen(bool bOpen = true, EImGuiConditions Condition = EImGuiConditions::Always);

/* Widgets / Selectables */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", meta = (AutoCreateRefTerm = "bSelected"), BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool Selectable(FString Label, UPARAM(ref) bool& bSelected, FVector2D Size);

/* Widgets / List Boxes	*/

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginListBox(FString Label, FVector2D Size);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndListBox();

// Widgets: Data Plotting
// Widgets: Value() Helpers.

/* Widgets / Menus */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginMenuBar();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndMenuBar();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginMainMenuBar();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndMainMenuBar();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginMenu(FString Label, bool bEnabled);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndMenu();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bActivated") bool MenuItem(FString Label, FString Shortcut, UPARAM(ref) bool& bSelected, bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "DearImGui|! Raw C++ Functions" /*, BlueprintInternalUseOnly)*/)
	static UPARAM(DisplayName = "bActivated") bool MenuItemSelectOnly(FString Label, FString Shortcut, bool bEnabled);

/* Tooltips	*/

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void BeginTooltip();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndTooltip();

/* Popups / begin/end functions */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginPopup(FString HashName, UPARAM(meta = (Bitmask, BitmaskEnum = "EImGuiWindowFlags")) int WindowFlagsBitmask);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", meta = (AutoCreateRefTerm = "bOpenModal"), BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginPopupModal(FString Name, bool bClosable, UPARAM(ref) bool& bOpenModal, UPARAM(meta = (Bitmask, BitmaskEnum = "EImGuiWindowFlags")) int WindowFlagsBitmask);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndPopup();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void OpenPopup(FString HashName);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void CloseCurrentPopup();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintPure, BlueprintInternalUseOnly)//)
	static bool IsPopupOpen(FString HashName);

// Popups: open/close functions
// Popups: open+begin combined functions helpers
// Popups: query functions

/* Tables */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bOpen") bool BeginTable(FString HashName, int Column, FVector2D OuterSize, float InnerWidth);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndTable();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void TableNextRow(float MinRowHeight);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bVisible") bool TableNextColumn();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bVisible") bool TableSetColumnIndex(int Column);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void TableHeader(FString Label);

// Tables: Headers & Columns declaration
// Tables: Sorting
// Tables: Miscellaneous functions
// Legacy Columns API (prefer using Tables!)
/* Tab Bars, Tabs */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bVisible") bool BeginTabBar(FString HashName);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndTabBar();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", meta = (AutoCreateRefTerm = "bOpen"), BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bSelected") bool BeginTabItem(FString Label, bool bClosable, UPARAM(ref) bool& bOpen);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndTabItem();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static UPARAM(DisplayName = "bClicked") bool TabItemButton(FString Label);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void SetNextTabItemClosed(FString Label);


// Logging/Capture

/* Drag and Drop */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static bool BeginDragDropSource();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static bool SetDragDropPayload(FString HashName);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndDragDropSource();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static bool BeginDragDropTarget();

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static bool AcceptDragDropPayload(FString HashName);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndDragDropTarget();

/* Disabling [BETA API] */

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void BeginDisabled(bool bDisabled = true);

	UFUNCTION(BlueprintCallable, Category="DearImGui|! Raw C++ Functions", BlueprintInternalUseOnly)//)
	static void EndDisabled();

// Clipping
// Focus, Activation
// Item/Widgets Utilities and Query Functions
// Viewports
// Miscellaneous Utilities
// Text Utilities
// Color Utilities
// Inputs Utilities: Keyboard
// Inputs Utilities: Mouse
// Clipboard Utilities
// Settings/.Ini Utilities
// Debug Utilities
// Memory Allocators

private:

    static ImVec2 GetScreenSizeInPixels(FVector2D ScreenSize = FVector2D(0, 0));

	static ImVec2 GetRelativeScreenPosition(FVector2D ScreenSize = FVector2D(0, 0));
};







