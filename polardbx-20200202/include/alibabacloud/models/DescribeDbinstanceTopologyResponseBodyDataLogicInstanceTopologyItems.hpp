// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList.hpp>
#include <alibabacloud/models/DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Activated, activated_);
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(AzoneRoleList, azoneRoleList_);
      DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
      DARABONBA_PTR_TO_JSON(ConnectionIp, connectionIp_);
      DARABONBA_PTR_TO_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_TO_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIops, maxIops_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(PhyInstanceName, phyInstanceName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Activated, activated_);
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(AzoneRoleList, azoneRoleList_);
      DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
      DARABONBA_PTR_FROM_JSON(ConnectionIp, connectionIp_);
      DARABONBA_PTR_FROM_JSON(DBInstanceConnType, DBInstanceConnType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIops, maxIops_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(PhyInstanceName, phyInstanceName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems &&) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& operator=(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& operator=(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activated_ != nullptr
        && this->azone_ != nullptr && this->azoneRoleList_ != nullptr && this->characterType_ != nullptr && this->connectionIp_ != nullptr && this->DBInstanceConnType_ != nullptr
        && this->DBInstanceCreateTime_ != nullptr && this->DBInstanceDescription_ != nullptr && this->DBInstanceId_ != nullptr && this->DBInstanceName_ != nullptr && this->DBInstanceStatus_ != nullptr
        && this->DBInstanceStatusDescription_ != nullptr && this->diskSize_ != nullptr && this->engine_ != nullptr && this->engineVersion_ != nullptr && this->lockMode_ != nullptr
        && this->lockReason_ != nullptr && this->maintainEndTime_ != nullptr && this->maintainStartTime_ != nullptr && this->maxConnections_ != nullptr && this->maxIops_ != nullptr
        && this->nodeClass_ != nullptr && this->phyInstanceName_ != nullptr && this->region_ != nullptr && this->role_ != nullptr && this->status_ != nullptr
        && this->storageUsed_ != nullptr && this->version_ != nullptr; };
    // activated Field Functions 
    bool hasActivated() const { return this->activated_ != nullptr;};
    void deleteActivated() { this->activated_ = nullptr;};
    inline bool activated() const { DARABONBA_PTR_GET_DEFAULT(activated_, false) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setActivated(bool activated) { DARABONBA_PTR_SET_VALUE(activated_, activated) };


    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string azone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // azoneRoleList Field Functions 
    bool hasAzoneRoleList() const { return this->azoneRoleList_ != nullptr;};
    void deleteAzoneRoleList() { this->azoneRoleList_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList> & azoneRoleList() const { DARABONBA_PTR_GET_CONST(azoneRoleList_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList>) };
    inline vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList> azoneRoleList() { DARABONBA_PTR_GET(azoneRoleList_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList>) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setAzoneRoleList(const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList> & azoneRoleList) { DARABONBA_PTR_SET_VALUE(azoneRoleList_, azoneRoleList) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setAzoneRoleList(vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList> && azoneRoleList) { DARABONBA_PTR_SET_RVALUE(azoneRoleList_, azoneRoleList) };


    // characterType Field Functions 
    bool hasCharacterType() const { return this->characterType_ != nullptr;};
    void deleteCharacterType() { this->characterType_ = nullptr;};
    inline string characterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


    // connectionIp Field Functions 
    bool hasConnectionIp() const { return this->connectionIp_ != nullptr;};
    void deleteConnectionIp() { this->connectionIp_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> & connectionIp() const { DARABONBA_PTR_GET_CONST(connectionIp_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>) };
    inline vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> connectionIp() { DARABONBA_PTR_GET(connectionIp_, vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setConnectionIp(const vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> & connectionIp) { DARABONBA_PTR_SET_VALUE(connectionIp_, connectionIp) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setConnectionIp(vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> && connectionIp) { DARABONBA_PTR_SET_RVALUE(connectionIp_, connectionIp) };


    // DBInstanceConnType Field Functions 
    bool hasDBInstanceConnType() const { return this->DBInstanceConnType_ != nullptr;};
    void deleteDBInstanceConnType() { this->DBInstanceConnType_ = nullptr;};
    inline int32_t DBInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceConnType_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceConnType(int32_t DBInstanceConnType) { DARABONBA_PTR_SET_VALUE(DBInstanceConnType_, DBInstanceConnType) };


    // DBInstanceCreateTime Field Functions 
    bool hasDBInstanceCreateTime() const { return this->DBInstanceCreateTime_ != nullptr;};
    void deleteDBInstanceCreateTime() { this->DBInstanceCreateTime_ = nullptr;};
    inline string DBInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCreateTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceCreateTime(string DBInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(DBInstanceCreateTime_, DBInstanceCreateTime) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline int32_t DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceStatus(int32_t DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceStatusDescription Field Functions 
    bool hasDBInstanceStatusDescription() const { return this->DBInstanceStatusDescription_ != nullptr;};
    void deleteDBInstanceStatusDescription() { this->DBInstanceStatusDescription_ = nullptr;};
    inline string DBInstanceStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatusDescription_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDBInstanceStatusDescription(string DBInstanceStatusDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceStatusDescription_, DBInstanceStatusDescription) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int64_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0L) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setDiskSize(int64_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int32_t lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setLockMode(int32_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIops Field Functions 
    bool hasMaxIops() const { return this->maxIops_ != nullptr;};
    void deleteMaxIops() { this->maxIops_ = nullptr;};
    inline int32_t maxIops() const { DARABONBA_PTR_GET_DEFAULT(maxIops_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setMaxIops(int32_t maxIops) { DARABONBA_PTR_SET_VALUE(maxIops_, maxIops) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string nodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // phyInstanceName Field Functions 
    bool hasPhyInstanceName() const { return this->phyInstanceName_ != nullptr;};
    void deletePhyInstanceName() { this->phyInstanceName_ = nullptr;};
    inline string phyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(phyInstanceName_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setPhyInstanceName(string phyInstanceName) { DARABONBA_PTR_SET_VALUE(phyInstanceName_, phyInstanceName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline string storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> activated_ = nullptr;
    std::shared_ptr<string> azone_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList>> azoneRoleList_ = nullptr;
    std::shared_ptr<string> characterType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>> connectionIp_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceConnType_ = nullptr;
    std::shared_ptr<string> DBInstanceCreateTime_ = nullptr;
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceStatus_ = nullptr;
    std::shared_ptr<string> DBInstanceStatusDescription_ = nullptr;
    std::shared_ptr<int64_t> diskSize_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<int32_t> lockMode_ = nullptr;
    std::shared_ptr<string> lockReason_ = nullptr;
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    std::shared_ptr<int32_t> maxIops_ = nullptr;
    std::shared_ptr<string> nodeClass_ = nullptr;
    std::shared_ptr<string> phyInstanceName_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageUsed_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
