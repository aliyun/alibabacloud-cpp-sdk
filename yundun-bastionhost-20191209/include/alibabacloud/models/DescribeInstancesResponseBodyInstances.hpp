// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Legacy, legacy_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(PlanCode, planCode_);
      DARABONBA_PTR_TO_JSON(PublicNetworkAccess, publicNetworkAccess_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(PlanCode, planCode_);
      DARABONBA_PTR_FROM_JSON(PublicNetworkAccess, publicNetworkAccess_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveVswitchId, slaveVswitchId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances(DescribeInstancesResponseBodyInstances &&) = default ;
    DescribeInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances& operator=(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances& operator=(DescribeInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandWidth_ == nullptr
        && return this->description_ == nullptr && return this->expireTime_ == nullptr && return this->imageVersion_ == nullptr && return this->instanceId_ == nullptr && return this->instanceStatus_ == nullptr
        && return this->internetEndpoint_ == nullptr && return this->intranetEndpoint_ == nullptr && return this->legacy_ == nullptr && return this->licenseCode_ == nullptr && return this->planCode_ == nullptr
        && return this->publicNetworkAccess_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->slaveVswitchId_ == nullptr && return this->startTime_ == nullptr
        && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr; };
    // bandWidth Field Functions 
    bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
    void deleteBandWidth() { this->bandWidth_ = nullptr;};
    inline int64_t bandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeInstancesResponseBodyInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeInstancesResponseBodyInstances& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeInstancesResponseBodyInstances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string internetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline DescribeInstancesResponseBodyInstances& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline DescribeInstancesResponseBodyInstances& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // legacy Field Functions 
    bool hasLegacy() const { return this->legacy_ != nullptr;};
    void deleteLegacy() { this->legacy_ = nullptr;};
    inline bool legacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
    inline DescribeInstancesResponseBodyInstances& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeInstancesResponseBodyInstances& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // planCode Field Functions 
    bool hasPlanCode() const { return this->planCode_ != nullptr;};
    void deletePlanCode() { this->planCode_ = nullptr;};
    inline string planCode() const { DARABONBA_PTR_GET_DEFAULT(planCode_, "") };
    inline DescribeInstancesResponseBodyInstances& setPlanCode(string planCode) { DARABONBA_PTR_SET_VALUE(planCode_, planCode) };


    // publicNetworkAccess Field Functions 
    bool hasPublicNetworkAccess() const { return this->publicNetworkAccess_ != nullptr;};
    void deletePublicNetworkAccess() { this->publicNetworkAccess_ = nullptr;};
    inline bool publicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccess_, false) };
    inline DescribeInstancesResponseBodyInstances& setPublicNetworkAccess(bool publicNetworkAccess) { DARABONBA_PTR_SET_VALUE(publicNetworkAccess_, publicNetworkAccess) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstancesResponseBodyInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesResponseBodyInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveVswitchId Field Functions 
    bool hasSlaveVswitchId() const { return this->slaveVswitchId_ != nullptr;};
    void deleteSlaveVswitchId() { this->slaveVswitchId_ = nullptr;};
    inline string slaveVswitchId() const { DARABONBA_PTR_GET_DEFAULT(slaveVswitchId_, "") };
    inline DescribeInstancesResponseBodyInstances& setSlaveVswitchId(string slaveVswitchId) { DARABONBA_PTR_SET_VALUE(slaveVswitchId_, slaveVswitchId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstancesResponseBodyInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeInstancesResponseBodyInstances& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<int64_t> bandWidth_ = nullptr;
    // The remarks of the bastion host.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp when the bastion host expires. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The image version of the bastion host.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The bastion host ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the bastion host. Valid values:
    // 
    // *   **PENDING**: The bastion host is not initialized.
    // *   **CREATING**: The bastion host is being created.
    // *   **RUNNING**: The bastion host is running.
    // *   **EXPIRED**: The bastion host expired.
    // *   **CREATE_FAILED**: The bastion host fails to be created.
    // *   **UPGRADING**: The configurations of the bastion host are being changed.
    // *   **UPGRADE_FAILED**: The configurations of the bastion host fail to be changed.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The public O\\&M address of the bastion host.
    std::shared_ptr<string> internetEndpoint_ = nullptr;
    // The private O\\&M address of the bastion host.
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    // Indicates whether the bastion host runs an earlier version. Valid values:
    // 
    // *   **true**: The bastion host runs V2 or V3.1.
    // *   **false**: The bastion host runs V3.2.
    std::shared_ptr<bool> legacy_ = nullptr;
    // The license code of the bastion host.
    std::shared_ptr<string> licenseCode_ = nullptr;
    // The edition of the bastion host. Valid values:
    // 
    // *   **cloudbastion**: Basic Edition.
    // *   **cloudbastion_ha**: Enterprise Edition.
    std::shared_ptr<string> planCode_ = nullptr;
    // Indicates whether the bastion host can be accessed from the Internet. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> publicNetworkAccess_ = nullptr;
    // The region ID of the bastion host.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the bastion host belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> slaveVswitchId_ = nullptr;
    // The timestamp when the bastion host is purchased or renewed. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the bastion host belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch to which the bastion host belongs.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
