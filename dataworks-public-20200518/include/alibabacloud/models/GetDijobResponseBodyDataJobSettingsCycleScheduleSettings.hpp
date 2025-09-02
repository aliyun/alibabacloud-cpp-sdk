// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYDATAJOBSETTINGSCYCLESCHEDULESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_TO_JSON(CycleMigrationType, cycleMigrationType_);
      DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleMigrationType, cycleMigrationType_);
      DARABONBA_PTR_FROM_JSON(ScheduleParameters, scheduleParameters_);
    };
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings() = default ;
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings(const GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings &) = default ;
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings(GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings &&) = default ;
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings() = default ;
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& operator=(const GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings &) = default ;
    GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& operator=(GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleMigrationType_ != nullptr
        && this->scheduleParameters_ != nullptr; };
    // cycleMigrationType Field Functions 
    bool hasCycleMigrationType() const { return this->cycleMigrationType_ != nullptr;};
    void deleteCycleMigrationType() { this->cycleMigrationType_ = nullptr;};
    inline string cycleMigrationType() const { DARABONBA_PTR_GET_DEFAULT(cycleMigrationType_, "") };
    inline GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& setCycleMigrationType(string cycleMigrationType) { DARABONBA_PTR_SET_VALUE(cycleMigrationType_, cycleMigrationType) };


    // scheduleParameters Field Functions 
    bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
    void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
    inline string scheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
    inline GetDIJobResponseBodyDataJobSettingsCycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


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
} // namespace DataworksPublic20200518
#endif
