// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEEXECUTETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEEXECUTETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ModifyScheduleExecuteTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduleExecuteTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(scheduleExecuteTime, scheduleExecuteTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduleExecuteTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(scheduleExecuteTime, scheduleExecuteTime_);
    };
    ModifyScheduleExecuteTimeRequest() = default ;
    ModifyScheduleExecuteTimeRequest(const ModifyScheduleExecuteTimeRequest &) = default ;
    ModifyScheduleExecuteTimeRequest(ModifyScheduleExecuteTimeRequest &&) = default ;
    ModifyScheduleExecuteTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduleExecuteTimeRequest() = default ;
    ModifyScheduleExecuteTimeRequest& operator=(const ModifyScheduleExecuteTimeRequest &) = default ;
    ModifyScheduleExecuteTimeRequest& operator=(ModifyScheduleExecuteTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->scheduleExecuteTime_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline ModifyScheduleExecuteTimeRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // scheduleExecuteTime Field Functions 
    bool hasScheduleExecuteTime() const { return this->scheduleExecuteTime_ != nullptr;};
    void deleteScheduleExecuteTime() { this->scheduleExecuteTime_ = nullptr;};
    inline string getScheduleExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleExecuteTime_, "") };
    inline ModifyScheduleExecuteTimeRequest& setScheduleExecuteTime(string scheduleExecuteTime) { DARABONBA_PTR_SET_VALUE(scheduleExecuteTime_, scheduleExecuteTime) };


  protected:
    shared_ptr<string> eventId_ {};
    shared_ptr<string> scheduleExecuteTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
