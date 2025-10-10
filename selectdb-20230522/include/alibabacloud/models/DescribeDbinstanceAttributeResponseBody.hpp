// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyDBClusterList.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyMultiZone.hpp>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanUpgradeVersions, canUpgradeVersions_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_TO_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_TO_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecGroupConnValid, secGroupConnValid_);
      DARABONBA_PTR_TO_JSON(Serverless, serverless_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanUpgradeVersions, canUpgradeVersions_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaintainEndtime, maintainEndtime_);
      DARABONBA_PTR_FROM_JSON(MaintainStarttime, maintainStarttime_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_FROM_JSON(ObjectStoreSize, objectStoreSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCpu, resourceCpu_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecGroupConnValid, secGroupConnValid_);
      DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody(DescribeDBInstanceAttributeResponseBody &&) = default ;
    DescribeDBInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBody() = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(const DescribeDBInstanceAttributeResponseBody &) = default ;
    DescribeDBInstanceAttributeResponseBody& operator=(DescribeDBInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canUpgradeVersions_ != nullptr
        && this->chargeType_ != nullptr && this->createTime_ != nullptr && this->DBClusterList_ != nullptr && this->DBInstanceId_ != nullptr && this->deployScheme_ != nullptr
        && this->description_ != nullptr && this->engine_ != nullptr && this->engineMinorVersion_ != nullptr && this->engineVersion_ != nullptr && this->expireTime_ != nullptr
        && this->gmtModified_ != nullptr && this->lockMode_ != nullptr && this->lockReason_ != nullptr && this->maintainEndtime_ != nullptr && this->maintainStarttime_ != nullptr
        && this->multiZone_ != nullptr && this->objectStoreSize_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceCpu_ != nullptr
        && this->resourceGroupId_ != nullptr && this->secGroupConnValid_ != nullptr && this->serverless_ != nullptr && this->status_ != nullptr && this->storageSize_ != nullptr
        && this->subDomain_ != nullptr && this->tags_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // canUpgradeVersions Field Functions 
    bool hasCanUpgradeVersions() const { return this->canUpgradeVersions_ != nullptr;};
    void deleteCanUpgradeVersions() { this->canUpgradeVersions_ = nullptr;};
    inline const vector<string> & canUpgradeVersions() const { DARABONBA_PTR_GET_CONST(canUpgradeVersions_, vector<string>) };
    inline vector<string> canUpgradeVersions() { DARABONBA_PTR_GET(canUpgradeVersions_, vector<string>) };
    inline DescribeDBInstanceAttributeResponseBody& setCanUpgradeVersions(const vector<string> & canUpgradeVersions) { DARABONBA_PTR_SET_VALUE(canUpgradeVersions_, canUpgradeVersions) };
    inline DescribeDBInstanceAttributeResponseBody& setCanUpgradeVersions(vector<string> && canUpgradeVersions) { DARABONBA_PTR_SET_RVALUE(canUpgradeVersions_, canUpgradeVersions) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterList Field Functions 
    bool hasDBClusterList() const { return this->DBClusterList_ != nullptr;};
    void deleteDBClusterList() { this->DBClusterList_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBodyDBClusterList> & DBClusterList() const { DARABONBA_PTR_GET_CONST(DBClusterList_, vector<DescribeDBInstanceAttributeResponseBodyDBClusterList>) };
    inline vector<DescribeDBInstanceAttributeResponseBodyDBClusterList> DBClusterList() { DARABONBA_PTR_GET(DBClusterList_, vector<DescribeDBInstanceAttributeResponseBodyDBClusterList>) };
    inline DescribeDBInstanceAttributeResponseBody& setDBClusterList(const vector<DescribeDBInstanceAttributeResponseBodyDBClusterList> & DBClusterList) { DARABONBA_PTR_SET_VALUE(DBClusterList_, DBClusterList) };
    inline DescribeDBInstanceAttributeResponseBody& setDBClusterList(vector<DescribeDBInstanceAttributeResponseBodyDBClusterList> && DBClusterList) { DARABONBA_PTR_SET_RVALUE(DBClusterList_, DBClusterList) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // deployScheme Field Functions 
    bool hasDeployScheme() const { return this->deployScheme_ != nullptr;};
    void deleteDeployScheme() { this->deployScheme_ = nullptr;};
    inline string deployScheme() const { DARABONBA_PTR_GET_DEFAULT(deployScheme_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDeployScheme(string deployScheme) { DARABONBA_PTR_SET_VALUE(deployScheme_, deployScheme) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineMinorVersion Field Functions 
    bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
    void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
    inline string engineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline int64_t lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setLockMode(int64_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maintainEndtime Field Functions 
    bool hasMaintainEndtime() const { return this->maintainEndtime_ != nullptr;};
    void deleteMaintainEndtime() { this->maintainEndtime_ = nullptr;};
    inline string maintainEndtime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndtime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setMaintainEndtime(string maintainEndtime) { DARABONBA_PTR_SET_VALUE(maintainEndtime_, maintainEndtime) };


    // maintainStarttime Field Functions 
    bool hasMaintainStarttime() const { return this->maintainStarttime_ != nullptr;};
    void deleteMaintainStarttime() { this->maintainStarttime_ = nullptr;};
    inline string maintainStarttime() const { DARABONBA_PTR_GET_DEFAULT(maintainStarttime_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setMaintainStarttime(string maintainStarttime) { DARABONBA_PTR_SET_VALUE(maintainStarttime_, maintainStarttime) };


    // multiZone Field Functions 
    bool hasMultiZone() const { return this->multiZone_ != nullptr;};
    void deleteMultiZone() { this->multiZone_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBodyMultiZone> & multiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<DescribeDBInstanceAttributeResponseBodyMultiZone>) };
    inline vector<DescribeDBInstanceAttributeResponseBodyMultiZone> multiZone() { DARABONBA_PTR_GET(multiZone_, vector<DescribeDBInstanceAttributeResponseBodyMultiZone>) };
    inline DescribeDBInstanceAttributeResponseBody& setMultiZone(const vector<DescribeDBInstanceAttributeResponseBodyMultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
    inline DescribeDBInstanceAttributeResponseBody& setMultiZone(vector<DescribeDBInstanceAttributeResponseBodyMultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


    // objectStoreSize Field Functions 
    bool hasObjectStoreSize() const { return this->objectStoreSize_ != nullptr;};
    void deleteObjectStoreSize() { this->objectStoreSize_ = nullptr;};
    inline int64_t objectStoreSize() const { DARABONBA_PTR_GET_DEFAULT(objectStoreSize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setObjectStoreSize(int64_t objectStoreSize) { DARABONBA_PTR_SET_VALUE(objectStoreSize_, objectStoreSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCpu Field Functions 
    bool hasResourceCpu() const { return this->resourceCpu_ != nullptr;};
    void deleteResourceCpu() { this->resourceCpu_ = nullptr;};
    inline int64_t resourceCpu() const { DARABONBA_PTR_GET_DEFAULT(resourceCpu_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setResourceCpu(int64_t resourceCpu) { DARABONBA_PTR_SET_VALUE(resourceCpu_, resourceCpu) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secGroupConnValid Field Functions 
    bool hasSecGroupConnValid() const { return this->secGroupConnValid_ != nullptr;};
    void deleteSecGroupConnValid() { this->secGroupConnValid_ = nullptr;};
    inline string secGroupConnValid() const { DARABONBA_PTR_GET_DEFAULT(secGroupConnValid_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setSecGroupConnValid(string secGroupConnValid) { DARABONBA_PTR_SET_VALUE(secGroupConnValid_, secGroupConnValid) };


    // serverless Field Functions 
    bool hasServerless() const { return this->serverless_ != nullptr;};
    void deleteServerless() { this->serverless_ = nullptr;};
    inline bool serverless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, false) };
    inline DescribeDBInstanceAttributeResponseBody& setServerless(bool serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline DescribeDBInstanceAttributeResponseBody& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDBInstanceAttributeResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDBInstanceAttributeResponseBodyTags>) };
    inline vector<DescribeDBInstanceAttributeResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeDBInstanceAttributeResponseBodyTags>) };
    inline DescribeDBInstanceAttributeResponseBody& setTags(const vector<DescribeDBInstanceAttributeResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDBInstanceAttributeResponseBody& setTags(vector<DescribeDBInstanceAttributeResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The information returned.
    std::shared_ptr<vector<string>> canUpgradeVersions_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about each cluster returned.
    std::shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBClusterList>> DBClusterList_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> deployScheme_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The minor kernel version number of the instance.
    std::shared_ptr<string> engineMinorVersion_ = nullptr;
    // The database engine version of the instance.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the instance was last modified, such as when you restarted the instance or applied for a public endpoint for the instance. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The lock mode of the instance. Set the value to **lock**, which specifies that the instance is locked when it automatically expires or has an overdue payment.
    std::shared_ptr<int64_t> lockMode_ = nullptr;
    // The reason why the instance is locked.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The end time of the instance maintenance window.
    std::shared_ptr<string> maintainEndtime_ = nullptr;
    // The start time of the instance maintenance window.
    std::shared_ptr<string> maintainStarttime_ = nullptr;
    std::shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyMultiZone>> multiZone_ = nullptr;
    // The storage capacity of the instance.
    std::shared_ptr<int64_t> objectStoreSize_ = nullptr;
    // The Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of CPU cores of the instance.
    std::shared_ptr<int64_t> resourceCpu_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> secGroupConnValid_ = nullptr;
    std::shared_ptr<bool> serverless_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **RESOURCE_CHANGING**: The resource configuration of the instance is being changed.
    // *   **ORDER_PREPARING**: The order is being confirmed.
    // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the instance is being changed and the instance is write-locked.
    // *   **DELETING**: The instance is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The cache size.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // The subdomain zone ID.
    std::shared_ptr<string> subDomain_ = nullptr;
    // The tags that are added to the instances. Each tag is a key-value pair that consists of two parts: TagKey and TagValue. Format: `{"key1":"value1"}`.
    std::shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyTags>> tags_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The Zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
