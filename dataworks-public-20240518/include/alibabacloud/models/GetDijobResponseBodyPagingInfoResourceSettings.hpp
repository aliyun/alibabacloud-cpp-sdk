// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFORESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFORESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings.hpp>
#include <alibabacloud/models/GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_TO_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_FROM_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
    };
    GetDIJobResponseBodyPagingInfoResourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoResourceSettings(const GetDIJobResponseBodyPagingInfoResourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettings(GetDIJobResponseBodyPagingInfoResourceSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoResourceSettings() = default ;
    GetDIJobResponseBodyPagingInfoResourceSettings& operator=(const GetDIJobResponseBodyPagingInfoResourceSettings &) = default ;
    GetDIJobResponseBodyPagingInfoResourceSettings& operator=(GetDIJobResponseBodyPagingInfoResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offlineResourceSettings_ != nullptr
        && this->realtimeResourceSettings_ != nullptr && this->scheduleResourceSettings_ != nullptr; };
    // offlineResourceSettings Field Functions 
    bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
    void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings & offlineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings offlineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setOfflineResourceSettings(const Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setOfflineResourceSettings(Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


    // realtimeResourceSettings Field Functions 
    bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
    void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings & realtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings realtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setRealtimeResourceSettings(const Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setRealtimeResourceSettings(Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


    // scheduleResourceSettings Field Functions 
    bool hasScheduleResourceSettings() const { return this->scheduleResourceSettings_ != nullptr;};
    void deleteScheduleResourceSettings() { this->scheduleResourceSettings_ = nullptr;};
    inline const Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings & scheduleResourceSettings() const { DARABONBA_PTR_GET_CONST(scheduleResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings) };
    inline Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings scheduleResourceSettings() { DARABONBA_PTR_GET(scheduleResourceSettings_, Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setScheduleResourceSettings(const Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings & scheduleResourceSettings) { DARABONBA_PTR_SET_VALUE(scheduleResourceSettings_, scheduleResourceSettings) };
    inline GetDIJobResponseBodyPagingInfoResourceSettings& setScheduleResourceSettings(Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings && scheduleResourceSettings) { DARABONBA_PTR_SET_RVALUE(scheduleResourceSettings_, scheduleResourceSettings) };


  protected:
    // The resource used for batch synchronization.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings> offlineResourceSettings_ = nullptr;
    // The resource used for real-time synchronization.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings> realtimeResourceSettings_ = nullptr;
    // The resource used for scheduling.
    std::shared_ptr<Models::GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings> scheduleResourceSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
