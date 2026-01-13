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
      DARABONBA_PTR_TO_JSON(GtidExecuted, gtidExecuted_);
      DARABONBA_PTR_TO_JSON(ImportStatus, importStatus_);
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
      DARABONBA_PTR_FROM_JSON(GtidExecuted, gtidExecuted_);
      DARABONBA_PTR_FROM_JSON(ImportStatus, importStatus_);
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
        && this->gtidExecuted_ == nullptr && this->importStatus_ == nullptr && this->replicationDelay_ == nullptr && this->replicationErrorMessage_ == nullptr && this->replicationIp_ == nullptr
        && this->replicationPort_ == nullptr && this->replicationSource_ == nullptr && this->replicationState_ == nullptr && this->requestId_ == nullptr; };
    // externalReplication Field Functions 
    bool hasExternalReplication() const { return this->externalReplication_ != nullptr;};
    void deleteExternalReplication() { this->externalReplication_ = nullptr;};
    inline string getExternalReplication() const { DARABONBA_PTR_GET_DEFAULT(externalReplication_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setExternalReplication(string externalReplication) { DARABONBA_PTR_SET_VALUE(externalReplication_, externalReplication) };


    // gtidExecuted Field Functions 
    bool hasGtidExecuted() const { return this->gtidExecuted_ != nullptr;};
    void deleteGtidExecuted() { this->gtidExecuted_ = nullptr;};
    inline string getGtidExecuted() const { DARABONBA_PTR_GET_DEFAULT(gtidExecuted_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setGtidExecuted(string gtidExecuted) { DARABONBA_PTR_SET_VALUE(gtidExecuted_, gtidExecuted) };


    // importStatus Field Functions 
    bool hasImportStatus() const { return this->importStatus_ != nullptr;};
    void deleteImportStatus() { this->importStatus_ = nullptr;};
    inline string getImportStatus() const { DARABONBA_PTR_GET_DEFAULT(importStatus_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setImportStatus(string importStatus) { DARABONBA_PTR_SET_VALUE(importStatus_, importStatus) };


    // replicationDelay Field Functions 
    bool hasReplicationDelay() const { return this->replicationDelay_ != nullptr;};
    void deleteReplicationDelay() { this->replicationDelay_ = nullptr;};
    inline string getReplicationDelay() const { DARABONBA_PTR_GET_DEFAULT(replicationDelay_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationDelay(string replicationDelay) { DARABONBA_PTR_SET_VALUE(replicationDelay_, replicationDelay) };


    // replicationErrorMessage Field Functions 
    bool hasReplicationErrorMessage() const { return this->replicationErrorMessage_ != nullptr;};
    void deleteReplicationErrorMessage() { this->replicationErrorMessage_ = nullptr;};
    inline string getReplicationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(replicationErrorMessage_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationErrorMessage(string replicationErrorMessage) { DARABONBA_PTR_SET_VALUE(replicationErrorMessage_, replicationErrorMessage) };


    // replicationIp Field Functions 
    bool hasReplicationIp() const { return this->replicationIp_ != nullptr;};
    void deleteReplicationIp() { this->replicationIp_ = nullptr;};
    inline string getReplicationIp() const { DARABONBA_PTR_GET_DEFAULT(replicationIp_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationIp(string replicationIp) { DARABONBA_PTR_SET_VALUE(replicationIp_, replicationIp) };


    // replicationPort Field Functions 
    bool hasReplicationPort() const { return this->replicationPort_ != nullptr;};
    void deleteReplicationPort() { this->replicationPort_ = nullptr;};
    inline string getReplicationPort() const { DARABONBA_PTR_GET_DEFAULT(replicationPort_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationPort(string replicationPort) { DARABONBA_PTR_SET_VALUE(replicationPort_, replicationPort) };


    // replicationSource Field Functions 
    bool hasReplicationSource() const { return this->replicationSource_ != nullptr;};
    void deleteReplicationSource() { this->replicationSource_ = nullptr;};
    inline string getReplicationSource() const { DARABONBA_PTR_GET_DEFAULT(replicationSource_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationSource(string replicationSource) { DARABONBA_PTR_SET_VALUE(replicationSource_, replicationSource) };


    // replicationState Field Functions 
    bool hasReplicationState() const { return this->replicationState_ != nullptr;};
    void deleteReplicationState() { this->replicationState_ = nullptr;};
    inline string getReplicationState() const { DARABONBA_PTR_GET_DEFAULT(replicationState_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setReplicationState(string replicationState) { DARABONBA_PTR_SET_VALUE(replicationState_, replicationState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceReplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the native replication mods is enabled. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    shared_ptr<string> externalReplication_ {};
    shared_ptr<string> gtidExecuted_ {};
    shared_ptr<string> importStatus_ {};
    // The replication latency. Unit: seconds.
    shared_ptr<string> replicationDelay_ {};
    // The replication error message.
    shared_ptr<string> replicationErrorMessage_ {};
    shared_ptr<string> replicationIp_ {};
    shared_ptr<string> replicationPort_ {};
    // The source of the native replication.
    shared_ptr<string> replicationSource_ {};
    // The current replication status. Valid values:
    // 
    // *   **Running**
    // *   **Connecting**
    // *   **Stopped**
    // *   **Error**
    shared_ptr<string> replicationState_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
