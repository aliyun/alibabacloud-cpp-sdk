// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODYHOSTINSTANCEINFOSNODEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODYHOSTINSTANCEINFOSNODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataSyncTime, dataSyncTime_);
      DARABONBA_PTR_TO_JSON(LogSyncTime, logSyncTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSyncTime, dataSyncTime_);
      DARABONBA_PTR_FROM_JSON(LogSyncTime, logSyncTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo() = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo(const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo &) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo(DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo &&) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo() = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& operator=(const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo &) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& operator=(DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSyncTime_ == nullptr
        && return this->logSyncTime_ == nullptr && return this->nodeId_ == nullptr && return this->nodeType_ == nullptr && return this->regionId_ == nullptr && return this->syncStatus_ == nullptr
        && return this->zoneId_ == nullptr; };
    // dataSyncTime Field Functions 
    bool hasDataSyncTime() const { return this->dataSyncTime_ != nullptr;};
    void deleteDataSyncTime() { this->dataSyncTime_ = nullptr;};
    inline string dataSyncTime() const { DARABONBA_PTR_GET_DEFAULT(dataSyncTime_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setDataSyncTime(string dataSyncTime) { DARABONBA_PTR_SET_VALUE(dataSyncTime_, dataSyncTime) };


    // logSyncTime Field Functions 
    bool hasLogSyncTime() const { return this->logSyncTime_ != nullptr;};
    void deleteLogSyncTime() { this->logSyncTime_ = nullptr;};
    inline string logSyncTime() const { DARABONBA_PTR_GET_DEFAULT(logSyncTime_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setLogSyncTime(string logSyncTime) { DARABONBA_PTR_SET_VALUE(logSyncTime_, logSyncTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the secondary instance completed the synchronization of data from the primary instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> dataSyncTime_ = nullptr;
    // The time when the secondary instance received logs from the primary instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logSyncTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **Master**: the primary node
    // *   **Slave**: the secondary node
    std::shared_ptr<string> nodeType_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The synchronization status. Valid values:
    // 
    // *   **NotAvailable**: The synchronization fails. This means that faults occur.
    // *   **Syncing**: The synchronization is in process. In this case, a primary/secondary switchover may cause data losses.
    // *   **Synchronized**: The synchronization is completed.
    // *   **NotSupport**: The database engine or database engine version does not involve the synchronization between the primary and secondary instances.
    std::shared_ptr<string> syncStatus_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
