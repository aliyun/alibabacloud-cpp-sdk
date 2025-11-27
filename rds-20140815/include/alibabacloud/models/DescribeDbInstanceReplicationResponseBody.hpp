// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEREPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEREPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceReplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceReplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalReplication, externalReplication_);
      DARABONBA_PTR_TO_JSON(ReplicationDelay, replicationDelay_);
      DARABONBA_PTR_TO_JSON(ReplicationErrorMessage, replicationErrorMessage_);
      DARABONBA_PTR_TO_JSON(ReplicationIp, replicationIp_);
      DARABONBA_PTR_TO_JSON(ReplicationPort, replicationPort_);
      DARABONBA_PTR_TO_JSON(ReplicationSource, replicationSource_);
      DARABONBA_PTR_TO_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceReplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalReplication, externalReplication_);
      DARABONBA_PTR_FROM_JSON(ReplicationDelay, replicationDelay_);
      DARABONBA_PTR_FROM_JSON(ReplicationErrorMessage, replicationErrorMessage_);
      DARABONBA_PTR_FROM_JSON(ReplicationIp, replicationIp_);
      DARABONBA_PTR_FROM_JSON(ReplicationPort, replicationPort_);
      DARABONBA_PTR_FROM_JSON(ReplicationSource, replicationSource_);
      DARABONBA_PTR_FROM_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceReplicationResponseBody() = default ;
    DescribeDBInstanceReplicationResponseBody(const DescribeDBInstanceReplicationResponseBody &) = default ;
    DescribeDBInstanceReplicationResponseBody(DescribeDBInstanceReplicationResponseBody &&) = default ;
    DescribeDBInstanceReplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceReplicationResponseBody() = default ;
    DescribeDBInstanceReplicationResponseBody& operator=(const DescribeDBInstanceReplicationResponseBody &) = default ;
    DescribeDBInstanceReplicationResponseBody& operator=(DescribeDBInstanceReplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalReplication_ == nullptr
        && return this->replicationDelay_ == nullptr && return this->replicationErrorMessage_ == nullptr && return this->replicationIp_ == nullptr && return this->replicationPort_ == nullptr && return this->replicationSource_ == nullptr
        && return this->replicationState_ == nullptr && return this->requestId_ == nullptr; };
    // externalReplication Field Functions 
    bool hasExternalReplication() const { return this->externalReplication_ != nullptr;};
    void deleteExternalReplication() { this->externalReplication_ = nullptr;};
    inline string externalReplication() const { DARABONBA_PTR_GET_DEFAULT(externalReplication_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setExternalReplication(string externalReplication) { DARABONBA_PTR_SET_VALUE(externalReplication_, externalReplication) };


    // replicationDelay Field Functions 
    bool hasReplicationDelay() const { return this->replicationDelay_ != nullptr;};
    void deleteReplicationDelay() { this->replicationDelay_ = nullptr;};
    inline string replicationDelay() const { DARABONBA_PTR_GET_DEFAULT(replicationDelay_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationDelay(string replicationDelay) { DARABONBA_PTR_SET_VALUE(replicationDelay_, replicationDelay) };


    // replicationErrorMessage Field Functions 
    bool hasReplicationErrorMessage() const { return this->replicationErrorMessage_ != nullptr;};
    void deleteReplicationErrorMessage() { this->replicationErrorMessage_ = nullptr;};
    inline string replicationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(replicationErrorMessage_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationErrorMessage(string replicationErrorMessage) { DARABONBA_PTR_SET_VALUE(replicationErrorMessage_, replicationErrorMessage) };


    // replicationIp Field Functions 
    bool hasReplicationIp() const { return this->replicationIp_ != nullptr;};
    void deleteReplicationIp() { this->replicationIp_ = nullptr;};
    inline string replicationIp() const { DARABONBA_PTR_GET_DEFAULT(replicationIp_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationIp(string replicationIp) { DARABONBA_PTR_SET_VALUE(replicationIp_, replicationIp) };


    // replicationPort Field Functions 
    bool hasReplicationPort() const { return this->replicationPort_ != nullptr;};
    void deleteReplicationPort() { this->replicationPort_ = nullptr;};
    inline string replicationPort() const { DARABONBA_PTR_GET_DEFAULT(replicationPort_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationPort(string replicationPort) { DARABONBA_PTR_SET_VALUE(replicationPort_, replicationPort) };


    // replicationSource Field Functions 
    bool hasReplicationSource() const { return this->replicationSource_ != nullptr;};
    void deleteReplicationSource() { this->replicationSource_ = nullptr;};
    inline string replicationSource() const { DARABONBA_PTR_GET_DEFAULT(replicationSource_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationSource(string replicationSource) { DARABONBA_PTR_SET_VALUE(replicationSource_, replicationSource) };


    // replicationState Field Functions 
    bool hasReplicationState() const { return this->replicationState_ != nullptr;};
    void deleteReplicationState() { this->replicationState_ = nullptr;};
    inline string replicationState() const { DARABONBA_PTR_GET_DEFAULT(replicationState_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationState(string replicationState) { DARABONBA_PTR_SET_VALUE(replicationState_, replicationState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the native replication mods is enabled. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    std::shared_ptr<string> externalReplication_ = nullptr;
    // The replication latency. Unit: seconds.
    std::shared_ptr<string> replicationDelay_ = nullptr;
    // The replication error message.
    std::shared_ptr<string> replicationErrorMessage_ = nullptr;
    std::shared_ptr<string> replicationIp_ = nullptr;
    std::shared_ptr<string> replicationPort_ = nullptr;
    // The source of the native replication.
    std::shared_ptr<string> replicationSource_ = nullptr;
    // The current replication status. Valid values:
    // 
    // *   **Running**
    // *   **Connecting**
    // *   **Stopped**
    // *   **Error**
    std::shared_ptr<string> replicationState_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
