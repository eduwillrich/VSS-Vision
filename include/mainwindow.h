/*
 * This file is part of the VSS-Vision project.
 *
 * This Source Code Form is subject to the terms of the GNU GENERAL PUBLIC LICENSE,
 * v. 3.0. If a copy of the GPL was not distributed with this
 * file, You can obtain one at http://www.gnu.org/licenses/gpl-3.0/.
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <gtkmm.h>
#include <iostream>
#include "ICameraReader.h"

using namespace std;

class MainWindow {

private:
	ICameraReader *cameraReader;	
// Window - save/load file 
	Gtk::Window* window_file = nullptr;

	// Button
	Gtk::Button* button_save = nullptr;
	Gtk::Button* button_load = nullptr;

	// File Chooser
	Gtk::FileChooserWidget* file_chooser = nullptr;


// Window - calibration
	Gtk::Window* window = nullptr;
	
	// Button
	Gtk::Button* button_window_file = nullptr;
	Gtk::RadioButton* radio_button_image = nullptr;
	Gtk::RadioButton* radio_button_video = nullptr;
	Gtk::RadioButton* radio_button_camera = nullptr;

	// Select text
	Gtk::ComboBoxText* input_path = nullptr;
	Gtk::ComboBoxText* color_team_1 = nullptr;
	Gtk::ComboBoxText* color_team_2 = nullptr;
	Gtk::ComboBoxText* color_robot_1 = nullptr;
	Gtk::ComboBoxText* color_robot_2 = nullptr;
	Gtk::ComboBoxText* color_robot_3 = nullptr;
	Gtk::ComboBoxText* color_selected = nullptr;

	// Slider
	Gtk::Scale* scale_h_max = nullptr;
	Gtk::Scale* scale_h_min = nullptr;
	Gtk::Scale* scale_s_max = nullptr;
	Gtk::Scale* scale_s_min = nullptr;
	Gtk::Scale* scale_v_max = nullptr;
	Gtk::Scale* scale_v_min = nullptr;
	Gtk::Scale* scale_gain  = nullptr;
	Gtk::Scale* scale_rotation = nullptr;
	Gtk::Scale* scale_contrast = nullptr;
	Gtk::Scale* scale_exposure = nullptr;
	Gtk::Scale* scale_brightness = nullptr;
	Gtk::Scale* scale_saturation = nullptr;

// Control method
	void initialize_widget();
	void set_widget_signal();
	void load_widget_from_file();

public:
	MainWindow();
	virtual ~MainWindow();
	void run();
};

#endif
