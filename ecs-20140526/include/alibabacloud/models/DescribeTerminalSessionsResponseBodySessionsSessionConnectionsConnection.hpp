// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSIONCONNECTIONSCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSIONCONNECTIONSCONNECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& obj) { 
      DARABONBA_PTR_TO_JSON(ClosedReason, closedReason_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FailedDetail, failedDetail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(ClosedReason, closedReason_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FailedDetail, failedDetail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection() = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection(const DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection(DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection &&) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection() = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& operator=(const DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& operator=(DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->closedReason_ != nullptr
        && this->endTime_ != nullptr && this->failedDetail_ != nullptr && this->instanceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // closedReason Field Functions 
    bool hasClosedReason() const { return this->closedReason_ != nullptr;};
    void deleteClosedReason() { this->closedReason_ = nullptr;};
    inline string closedReason() const { DARABONBA_PTR_GET_DEFAULT(closedReason_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setClosedReason(string closedReason) { DARABONBA_PTR_SET_VALUE(closedReason_, closedReason) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failedDetail Field Functions 
    bool hasFailedDetail() const { return this->failedDetail_ != nullptr;};
    void deleteFailedDetail() { this->failedDetail_ = nullptr;};
    inline string failedDetail() const { DARABONBA_PTR_GET_DEFAULT(failedDetail_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setFailedDetail(string failedDetail) { DARABONBA_PTR_SET_VALUE(failedDetail_, failedDetail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the connection was closed. This parameter is returned only when the `Status` value is `Disconnected`, `Terminated`, or `Failed`. Valid values:
    // 
    // *   InstanceNotExists: The specified instance did not exist or was released.
    // *   InstanceNotRunning: The specified instance was not running.
    // *   DeliveryTimeout: The connection timed out.
    // *   AgentNeedUpgrade: Cloud Assistant Agent required an upgrade.
    // *   AgentNotOnline: Cloud Assistant Agent was not connected to the Cloud Assistant server.
    // *   MessageFormatInvalid: The message format was invalid.
    // *   AgentSocketClosed: The connection was closed as expected.
    // *   ClientClosed: Session Manager Client closed the connection.
    std::shared_ptr<string> closedReason_ = nullptr;
    // The time when the connection was closed.
    std::shared_ptr<string> endTime_ = nullptr;
    // Cause of the connection failure. This parameter is returned only when the Status parameter is Failed.
    std::shared_ptr<string> failedDetail_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the connection started to be established.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the session. Valid values:
    // 
    // *   Connecting: The connection is being established.
    // *   Connected: The connection is established.
    // *   Terminated: The session is terminated.
    // *   Failed: The connection failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
