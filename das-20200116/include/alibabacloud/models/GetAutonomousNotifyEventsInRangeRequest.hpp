// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutonomousNotifyEventsInRangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutonomousNotifyEventsInRangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventContext, eventContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MinLevel, minLevel_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageOffset, pageOffset_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(__context, context_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutonomousNotifyEventsInRangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventContext, eventContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MinLevel, minLevel_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageOffset, pageOffset_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(__context, context_);
    };
    GetAutonomousNotifyEventsInRangeRequest() = default ;
    GetAutonomousNotifyEventsInRangeRequest(const GetAutonomousNotifyEventsInRangeRequest &) = default ;
    GetAutonomousNotifyEventsInRangeRequest(GetAutonomousNotifyEventsInRangeRequest &&) = default ;
    GetAutonomousNotifyEventsInRangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutonomousNotifyEventsInRangeRequest() = default ;
    GetAutonomousNotifyEventsInRangeRequest& operator=(const GetAutonomousNotifyEventsInRangeRequest &) = default ;
    GetAutonomousNotifyEventsInRangeRequest& operator=(GetAutonomousNotifyEventsInRangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->eventContext_ != nullptr && this->instanceId_ != nullptr && this->level_ != nullptr && this->minLevel_ != nullptr && this->nodeId_ != nullptr
        && this->pageOffset_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->context_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventContext Field Functions 
    bool hasEventContext() const { return this->eventContext_ != nullptr;};
    void deleteEventContext() { this->eventContext_ = nullptr;};
    inline string eventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // minLevel Field Functions 
    bool hasMinLevel() const { return this->minLevel_ != nullptr;};
    void deleteMinLevel() { this->minLevel_ = nullptr;};
    inline string minLevel() const { DARABONBA_PTR_GET_DEFAULT(minLevel_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setMinLevel(string minLevel) { DARABONBA_PTR_SET_VALUE(minLevel_, minLevel) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageOffset Field Functions 
    bool hasPageOffset() const { return this->pageOffset_ != nullptr;};
    void deletePageOffset() { this->pageOffset_ = nullptr;};
    inline string pageOffset() const { DARABONBA_PTR_GET_DEFAULT(pageOffset_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setPageOffset(string pageOffset) { DARABONBA_PTR_SET_VALUE(pageOffset_, pageOffset) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline GetAutonomousNotifyEventsInRangeRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> eventContext_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The urgency level of the events. If you specify this parameter, the MinLevel parameter does not take effect. Valid values:
    // 
    // *   **Notice**: events for which the system sends notifications.
    // *   **Optimization**: events that need to be optimized.
    // *   **Warn**: events for which the system sends warnings.
    // *   **Critical**: critical events.
    std::shared_ptr<string> level_ = nullptr;
    // The minimum urgency level of the events. Valid values:
    // 
    // *   **Notice**: events for which the system sends notifications.
    // *   **Optimization**: events that need to be optimized.
    // *   **Warn**: events for which the system sends warnings.
    // *   **Critical**: critical events.
    std::shared_ptr<string> minLevel_ = nullptr;
    // The ID of the node in a PolarDB for MySQL cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the node ID returned by the DBNodeId response parameter.
    // 
    // >  You must specify the node ID if your database instance is a PolarDB for MySQL cluster.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The page number. The value must be a positive integer. Default value: 1.
    std::shared_ptr<string> pageOffset_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
