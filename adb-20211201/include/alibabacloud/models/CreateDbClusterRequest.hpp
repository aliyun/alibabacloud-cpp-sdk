// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBClusterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(CloneSourceRegionId, cloneSourceRegionId_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_TO_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(EnableDefaultResourcePool, enableDefaultResourcePool_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(KmsId, kmsId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RestoreToTime, restoreToTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SourceDbClusterId, sourceDbClusterId_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(CloneSourceRegionId, cloneSourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_FROM_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(EnableDefaultResourcePool, enableDefaultResourcePool_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(KmsId, kmsId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RestoreToTime, restoreToTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SourceDbClusterId, sourceDbClusterId_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBClusterRequest() = default ;
    CreateDBClusterRequest(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest(CreateDBClusterRequest &&) = default ;
    CreateDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterRequest() = default ;
    CreateDBClusterRequest& operator=(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest& operator=(CreateDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && return this->cloneSourceRegionId_ == nullptr && return this->computeResource_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterVersion_ == nullptr
        && return this->diskEncryption_ == nullptr && return this->enableDefaultResourcePool_ == nullptr && return this->enableSSL_ == nullptr && return this->kmsId_ == nullptr && return this->payType_ == nullptr
        && return this->period_ == nullptr && return this->productForm_ == nullptr && return this->productVersion_ == nullptr && return this->regionId_ == nullptr && return this->reservedNodeCount_ == nullptr
        && return this->reservedNodeSize_ == nullptr && return this->resourceGroupId_ == nullptr && return this->restoreToTime_ == nullptr && return this->restoreType_ == nullptr && return this->secondaryVSwitchId_ == nullptr
        && return this->secondaryZoneId_ == nullptr && return this->sourceDbClusterId_ == nullptr && return this->storageResource_ == nullptr && return this->tag_ == nullptr && return this->usedTime_ == nullptr
        && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateDBClusterRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // cloneSourceRegionId Field Functions 
    bool hasCloneSourceRegionId() const { return this->cloneSourceRegionId_ != nullptr;};
    void deleteCloneSourceRegionId() { this->cloneSourceRegionId_ = nullptr;};
    inline string cloneSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(cloneSourceRegionId_, "") };
    inline CreateDBClusterRequest& setCloneSourceRegionId(string cloneSourceRegionId) { DARABONBA_PTR_SET_VALUE(cloneSourceRegionId_, cloneSourceRegionId) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline CreateDBClusterRequest& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBClusterRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline CreateDBClusterRequest& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterVersion Field Functions 
    bool hasDBClusterVersion() const { return this->DBClusterVersion_ != nullptr;};
    void deleteDBClusterVersion() { this->DBClusterVersion_ = nullptr;};
    inline string DBClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(DBClusterVersion_, "") };
    inline CreateDBClusterRequest& setDBClusterVersion(string DBClusterVersion) { DARABONBA_PTR_SET_VALUE(DBClusterVersion_, DBClusterVersion) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline CreateDBClusterRequest& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // enableDefaultResourcePool Field Functions 
    bool hasEnableDefaultResourcePool() const { return this->enableDefaultResourcePool_ != nullptr;};
    void deleteEnableDefaultResourcePool() { this->enableDefaultResourcePool_ = nullptr;};
    inline bool enableDefaultResourcePool() const { DARABONBA_PTR_GET_DEFAULT(enableDefaultResourcePool_, false) };
    inline CreateDBClusterRequest& setEnableDefaultResourcePool(bool enableDefaultResourcePool) { DARABONBA_PTR_SET_VALUE(enableDefaultResourcePool_, enableDefaultResourcePool) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline CreateDBClusterRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // kmsId Field Functions 
    bool hasKmsId() const { return this->kmsId_ != nullptr;};
    void deleteKmsId() { this->kmsId_ = nullptr;};
    inline string kmsId() const { DARABONBA_PTR_GET_DEFAULT(kmsId_, "") };
    inline CreateDBClusterRequest& setKmsId(string kmsId) { DARABONBA_PTR_SET_VALUE(kmsId_, kmsId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBClusterRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // productForm Field Functions 
    bool hasProductForm() const { return this->productForm_ != nullptr;};
    void deleteProductForm() { this->productForm_ = nullptr;};
    inline string productForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
    inline CreateDBClusterRequest& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline CreateDBClusterRequest& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedNodeCount Field Functions 
    bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
    void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
    inline int32_t reservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
    inline CreateDBClusterRequest& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


    // reservedNodeSize Field Functions 
    bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
    void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
    inline string reservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
    inline CreateDBClusterRequest& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restoreToTime Field Functions 
    bool hasRestoreToTime() const { return this->restoreToTime_ != nullptr;};
    void deleteRestoreToTime() { this->restoreToTime_ = nullptr;};
    inline string restoreToTime() const { DARABONBA_PTR_GET_DEFAULT(restoreToTime_, "") };
    inline CreateDBClusterRequest& setRestoreToTime(string restoreToTime) { DARABONBA_PTR_SET_VALUE(restoreToTime_, restoreToTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateDBClusterRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // secondaryVSwitchId Field Functions 
    bool hasSecondaryVSwitchId() const { return this->secondaryVSwitchId_ != nullptr;};
    void deleteSecondaryVSwitchId() { this->secondaryVSwitchId_ = nullptr;};
    inline string secondaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(secondaryVSwitchId_, "") };
    inline CreateDBClusterRequest& setSecondaryVSwitchId(string secondaryVSwitchId) { DARABONBA_PTR_SET_VALUE(secondaryVSwitchId_, secondaryVSwitchId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string secondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline CreateDBClusterRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // sourceDbClusterId Field Functions 
    bool hasSourceDbClusterId() const { return this->sourceDbClusterId_ != nullptr;};
    void deleteSourceDbClusterId() { this->sourceDbClusterId_ = nullptr;};
    inline string sourceDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDbClusterId_, "") };
    inline CreateDBClusterRequest& setSourceDbClusterId(string sourceDbClusterId) { DARABONBA_PTR_SET_VALUE(sourceDbClusterId_, sourceDbClusterId) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline CreateDBClusterRequest& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBClusterRequestTag>) };
    inline vector<CreateDBClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDBClusterRequestTag>) };
    inline CreateDBClusterRequest& setTag(const vector<CreateDBClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBClusterRequest& setTag(vector<CreateDBClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBClusterRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBClusterRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the backup set that you want to use to restore data.
    // 
    // >  You can call the [DescribeBackups](https://help.aliyun.com/document_detail/612318.html) operation to query the backup sets of the cluster.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The region ID of the source cluster.
    // 
    // >  This parameter must be specified for cloning clusters across regions.
    std::shared_ptr<string> cloneSourceRegionId_ = nullptr;
    // The amount of reserved computing resources. Valid values: 0ACU to 4096ACU. The value must be in increments of 16ACU. Each ACU is approximately equal to 1 core and 4 GB memory.
    // 
    // >  This parameter must be specified with a unit.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The description of the cluster.
    // 
    // *   The description cannot start with `http://` or `https://`.
    // *   The description must be 2 to 256 characters in length
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The network type of the cluster. Set the value to **VPC**.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The version of the cluster. Set the value to **5.0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterVersion_ = nullptr;
    // Specifies whether to enable disk encryption.
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    // Specifies whether to allocate all reserved computing resources to the user_default resource group. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> enableDefaultResourcePool_ = nullptr;
    std::shared_ptr<bool> enableSSL_ = nullptr;
    // The ID of the key that is used to encrypt disk data.
    // 
    // >  This parameter must be specified only when disk encryption is enabled.
    std::shared_ptr<string> kmsId_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The subscription type of the subscription cluster. Valid values:
    // 
    // *   **Year**: subscription on a yearly basis.
    // *   **Month**: subscription on a monthly basis.
    // 
    // >  This parameter must be specified when PayType is set to Prepaid.
    std::shared_ptr<string> period_ = nullptr;
    // The product form of the cluster. Valid values:
    // 
    // *   **IntegrationForm**: integrated.
    // *   **LegacyForm**: Data Lakehouse Edition.
    std::shared_ptr<string> productForm_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **BasicVersion**: Basic Edition.
    // *   **EnterpriseVersion**: Enterprise Edition.
    // 
    // >  This parameter must be specified only when ProductForm is set to IntegrationForm.
    std::shared_ptr<string> productVersion_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of reserved resource nodes.
    // 
    // *   For Enterprise Edition, the default value is 3 and the step size is 3.
    // *   For Basic Edition, the default value is 1.
    // 
    // >  This parameter must be specified only when ProductForm is set to IntegrationForm.
    std::shared_ptr<int32_t> reservedNodeCount_ = nullptr;
    // The specifications of reserved resource nodes. Unit: ACUs.
    std::shared_ptr<string> reservedNodeSize_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The point in time to which you want to restore data from the backup set.
    std::shared_ptr<string> restoreToTime_ = nullptr;
    // The method that you want to use to restore data. Valid values:
    // 
    // *   **backup**: restores data from a backup set. You must also specify the **BackupSetId** and **SourceDBClusterId** parameters.
    // *   **timepoint**: restores data to a point in time. You must also specify the **RestoreToTime** and **SourceDBClusterId** parameters.
    std::shared_ptr<string> restoreType_ = nullptr;
    // The ID of the secondary vSwitch.
    // 
    // >  You cannot set this parameter to a value that is the same as that of the VSwitchId parameter.
    std::shared_ptr<string> secondaryVSwitchId_ = nullptr;
    // The ID of the secondary zone.
    // 
    // >  You cannot set this parameter to a value that is the same as that of the ZoneId parameter.
    std::shared_ptr<string> secondaryZoneId_ = nullptr;
    // The ID of the source AnalyticDB for MySQL Data Warehouse Edition cluster.
    std::shared_ptr<string> sourceDbClusterId_ = nullptr;
    // The amount of reserved storage resources. Valid values: 0ACU to 2064ACU. The value must be in increments of 24ACU. Each ACU is approximately equal to 1 core and 4 GB memory.
    // 
    // >  This parameter must be specified with a unit.
    std::shared_ptr<string> storageResource_ = nullptr;
    // The tags to add to the cluster.
    std::shared_ptr<vector<CreateDBClusterRequestTag>> tag_ = nullptr;
    // The subscription period of the subscription cluster.
    // 
    // *   Valid values when Period is set to Year: 1, 2, and 3 (integer)
    // *   Valid values when Period is set to Month: 1 to 9 (integer)
    // 
    // > * This parameter is required if the PayType parameter is set to Prepaid.
    // > * Longer subscription periods offer more savings. Purchasing a cluster for one year is more cost-effective than purchasing the cluster for 10 or 11 months.
    std::shared_ptr<string> usedTime_ = nullptr;
    // The virtual private cloud (VPC) ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent zone list.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
