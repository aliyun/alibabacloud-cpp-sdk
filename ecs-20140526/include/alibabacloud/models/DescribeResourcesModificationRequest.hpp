// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourcesModificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MigrateAcrossZone, migrateAcrossZone_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MigrateAcrossZone, migrateAcrossZone_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeResourcesModificationRequest() = default ;
    DescribeResourcesModificationRequest(const DescribeResourcesModificationRequest &) = default ;
    DescribeResourcesModificationRequest(DescribeResourcesModificationRequest &&) = default ;
    DescribeResourcesModificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationRequest() = default ;
    DescribeResourcesModificationRequest& operator=(const DescribeResourcesModificationRequest &) = default ;
    DescribeResourcesModificationRequest& operator=(DescribeResourcesModificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->cores_ == nullptr && this->destinationResource_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr && this->migrateAcrossZone_ == nullptr
        && this->operationType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->zoneId_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<string> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<string>) };
    inline vector<string> getConditions() { DARABONBA_PTR_GET(conditions_, vector<string>) };
    inline DescribeResourcesModificationRequest& setConditions(const vector<string> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeResourcesModificationRequest& setConditions(vector<string> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeResourcesModificationRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // destinationResource Field Functions 
    bool hasDestinationResource() const { return this->destinationResource_ != nullptr;};
    void deleteDestinationResource() { this->destinationResource_ = nullptr;};
    inline string getDestinationResource() const { DARABONBA_PTR_GET_DEFAULT(destinationResource_, "") };
    inline DescribeResourcesModificationRequest& setDestinationResource(string destinationResource) { DARABONBA_PTR_SET_VALUE(destinationResource_, destinationResource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeResourcesModificationRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeResourcesModificationRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // migrateAcrossZone Field Functions 
    bool hasMigrateAcrossZone() const { return this->migrateAcrossZone_ != nullptr;};
    void deleteMigrateAcrossZone() { this->migrateAcrossZone_ = nullptr;};
    inline bool getMigrateAcrossZone() const { DARABONBA_PTR_GET_DEFAULT(migrateAcrossZone_, false) };
    inline DescribeResourcesModificationRequest& setMigrateAcrossZone(bool migrateAcrossZone) { DARABONBA_PTR_SET_VALUE(migrateAcrossZone_, migrateAcrossZone) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeResourcesModificationRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeResourcesModificationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeResourcesModificationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourcesModificationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeResourcesModificationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeResourcesModificationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeResourcesModificationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeResourcesModificationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The list of conditions.
    shared_ptr<vector<string>> conditions_ {};
    // The number of vCPU kernels of the target instance type. For valid values, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
    // 
    // This parameter takes effect only when DestinationResource is set to InstanceType.
    shared_ptr<int32_t> cores_ {};
    // The type of the resource to be changed. Valid values: 
    //          
    // - InstanceType: instance type.
    // - SystemDisk: system disk type.
    // 
    //   If you set this parameter to SystemDisk, you must also specify the InstanceType parameter to indicate the disk type required by the target instance type.
    // 
    // This parameter is required.
    shared_ptr<string> destinationResource_ {};
    // The target instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html). You can also call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the most recent instance type list.
    // 
    // If DestinationResource is set to SystemDisk, you must also specify the InstanceType parameter to indicate the disk type required by the target instance type.
    shared_ptr<string> instanceType_ {};
    // The memory size of the target instance type. Unit: GiB. For valid values, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
    // 
    // This parameter takes effect only when DestinationResource is set to InstanceType.
    shared_ptr<float> memory_ {};
    // Specifies whether cross-cluster instance type changes are supported. Valid values: 
    //         
    // - true: Supported.
    // - false: Not supported.
    // 
    // Default value: false.
    // 
    // If the MigrateAcrossZone parameter is set to true and you upgrade or downgrade the Elastic Compute Service instance based on the returned information, take note of the following items: 
    //             
    // - VPC-type instances: For [retired instance types](https://help.aliyun.com/document_detail/55263.html), when a non-I/O optimized instance is changed to an I/O optimized instance, the disk device names and software authorization codes of the server are changed. For Linux instances, basic disks (cloud) are identified as xvda or xvdb. Ultra disks (cloud_efficiency) and standard SSDs (cloud_ssd) are identified as vda or vdb.
    shared_ptr<bool> migrateAcrossZone_ {};
    // The type of the Upgrade/Downgrade operation.
    // 
    // - Valid values for subscription resources: 
    // 
    //     - Upgrade: upgrades resources.
    //     - Downgrade: downgrades resources.
    //     - RenewDowngrade: downgrades resources upon renewal.
    //     - RenewModify: renewal with specification change for expired instances.
    // 
    // - Valid value for pay-as-you-go resources: Upgrade.
    // 
    // Default value: Upgrade.
    shared_ptr<string> operationType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance whose configuration you want to change. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID (InstanceId) of the instance whose instance type or system disk type you want to change.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the target zone.
    // 
    // Specify this parameter when you want to change the instance type across zones.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
