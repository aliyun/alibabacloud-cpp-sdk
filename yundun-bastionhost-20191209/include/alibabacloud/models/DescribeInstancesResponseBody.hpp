// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->imageVersion_ == nullptr && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr
        && this->internetEndpoint_ == nullptr && this->intranetEndpoint_ == nullptr && this->legacy_ == nullptr && this->licenseCode_ == nullptr && this->planCode_ == nullptr
        && this->publicNetworkAccess_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveVswitchId_ == nullptr && this->startTime_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline Instances& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Instances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Instances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline Instances& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Instances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // internetEndpoint Field Functions 
      bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
      void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
      inline string getInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
      inline Instances& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


      // intranetEndpoint Field Functions 
      bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
      void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
      inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
      inline Instances& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


      // legacy Field Functions 
      bool hasLegacy() const { return this->legacy_ != nullptr;};
      void deleteLegacy() { this->legacy_ = nullptr;};
      inline bool getLegacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
      inline Instances& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


      // licenseCode Field Functions 
      bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
      void deleteLicenseCode() { this->licenseCode_ = nullptr;};
      inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
      inline Instances& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


      // planCode Field Functions 
      bool hasPlanCode() const { return this->planCode_ != nullptr;};
      void deletePlanCode() { this->planCode_ = nullptr;};
      inline string getPlanCode() const { DARABONBA_PTR_GET_DEFAULT(planCode_, "") };
      inline Instances& setPlanCode(string planCode) { DARABONBA_PTR_SET_VALUE(planCode_, planCode) };


      // publicNetworkAccess Field Functions 
      bool hasPublicNetworkAccess() const { return this->publicNetworkAccess_ != nullptr;};
      void deletePublicNetworkAccess() { this->publicNetworkAccess_ = nullptr;};
      inline bool getPublicNetworkAccess() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkAccess_, false) };
      inline Instances& setPublicNetworkAccess(bool publicNetworkAccess) { DARABONBA_PTR_SET_VALUE(publicNetworkAccess_, publicNetworkAccess) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // slaveVswitchId Field Functions 
      bool hasSlaveVswitchId() const { return this->slaveVswitchId_ != nullptr;};
      void deleteSlaveVswitchId() { this->slaveVswitchId_ = nullptr;};
      inline string getSlaveVswitchId() const { DARABONBA_PTR_GET_DEFAULT(slaveVswitchId_, "") };
      inline Instances& setSlaveVswitchId(string slaveVswitchId) { DARABONBA_PTR_SET_VALUE(slaveVswitchId_, slaveVswitchId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Instances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Instances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Instances& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<int64_t> bandWidth_ {};
      // The remarks of the bastion host.
      shared_ptr<string> description_ {};
      // The timestamp when the bastion host expires. Unit: milliseconds.
      shared_ptr<int64_t> expireTime_ {};
      // The image version of the bastion host.
      shared_ptr<string> imageVersion_ {};
      // The bastion host ID.
      shared_ptr<string> instanceId_ {};
      // The status of the bastion host. Valid values:
      // 
      // *   **PENDING**: The bastion host is not initialized.
      // *   **CREATING**: The bastion host is being created.
      // *   **RUNNING**: The bastion host is running.
      // *   **EXPIRED**: The bastion host expired.
      // *   **CREATE_FAILED**: The bastion host fails to be created.
      // *   **UPGRADING**: The configurations of the bastion host are being changed.
      // *   **UPGRADE_FAILED**: The configurations of the bastion host fail to be changed.
      shared_ptr<string> instanceStatus_ {};
      // The public O\\&M address of the bastion host.
      shared_ptr<string> internetEndpoint_ {};
      // The private O\\&M address of the bastion host.
      shared_ptr<string> intranetEndpoint_ {};
      // Indicates whether the bastion host runs an earlier version. Valid values:
      // 
      // *   **true**: The bastion host runs V2 or V3.1.
      // *   **false**: The bastion host runs V3.2.
      shared_ptr<bool> legacy_ {};
      // The license code of the bastion host.
      shared_ptr<string> licenseCode_ {};
      // The edition of the bastion host. Valid values:
      // 
      // *   **cloudbastion**: Basic Edition.
      // *   **cloudbastion_ha**: Enterprise Edition.
      shared_ptr<string> planCode_ {};
      // Indicates whether the bastion host can be accessed from the Internet. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> publicNetworkAccess_ {};
      // The region ID of the bastion host.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the bastion host belongs.
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> slaveVswitchId_ {};
      // The timestamp when the bastion host is purchased or renewed. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The ID of the virtual private cloud (VPC) to which the bastion host belongs.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch to which the bastion host belongs.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeInstancesResponseBody::Instances>) };
    inline vector<DescribeInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeInstancesResponseBody::Instances>) };
    inline DescribeInstancesResponseBody& setInstances(const vector<DescribeInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(vector<DescribeInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the bastion hosts returned.
    shared_ptr<vector<DescribeInstancesResponseBody::Instances>> instances_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of bastion hosts that are queried.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
