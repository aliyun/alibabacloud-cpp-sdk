// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
      DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
    };
    CreateScheduleResponseBody() = default ;
    CreateScheduleResponseBody(const CreateScheduleResponseBody &) = default ;
    CreateScheduleResponseBody(CreateScheduleResponseBody &&) = default ;
    CreateScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleResponseBody() = default ;
    CreateScheduleResponseBody& operator=(const CreateScheduleResponseBody &) = default ;
    CreateScheduleResponseBody& operator=(CreateScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->cronExpression_ == nullptr && return this->description_ == nullptr && return this->enable_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->payload_ == nullptr
        && return this->requestId_ == nullptr && return this->scheduleId_ == nullptr && return this->scheduleName_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline CreateScheduleResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateScheduleResponseBody& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScheduleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateScheduleResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline CreateScheduleResponseBody& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline CreateScheduleResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline string scheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
    inline CreateScheduleResponseBody& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // scheduleName Field Functions 
    bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
    void deleteScheduleName() { this->scheduleName_ = nullptr;};
    inline string scheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
    inline CreateScheduleResponseBody& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


  protected:
    // The time when the time-based schedule was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The CRON expression.
    std::shared_ptr<string> cronExpression_ = nullptr;
    // The description of the time-based schedule.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the time-based schedule is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The time when the time-based schedule was last modified.
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    // The trigger message of the time-based schedule.
    std::shared_ptr<string> payload_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the time-based schedule.
    std::shared_ptr<string> scheduleId_ = nullptr;
    // The name of the time-based schedule.
    std::shared_ptr<string> scheduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
