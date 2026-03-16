// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
    };
    ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody(ListSchedulesResponseBody &&) = default ;
    ListSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody& operator=(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody& operator=(ListSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schedules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schedules& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(Payload, payload_);
        DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
      };
      friend void from_json(const Darabonba::Json& j, Schedules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Payload, payload_);
        DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
      };
      Schedules() = default ;
      Schedules(const Schedules &) = default ;
      Schedules(Schedules &&) = default ;
      Schedules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schedules() = default ;
      Schedules& operator=(const Schedules &) = default ;
      Schedules& operator=(Schedules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->cronExpression_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->lastModifiedTime_ == nullptr && this->payload_ == nullptr
        && this->scheduleId_ == nullptr && this->scheduleName_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Schedules& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Schedules& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Schedules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Schedules& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
      inline Schedules& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
      inline Schedules& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


      // scheduleId Field Functions 
      bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
      void deleteScheduleId() { this->scheduleId_ = nullptr;};
      inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
      inline Schedules& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


      // scheduleName Field Functions 
      bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
      void deleteScheduleName() { this->scheduleName_ = nullptr;};
      inline string getScheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
      inline Schedules& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


    protected:
      // The time when the time-based schedule was created.
      shared_ptr<string> createdTime_ {};
      // The cron expression of the scheduled task.
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
      // The ID of the time-based schedule.
      shared_ptr<string> scheduleId_ {};
      // The name of the time-based schedule.
      shared_ptr<string> scheduleName_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->schedules_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSchedulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<ListSchedulesResponseBody::Schedules> & getSchedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<ListSchedulesResponseBody::Schedules>) };
    inline vector<ListSchedulesResponseBody::Schedules> getSchedules() { DARABONBA_PTR_GET(schedules_, vector<ListSchedulesResponseBody::Schedules>) };
    inline ListSchedulesResponseBody& setSchedules(const vector<ListSchedulesResponseBody::Schedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline ListSchedulesResponseBody& setSchedules(vector<ListSchedulesResponseBody::Schedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


  protected:
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time-based schedules that are queried.
    shared_ptr<vector<ListSchedulesResponseBody::Schedules>> schedules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
