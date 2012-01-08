//Specification file for TASEDITOR_CONFIG class
#define GREENZONE_CAPACITY_MIN 1
#define GREENZONE_CAPACITY_MAX 50000
#define GREENZONE_CAPACITY_DEFAULT 10000

#define UNDO_LEVELS_MIN 1
#define UNDO_LEVELS_MAX 999
#define UNDO_LEVELS_DEFAULT 99

#define AUTOSAVE_PERIOD_MIN 0			// 0 = no autosave
#define AUTOSAVE_PERIOD_MAX 1440		// 24 hours
#define AUTOSAVE_PERIOD_DEFAULT 15		// in minutes

#define EXPORT_TYPE_1P 0
#define EXPORT_TYPE_2P 1
#define EXPORT_TYPE_FOURSCORE 2

class TASEDITOR_CONFIG
{
public:
	TASEDITOR_CONFIG();

	// vars saved in cfg file
	int wndx;
	int wndy;
	int findnote_wndx;
	int findnote_wndy;
	bool follow_playback;
	bool turbo_seek;
	bool show_lag_frames;
	bool show_markers;
	bool show_branch_screenshots;
	bool show_branch_tooltips;
	bool enable_hot_changes;
	bool jump_to_undo;
	bool follow_note_context;
	bool bind_markers;
	bool empty_marker_notes;
	bool combine_consecutive_rec;
	bool use_1p_rec;
	bool columnset_by_keys;
	bool keyboard_for_listview;
	int superimpose;
	bool superimpose_affects_paste;
	bool branch_full_movie;
	bool branch_only_when_rec;
	bool view_branches_tree;
	bool branch_scr_hud;
	bool restore_position;
	int greenzone_capacity;
	int undo_levels;
	int autosave_period;
	int last_export_type;
	bool last_export_subtitles;
	bool savecompact_binary;
	bool savecompact_markers;
	bool savecompact_bookmarks;
	bool savecompact_greenzone;
	bool savecompact_history;
	bool savecompact_list;
	bool savecompact_selection;
	bool findnote_matchcase;
	bool findnote_search_up;
	bool enable_auto_function;
	bool silent_autosave;

private:

};
