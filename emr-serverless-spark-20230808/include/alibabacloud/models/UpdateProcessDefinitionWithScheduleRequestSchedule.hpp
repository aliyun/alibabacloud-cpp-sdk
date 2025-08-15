// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULEREQUESTSCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleRequestSchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleRequestSchedule& obj) { 
      DARABONBA_PTR_TO_JSON(crontab, crontab_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timezoneId, timezoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleRequestSchedule& obj) { 
      DARABONBA_PTR_FROM_JSON(crontab, crontab_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timezoneId, timezoneId_);
    };
    UpdateProcessDefinitionWithScheduleRequestSchedule() = default ;
    UpdateProcessDefinitionWithScheduleRequestSchedule(const UpdateProcessDefinitionWithScheduleRequestSchedule &) = default ;
    UpdateProcessDefinitionWithScheduleRequestSchedule(UpdateProcessDefinitionWithScheduleRequestSchedule &&) = default ;
    UpdateProcessDefinitionWithScheduleRequestSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleRequestSchedule() = default ;
    UpdateProcessDefinitionWithScheduleRequestSchedule& operator=(const UpdateProcessDefinitionWithScheduleRequestSchedule &) = default ;
    UpdateProcessDefinitionWithScheduleRequestSchedule& operator=(UpdateProcessDefinitionWithScheduleRequestSchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crontab_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr && this->timezoneId_ != nullptr; };
    // crontab Field Functions 
    bool hasCrontab() const { return this->crontab_ != nullptr;};
    void deleteCrontab() { this->crontab_ = nullptr;};
    inline string crontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestSchedule& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestSchedule& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestSchedule& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timezoneId Field Functions 
    bool hasTimezoneId() const { return this->timezoneId_ != nullptr;};
    void deleteTimezoneId() { this->timezoneId_ = nullptr;};
    inline string timezoneId() const { DARABONBA_PTR_GET_DEFAULT(timezoneId_, "") };
    inline UpdateProcessDefinitionWithScheduleRequestSchedule& setTimezoneId(string timezoneId) { DARABONBA_PTR_SET_VALUE(timezoneId_, timezoneId) };


  protected:
    // The CRON expression that is used for scheduling.
    std::shared_ptr<string> crontab_ = nullptr;
    // The end time of the scheduling.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the scheduling.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the time zone.
    std::shared_ptr<string> timezoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
