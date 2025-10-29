// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoJobSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoJobSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoJobSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
      DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
      DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
      DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
      DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
    };
    GetDIJobResponseBodyPagingInfoJobSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettings(const GetDIJobResponseBodyPagingInfoJobSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettings(GetDIJobResponseBodyPagingInfoJobSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoJobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoJobSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettings& operator=(const GetDIJobResponseBodyPagingInfoJobSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettings& operator=(GetDIJobResponseBodyPagingInfoJobSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelSettings_ == nullptr
        && return this->columnDataTypeSettings_ == nullptr && return this->cycleScheduleSettings_ == nullptr && return this->ddlHandlingSettings_ == nullptr && return this->runtimeSettings_ == nullptr; };
    // channelSettings Field Functions 
    bool hasChannelSettings() const { return this->channelSettings_ != nullptr;};
    void deleteChannelSettings() { this->channelSettings_ = nullptr;};
    inline string channelSettings() const { DARABONBA_PTR_GET_DEFAULT(channelSettings_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


    // columnDataTypeSettings Field Functions 
    bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
    void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings> & columnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings> columnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings>) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setColumnDataTypeSettings(const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setColumnDataTypeSettings(vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


    // cycleScheduleSettings Field Functions 
    bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
    void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings & cycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings cycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setCycleScheduleSettings(const Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setCycleScheduleSettings(Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


    // ddlHandlingSettings Field Functions 
    bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
    void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings> & ddlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings> ddlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings>) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setDdlHandlingSettings(const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setDdlHandlingSettings(vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


    // runtimeSettings Field Functions 
    bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
    void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
    inline const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings> & runtimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings>) };
    inline vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings> runtimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings>) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setRuntimeSettings(const vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
    inline GetDIJobResponseBodyPagingInfoJobSettings& setRuntimeSettings(vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


  protected:
    // The channel control settings for the synchronization task. You can configure special channel control settings for the following synchronization links: data synchronization between Hologres data sources and data synchronization from Hologres to Kafka.
    // 
    // 1.  Holo2Kafka
    // 
    // *   Example: {"destinationChannelSettings":{"kafkaClientProperties":[{"key":"linger.ms","value":"100"}],"keyColumns":["col3"],"writeMode":"canal"}}
    // *   kafkaClientProperties: the parameters related to a Kafka producer, which are used when you write data to a Kafka data source.
    // *   keyColumns: the names of Kafka columns to which data is written.
    // *   writeMode: the writing format. Valid values: json and canal.
    // 
    // 2.  Holo2Holo
    // 
    // *   Example: {"destinationChannelSettings":{"conflictMode":"replace","dynamicColumnAction":"replay","writeMode":"replay"}}
    // *   conflictMode: the policy used to handle a conflict that occurs during data writing to Hologres. Valid values: replace and ignore.
    // *   writeMode: the mode in which data is written to Hologres. Valid values: replay and insert.
    // *   dynamicColumnAction: the mode in which data is written to dynamic columns in a Hologres table. Valid values: replay, insert, and ignore.
    std::shared_ptr<string> channelSettings_ = nullptr;
    // The data type mappings between source fields and destination fields.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings>> columnDataTypeSettings_ = nullptr;
    // The settings for periodic scheduling.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings> cycleScheduleSettings_ = nullptr;
    // The DDL operation types. Valid values:
    // 
    // *   RenameColumn
    // *   ModifyColumn
    // *   CreateTable
    // *   TruncateTable
    // *   DropTable
    // *   DropColumn
    // *   AddColumn
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings>> ddlHandlingSettings_ = nullptr;
    // The runtime settings.
    std::shared_ptr<vector<Models::GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings>> runtimeSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
