// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequestJobSettingsCycleScheduleSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduleParameters, scheduleParameters_);
    };
    UpdateDIJobRequestJobSettingsCycleScheduleSettings() = default ;
    UpdateDIJobRequestJobSettingsCycleScheduleSettings(const UpdateDIJobRequestJobSettingsCycleScheduleSettings &) = default ;
    UpdateDIJobRequestJobSettingsCycleScheduleSettings(UpdateDIJobRequestJobSettingsCycleScheduleSettings &&) = default ;
    UpdateDIJobRequestJobSettingsCycleScheduleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestJobSettingsCycleScheduleSettings() = default ;
    UpdateDIJobRequestJobSettingsCycleScheduleSettings& operator=(const UpdateDIJobRequestJobSettingsCycleScheduleSettings &) = default ;
    UpdateDIJobRequestJobSettingsCycleScheduleSettings& operator=(UpdateDIJobRequestJobSettingsCycleScheduleSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scheduleParameters_ != nullptr; };
    // scheduleParameters Field Functions 
    bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
    void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
    inline string scheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
    inline UpdateDIJobRequestJobSettingsCycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


  protected:
    std::shared_ptr<string> scheduleParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
