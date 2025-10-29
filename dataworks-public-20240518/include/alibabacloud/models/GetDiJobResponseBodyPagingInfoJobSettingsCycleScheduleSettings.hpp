// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_TO_JSON(CycleMigrationType, cycleMigrationType_);
      DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleMigrationType, cycleMigrationType_);
      DARABONBA_PTR_FROM_JSON(ScheduleParameters, scheduleParameters_);
    };
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings(const GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings(GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings &&) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings() = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& operator=(const GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings &) = default ;
    GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& operator=(GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleMigrationType_ == nullptr
        && return this->scheduleParameters_ == nullptr; };
    // cycleMigrationType Field Functions 
    bool hasCycleMigrationType() const { return this->cycleMigrationType_ != nullptr;};
    void deleteCycleMigrationType() { this->cycleMigrationType_ = nullptr;};
    inline string cycleMigrationType() const { DARABONBA_PTR_GET_DEFAULT(cycleMigrationType_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& setCycleMigrationType(string cycleMigrationType) { DARABONBA_PTR_SET_VALUE(cycleMigrationType_, cycleMigrationType) };


    // scheduleParameters Field Functions 
    bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
    void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
    inline string scheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
    inline GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


  protected:
    // The synchronization type that requires periodic scheduling. Valid values:
    // 
    // *   Full: full synchronization
    // *   OfflineIncremental: batch incremental synchronization
    std::shared_ptr<string> cycleMigrationType_ = nullptr;
    // The scheduling parameters.
    std::shared_ptr<string> scheduleParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
