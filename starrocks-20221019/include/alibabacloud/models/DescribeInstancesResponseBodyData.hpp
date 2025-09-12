// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyDataTags.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyDataVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EnableAutoMinorVersionUpgrade, enableAutoMinorVersionUpgrade_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(EnabledAuditLoader, enabledAuditLoader_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(IsolateLeader, isolateLeader_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaintainablePeriod, maintainablePeriod_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_TO_JSON(SecurityGroupManaged, securityGroupManaged_);
      DARABONBA_PTR_TO_JSON(SgId, sgId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EnableAutoMinorVersionUpgrade, enableAutoMinorVersionUpgrade_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(EnabledAuditLoader, enabledAuditLoader_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(IsolateLeader, isolateLeader_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaintainablePeriod, maintainablePeriod_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupManaged, securityGroupManaged_);
      DARABONBA_PTR_FROM_JSON(SgId, sgId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeInstancesResponseBodyData() = default ;
    DescribeInstancesResponseBodyData(const DescribeInstancesResponseBodyData &) = default ;
    DescribeInstancesResponseBodyData(DescribeInstancesResponseBodyData &&) = default ;
    DescribeInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyData() = default ;
    DescribeInstancesResponseBodyData& operator=(const DescribeInstancesResponseBodyData &) = default ;
    DescribeInstancesResponseBodyData& operator=(DescribeInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->architecture_ != nullptr && this->beginTime_ != nullptr && this->enableAutoMinorVersionUpgrade_ != nullptr && this->enableSSL_ != nullptr && this->enabledAuditLoader_ != nullptr
        && this->encrypted_ != nullptr && this->expireTime_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceStatus_ != nullptr
        && this->isolateLeader_ != nullptr && this->kmsKeyId_ != nullptr && this->maintainablePeriod_ != nullptr && this->minorVersion_ != nullptr && this->monitorType_ != nullptr
        && this->ossLocation_ != nullptr && this->packageType_ != nullptr && this->payType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->runMode_ != nullptr && this->runningTime_ != nullptr && this->securityGroupManaged_ != nullptr && this->sgId_ != nullptr && this->tags_ != nullptr
        && this->vSwitches_ != nullptr && this->version_ != nullptr && this->vpcId_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeInstancesResponseBodyData& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeInstancesResponseBodyData& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline DescribeInstancesResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // enableAutoMinorVersionUpgrade Field Functions 
    bool hasEnableAutoMinorVersionUpgrade() const { return this->enableAutoMinorVersionUpgrade_ != nullptr;};
    void deleteEnableAutoMinorVersionUpgrade() { this->enableAutoMinorVersionUpgrade_ = nullptr;};
    inline bool enableAutoMinorVersionUpgrade() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMinorVersionUpgrade_, false) };
    inline DescribeInstancesResponseBodyData& setEnableAutoMinorVersionUpgrade(bool enableAutoMinorVersionUpgrade) { DARABONBA_PTR_SET_VALUE(enableAutoMinorVersionUpgrade_, enableAutoMinorVersionUpgrade) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline DescribeInstancesResponseBodyData& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // enabledAuditLoader Field Functions 
    bool hasEnabledAuditLoader() const { return this->enabledAuditLoader_ != nullptr;};
    void deleteEnabledAuditLoader() { this->enabledAuditLoader_ = nullptr;};
    inline bool enabledAuditLoader() const { DARABONBA_PTR_GET_DEFAULT(enabledAuditLoader_, false) };
    inline DescribeInstancesResponseBodyData& setEnabledAuditLoader(bool enabledAuditLoader) { DARABONBA_PTR_SET_VALUE(enabledAuditLoader_, enabledAuditLoader) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeInstancesResponseBodyData& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeInstancesResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeInstancesResponseBodyData& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // isolateLeader Field Functions 
    bool hasIsolateLeader() const { return this->isolateLeader_ != nullptr;};
    void deleteIsolateLeader() { this->isolateLeader_ = nullptr;};
    inline bool isolateLeader() const { DARABONBA_PTR_GET_DEFAULT(isolateLeader_, false) };
    inline DescribeInstancesResponseBodyData& setIsolateLeader(bool isolateLeader) { DARABONBA_PTR_SET_VALUE(isolateLeader_, isolateLeader) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline DescribeInstancesResponseBodyData& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maintainablePeriod Field Functions 
    bool hasMaintainablePeriod() const { return this->maintainablePeriod_ != nullptr;};
    void deleteMaintainablePeriod() { this->maintainablePeriod_ = nullptr;};
    inline string maintainablePeriod() const { DARABONBA_PTR_GET_DEFAULT(maintainablePeriod_, "") };
    inline DescribeInstancesResponseBodyData& setMaintainablePeriod(string maintainablePeriod) { DARABONBA_PTR_SET_VALUE(maintainablePeriod_, maintainablePeriod) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeInstancesResponseBodyData& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline string monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
    inline DescribeInstancesResponseBodyData& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline DescribeInstancesResponseBodyData& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeInstancesResponseBodyData& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeInstancesResponseBodyData& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstancesResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline DescribeInstancesResponseBodyData& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // runningTime Field Functions 
    bool hasRunningTime() const { return this->runningTime_ != nullptr;};
    void deleteRunningTime() { this->runningTime_ = nullptr;};
    inline int64_t runningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
    inline DescribeInstancesResponseBodyData& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


    // securityGroupManaged Field Functions 
    bool hasSecurityGroupManaged() const { return this->securityGroupManaged_ != nullptr;};
    void deleteSecurityGroupManaged() { this->securityGroupManaged_ = nullptr;};
    inline bool securityGroupManaged() const { DARABONBA_PTR_GET_DEFAULT(securityGroupManaged_, false) };
    inline DescribeInstancesResponseBodyData& setSecurityGroupManaged(bool securityGroupManaged) { DARABONBA_PTR_SET_VALUE(securityGroupManaged_, securityGroupManaged) };


    // sgId Field Functions 
    bool hasSgId() const { return this->sgId_ != nullptr;};
    void deleteSgId() { this->sgId_ = nullptr;};
    inline string sgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
    inline DescribeInstancesResponseBodyData& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeInstancesResponseBodyDataTags>) };
    inline vector<Models::DescribeInstancesResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeInstancesResponseBodyDataTags>) };
    inline DescribeInstancesResponseBodyData& setTags(const vector<Models::DescribeInstancesResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesResponseBodyData& setTags(vector<Models::DescribeInstancesResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyDataVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Models::DescribeInstancesResponseBodyDataVSwitches>) };
    inline vector<Models::DescribeInstancesResponseBodyDataVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Models::DescribeInstancesResponseBodyDataVSwitches>) };
    inline DescribeInstancesResponseBodyData& setVSwitches(const vector<Models::DescribeInstancesResponseBodyDataVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeInstancesResponseBodyData& setVSwitches(vector<Models::DescribeInstancesResponseBodyDataVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeInstancesResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstancesResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> aclId_ = nullptr;
    std::shared_ptr<string> architecture_ = nullptr;
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<bool> enableAutoMinorVersionUpgrade_ = nullptr;
    std::shared_ptr<bool> enableSSL_ = nullptr;
    std::shared_ptr<bool> enabledAuditLoader_ = nullptr;
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<bool> isolateLeader_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<string> maintainablePeriod_ = nullptr;
    std::shared_ptr<string> minorVersion_ = nullptr;
    std::shared_ptr<string> monitorType_ = nullptr;
    std::shared_ptr<string> ossLocation_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> runMode_ = nullptr;
    std::shared_ptr<int64_t> runningTime_ = nullptr;
    std::shared_ptr<bool> securityGroupManaged_ = nullptr;
    std::shared_ptr<string> sgId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyDataTags>> tags_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyDataVSwitches>> vSwitches_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
