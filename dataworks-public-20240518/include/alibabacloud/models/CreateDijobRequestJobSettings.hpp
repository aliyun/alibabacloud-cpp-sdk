// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTJOBSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDIJobRequestJobSettingsColumnDataTypeSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestJobSettingsCycleScheduleSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestJobSettingsDdlHandlingSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestJobSettingsRuntimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestJobSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestJobSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestJobSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
    };
    CreateDIJobRequestJobSettings() = default ;
    CreateDIJobRequestJobSettings(const CreateDIJobRequestJobSettings &) = default ;
    CreateDIJobRequestJobSettings(CreateDIJobRequestJobSettings &&) = default ;
    CreateDIJobRequestJobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestJobSettings() = default ;
    CreateDIJobRequestJobSettings& operator=(const CreateDIJobRequestJobSettings &) = default ;
    CreateDIJobRequestJobSettings& operator=(CreateDIJobRequestJobSettings &&) = default ;
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
    inline CreateDIJobRequestJobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


    // columnDataTypeSettings Field Functions 
    bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
    void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
    inline const vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings> & columnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings>) };
    inline vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings> columnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings>) };
    inline CreateDIJobRequestJobSettings& setColumnDataTypeSettings(const vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
    inline CreateDIJobRequestJobSettings& setColumnDataTypeSettings(vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


    // cycleScheduleSettings Field Functions 
    bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
    void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestJobSettingsCycleScheduleSettings & cycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, Models::CreateDIJobRequestJobSettingsCycleScheduleSettings) };
    inline Models::CreateDIJobRequestJobSettingsCycleScheduleSettings cycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, Models::CreateDIJobRequestJobSettingsCycleScheduleSettings) };
    inline CreateDIJobRequestJobSettings& setCycleScheduleSettings(const Models::CreateDIJobRequestJobSettingsCycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
    inline CreateDIJobRequestJobSettings& setCycleScheduleSettings(Models::CreateDIJobRequestJobSettingsCycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


    // ddlHandlingSettings Field Functions 
    bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
    void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
    inline const vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings> & ddlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings>) };
    inline vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings> ddlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings>) };
    inline CreateDIJobRequestJobSettings& setDdlHandlingSettings(const vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
    inline CreateDIJobRequestJobSettings& setDdlHandlingSettings(vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


    // runtimeSettings Field Functions 
    bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
    void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
    inline const vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings> & runtimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings>) };
    inline vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings> runtimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings>) };
    inline CreateDIJobRequestJobSettings& setRuntimeSettings(const vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
    inline CreateDIJobRequestJobSettings& setRuntimeSettings(vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


  protected:
    std::shared_ptr<string> channelSettings_ = nullptr;
    std::shared_ptr<vector<Models::CreateDIJobRequestJobSettingsColumnDataTypeSettings>> columnDataTypeSettings_ = nullptr;
    std::shared_ptr<Models::CreateDIJobRequestJobSettingsCycleScheduleSettings> cycleScheduleSettings_ = nullptr;
    std::shared_ptr<vector<Models::CreateDIJobRequestJobSettingsDdlHandlingSettings>> ddlHandlingSettings_ = nullptr;
    std::shared_ptr<vector<Models::CreateDIJobRequestJobSettingsRuntimeSettings>> runtimeSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
