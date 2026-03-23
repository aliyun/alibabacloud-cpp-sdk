// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEREPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEREPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(SlaveStatusList, slaveStatusList_);
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
      DARABONBA_PTR_FROM_JSON(SlaveStatusList, slaveStatusList_);
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
    class SlaveStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlaveStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_PTR_TO_JSON(ExecutedGtidSet, executedGtidSet_);
        DARABONBA_PTR_TO_JSON(LastErrno, lastErrno_);
        DARABONBA_PTR_TO_JSON(LastIoErrno, lastIoErrno_);
        DARABONBA_PTR_TO_JSON(LastIoError, lastIoError_);
        DARABONBA_PTR_TO_JSON(LastSqlErrno, lastSqlErrno_);
        DARABONBA_PTR_TO_JSON(LastSqlError, lastSqlError_);
        DARABONBA_PTR_TO_JSON(MasterHost, masterHost_);
        DARABONBA_PTR_TO_JSON(MasterUser, masterUser_);
        DARABONBA_PTR_TO_JSON(MasterUuid, masterUuid_);
        DARABONBA_PTR_TO_JSON(ReplicateDoDb, replicateDoDb_);
        DARABONBA_PTR_TO_JSON(ReplicateDoTable, replicateDoTable_);
        DARABONBA_PTR_TO_JSON(ReplicateIgnoreDb, replicateIgnoreDb_);
        DARABONBA_PTR_TO_JSON(ReplicateIgnoreTable, replicateIgnoreTable_);
        DARABONBA_PTR_TO_JSON(ReplicateWildDoTable, replicateWildDoTable_);
        DARABONBA_PTR_TO_JSON(ReplicateWildIgnoreTable, replicateWildIgnoreTable_);
        DARABONBA_PTR_TO_JSON(SecondsBehindMaster, secondsBehindMaster_);
        DARABONBA_PTR_TO_JSON(SlaveIoRunning, slaveIoRunning_);
        DARABONBA_PTR_TO_JSON(SlaveIoState, slaveIoState_);
        DARABONBA_PTR_TO_JSON(SlaveSqlRunning, slaveSqlRunning_);
        DARABONBA_PTR_TO_JSON(SlaveSqlRunningState, slaveSqlRunningState_);
      };
      friend void from_json(const Darabonba::Json& j, SlaveStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_PTR_FROM_JSON(ExecutedGtidSet, executedGtidSet_);
        DARABONBA_PTR_FROM_JSON(LastErrno, lastErrno_);
        DARABONBA_PTR_FROM_JSON(LastIoErrno, lastIoErrno_);
        DARABONBA_PTR_FROM_JSON(LastIoError, lastIoError_);
        DARABONBA_PTR_FROM_JSON(LastSqlErrno, lastSqlErrno_);
        DARABONBA_PTR_FROM_JSON(LastSqlError, lastSqlError_);
        DARABONBA_PTR_FROM_JSON(MasterHost, masterHost_);
        DARABONBA_PTR_FROM_JSON(MasterUser, masterUser_);
        DARABONBA_PTR_FROM_JSON(MasterUuid, masterUuid_);
        DARABONBA_PTR_FROM_JSON(ReplicateDoDb, replicateDoDb_);
        DARABONBA_PTR_FROM_JSON(ReplicateDoTable, replicateDoTable_);
        DARABONBA_PTR_FROM_JSON(ReplicateIgnoreDb, replicateIgnoreDb_);
        DARABONBA_PTR_FROM_JSON(ReplicateIgnoreTable, replicateIgnoreTable_);
        DARABONBA_PTR_FROM_JSON(ReplicateWildDoTable, replicateWildDoTable_);
        DARABONBA_PTR_FROM_JSON(ReplicateWildIgnoreTable, replicateWildIgnoreTable_);
        DARABONBA_PTR_FROM_JSON(SecondsBehindMaster, secondsBehindMaster_);
        DARABONBA_PTR_FROM_JSON(SlaveIoRunning, slaveIoRunning_);
        DARABONBA_PTR_FROM_JSON(SlaveIoState, slaveIoState_);
        DARABONBA_PTR_FROM_JSON(SlaveSqlRunning, slaveSqlRunning_);
        DARABONBA_PTR_FROM_JSON(SlaveSqlRunningState, slaveSqlRunningState_);
      };
      SlaveStatusList() = default ;
      SlaveStatusList(const SlaveStatusList &) = default ;
      SlaveStatusList(SlaveStatusList &&) = default ;
      SlaveStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlaveStatusList() = default ;
      SlaveStatusList& operator=(const SlaveStatusList &) = default ;
      SlaveStatusList& operator=(SlaveStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->executedGtidSet_ == nullptr && this->lastErrno_ == nullptr && this->lastIoErrno_ == nullptr && this->lastIoError_ == nullptr && this->lastSqlErrno_ == nullptr
        && this->lastSqlError_ == nullptr && this->masterHost_ == nullptr && this->masterUser_ == nullptr && this->masterUuid_ == nullptr && this->replicateDoDb_ == nullptr
        && this->replicateDoTable_ == nullptr && this->replicateIgnoreDb_ == nullptr && this->replicateIgnoreTable_ == nullptr && this->replicateWildDoTable_ == nullptr && this->replicateWildIgnoreTable_ == nullptr
        && this->secondsBehindMaster_ == nullptr && this->slaveIoRunning_ == nullptr && this->slaveIoState_ == nullptr && this->slaveSqlRunning_ == nullptr && this->slaveSqlRunningState_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline SlaveStatusList& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // executedGtidSet Field Functions 
      bool hasExecutedGtidSet() const { return this->executedGtidSet_ != nullptr;};
      void deleteExecutedGtidSet() { this->executedGtidSet_ = nullptr;};
      inline string getExecutedGtidSet() const { DARABONBA_PTR_GET_DEFAULT(executedGtidSet_, "") };
      inline SlaveStatusList& setExecutedGtidSet(string executedGtidSet) { DARABONBA_PTR_SET_VALUE(executedGtidSet_, executedGtidSet) };


      // lastErrno Field Functions 
      bool hasLastErrno() const { return this->lastErrno_ != nullptr;};
      void deleteLastErrno() { this->lastErrno_ = nullptr;};
      inline int32_t getLastErrno() const { DARABONBA_PTR_GET_DEFAULT(lastErrno_, 0) };
      inline SlaveStatusList& setLastErrno(int32_t lastErrno) { DARABONBA_PTR_SET_VALUE(lastErrno_, lastErrno) };


      // lastIoErrno Field Functions 
      bool hasLastIoErrno() const { return this->lastIoErrno_ != nullptr;};
      void deleteLastIoErrno() { this->lastIoErrno_ = nullptr;};
      inline int32_t getLastIoErrno() const { DARABONBA_PTR_GET_DEFAULT(lastIoErrno_, 0) };
      inline SlaveStatusList& setLastIoErrno(int32_t lastIoErrno) { DARABONBA_PTR_SET_VALUE(lastIoErrno_, lastIoErrno) };


      // lastIoError Field Functions 
      bool hasLastIoError() const { return this->lastIoError_ != nullptr;};
      void deleteLastIoError() { this->lastIoError_ = nullptr;};
      inline string getLastIoError() const { DARABONBA_PTR_GET_DEFAULT(lastIoError_, "") };
      inline SlaveStatusList& setLastIoError(string lastIoError) { DARABONBA_PTR_SET_VALUE(lastIoError_, lastIoError) };


      // lastSqlErrno Field Functions 
      bool hasLastSqlErrno() const { return this->lastSqlErrno_ != nullptr;};
      void deleteLastSqlErrno() { this->lastSqlErrno_ = nullptr;};
      inline int32_t getLastSqlErrno() const { DARABONBA_PTR_GET_DEFAULT(lastSqlErrno_, 0) };
      inline SlaveStatusList& setLastSqlErrno(int32_t lastSqlErrno) { DARABONBA_PTR_SET_VALUE(lastSqlErrno_, lastSqlErrno) };


      // lastSqlError Field Functions 
      bool hasLastSqlError() const { return this->lastSqlError_ != nullptr;};
      void deleteLastSqlError() { this->lastSqlError_ = nullptr;};
      inline string getLastSqlError() const { DARABONBA_PTR_GET_DEFAULT(lastSqlError_, "") };
      inline SlaveStatusList& setLastSqlError(string lastSqlError) { DARABONBA_PTR_SET_VALUE(lastSqlError_, lastSqlError) };


      // masterHost Field Functions 
      bool hasMasterHost() const { return this->masterHost_ != nullptr;};
      void deleteMasterHost() { this->masterHost_ = nullptr;};
      inline string getMasterHost() const { DARABONBA_PTR_GET_DEFAULT(masterHost_, "") };
      inline SlaveStatusList& setMasterHost(string masterHost) { DARABONBA_PTR_SET_VALUE(masterHost_, masterHost) };


      // masterUser Field Functions 
      bool hasMasterUser() const { return this->masterUser_ != nullptr;};
      void deleteMasterUser() { this->masterUser_ = nullptr;};
      inline string getMasterUser() const { DARABONBA_PTR_GET_DEFAULT(masterUser_, "") };
      inline SlaveStatusList& setMasterUser(string masterUser) { DARABONBA_PTR_SET_VALUE(masterUser_, masterUser) };


      // masterUuid Field Functions 
      bool hasMasterUuid() const { return this->masterUuid_ != nullptr;};
      void deleteMasterUuid() { this->masterUuid_ = nullptr;};
      inline string getMasterUuid() const { DARABONBA_PTR_GET_DEFAULT(masterUuid_, "") };
      inline SlaveStatusList& setMasterUuid(string masterUuid) { DARABONBA_PTR_SET_VALUE(masterUuid_, masterUuid) };


      // replicateDoDb Field Functions 
      bool hasReplicateDoDb() const { return this->replicateDoDb_ != nullptr;};
      void deleteReplicateDoDb() { this->replicateDoDb_ = nullptr;};
      inline string getReplicateDoDb() const { DARABONBA_PTR_GET_DEFAULT(replicateDoDb_, "") };
      inline SlaveStatusList& setReplicateDoDb(string replicateDoDb) { DARABONBA_PTR_SET_VALUE(replicateDoDb_, replicateDoDb) };


      // replicateDoTable Field Functions 
      bool hasReplicateDoTable() const { return this->replicateDoTable_ != nullptr;};
      void deleteReplicateDoTable() { this->replicateDoTable_ = nullptr;};
      inline string getReplicateDoTable() const { DARABONBA_PTR_GET_DEFAULT(replicateDoTable_, "") };
      inline SlaveStatusList& setReplicateDoTable(string replicateDoTable) { DARABONBA_PTR_SET_VALUE(replicateDoTable_, replicateDoTable) };


      // replicateIgnoreDb Field Functions 
      bool hasReplicateIgnoreDb() const { return this->replicateIgnoreDb_ != nullptr;};
      void deleteReplicateIgnoreDb() { this->replicateIgnoreDb_ = nullptr;};
      inline string getReplicateIgnoreDb() const { DARABONBA_PTR_GET_DEFAULT(replicateIgnoreDb_, "") };
      inline SlaveStatusList& setReplicateIgnoreDb(string replicateIgnoreDb) { DARABONBA_PTR_SET_VALUE(replicateIgnoreDb_, replicateIgnoreDb) };


      // replicateIgnoreTable Field Functions 
      bool hasReplicateIgnoreTable() const { return this->replicateIgnoreTable_ != nullptr;};
      void deleteReplicateIgnoreTable() { this->replicateIgnoreTable_ = nullptr;};
      inline string getReplicateIgnoreTable() const { DARABONBA_PTR_GET_DEFAULT(replicateIgnoreTable_, "") };
      inline SlaveStatusList& setReplicateIgnoreTable(string replicateIgnoreTable) { DARABONBA_PTR_SET_VALUE(replicateIgnoreTable_, replicateIgnoreTable) };


      // replicateWildDoTable Field Functions 
      bool hasReplicateWildDoTable() const { return this->replicateWildDoTable_ != nullptr;};
      void deleteReplicateWildDoTable() { this->replicateWildDoTable_ = nullptr;};
      inline string getReplicateWildDoTable() const { DARABONBA_PTR_GET_DEFAULT(replicateWildDoTable_, "") };
      inline SlaveStatusList& setReplicateWildDoTable(string replicateWildDoTable) { DARABONBA_PTR_SET_VALUE(replicateWildDoTable_, replicateWildDoTable) };


      // replicateWildIgnoreTable Field Functions 
      bool hasReplicateWildIgnoreTable() const { return this->replicateWildIgnoreTable_ != nullptr;};
      void deleteReplicateWildIgnoreTable() { this->replicateWildIgnoreTable_ = nullptr;};
      inline string getReplicateWildIgnoreTable() const { DARABONBA_PTR_GET_DEFAULT(replicateWildIgnoreTable_, "") };
      inline SlaveStatusList& setReplicateWildIgnoreTable(string replicateWildIgnoreTable) { DARABONBA_PTR_SET_VALUE(replicateWildIgnoreTable_, replicateWildIgnoreTable) };


      // secondsBehindMaster Field Functions 
      bool hasSecondsBehindMaster() const { return this->secondsBehindMaster_ != nullptr;};
      void deleteSecondsBehindMaster() { this->secondsBehindMaster_ = nullptr;};
      inline int32_t getSecondsBehindMaster() const { DARABONBA_PTR_GET_DEFAULT(secondsBehindMaster_, 0) };
      inline SlaveStatusList& setSecondsBehindMaster(int32_t secondsBehindMaster) { DARABONBA_PTR_SET_VALUE(secondsBehindMaster_, secondsBehindMaster) };


      // slaveIoRunning Field Functions 
      bool hasSlaveIoRunning() const { return this->slaveIoRunning_ != nullptr;};
      void deleteSlaveIoRunning() { this->slaveIoRunning_ = nullptr;};
      inline string getSlaveIoRunning() const { DARABONBA_PTR_GET_DEFAULT(slaveIoRunning_, "") };
      inline SlaveStatusList& setSlaveIoRunning(string slaveIoRunning) { DARABONBA_PTR_SET_VALUE(slaveIoRunning_, slaveIoRunning) };


      // slaveIoState Field Functions 
      bool hasSlaveIoState() const { return this->slaveIoState_ != nullptr;};
      void deleteSlaveIoState() { this->slaveIoState_ = nullptr;};
      inline string getSlaveIoState() const { DARABONBA_PTR_GET_DEFAULT(slaveIoState_, "") };
      inline SlaveStatusList& setSlaveIoState(string slaveIoState) { DARABONBA_PTR_SET_VALUE(slaveIoState_, slaveIoState) };


      // slaveSqlRunning Field Functions 
      bool hasSlaveSqlRunning() const { return this->slaveSqlRunning_ != nullptr;};
      void deleteSlaveSqlRunning() { this->slaveSqlRunning_ = nullptr;};
      inline string getSlaveSqlRunning() const { DARABONBA_PTR_GET_DEFAULT(slaveSqlRunning_, "") };
      inline SlaveStatusList& setSlaveSqlRunning(string slaveSqlRunning) { DARABONBA_PTR_SET_VALUE(slaveSqlRunning_, slaveSqlRunning) };


      // slaveSqlRunningState Field Functions 
      bool hasSlaveSqlRunningState() const { return this->slaveSqlRunningState_ != nullptr;};
      void deleteSlaveSqlRunningState() { this->slaveSqlRunningState_ = nullptr;};
      inline string getSlaveSqlRunningState() const { DARABONBA_PTR_GET_DEFAULT(slaveSqlRunningState_, "") };
      inline SlaveStatusList& setSlaveSqlRunningState(string slaveSqlRunningState) { DARABONBA_PTR_SET_VALUE(slaveSqlRunningState_, slaveSqlRunningState) };


    protected:
      shared_ptr<string> channelName_ {};
      shared_ptr<string> executedGtidSet_ {};
      // 0表示无错误，其他值表示具体的错误代码
      shared_ptr<int32_t> lastErrno_ {};
      // 0表示无错误，其他值表示IO线程的错误代码
      shared_ptr<int32_t> lastIoErrno_ {};
      // IO线程的错误信息描述
      shared_ptr<string> lastIoError_ {};
      // 0表示无错误，其他值表示SQL线程的错误代码
      shared_ptr<int32_t> lastSqlErrno_ {};
      // SQL线程的错误信息描述
      shared_ptr<string> lastSqlError_ {};
      shared_ptr<string> masterHost_ {};
      shared_ptr<string> masterUser_ {};
      shared_ptr<string> masterUuid_ {};
      shared_ptr<string> replicateDoDb_ {};
      shared_ptr<string> replicateDoTable_ {};
      shared_ptr<string> replicateIgnoreDb_ {};
      shared_ptr<string> replicateIgnoreTable_ {};
      shared_ptr<string> replicateWildDoTable_ {};
      shared_ptr<string> replicateWildIgnoreTable_ {};
      shared_ptr<int32_t> secondsBehindMaster_ {};
      // Yes: 运行中，No: 已停止
      shared_ptr<string> slaveIoRunning_ {};
      shared_ptr<string> slaveIoState_ {};
      // Yes: 运行中，No: 已停止
      shared_ptr<string> slaveSqlRunning_ {};
      shared_ptr<string> slaveSqlRunningState_ {};
    };

    virtual bool empty() const override { return this->externalReplication_ == nullptr
        && this->gtidExecuted_ == nullptr && this->importStatus_ == nullptr && this->replicationDelay_ == nullptr && this->replicationErrorMessage_ == nullptr && this->replicationIp_ == nullptr
        && this->replicationPort_ == nullptr && this->replicationSource_ == nullptr && this->replicationState_ == nullptr && this->requestId_ == nullptr && this->slaveStatusList_ == nullptr; };
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


    // slaveStatusList Field Functions 
    bool hasSlaveStatusList() const { return this->slaveStatusList_ != nullptr;};
    void deleteSlaveStatusList() { this->slaveStatusList_ = nullptr;};
    inline const vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList> & getSlaveStatusList() const { DARABONBA_PTR_GET_CONST(slaveStatusList_, vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList>) };
    inline vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList> getSlaveStatusList() { DARABONBA_PTR_GET(slaveStatusList_, vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList>) };
    inline DescribeDBInstanceReplicationResponseBody& setSlaveStatusList(const vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList> & slaveStatusList) { DARABONBA_PTR_SET_VALUE(slaveStatusList_, slaveStatusList) };
    inline DescribeDBInstanceReplicationResponseBody& setSlaveStatusList(vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList> && slaveStatusList) { DARABONBA_PTR_SET_RVALUE(slaveStatusList_, slaveStatusList) };


  protected:
    // Indicates whether the native replication mods is enabled. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    shared_ptr<string> externalReplication_ {};
    // The executed global transaction identifier.
    shared_ptr<string> gtidExecuted_ {};
    // Indicates whether full data has been successfully imported.
    shared_ptr<string> importStatus_ {};
    // The replication latency. Unit: seconds.
    shared_ptr<string> replicationDelay_ {};
    // The replication error message.
    shared_ptr<string> replicationErrorMessage_ {};
    // The replication IP address.
    shared_ptr<string> replicationIp_ {};
    // The replication port.
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
    shared_ptr<vector<DescribeDBInstanceReplicationResponseBody::SlaveStatusList>> slaveStatusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
