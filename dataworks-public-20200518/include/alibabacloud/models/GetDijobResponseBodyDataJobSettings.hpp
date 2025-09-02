// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyDataJobSettingsRuntimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobResponseBodyDataJobSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyDataJobSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyDataJobSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
    };
    GetDIJobResponseBodyDataJobSettings() = default ;
    GetDIJobResponseBodyDataJobSettings(const GetDIJobResponseBodyDataJobSettings &) = default ;
    GetDIJobResponseBodyDataJobSettings(GetDIJobResponseBodyDataJobSettings &&) = default ;
    GetDIJobResponseBodyDataJobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyDataJobSettings() = default ;
    GetDIJobResponseBodyDataJobSettings& operator=(const GetDIJobResponseBodyDataJobSettings &) = default ;
    GetDIJobResponseBodyDataJobSettings& operator=(GetDIJobResponseBodyDataJobSettings &&) = default ;
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
    inline GetDIJobResponseBodyDataJobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


    // columnDataTypeSettings Field Functions 
    bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
    void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings> & columnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings>) };
    inline vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings> columnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings>) };
    inline GetDIJobResponseBodyDataJobSettings& setColumnDataTypeSettings(const vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
    inline GetDIJobResponseBodyDataJobSettings& setColumnDataTypeSettings(vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


    // cycleScheduleSettings Field Functions 
    bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
    void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings & cycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings) };
    inline Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings cycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings) };
    inline GetDIJobResponseBodyDataJobSettings& setCycleScheduleSettings(const Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
    inline GetDIJobResponseBodyDataJobSettings& setCycleScheduleSettings(Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


    // ddlHandlingSettings Field Functions 
    bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
    void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings> & ddlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings>) };
    inline vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings> ddlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings>) };
    inline GetDIJobResponseBodyDataJobSettings& setDdlHandlingSettings(const vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
    inline GetDIJobResponseBodyDataJobSettings& setDdlHandlingSettings(vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


    // runtimeSettings Field Functions 
    bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
    void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings> & runtimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings>) };
    inline vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings> runtimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings>) };
    inline GetDIJobResponseBodyDataJobSettings& setRuntimeSettings(const vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
    inline GetDIJobResponseBodyDataJobSettings& setRuntimeSettings(vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


  protected:
    // The channel control settings for the synchronization task. The value of this parameter is a JSON string.
    std::shared_ptr<string> channelSettings_ = nullptr;
    // The settings for data type mappings between source fields and destination fields. The value of this parameter is an array.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataJobSettingsColumnDataTypeSettings>> columnDataTypeSettings_ = nullptr;
    // The settings for periodic scheduling.
    std::shared_ptr<Models::GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings> cycleScheduleSettings_ = nullptr;
    // The settings for processing DDL messages. The value of this parameter is an array.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataJobSettingsDdlHandlingSettings>> ddlHandlingSettings_ = nullptr;
    // The runtime settings. The value of this parameter is an array.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyDataJobSettingsRuntimeSettings>> runtimeSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
