// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemTags.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystem& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointCount, accessPointCount_);
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(Ldap, ldap_);
      DARABONBA_PTR_TO_JSON(MeteredArchiveSize, meteredArchiveSize_);
      DARABONBA_PTR_TO_JSON(MeteredIASize, meteredIASize_);
      DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Packages, packages_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(QuorumVswId, quorumVswId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SupportedFeatures, supportedFeatures_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VscTarget, vscTarget_);
      DARABONBA_PTR_TO_JSON(VswIds, vswIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystem& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointCount, accessPointCount_);
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(Ldap, ldap_);
      DARABONBA_PTR_FROM_JSON(MeteredArchiveSize, meteredArchiveSize_);
      DARABONBA_PTR_FROM_JSON(MeteredIASize, meteredIASize_);
      DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Packages, packages_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(QuorumVswId, quorumVswId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SupportedFeatures, supportedFeatures_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VscTarget, vscTarget_);
      DARABONBA_PTR_FROM_JSON(VswIds, vswIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystem() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystem(const DescribeFileSystemsResponseBodyFileSystemsFileSystem &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystem(DescribeFileSystemsResponseBodyFileSystemsFileSystem &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystem() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystem& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystem &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystem& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointCount_ == nullptr
        && return this->autoSnapshotPolicyId_ == nullptr && return this->bandwidth_ == nullptr && return this->capacity_ == nullptr && return this->chargeType_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->encryptType_ == nullptr && return this->expiredTime_ == nullptr && return this->fileSystemId_ == nullptr && return this->fileSystemType_ == nullptr
        && return this->KMSKeyId_ == nullptr && return this->ldap_ == nullptr && return this->meteredArchiveSize_ == nullptr && return this->meteredIASize_ == nullptr && return this->meteredSize_ == nullptr
        && return this->mountTargets_ == nullptr && return this->options_ == nullptr && return this->packages_ == nullptr && return this->protocolType_ == nullptr && return this->quorumVswId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->storageType_ == nullptr && return this->supportedFeatures_ == nullptr
        && return this->tags_ == nullptr && return this->version_ == nullptr && return this->vpcId_ == nullptr && return this->vscTarget_ == nullptr && return this->vswIds_ == nullptr
        && return this->zoneId_ == nullptr; };
    // accessPointCount Field Functions 
    bool hasAccessPointCount() const { return this->accessPointCount_ != nullptr;};
    void deleteAccessPointCount() { this->accessPointCount_ = nullptr;};
    inline string accessPointCount() const { DARABONBA_PTR_GET_DEFAULT(accessPointCount_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setAccessPointCount(string accessPointCount) { DARABONBA_PTR_SET_VALUE(accessPointCount_, accessPointCount) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // ldap Field Functions 
    bool hasLdap() const { return this->ldap_ != nullptr;};
    void deleteLdap() { this->ldap_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap & ldap() const { DARABONBA_PTR_GET_CONST(ldap_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap ldap() { DARABONBA_PTR_GET(ldap_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setLdap(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap & ldap) { DARABONBA_PTR_SET_VALUE(ldap_, ldap) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setLdap(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap && ldap) { DARABONBA_PTR_SET_RVALUE(ldap_, ldap) };


    // meteredArchiveSize Field Functions 
    bool hasMeteredArchiveSize() const { return this->meteredArchiveSize_ != nullptr;};
    void deleteMeteredArchiveSize() { this->meteredArchiveSize_ = nullptr;};
    inline int64_t meteredArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(meteredArchiveSize_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setMeteredArchiveSize(int64_t meteredArchiveSize) { DARABONBA_PTR_SET_VALUE(meteredArchiveSize_, meteredArchiveSize) };


    // meteredIASize Field Functions 
    bool hasMeteredIASize() const { return this->meteredIASize_ != nullptr;};
    void deleteMeteredIASize() { this->meteredIASize_ = nullptr;};
    inline int64_t meteredIASize() const { DARABONBA_PTR_GET_DEFAULT(meteredIASize_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setMeteredIASize(int64_t meteredIASize) { DARABONBA_PTR_SET_VALUE(meteredIASize_, meteredIASize) };


    // meteredSize Field Functions 
    bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
    void deleteMeteredSize() { this->meteredSize_ = nullptr;};
    inline int64_t meteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


    // mountTargets Field Functions 
    bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
    void deleteMountTargets() { this->mountTargets_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets & mountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets mountTargets() { DARABONBA_PTR_GET(mountTargets_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setMountTargets(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setMountTargets(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions & options() const { DARABONBA_PTR_GET_CONST(options_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions options() { DARABONBA_PTR_GET(options_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setOptions(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setOptions(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // packages Field Functions 
    bool hasPackages() const { return this->packages_ != nullptr;};
    void deletePackages() { this->packages_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages & packages() const { DARABONBA_PTR_GET_CONST(packages_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages packages() { DARABONBA_PTR_GET(packages_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setPackages(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages & packages) { DARABONBA_PTR_SET_VALUE(packages_, packages) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setPackages(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages && packages) { DARABONBA_PTR_SET_RVALUE(packages_, packages) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // quorumVswId Field Functions 
    bool hasQuorumVswId() const { return this->quorumVswId_ != nullptr;};
    void deleteQuorumVswId() { this->quorumVswId_ = nullptr;};
    inline string quorumVswId() const { DARABONBA_PTR_GET_DEFAULT(quorumVswId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setQuorumVswId(string quorumVswId) { DARABONBA_PTR_SET_VALUE(quorumVswId_, quorumVswId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // supportedFeatures Field Functions 
    bool hasSupportedFeatures() const { return this->supportedFeatures_ != nullptr;};
    void deleteSupportedFeatures() { this->supportedFeatures_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures & supportedFeatures() const { DARABONBA_PTR_GET_CONST(supportedFeatures_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures supportedFeatures() { DARABONBA_PTR_GET(supportedFeatures_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setSupportedFeatures(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures & supportedFeatures) { DARABONBA_PTR_SET_VALUE(supportedFeatures_, supportedFeatures) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setSupportedFeatures(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures && supportedFeatures) { DARABONBA_PTR_SET_RVALUE(supportedFeatures_, supportedFeatures) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setTags(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setTags(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vscTarget Field Functions 
    bool hasVscTarget() const { return this->vscTarget_ != nullptr;};
    void deleteVscTarget() { this->vscTarget_ = nullptr;};
    inline string vscTarget() const { DARABONBA_PTR_GET_DEFAULT(vscTarget_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setVscTarget(string vscTarget) { DARABONBA_PTR_SET_VALUE(vscTarget_, vscTarget) };


    // vswIds Field Functions 
    bool hasVswIds() const { return this->vswIds_ != nullptr;};
    void deleteVswIds() { this->vswIds_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds & vswIds() const { DARABONBA_PTR_GET_CONST(vswIds_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds vswIds() { DARABONBA_PTR_GET(vswIds_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setVswIds(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds & vswIds) { DARABONBA_PTR_SET_VALUE(vswIds_, vswIds) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setVswIds(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds && vswIds) { DARABONBA_PTR_SET_RVALUE(vswIds_, vswIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Number of access points.
    std::shared_ptr<string> accessPointCount_ = nullptr;
    // The ID of the automatic snapshot policy.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The bandwidth of the file system.
    // 
    // Unit: MB/s. This parameter is unavailable for General-purpose NAS file systems.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The capacity of the file system.
    // 
    // Unit: GiB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   Subscription
    // *   PayAsYouGo
    // *   Package: storage plan
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the file system was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the file system.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the data in the file system is encrypted.
    // 
    // Valid values:
    // 
    // *   0: The data in the file system is not encrypted.
    // *   1: A NAS-managed key is used to encrypt the data in the file system.
    // *   2: A KMS-managed key is used to encrypt the data in the file system.
    std::shared_ptr<int32_t> encryptType_ = nullptr;
    // The time when the file system expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The file system type.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose NAS file system.
    // *   extreme: Extreme NAS file system.
    // *   cpfs: CPFS file system.
    // 
    // >  CPFS file systems are available only on the China site (aliyun.com).
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The ID of the key that is managed by Key Management Service (KMS).
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The Lightweight Directory Access Protocol (LDAP) configurations.
    // 
    // This parameter is available only for CPFS file systems.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap> ldap_ = nullptr;
    // Archive storage usage.
    // 
    // Unit: Byte.
    std::shared_ptr<int64_t> meteredArchiveSize_ = nullptr;
    // The storage usage of the Infrequent Access (IA) storage medium.
    // 
    // Unit: bytes.
    std::shared_ptr<int64_t> meteredIASize_ = nullptr;
    // The storage usage of the file system.
    // 
    // The value of this parameter is the maximum storage usage of the file system over the last hour. Unit: bytes.
    std::shared_ptr<int64_t> meteredSize_ = nullptr;
    // The queried mount targets.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargets> mountTargets_ = nullptr;
    // The options.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions> options_ = nullptr;
    // The information about storage plans.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemPackages> packages_ = nullptr;
    // The protocol type of the file system.
    // 
    // Valid values:
    // 
    // *   NFS: Network File System.
    // *   SMB: Server Message Block.
    // *   cpfs: The protocol type supported by the CPFS file system.
    // 
    // >  CPFS file systems are available only on the China site (aliyun.com).
    std::shared_ptr<string> protocolType_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> quorumVswId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the file system. Valid values:
    // - Pending: The file system is being created or modified.
    // - Running: The file system is available. Before you create a mount target for the file system, make sure that the file system is in the Running state.
    // - Stopped: The file system is unavailable.
    // - Extending: The file system is being scaled up.
    // - Stopping: The file system is being stopped.
    // - Deleting: The file system is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The storage type.
    // 
    // Valid values:
    // - Valid values for General-purpose NAS file systems: Capacity,Premium and Performance.
    // - Valid values for Extreme NAS file systems: standard and advance.
    // - Valid values for CPFS file systems: advance_100 (100 MB/s/TiB baseline) and advance_200 (200 MB/s/TiB baseline).
    //  > CPFS file systems are available only on the China site (aliyun.com).
    std::shared_ptr<string> storageType_ = nullptr;
    // The features that are supported by the file system.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemSupportedFeatures> supportedFeatures_ = nullptr;
    // The tags that are attached to the file system.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemTags> tags_ = nullptr;
    // The version number of the file system.
    // 
    // This parameter is available only for Extreme NAS file systems and CPFS file systems.
    std::shared_ptr<string> version_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> vscTarget_ = nullptr;
    // The information about vSwitch.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds> vswIds_ = nullptr;
    // The ID of the zone where the file system resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
