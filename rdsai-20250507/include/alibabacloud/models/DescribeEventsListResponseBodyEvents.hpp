// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSLISTRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSLISTRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeEventsListResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsListResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventTimeList, eventTimeList_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsListResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventTimeList, eventTimeList_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
    };
    DescribeEventsListResponseBodyEvents() = default ;
    DescribeEventsListResponseBodyEvents(const DescribeEventsListResponseBodyEvents &) = default ;
    DescribeEventsListResponseBodyEvents(DescribeEventsListResponseBodyEvents &&) = default ;
    DescribeEventsListResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsListResponseBodyEvents() = default ;
    DescribeEventsListResponseBodyEvents& operator=(const DescribeEventsListResponseBodyEvents &) = default ;
    DescribeEventsListResponseBodyEvents& operator=(DescribeEventsListResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventStatus_ == nullptr && return this->eventTimeList_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->recoveryTime_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventsListResponseBodyEvents& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeEventsListResponseBodyEvents& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventTimeList Field Functions 
    bool hasEventTimeList() const { return this->eventTimeList_ != nullptr;};
    void deleteEventTimeList() { this->eventTimeList_ = nullptr;};
    inline const vector<string> & eventTimeList() const { DARABONBA_PTR_GET_CONST(eventTimeList_, vector<string>) };
    inline vector<string> eventTimeList() { DARABONBA_PTR_GET(eventTimeList_, vector<string>) };
    inline DescribeEventsListResponseBodyEvents& setEventTimeList(const vector<string> & eventTimeList) { DARABONBA_PTR_SET_VALUE(eventTimeList_, eventTimeList) };
    inline DescribeEventsListResponseBodyEvents& setEventTimeList(vector<string> && eventTimeList) { DARABONBA_PTR_SET_RVALUE(eventTimeList_, eventTimeList) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeEventsListResponseBodyEvents& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEventsListResponseBodyEvents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recoveryTime Field Functions 
    bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
    void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
    inline string recoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
    inline DescribeEventsListResponseBodyEvents& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


  protected:
    std::shared_ptr<string> eventCode_ = nullptr;
    std::shared_ptr<string> eventStatus_ = nullptr;
    std::shared_ptr<vector<string>> eventTimeList_ = nullptr;
    std::shared_ptr<string> instanceDescription_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> recoveryTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
