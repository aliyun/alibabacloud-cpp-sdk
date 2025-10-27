// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODYHONEYPOTALARMEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODYHONEYPOTALARMEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(MergeFieldList, mergeFieldList_);
      DARABONBA_PTR_TO_JSON(OperateStatus, operateStatus_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(MergeFieldList, mergeFieldList_);
      DARABONBA_PTR_FROM_JSON(OperateStatus, operateStatus_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents() = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents(const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents &) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents(ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents &&) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents() = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& operator=(const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents &) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& operator=(ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEventId_ == nullptr
        && return this->alarmEventName_ == nullptr && return this->alarmEventType_ == nullptr && return this->alarmUniqueInfo_ == nullptr && return this->eventCount_ == nullptr && return this->firstTime_ == nullptr
        && return this->lastTime_ == nullptr && return this->mergeFieldList_ == nullptr && return this->operateStatus_ == nullptr && return this->riskLevel_ == nullptr; };
    // alarmEventId Field Functions 
    bool hasAlarmEventId() const { return this->alarmEventId_ != nullptr;};
    void deleteAlarmEventId() { this->alarmEventId_ = nullptr;};
    inline int64_t alarmEventId() const { DARABONBA_PTR_GET_DEFAULT(alarmEventId_, 0L) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setAlarmEventId(int64_t alarmEventId) { DARABONBA_PTR_SET_VALUE(alarmEventId_, alarmEventId) };


    // alarmEventName Field Functions 
    bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
    void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
    inline string alarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


    // alarmEventType Field Functions 
    bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
    void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
    inline string alarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string alarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int32_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // mergeFieldList Field Functions 
    bool hasMergeFieldList() const { return this->mergeFieldList_ != nullptr;};
    void deleteMergeFieldList() { this->mergeFieldList_ = nullptr;};
    inline const vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList> & mergeFieldList() const { DARABONBA_PTR_GET_CONST(mergeFieldList_, vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList>) };
    inline vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList> mergeFieldList() { DARABONBA_PTR_GET(mergeFieldList_, vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList>) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setMergeFieldList(const vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList> & mergeFieldList) { DARABONBA_PTR_SET_VALUE(mergeFieldList_, mergeFieldList) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setMergeFieldList(vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList> && mergeFieldList) { DARABONBA_PTR_SET_RVALUE(mergeFieldList_, mergeFieldList) };


    // operateStatus Field Functions 
    bool hasOperateStatus() const { return this->operateStatus_ != nullptr;};
    void deleteOperateStatus() { this->operateStatus_ = nullptr;};
    inline int32_t operateStatus() const { DARABONBA_PTR_GET_DEFAULT(operateStatus_, 0) };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setOperateStatus(int32_t operateStatus) { DARABONBA_PTR_SET_VALUE(operateStatus_, operateStatus) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEvents& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The event ID.
    std::shared_ptr<int64_t> alarmEventId_ = nullptr;
    // The name of the alert event.
    std::shared_ptr<string> alarmEventName_ = nullptr;
    // The type of the alert event.
    std::shared_ptr<string> alarmEventType_ = nullptr;
    // The unique identifier of the alert event.
    std::shared_ptr<string> alarmUniqueInfo_ = nullptr;
    // The total number of times that the alert event was generated.
    std::shared_ptr<int32_t> eventCount_ = nullptr;
    // The timestamp that indicates the time when the alert event was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // The timestamp that indicates the time when the alert event was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The risk information.
    std::shared_ptr<vector<Models::ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList>> mergeFieldList_ = nullptr;
    // The handling status of the alert event. Valid values:
    // 
    // *   **1**: pending
    // *   **2**: ignored
    // *   **4**: confirmed
    std::shared_ptr<int32_t> operateStatus_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **2**: low
    // *   **3**: medium
    // *   **4**: high
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
