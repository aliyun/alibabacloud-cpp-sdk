// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduleResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeScheduleResponseBody& obj) { 
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
    DescribeScheduleResponseBody() = default ;
    DescribeScheduleResponseBody(const DescribeScheduleResponseBody &) = default ;
    DescribeScheduleResponseBody(DescribeScheduleResponseBody &&) = default ;
    DescribeScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduleResponseBody() = default ;
    DescribeScheduleResponseBody& operator=(const DescribeScheduleResponseBody &) = default ;
    DescribeScheduleResponseBody& operator=(DescribeScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->cronExpression_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->lastModifiedTime_ == nullptr && this->payload_ == nullptr
        && this->requestId_ == nullptr && this->scheduleId_ == nullptr && this->scheduleName_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeScheduleResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeScheduleResponseBody& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeScheduleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeScheduleResponseBody& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline DescribeScheduleResponseBody& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeScheduleResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleId Field Functions 
    bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
    void deleteScheduleId() { this->scheduleId_ = nullptr;};
    inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
    inline DescribeScheduleResponseBody& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


    // scheduleName Field Functions 
    bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
    void deleteScheduleName() { this->scheduleName_ = nullptr;};
    inline string getScheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
    inline DescribeScheduleResponseBody& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


  protected:
    // The time when the time-based schedule was created.
    shared_ptr<string> createdTime_ {};
    // The CRON expression.
    shared_ptr<string> cronExpression_ {};
    // The description of the time-based schedule.
    shared_ptr<string> description_ {};
    // Indicates whether the time-based schedule is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enable_ {};
    // The time when the time-based schedule was last modified.
    shared_ptr<string> lastModifiedTime_ {};
    // The trigger message of the time-based schedule.
    shared_ptr<string> payload_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the time-based schedule.
    shared_ptr<string> scheduleId_ {};
    // The name of the time-based schedule.
    shared_ptr<string> scheduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
