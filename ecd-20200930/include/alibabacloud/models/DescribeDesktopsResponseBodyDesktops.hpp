// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsDesktopDurationList.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsDisks.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsFotaUpdate.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsOsUpdate.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsResourceGroups.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsSessions.hpp>
#include <alibabacloud/models/DescribeDesktopsResponseBodyDesktopsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleName, bundleName_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DesktopDurationList, desktopDurationList_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(Disks, disks_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(DowngradeQuota, downgradeQuota_);
      DARABONBA_PTR_TO_JSON(DowngradedTimes, downgradedTimes_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FotaUpdate, fotaUpdate_);
      DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(HibernationBeta, hibernationBeta_);
      DARABONBA_PTR_TO_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IsLdap, isLdap_);
      DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteVpcType, officeSiteVpcType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupIdList, policyGroupIdList_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(PolicyGroupNameList, policyGroupNameList_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyName, snapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(StandardStartTime, standardStartTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SupportHibernation, supportHibernation_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleName, bundleName_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DesktopDurationList, desktopDurationList_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(Disks, disks_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(DowngradeQuota, downgradeQuota_);
      DARABONBA_PTR_FROM_JSON(DowngradedTimes, downgradedTimes_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FotaUpdate, fotaUpdate_);
      DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(HibernationBeta, hibernationBeta_);
      DARABONBA_PTR_FROM_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IsLdap, isLdap_);
      DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
      DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteVpcType, officeSiteVpcType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OsUpdate, osUpdate_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupIdList, policyGroupIdList_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupNameList, policyGroupNameList_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyName, snapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(StandardStartTime, standardStartTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SupportHibernation, supportHibernation_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    DescribeDesktopsResponseBodyDesktops() = default ;
    DescribeDesktopsResponseBodyDesktops(const DescribeDesktopsResponseBodyDesktops &) = default ;
    DescribeDesktopsResponseBodyDesktops(DescribeDesktopsResponseBodyDesktops &&) = default ;
    DescribeDesktopsResponseBodyDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktops() = default ;
    DescribeDesktopsResponseBodyDesktops& operator=(const DescribeDesktopsResponseBodyDesktops &) = default ;
    DescribeDesktopsResponseBodyDesktops& operator=(DescribeDesktopsResponseBodyDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindAmount_ != nullptr
        && this->bundleId_ != nullptr && this->bundleName_ != nullptr && this->chargeType_ != nullptr && this->connectionStatus_ != nullptr && this->cpu_ != nullptr
        && this->creationTime_ != nullptr && this->dataDiskCategory_ != nullptr && this->dataDiskSize_ != nullptr && this->desktopDurationList_ != nullptr && this->desktopGroupId_ != nullptr
        && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->desktopStatus_ != nullptr && this->desktopType_ != nullptr && this->directoryId_ != nullptr
        && this->directoryType_ != nullptr && this->disks_ != nullptr && this->domainType_ != nullptr && this->downgradeQuota_ != nullptr && this->downgradedTimes_ != nullptr
        && this->endUserIds_ != nullptr && this->expiredTime_ != nullptr && this->fotaUpdate_ != nullptr && this->gpuCategory_ != nullptr && this->gpuCount_ != nullptr
        && this->gpuDriverVersion_ != nullptr && this->gpuSpec_ != nullptr && this->hibernationBeta_ != nullptr && this->hibernationOptionsConfigured_ != nullptr && this->hostName_ != nullptr
        && this->imageId_ != nullptr && this->isLdap_ != nullptr && this->managementFlag_ != nullptr && this->managementFlags_ != nullptr && this->memory_ != nullptr
        && this->networkInterfaceId_ != nullptr && this->networkInterfaceIp_ != nullptr && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->officeSiteType_ != nullptr
        && this->officeSiteVpcType_ != nullptr && this->osType_ != nullptr && this->osUpdate_ != nullptr && this->platform_ != nullptr && this->policyGroupId_ != nullptr
        && this->policyGroupIdList_ != nullptr && this->policyGroupName_ != nullptr && this->policyGroupNameList_ != nullptr && this->progress_ != nullptr && this->protocolType_ != nullptr
        && this->resourceGroups_ != nullptr && this->sessionType_ != nullptr && this->sessions_ != nullptr && this->snapshotPolicyId_ != nullptr && this->snapshotPolicyName_ != nullptr
        && this->standardStartTime_ != nullptr && this->startTime_ != nullptr && this->supportHibernation_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskSize_ != nullptr
        && this->tags_ != nullptr && this->volumeEncryptionEnabled_ != nullptr && this->volumeEncryptionKey_ != nullptr && this->zoneType_ != nullptr; };
    // bindAmount Field Functions 
    bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
    void deleteBindAmount() { this->bindAmount_ = nullptr;};
    inline int32_t bindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0) };
    inline DescribeDesktopsResponseBodyDesktops& setBindAmount(int32_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleName Field Functions 
    bool hasBundleName() const { return this->bundleName_ != nullptr;};
    void deleteBundleName() { this->bundleName_ = nullptr;};
    inline string bundleName() const { DARABONBA_PTR_GET_DEFAULT(bundleName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setBundleName(string bundleName) { DARABONBA_PTR_SET_VALUE(bundleName_, bundleName) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeDesktopsResponseBodyDesktops& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline string dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // desktopDurationList Field Functions 
    bool hasDesktopDurationList() const { return this->desktopDurationList_ != nullptr;};
    void deleteDesktopDurationList() { this->desktopDurationList_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList> & desktopDurationList() const { DARABONBA_PTR_GET_CONST(desktopDurationList_, vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList> desktopDurationList() { DARABONBA_PTR_GET(desktopDurationList_, vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList>) };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopDurationList(const vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList> & desktopDurationList) { DARABONBA_PTR_SET_VALUE(desktopDurationList_, desktopDurationList) };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopDurationList(vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList> && desktopDurationList) { DARABONBA_PTR_SET_RVALUE(desktopDurationList_, desktopDurationList) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // disks Field Functions 
    bool hasDisks() const { return this->disks_ != nullptr;};
    void deleteDisks() { this->disks_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsDisks> & disks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Models::DescribeDesktopsResponseBodyDesktopsDisks>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsDisks> disks() { DARABONBA_PTR_GET(disks_, vector<Models::DescribeDesktopsResponseBodyDesktopsDisks>) };
    inline DescribeDesktopsResponseBodyDesktops& setDisks(const vector<Models::DescribeDesktopsResponseBodyDesktopsDisks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
    inline DescribeDesktopsResponseBodyDesktops& setDisks(vector<Models::DescribeDesktopsResponseBodyDesktopsDisks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // downgradeQuota Field Functions 
    bool hasDowngradeQuota() const { return this->downgradeQuota_ != nullptr;};
    void deleteDowngradeQuota() { this->downgradeQuota_ = nullptr;};
    inline int64_t downgradeQuota() const { DARABONBA_PTR_GET_DEFAULT(downgradeQuota_, 0L) };
    inline DescribeDesktopsResponseBodyDesktops& setDowngradeQuota(int64_t downgradeQuota) { DARABONBA_PTR_SET_VALUE(downgradeQuota_, downgradeQuota) };


    // downgradedTimes Field Functions 
    bool hasDowngradedTimes() const { return this->downgradedTimes_ != nullptr;};
    void deleteDowngradedTimes() { this->downgradedTimes_ = nullptr;};
    inline int64_t downgradedTimes() const { DARABONBA_PTR_GET_DEFAULT(downgradedTimes_, 0L) };
    inline DescribeDesktopsResponseBodyDesktops& setDowngradedTimes(int64_t downgradedTimes) { DARABONBA_PTR_SET_VALUE(downgradedTimes_, downgradedTimes) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeDesktopsResponseBodyDesktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeDesktopsResponseBodyDesktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fotaUpdate Field Functions 
    bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
    void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
    inline const Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate & fotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate) };
    inline Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate fotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate) };
    inline DescribeDesktopsResponseBodyDesktops& setFotaUpdate(const Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
    inline DescribeDesktopsResponseBodyDesktops& setFotaUpdate(Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


    // gpuCategory Field Functions 
    bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
    void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
    inline int64_t gpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, 0L) };
    inline DescribeDesktopsResponseBodyDesktops& setGpuCategory(int64_t gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeDesktopsResponseBodyDesktops& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // hibernationBeta Field Functions 
    bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
    void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
    inline bool hibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
    inline DescribeDesktopsResponseBodyDesktops& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


    // hibernationOptionsConfigured Field Functions 
    bool hasHibernationOptionsConfigured() const { return this->hibernationOptionsConfigured_ != nullptr;};
    void deleteHibernationOptionsConfigured() { this->hibernationOptionsConfigured_ = nullptr;};
    inline bool hibernationOptionsConfigured() const { DARABONBA_PTR_GET_DEFAULT(hibernationOptionsConfigured_, false) };
    inline DescribeDesktopsResponseBodyDesktops& setHibernationOptionsConfigured(bool hibernationOptionsConfigured) { DARABONBA_PTR_SET_VALUE(hibernationOptionsConfigured_, hibernationOptionsConfigured) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // isLdap Field Functions 
    bool hasIsLdap() const { return this->isLdap_ != nullptr;};
    void deleteIsLdap() { this->isLdap_ = nullptr;};
    inline bool isLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
    inline DescribeDesktopsResponseBodyDesktops& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


    // managementFlag Field Functions 
    bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
    void deleteManagementFlag() { this->managementFlag_ = nullptr;};
    inline string managementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


    // managementFlags Field Functions 
    bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
    void deleteManagementFlags() { this->managementFlags_ = nullptr;};
    inline const vector<string> & managementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
    inline vector<string> managementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
    inline DescribeDesktopsResponseBodyDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
    inline DescribeDesktopsResponseBodyDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeDesktopsResponseBodyDesktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceIp Field Functions 
    bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
    void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
    inline string networkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // officeSiteVpcType Field Functions 
    bool hasOfficeSiteVpcType() const { return this->officeSiteVpcType_ != nullptr;};
    void deleteOfficeSiteVpcType() { this->officeSiteVpcType_ = nullptr;};
    inline string officeSiteVpcType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteVpcType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setOfficeSiteVpcType(string officeSiteVpcType) { DARABONBA_PTR_SET_VALUE(officeSiteVpcType_, officeSiteVpcType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // osUpdate Field Functions 
    bool hasOsUpdate() const { return this->osUpdate_ != nullptr;};
    void deleteOsUpdate() { this->osUpdate_ = nullptr;};
    inline const Models::DescribeDesktopsResponseBodyDesktopsOsUpdate & osUpdate() const { DARABONBA_PTR_GET_CONST(osUpdate_, Models::DescribeDesktopsResponseBodyDesktopsOsUpdate) };
    inline Models::DescribeDesktopsResponseBodyDesktopsOsUpdate osUpdate() { DARABONBA_PTR_GET(osUpdate_, Models::DescribeDesktopsResponseBodyDesktopsOsUpdate) };
    inline DescribeDesktopsResponseBodyDesktops& setOsUpdate(const Models::DescribeDesktopsResponseBodyDesktopsOsUpdate & osUpdate) { DARABONBA_PTR_SET_VALUE(osUpdate_, osUpdate) };
    inline DescribeDesktopsResponseBodyDesktops& setOsUpdate(Models::DescribeDesktopsResponseBodyDesktopsOsUpdate && osUpdate) { DARABONBA_PTR_SET_RVALUE(osUpdate_, osUpdate) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupIdList Field Functions 
    bool hasPolicyGroupIdList() const { return this->policyGroupIdList_ != nullptr;};
    void deletePolicyGroupIdList() { this->policyGroupIdList_ = nullptr;};
    inline const vector<string> & policyGroupIdList() const { DARABONBA_PTR_GET_CONST(policyGroupIdList_, vector<string>) };
    inline vector<string> policyGroupIdList() { DARABONBA_PTR_GET(policyGroupIdList_, vector<string>) };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupIdList(const vector<string> & policyGroupIdList) { DARABONBA_PTR_SET_VALUE(policyGroupIdList_, policyGroupIdList) };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupIdList(vector<string> && policyGroupIdList) { DARABONBA_PTR_SET_RVALUE(policyGroupIdList_, policyGroupIdList) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // policyGroupNameList Field Functions 
    bool hasPolicyGroupNameList() const { return this->policyGroupNameList_ != nullptr;};
    void deletePolicyGroupNameList() { this->policyGroupNameList_ = nullptr;};
    inline const vector<string> & policyGroupNameList() const { DARABONBA_PTR_GET_CONST(policyGroupNameList_, vector<string>) };
    inline vector<string> policyGroupNameList() { DARABONBA_PTR_GET(policyGroupNameList_, vector<string>) };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupNameList(const vector<string> & policyGroupNameList) { DARABONBA_PTR_SET_VALUE(policyGroupNameList_, policyGroupNameList) };
    inline DescribeDesktopsResponseBodyDesktops& setPolicyGroupNameList(vector<string> && policyGroupNameList) { DARABONBA_PTR_SET_RVALUE(policyGroupNameList_, policyGroupNameList) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups>) };
    inline DescribeDesktopsResponseBodyDesktops& setResourceGroups(const vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline DescribeDesktopsResponseBodyDesktops& setResourceGroups(vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::DescribeDesktopsResponseBodyDesktopsSessions>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::DescribeDesktopsResponseBodyDesktopsSessions>) };
    inline DescribeDesktopsResponseBodyDesktops& setSessions(const vector<Models::DescribeDesktopsResponseBodyDesktopsSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeDesktopsResponseBodyDesktops& setSessions(vector<Models::DescribeDesktopsResponseBodyDesktopsSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string snapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // snapshotPolicyName Field Functions 
    bool hasSnapshotPolicyName() const { return this->snapshotPolicyName_ != nullptr;};
    void deleteSnapshotPolicyName() { this->snapshotPolicyName_ = nullptr;};
    inline string snapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyName_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setSnapshotPolicyName(string snapshotPolicyName) { DARABONBA_PTR_SET_VALUE(snapshotPolicyName_, snapshotPolicyName) };


    // standardStartTime Field Functions 
    bool hasStandardStartTime() const { return this->standardStartTime_ != nullptr;};
    void deleteStandardStartTime() { this->standardStartTime_ = nullptr;};
    inline string standardStartTime() const { DARABONBA_PTR_GET_DEFAULT(standardStartTime_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setStandardStartTime(string standardStartTime) { DARABONBA_PTR_SET_VALUE(standardStartTime_, standardStartTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // supportHibernation Field Functions 
    bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
    void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
    inline bool supportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
    inline DescribeDesktopsResponseBodyDesktops& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeDesktopsResponseBodyDesktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDesktopsResponseBodyDesktopsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDesktopsResponseBodyDesktopsTags>) };
    inline vector<Models::DescribeDesktopsResponseBodyDesktopsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDesktopsResponseBodyDesktopsTags>) };
    inline DescribeDesktopsResponseBodyDesktops& setTags(const vector<Models::DescribeDesktopsResponseBodyDesktopsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDesktopsResponseBodyDesktops& setTags(vector<Models::DescribeDesktopsResponseBodyDesktopsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeDesktopsResponseBodyDesktops& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string zoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline DescribeDesktopsResponseBodyDesktops& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // The number of concurrent sessions of each cloud computer in a multi-session cloud computer pool.
    std::shared_ptr<int32_t> bindAmount_ = nullptr;
    // The ID of the template used to create the cloud computer.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The name of the template used to create the cloud computer.
    std::shared_ptr<string> bundleName_ = nullptr;
    // The billing method of the cloud computer.
    // 
    // Valid values:
    // 
    // *   Postpaid (default): pay-as-you-go
    // *   PrePaid: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The connection status of the end user.
    // 
    // Valid values:
    // 
    // *   Unknown
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Connected
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Disconnected
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the cloud computer was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> dataDiskSize_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsDesktopDurationList>> desktopDurationList_ = nullptr;
    // The ID of the cloud computer pool to which cloud computers belong. Default value: null.``
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The cloud computer name.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The cloud computer status.
    std::shared_ptr<string> desktopStatus_ = nullptr;
    // The cloud computer type.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The directory ID, which is the same as the office network ID (OfficeSiteId).
    std::shared_ptr<string> directoryId_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> directoryType_ = nullptr;
    // The information about the disks.
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsDisks>> disks_ = nullptr;
    std::shared_ptr<string> domainType_ = nullptr;
    // The number of times for which the cloud desktop can be downgraded.
    std::shared_ptr<int64_t> downgradeQuota_ = nullptr;
    // The number of times for which the cloud desktop has been downgraded.
    std::shared_ptr<int64_t> downgradedTimes_ = nullptr;
    // The end user IDs.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The time when a subscription cloud computer expired.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The information about the image version of the cloud computer.
    std::shared_ptr<Models::DescribeDesktopsResponseBodyDesktopsFotaUpdate> fotaUpdate_ = nullptr;
    // Indicates whether the cloud computer uses GPUs.
    std::shared_ptr<int64_t> gpuCategory_ = nullptr;
    // The number of GPU cores.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The GPU driver version used by the cloud computer.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The GPU Specifications.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> hibernationBeta_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> hibernationOptionsConfigured_ = nullptr;
    // The hostname of the cloud desktop.
    std::shared_ptr<string> hostName_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<bool> isLdap_ = nullptr;
    // The flag that is used to manage the cloud computer.
    // 
    // Valid values:
    // 
    // *   Migrating: The cloud computer is being migrated.
    // *   Updating: The configurations of the cloud computer are being updated.
    // *   NoFlag: No flags are available.
    std::shared_ptr<string> managementFlag_ = nullptr;
    // The flags that are used to manage the cloud computers.
    std::shared_ptr<vector<string>> managementFlags_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The ID of the supplementary network interface controller (NIC) created by EDS within an RAM user or Active Directory (AD) user. You cannot modify the ID.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The IP address of the supplementary NIC created by EDS within an RAM or AD user.
    std::shared_ptr<string> networkInterfaceIp_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The account type of the office network.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience account
    // *   AD_CONNECTOR: enterprise AD account
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The VPC type of the office network.
    // 
    // Valid values:
    // 
    // *   standard
    // *   customized
    // *   basic
    std::shared_ptr<string> officeSiteVpcType_ = nullptr;
    // The OS that is defined in the desktop template.
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<Models::DescribeDesktopsResponseBodyDesktopsOsUpdate> osUpdate_ = nullptr;
    // The information about the OS platform.
    // 
    // Valid values:
    // 
    // *   Ubuntu
    // *   Windows Server 2022
    // *   UOS
    // *   CentOS
    // *   Windows Server 2019
    // *   Windows Server 2016
    std::shared_ptr<string> platform_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The IDs of the cloud computer policies.
    std::shared_ptr<vector<string>> policyGroupIdList_ = nullptr;
    // The policy name.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    // The names of the cloud computer policies.
    std::shared_ptr<vector<string>> policyGroupNameList_ = nullptr;
    // The progress of creating the cloud computer.
    std::shared_ptr<string> progress_ = nullptr;
    // The protocol.
    // 
    // Valid values:
    // 
    // *   HDX
    // *   ASP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The information about the enterprise resource groups.
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsResourceGroups>> resourceGroups_ = nullptr;
    // The type of the session.
    // 
    // Valid values:
    // 
    // *   SINGLE_SESSION
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MULTIPLE_SESSION
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> sessionType_ = nullptr;
    // The session information about cloud computers connected by end users.
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsSessions>> sessions_ = nullptr;
    // The snapshot policy ID.
    std::shared_ptr<string> snapshotPolicyId_ = nullptr;
    // The name of the snapshot policy.
    std::shared_ptr<string> snapshotPolicyName_ = nullptr;
    // The standard start time.
    std::shared_ptr<string> standardStartTime_ = nullptr;
    // The time when the cloud computer was first started.
    std::shared_ptr<string> startTime_ = nullptr;
    // Indicates whether the cloud desktop supports hibernation.
    std::shared_ptr<bool> supportHibernation_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // Details about the tags.
    std::shared_ptr<vector<Models::DescribeDesktopsResponseBodyDesktopsTags>> tags_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
    // The zone type. Default value: `AvailabilityZone`. This value indicates Alibaba Cloud zones.
    std::shared_ptr<string> zoneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
