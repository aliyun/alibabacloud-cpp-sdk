// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODY_HPP_
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
  class DescribeDBInstanceHAConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HAMode, HAMode_);
      DARABONBA_PTR_TO_JSON(HostInstanceInfos, hostInstanceInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HAMode, HAMode_);
      DARABONBA_PTR_FROM_JSON(HostInstanceInfos, hostInstanceInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
    };
    DescribeDBInstanceHAConfigResponseBody() = default ;
    DescribeDBInstanceHAConfigResponseBody(const DescribeDBInstanceHAConfigResponseBody &) = default ;
    DescribeDBInstanceHAConfigResponseBody(DescribeDBInstanceHAConfigResponseBody &&) = default ;
    DescribeDBInstanceHAConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAConfigResponseBody() = default ;
    DescribeDBInstanceHAConfigResponseBody& operator=(const DescribeDBInstanceHAConfigResponseBody &) = default ;
    DescribeDBInstanceHAConfigResponseBody& operator=(DescribeDBInstanceHAConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostInstanceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostInstanceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, HostInstanceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      };
      HostInstanceInfos() = default ;
      HostInstanceInfos(const HostInstanceInfos &) = default ;
      HostInstanceInfos(HostInstanceInfos &&) = default ;
      HostInstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostInstanceInfos() = default ;
      HostInstanceInfos& operator=(const HostInstanceInfos &) = default ;
      HostInstanceInfos& operator=(HostInstanceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DataSyncTime, dataSyncTime_);
          DARABONBA_PTR_TO_JSON(LogSyncTime, logSyncTime_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSyncTime, dataSyncTime_);
          DARABONBA_PTR_FROM_JSON(LogSyncTime, logSyncTime_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSyncTime_ == nullptr
        && this->logSyncTime_ == nullptr && this->nodeId_ == nullptr && this->nodeType_ == nullptr && this->regionId_ == nullptr && this->syncStatus_ == nullptr
        && this->zoneId_ == nullptr; };
        // dataSyncTime Field Functions 
        bool hasDataSyncTime() const { return this->dataSyncTime_ != nullptr;};
        void deleteDataSyncTime() { this->dataSyncTime_ = nullptr;};
        inline string getDataSyncTime() const { DARABONBA_PTR_GET_DEFAULT(dataSyncTime_, "") };
        inline NodeInfo& setDataSyncTime(string dataSyncTime) { DARABONBA_PTR_SET_VALUE(dataSyncTime_, dataSyncTime) };


        // logSyncTime Field Functions 
        bool hasLogSyncTime() const { return this->logSyncTime_ != nullptr;};
        void deleteLogSyncTime() { this->logSyncTime_ = nullptr;};
        inline string getLogSyncTime() const { DARABONBA_PTR_GET_DEFAULT(logSyncTime_, "") };
        inline NodeInfo& setLogSyncTime(string logSyncTime) { DARABONBA_PTR_SET_VALUE(logSyncTime_, logSyncTime) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline NodeInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // syncStatus Field Functions 
        bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
        void deleteSyncStatus() { this->syncStatus_ = nullptr;};
        inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
        inline NodeInfo& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline NodeInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the secondary instance completed the synchronization of data from the primary instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> dataSyncTime_ {};
        // The time when the secondary instance received logs from the primary instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logSyncTime_ {};
        // The ID of the instance.
        shared_ptr<string> nodeId_ {};
        // The type of the node. Valid values:
        // 
        // *   **Master**: the primary node
        // *   **Slave**: the secondary node
        shared_ptr<string> nodeType_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // The synchronization status. Valid values:
        // 
        // *   **NotAvailable**: The synchronization fails. This means that faults occur.
        // *   **Syncing**: The synchronization is in process. In this case, a primary/secondary switchover may cause data losses.
        // *   **Synchronized**: The synchronization is completed.
        // *   **NotSupport**: The database engine or database engine version does not involve the synchronization between the primary and secondary instances.
        shared_ptr<string> syncStatus_ {};
        // The ID of the zone.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->nodeInfo_ == nullptr; };
      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const vector<HostInstanceInfos::NodeInfo> & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<HostInstanceInfos::NodeInfo>) };
      inline vector<HostInstanceInfos::NodeInfo> getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<HostInstanceInfos::NodeInfo>) };
      inline HostInstanceInfos& setNodeInfo(const vector<HostInstanceInfos::NodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline HostInstanceInfos& setNodeInfo(vector<HostInstanceInfos::NodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    protected:
      shared_ptr<vector<HostInstanceInfos::NodeInfo>> nodeInfo_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->HAMode_ == nullptr && this->hostInstanceInfos_ == nullptr && this->requestId_ == nullptr && this->syncMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // HAMode Field Functions 
    bool hasHAMode() const { return this->HAMode_ != nullptr;};
    void deleteHAMode() { this->HAMode_ = nullptr;};
    inline string getHAMode() const { DARABONBA_PTR_GET_DEFAULT(HAMode_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setHAMode(string HAMode) { DARABONBA_PTR_SET_VALUE(HAMode_, HAMode) };


    // hostInstanceInfos Field Functions 
    bool hasHostInstanceInfos() const { return this->hostInstanceInfos_ != nullptr;};
    void deleteHostInstanceInfos() { this->hostInstanceInfos_ = nullptr;};
    inline const DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos & getHostInstanceInfos() const { DARABONBA_PTR_GET_CONST(hostInstanceInfos_, DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos getHostInstanceInfos() { DARABONBA_PTR_GET(hostInstanceInfos_, DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBody& setHostInstanceInfos(const DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos & hostInstanceInfos) { DARABONBA_PTR_SET_VALUE(hostInstanceInfos_, hostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBody& setHostInstanceInfos(DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos && hostInstanceInfos) { DARABONBA_PTR_SET_RVALUE(hostInstanceInfos_, hostInstanceInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string getSyncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The high availability mode of the instance. Valid values:
    // 
    // *   **RPO**: Data consistency is preferred. The instance ensures data reliability to minimize data losses. If you have high requirements on data consistency, select this mode.
    // *   **RTO**: Service availability is preferred. The instance restores the database service at the earliest opportunity to ensure service availability. If you have high requirements on instance availability, select this mode.
    // 
    // > This parameter is returned only for instances that run MySQL.
    shared_ptr<string> HAMode_ {};
    // An array that consists of the information of the primary and secondary instances.
    shared_ptr<DescribeDBInstanceHAConfigResponseBody::HostInstanceInfos> hostInstanceInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data replication mode of the instance. Valid values:
    // 
    // *   **Sync**: the synchronous mode
    // *   **Semi-sync**: the semi-synchronous replication mode
    // *   **Async**: the asynchronous mode
    // 
    // > This parameter is returned only for instances that run MySQL.
    shared_ptr<string> syncMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
