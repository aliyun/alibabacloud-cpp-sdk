// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTJOBSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTJOBSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDIJobRequestJobSettingsColumnDataTypeSettings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestJobSettingsCycleScheduleSettings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestJobSettingsDdlHandlingSettings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestJobSettingsRuntimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequestJobSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestJobSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestJobSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
    };
    UpdateDIJobRequestJobSettings() = default ;
    UpdateDIJobRequestJobSettings(const UpdateDIJobRequestJobSettings &) = default ;
    UpdateDIJobRequestJobSettings(UpdateDIJobRequestJobSettings &&) = default ;
    UpdateDIJobRequestJobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestJobSettings() = default ;
    UpdateDIJobRequestJobSettings& operator=(const UpdateDIJobRequestJobSettings &) = default ;
    UpdateDIJobRequestJobSettings& operator=(UpdateDIJobRequestJobSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelSettings_ != nullptr
        && this->columnDataTypeSettings_ != nullptr && this->cycleScheduleSettings_ != nullptr && this->ddlHandlingSettings_ != nullptr && this->runtimeSettings_ != nullptr; };
    // channelSettings Field Functions 
    bool hasChannelSettings() const { return this->channelSettings_ != nullptr;};
    void deleteChannelSettings() { this->channelSettings_ = nullptr;};
    inline string channelSettings() const { DARABONBA_PTR_GET_DEFAULT(channelSettings_, "") };
    inline UpdateDIJobRequestJobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


    // columnDataTypeSettings Field Functions 
    bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
    void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
    inline const vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings> & columnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings>) };
    inline vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings> columnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings>) };
    inline UpdateDIJobRequestJobSettings& setColumnDataTypeSettings(const vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
    inline UpdateDIJobRequestJobSettings& setColumnDataTypeSettings(vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


    // cycleScheduleSettings Field Functions 
    bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
    void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
    inline const Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings & cycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings) };
    inline Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings cycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings) };
    inline UpdateDIJobRequestJobSettings& setCycleScheduleSettings(const Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
    inline UpdateDIJobRequestJobSettings& setCycleScheduleSettings(Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


    // ddlHandlingSettings Field Functions 
    bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
    void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
    inline const vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings> & ddlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings>) };
    inline vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings> ddlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings>) };
    inline UpdateDIJobRequestJobSettings& setDdlHandlingSettings(const vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
    inline UpdateDIJobRequestJobSettings& setDdlHandlingSettings(vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


    // runtimeSettings Field Functions 
    bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
    void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
    inline const vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings> & runtimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings>) };
    inline vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings> runtimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings>) };
    inline UpdateDIJobRequestJobSettings& setRuntimeSettings(const vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
    inline UpdateDIJobRequestJobSettings& setRuntimeSettings(vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


  protected:
    std::shared_ptr<string> channelSettings_ = nullptr;
    std::shared_ptr<vector<Models::UpdateDIJobRequestJobSettingsColumnDataTypeSettings>> columnDataTypeSettings_ = nullptr;
    std::shared_ptr<Models::UpdateDIJobRequestJobSettingsCycleScheduleSettings> cycleScheduleSettings_ = nullptr;
    std::shared_ptr<vector<Models::UpdateDIJobRequestJobSettingsDdlHandlingSettings>> ddlHandlingSettings_ = nullptr;
    std::shared_ptr<vector<Models::UpdateDIJobRequestJobSettingsRuntimeSettings>> runtimeSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
