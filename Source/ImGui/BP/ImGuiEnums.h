// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ImGuiEnums.generated.h"

/* structs */

// same as "ImGuiWindowFlags_" from "imgui.h"
UENUM(BlueprintType, meta = (Bitflags))
enum class EImGuiWindowFlags : uint8
{
	// Disable title-bar
	NoTitleBar,					
	// Disable user resizing with the lower-right grip
	NoResize,					
	// Disable user moving the window
	NoMove,						
	// Disable scrollbars (window can still scroll with mouse or programmatically)
	NoScrollbar,				
	// Disable user vertically scrolling with mouse wheel. On child window, mouse wheel will be forwarded to the parent unless NoScrollbar is also set.
	NoScrollWithMouse,			
	// Disable user collapsing window by double-clicking on it. Also referred to as Window Menu Button (e.g. within a docking node).
	NoCollapse,					
	// Resize every window to its content every frame
	AlwaysAutoResize,			
	// Disable drawing background color (WindowBg, etc.) and outside border. Similar as using SetNextWindowBgAlpha(0.0f).
	NoBackground,				
	// Never load/save settings in .ini file
	NoSavedSettings,			
	// Disable catching mouse, hovering test with pass through.
	NoMouseInputs,				
	// Has a menu-bar
	MenuBar,					
	// Allow horizontal scrollbar to appear (off by default). You may use SetNextWindowContentSize(ImVec2(width,0.0f)); prior to calling Begin() to specify width. Read code in imgui_demo in the "Horizontal Scrolling" section.
	HorizontalScrollbar,		
	// Disable taking focus when transitioning from hidden to visible state
	NoFocusOnAppearing,			
	// Disable bringing window to front when taking focus (e.g. clicking on it or programmatically giving it focus)
	NoBringToFrontOnFocus,		
	// Always show vertical scrollbar (even if ContentSize.y < Size.y)
	AlwaysVerticalScrollbar,	
	// Always show horizontal scrollbar (even if ContentSize.x < Size.x)
	AlwaysHorizontalScrollbar,	
	// Ensure child windows without border uses style.WindowPadding (ignored by default for non-bordered child windows, because more convenient)
	AlwaysUseWindowPadding,		
	// No gamepad/keyboard navigation within the window
	NoNavInputs,				
	// No focusing toward this window with gamepad/keyboard navigation (e.g. skipped by CTRL+TAB)
	NoNavFocus,					
	// Display a dot next to the title. When used in a tab/docking context, tab is selected when clicking the X + closure is not assumed (will wait for user to stop submitting the tab). Otherwise closure is assumed when pressing the X, so if you keep submitting the tab may reappear at end of tab bar.
	UnsavedDocument,			                    
};


// same as "ImGuiCond_" from "imgui.h"
UENUM(BlueprintType)
enum EImGuiConditions
{
	// No condition (always set the variable), same as _Always
	NoneCondition UMETA(DisplayName = "None", Hidden),
	// No condition (always set the variable)
	Always = 1 << 0,
	// Set the variable once per runtime session (only the first call will succeed)
	Once = 1 << 1,
	// Set the variable if the object/window has no persistently saved data (no entry in .ini file)
	FirstUseEver = 1 << 2,
	// Set the variable if the object/window is appearing after being hidden/inactive (or the first time)
	Appearing = 1 << 3			
};


UENUM(BlueprintType) //do poprawy, to chyba by³o u¿ywane tylko w blueprintach
enum ImGui_DragType
{
	Drag_Float		UMETA(DisplayName = "Float"),
	Drag_Int		UMETA(DisplayName = "Int"),
	Drag_Vector2D	UMETA(DisplayName = "Vector 2D"),
	Drag_Vector		UMETA(DisplayName = "Vector"),
	Drag_Vector4	UMETA(DisplayName = "Vector 4"),
	Drag_Rotator	UMETA(DisplayName = "Rotator"),
	Drag_Transform	UMETA(DisplayName = "Transform"),
	Drag_Color		UMETA(DisplayName = "Color")
};


// same as "ImGuiInputTextFlags_" from "imgui.h"
UENUM(BlueprintType, meta = (Bitflags))
enum class EImGuiInputTextFlags : uint8
{
	// Allow 0123456789.+-*/
	CharsDecimal,
	// Allow 0123456789ABCDEFabcdef
	CharsHexadecimal,
	// Turn a..z into A..Z
	CharsUppercase,
	// Filter out spaces, tabs
	CharsNoBlank,
	// Select entire text when first taking mouse focus
	AutoSelectAll,
	// Return 'true' when Enter is pressed (as opposed to every time the value was modified). Consider looking at the IsItemDeactivatedAfterEdit() function.
	EnterReturnsTrue,
	// Callback on pressing TAB (for completion handling)
	CallbackCompletion,
	// Callback on pressing Up/Down arrows (for history handling)
	CallbackHistory,
	// Callback on each iteration. User code may query cursor position, modify text buffer.
	CallbackAlways,
	// Callback on character inputs to replace or discard them. Modify 'EventChar' to replace or discard, or return 1 in callback to discard.
	CallbackCharFilter,
	// Pressing TAB input a '\t' character into the text field
	AllowTabInput,
	// In multi-line mode, unfocus with Enter, add new line with Ctrl+Enter (default is opposite: unfocus with Ctrl+Enter, add line with Enter).
	CtrlEnterForNewLine,
	// Disable following the cursor horizontally
	NoHorizontalScroll,
	// Overwrite mode
	AlwaysOverwrite,
	// Read-only mode
	ReadOnly,
	// Password mode, display all characters as '*'
	Password,
	// Disable undo/redo. Note that input text owns the text data while active, if you want to provide your own undo/redo stack you need e.g. to call ClearActiveID().
	NoUndoRedo,
	// Allow 0123456789.+-*/eE (Scientific notation input)
	CharsScientific,
	// Callback on buffer capacity changes request (beyond 'buf_size' parameter value), allowing the string to grow. Notify when the string wants to be resized (for string types which hold a cache of their Size). You will be provided a new BufSize in the callback and NEED to honor it. (see misc/cpp/imgui_stdlib.h for an example of using this)
	CallbackResize,
	// Callback on any edit (note that InputText() already returns true on edit, the callback is useful mainly to manipulate the underlying buffer while focus is active)
	CallbackEdit,
	// [renamed in 1.82] name was not matching behavior
	AlwaysInsertMode UMETA(Hidden)	
};



// ! ALMOST the same as "ImGui_DirType" from "imgui.h"
// ImGui_DirType starts on -1, while EImGuiDirectionType on 0 
UENUM(BlueprintType)
enum EImGuiDirectionType 
{
	NoneDirection UMETA(DisplayName = "None"),
	Left,
	Right,
	Up,
	Down,
	COUNT UMETA(Hidden)
};


