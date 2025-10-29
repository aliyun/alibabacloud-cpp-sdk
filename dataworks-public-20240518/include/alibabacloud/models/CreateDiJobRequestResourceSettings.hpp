// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTRESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettingsOfflineResourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettingsRealtimeResourceSettings.hpp>
#include <alibabacloud/models/CreateDIJobRequestResourceSettingsScheduleResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_TO_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
      DARABONBA_PTR_FROM_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
    };
    CreateDIJobRequestResourceSettings() = default ;
    CreateDIJobRequestResourceSettings(const CreateDIJobRequestResourceSettings &) = default ;
    CreateDIJobRequestResourceSettings(CreateDIJobRequestResourceSettings &&) = default ;
    CreateDIJobRequestResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestResourceSettings() = default ;
    CreateDIJobRequestResourceSettings& operator=(const CreateDIJobRequestResourceSettings &) = default ;
    CreateDIJobRequestResourceSettings& operator=(CreateDIJobRequestResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offlineResourceSettings_ == nullptr
        && return this->realtimeResourceSettings_ == nullptr && return this->scheduleResourceSettings_ == nullptr; };
    // offlineResourceSettings Field Functions 
    bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
    void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings offlineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setOfflineResourceSettings(const Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setOfflineResourceSettings(Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


    // realtimeResourceSettings Field Functions 
    bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
    void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings realtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setRealtimeResourceSettings(const Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setRealtimeResourceSettings(Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


    // scheduleResourceSettings Field Functions 
    bool hasScheduleResourceSettings() const { return this->scheduleResourceSettings_ != nullptr;};
    void deleteScheduleResourceSettings() { this->scheduleResourceSettings_ = nullptr;};
    inline const Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings & scheduleResourceSettings() const { DARABONBA_PTR_GET_CONST(scheduleResourceSettings_, Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings) };
    inline Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings scheduleResourceSettings() { DARABONBA_PTR_GET(scheduleResourceSettings_, Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setScheduleResourceSettings(const Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings & scheduleResourceSettings) { DARABONBA_PTR_SET_VALUE(scheduleResourceSettings_, scheduleResourceSettings) };
    inline CreateDIJobRequestResourceSettings& setScheduleResourceSettings(Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings && scheduleResourceSettings) { DARABONBA_PTR_SET_RVALUE(scheduleResourceSettings_, scheduleResourceSettings) };


  protected:
    std::shared_ptr<Models::CreateDIJobRequestResourceSettingsOfflineResourceSettings> offlineResourceSettings_ = nullptr;
    std::shared_ptr<Models::CreateDIJobRequestResourceSettingsRealtimeResourceSettings> realtimeResourceSettings_ = nullptr;
    std::shared_ptr<Models::CreateDIJobRequestResourceSettingsScheduleResourceSettings> scheduleResourceSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
