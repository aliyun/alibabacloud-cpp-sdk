// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCESCHEDULEDEVENTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCESCHEDULEDEVENTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceRequestSourceScheduledEventParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceRequestSourceScheduledEventParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceRequestSourceScheduledEventParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UpdateEventSourceRequestSourceScheduledEventParameters() = default ;
    UpdateEventSourceRequestSourceScheduledEventParameters(const UpdateEventSourceRequestSourceScheduledEventParameters &) = default ;
    UpdateEventSourceRequestSourceScheduledEventParameters(UpdateEventSourceRequestSourceScheduledEventParameters &&) = default ;
    UpdateEventSourceRequestSourceScheduledEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceRequestSourceScheduledEventParameters() = default ;
    UpdateEventSourceRequestSourceScheduledEventParameters& operator=(const UpdateEventSourceRequestSourceScheduledEventParameters &) = default ;
    UpdateEventSourceRequestSourceScheduledEventParameters& operator=(UpdateEventSourceRequestSourceScheduledEventParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schedule_ != nullptr
        && this->timeZone_ != nullptr && this->userData_ != nullptr; };
    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateEventSourceRequestSourceScheduledEventParameters& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline UpdateEventSourceRequestSourceScheduledEventParameters& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateEventSourceRequestSourceScheduledEventParameters& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The cron expression.
    std::shared_ptr<string> schedule_ = nullptr;
    // The time zone in which the cron expression is executed.
    std::shared_ptr<string> timeZone_ = nullptr;
    // The user data that is displayed in a JSON string.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
