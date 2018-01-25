/*
 * This file is part of the VSS-Vision project.
 *
 * This Source Code Form is subject to the terms of the GNU GENERAL PUBLIC LICENSE,
 * v. 3.0. If a copy of the GPL was not distributed with this
 * file, You can obtain one at http://www.gnu.org/licenses/gpl-3.0/.
 */

#ifndef IWINDOW_CONTROL_H
#define IWINDOW_CONTROL_H

#include "gtkmm.h"

// Vai servir para buscar os dados do opencv
// Vai ser utilizado tanto na calibragem quanto na fase de execução
// Calibragem e execucao vai implementar essa interface
// Não poderá ser utilizado a calibragem e a execução ao mesmo tempo
// Quando for trocar entre um e outro, utilizar dynamic_cast
class IWindowControl{
public:

    virtual bool on_keyboard(GdkEventKey* event, Gtk::Window*) = 0;
    virtual void on_button_load(Gtk::FileChooserWidget*) = 0;
	virtual void on_button_save(Gtk::FileChooserWidget*) = 0;
	virtual void on_button_window_file(Gtk::Window*) = 0;
	virtual void on_combo_box_color_select(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_color_team1(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_color_team2(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_color_robot1(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_color_robot2(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_color_robot3(Gtk::ComboBox*) = 0;
	virtual void on_combo_box_input_path(Gtk::ComboBox*) = 0;
	virtual void on_scale_h_max(Gtk::Scale*) = 0;
	virtual void on_scale_h_min(Gtk::Scale*) = 0;
	virtual void on_scale_s_max(Gtk::Scale*) = 0;
	virtual void on_scale_s_min(Gtk::Scale*) = 0;
	virtual void on_scale_v_max(Gtk::Scale*) = 0;
	virtual void on_scale_v_min(Gtk::Scale*) = 0;
	virtual void on_scale_rotation(Gtk::Scale*) = 0;
	virtual void on_scale_brightness(Gtk::Scale*) = 0;
	virtual void on_scale_contrast(Gtk::Scale*) = 0;
	virtual void on_scale_saturation(Gtk::Scale*) = 0;
	virtual void on_scale_exposure(Gtk::Scale*) = 0;
	virtual void on_scale_gain(Gtk::Scale*) = 0;
	virtual void on_radio_button_image(Gtk::RadioButton*) = 0;
	virtual void on_radio_button_video(Gtk::RadioButton*) = 0;
	virtual void on_radio_button_camera(Gtk::RadioButton*) = 0; 
};

#endif // ICAMERA_READER_H