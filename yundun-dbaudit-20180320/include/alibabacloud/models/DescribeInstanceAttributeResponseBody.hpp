// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EcsStatus, ecsStatus_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ImageVersionName, imageVersionName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(Operatable, operatable_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_TO_JSON(PrivateWhiteList, privateWhiteList_);
        DARABONBA_PTR_TO_JSON(PublicAccessControl, publicAccessControl_);
        DARABONBA_PTR_TO_JSON(PublicWhiteList, publicWhiteList_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Renewable, renewable_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(SeriesCode, seriesCode_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_TO_JSON(Upgradeable, upgradeable_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EcsStatus, ecsStatus_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ImageVersionName, imageVersionName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(Operatable, operatable_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_FROM_JSON(PrivateWhiteList, privateWhiteList_);
        DARABONBA_PTR_FROM_JSON(PublicAccessControl, publicAccessControl_);
        DARABONBA_PTR_FROM_JSON(PublicWhiteList, publicWhiteList_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Renewable, renewable_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(SeriesCode, seriesCode_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_FROM_JSON(Upgradeable, upgradeable_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      InstanceAttribute() = default ;
      InstanceAttribute(const InstanceAttribute &) = default ;
      InstanceAttribute(InstanceAttribute &&) = default ;
      InstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceAttribute() = default ;
      InstanceAttribute& operator=(const InstanceAttribute &) = default ;
      InstanceAttribute& operator=(InstanceAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->description_ == nullptr && this->ecsStatus_ == nullptr && this->expireTime_ == nullptr && this->imageVersionName_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->internetEndpoint_ == nullptr && this->internetIp_ == nullptr && this->intranetEndpoint_ == nullptr && this->intranetIp_ == nullptr
        && this->licenseCode_ == nullptr && this->networkType_ == nullptr && this->operatable_ == nullptr && this->planUpgradeStatus_ == nullptr && this->planUpgradeable_ == nullptr
        && this->privateWhiteList_ == nullptr && this->publicAccessControl_ == nullptr && this->publicWhiteList_ == nullptr && this->regionId_ == nullptr && this->renewable_ == nullptr
        && this->securityGroupIds_ == nullptr && this->seriesCode_ == nullptr && this->startTime_ == nullptr && this->upgradeStatus_ == nullptr && this->upgradeable_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline int32_t getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, 0) };
      inline InstanceAttribute& setAccessType(int32_t accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline InstanceAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ecsStatus Field Functions 
      bool hasEcsStatus() const { return this->ecsStatus_ != nullptr;};
      void deleteEcsStatus() { this->ecsStatus_ = nullptr;};
      inline string getEcsStatus() const { DARABONBA_PTR_GET_DEFAULT(ecsStatus_, "") };
      inline InstanceAttribute& setEcsStatus(string ecsStatus) { DARABONBA_PTR_SET_VALUE(ecsStatus_, ecsStatus) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline InstanceAttribute& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // imageVersionName Field Functions 
      bool hasImageVersionName() const { return this->imageVersionName_ != nullptr;};
      void deleteImageVersionName() { this->imageVersionName_ = nullptr;};
      inline string getImageVersionName() const { DARABONBA_PTR_GET_DEFAULT(imageVersionName_, "") };
      inline InstanceAttribute& setImageVersionName(string imageVersionName) { DARABONBA_PTR_SET_VALUE(imageVersionName_, imageVersionName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline InstanceAttribute& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // internetEndpoint Field Functions 
      bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
      void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
      inline string getInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
      inline InstanceAttribute& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline InstanceAttribute& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetEndpoint Field Functions 
      bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
      void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
      inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
      inline InstanceAttribute& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline InstanceAttribute& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // licenseCode Field Functions 
      bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
      void deleteLicenseCode() { this->licenseCode_ = nullptr;};
      inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
      inline InstanceAttribute& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline InstanceAttribute& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // operatable Field Functions 
      bool hasOperatable() const { return this->operatable_ != nullptr;};
      void deleteOperatable() { this->operatable_ = nullptr;};
      inline bool getOperatable() const { DARABONBA_PTR_GET_DEFAULT(operatable_, false) };
      inline InstanceAttribute& setOperatable(bool operatable) { DARABONBA_PTR_SET_VALUE(operatable_, operatable) };


      // planUpgradeStatus Field Functions 
      bool hasPlanUpgradeStatus() const { return this->planUpgradeStatus_ != nullptr;};
      void deletePlanUpgradeStatus() { this->planUpgradeStatus_ = nullptr;};
      inline int32_t getPlanUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeStatus_, 0) };
      inline InstanceAttribute& setPlanUpgradeStatus(int32_t planUpgradeStatus) { DARABONBA_PTR_SET_VALUE(planUpgradeStatus_, planUpgradeStatus) };


      // planUpgradeable Field Functions 
      bool hasPlanUpgradeable() const { return this->planUpgradeable_ != nullptr;};
      void deletePlanUpgradeable() { this->planUpgradeable_ = nullptr;};
      inline bool getPlanUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeable_, false) };
      inline InstanceAttribute& setPlanUpgradeable(bool planUpgradeable) { DARABONBA_PTR_SET_VALUE(planUpgradeable_, planUpgradeable) };


      // privateWhiteList Field Functions 
      bool hasPrivateWhiteList() const { return this->privateWhiteList_ != nullptr;};
      void deletePrivateWhiteList() { this->privateWhiteList_ = nullptr;};
      inline const vector<string> & getPrivateWhiteList() const { DARABONBA_PTR_GET_CONST(privateWhiteList_, vector<string>) };
      inline vector<string> getPrivateWhiteList() { DARABONBA_PTR_GET(privateWhiteList_, vector<string>) };
      inline InstanceAttribute& setPrivateWhiteList(const vector<string> & privateWhiteList) { DARABONBA_PTR_SET_VALUE(privateWhiteList_, privateWhiteList) };
      inline InstanceAttribute& setPrivateWhiteList(vector<string> && privateWhiteList) { DARABONBA_PTR_SET_RVALUE(privateWhiteList_, privateWhiteList) };


      // publicAccessControl Field Functions 
      bool hasPublicAccessControl() const { return this->publicAccessControl_ != nullptr;};
      void deletePublicAccessControl() { this->publicAccessControl_ = nullptr;};
      inline int32_t getPublicAccessControl() const { DARABONBA_PTR_GET_DEFAULT(publicAccessControl_, 0) };
      inline InstanceAttribute& setPublicAccessControl(int32_t publicAccessControl) { DARABONBA_PTR_SET_VALUE(publicAccessControl_, publicAccessControl) };


      // publicWhiteList Field Functions 
      bool hasPublicWhiteList() const { return this->publicWhiteList_ != nullptr;};
      void deletePublicWhiteList() { this->publicWhiteList_ = nullptr;};
      inline const vector<string> & getPublicWhiteList() const { DARABONBA_PTR_GET_CONST(publicWhiteList_, vector<string>) };
      inline vector<string> getPublicWhiteList() { DARABONBA_PTR_GET(publicWhiteList_, vector<string>) };
      inline InstanceAttribute& setPublicWhiteList(const vector<string> & publicWhiteList) { DARABONBA_PTR_SET_VALUE(publicWhiteList_, publicWhiteList) };
      inline InstanceAttribute& setPublicWhiteList(vector<string> && publicWhiteList) { DARABONBA_PTR_SET_RVALUE(publicWhiteList_, publicWhiteList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // renewable Field Functions 
      bool hasRenewable() const { return this->renewable_ != nullptr;};
      void deleteRenewable() { this->renewable_ = nullptr;};
      inline bool getRenewable() const { DARABONBA_PTR_GET_DEFAULT(renewable_, false) };
      inline InstanceAttribute& setRenewable(bool renewable) { DARABONBA_PTR_SET_VALUE(renewable_, renewable) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline InstanceAttribute& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline InstanceAttribute& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // seriesCode Field Functions 
      bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
      void deleteSeriesCode() { this->seriesCode_ = nullptr;};
      inline string getSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
      inline InstanceAttribute& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline InstanceAttribute& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline int32_t getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, 0) };
      inline InstanceAttribute& setUpgradeStatus(int32_t upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      // upgradeable Field Functions 
      bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
      void deleteUpgradeable() { this->upgradeable_ = nullptr;};
      inline bool getUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, false) };
      inline InstanceAttribute& setUpgradeable(bool upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline InstanceAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline InstanceAttribute& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<int32_t> accessType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> ecsStatus_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> imageVersionName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceStatus_ {};
      shared_ptr<string> internetEndpoint_ {};
      shared_ptr<string> internetIp_ {};
      shared_ptr<string> intranetEndpoint_ {};
      shared_ptr<string> intranetIp_ {};
      shared_ptr<string> licenseCode_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<bool> operatable_ {};
      shared_ptr<int32_t> planUpgradeStatus_ {};
      shared_ptr<bool> planUpgradeable_ {};
      shared_ptr<vector<string>> privateWhiteList_ {};
      shared_ptr<int32_t> publicAccessControl_ {};
      shared_ptr<vector<string>> publicWhiteList_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<bool> renewable_ {};
      shared_ptr<vector<string>> securityGroupIds_ {};
      shared_ptr<string> seriesCode_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> upgradeStatus_ {};
      shared_ptr<bool> upgradeable_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->instanceAttribute_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceAttribute Field Functions 
    bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
    void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBody::InstanceAttribute & getInstanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, DescribeInstanceAttributeResponseBody::InstanceAttribute) };
    inline DescribeInstanceAttributeResponseBody::InstanceAttribute getInstanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, DescribeInstanceAttributeResponseBody::InstanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(const DescribeInstanceAttributeResponseBody::InstanceAttribute & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(DescribeInstanceAttributeResponseBody::InstanceAttribute && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeInstanceAttributeResponseBody::InstanceAttribute> instanceAttribute_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
