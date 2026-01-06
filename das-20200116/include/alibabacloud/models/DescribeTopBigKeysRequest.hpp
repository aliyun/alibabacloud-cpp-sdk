// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeTopBigKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopBigKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopBigKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeTopBigKeysRequest() = default ;
    DescribeTopBigKeysRequest(const DescribeTopBigKeysRequest &) = default ;
    DescribeTopBigKeysRequest(DescribeTopBigKeysRequest &&) = default ;
    DescribeTopBigKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopBigKeysRequest() = default ;
    DescribeTopBigKeysRequest& operator=(const DescribeTopBigKeysRequest &) = default ;
    DescribeTopBigKeysRequest& operator=(DescribeTopBigKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->startTime_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline DescribeTopBigKeysRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTopBigKeysRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTopBigKeysRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeTopBigKeysRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTopBigKeysRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > 
    // 
    // *   The end time must be later than the start time.
    // 
    // *   Only data within the last four days can be queried.
    // 
    // *   The maximum interval between the **start time** and the** end time** is 3 hours.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The ID of the ApsaraDB for Redis instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the data shard on the ApsaraDB for Redis instance.
    shared_ptr<string> nodeId_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
