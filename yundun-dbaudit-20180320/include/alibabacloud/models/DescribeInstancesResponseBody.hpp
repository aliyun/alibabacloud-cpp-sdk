// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(Legacy, legacy_);
        DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(Operatable, operatable_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_TO_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Renewable, renewable_);
        DARABONBA_PTR_TO_JSON(SeriesCode, seriesCode_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_TO_JSON(Upgradeable, upgradeable_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
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
        DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
        DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(Operatable, operatable_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeStatus, planUpgradeStatus_);
        DARABONBA_PTR_FROM_JSON(PlanUpgradeable, planUpgradeable_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Renewable, renewable_);
        DARABONBA_PTR_FROM_JSON(SeriesCode, seriesCode_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_FROM_JSON(Upgradeable, upgradeable_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->ecsStatus_ == nullptr && this->expireTime_ == nullptr && this->imageVersionName_ == nullptr && this->instanceId_ == nullptr && this->instanceStatus_ == nullptr
        && this->internetEndpoint_ == nullptr && this->internetIp_ == nullptr && this->intranetEndpoint_ == nullptr && this->intranetIp_ == nullptr && this->legacy_ == nullptr
        && this->licenseCode_ == nullptr && this->networkType_ == nullptr && this->operatable_ == nullptr && this->planUpgradeStatus_ == nullptr && this->planUpgradeable_ == nullptr
        && this->regionId_ == nullptr && this->renewable_ == nullptr && this->seriesCode_ == nullptr && this->startTime_ == nullptr && this->upgradeStatus_ == nullptr
        && this->upgradeable_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Instances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ecsStatus Field Functions 
      bool hasEcsStatus() const { return this->ecsStatus_ != nullptr;};
      void deleteEcsStatus() { this->ecsStatus_ = nullptr;};
      inline string getEcsStatus() const { DARABONBA_PTR_GET_DEFAULT(ecsStatus_, "") };
      inline Instances& setEcsStatus(string ecsStatus) { DARABONBA_PTR_SET_VALUE(ecsStatus_, ecsStatus) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Instances& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // imageVersionName Field Functions 
      bool hasImageVersionName() const { return this->imageVersionName_ != nullptr;};
      void deleteImageVersionName() { this->imageVersionName_ = nullptr;};
      inline string getImageVersionName() const { DARABONBA_PTR_GET_DEFAULT(imageVersionName_, "") };
      inline Instances& setImageVersionName(string imageVersionName) { DARABONBA_PTR_SET_VALUE(imageVersionName_, imageVersionName) };


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


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetEndpoint Field Functions 
      bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
      void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
      inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
      inline Instances& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Instances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


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


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline Instances& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // operatable Field Functions 
      bool hasOperatable() const { return this->operatable_ != nullptr;};
      void deleteOperatable() { this->operatable_ = nullptr;};
      inline bool getOperatable() const { DARABONBA_PTR_GET_DEFAULT(operatable_, false) };
      inline Instances& setOperatable(bool operatable) { DARABONBA_PTR_SET_VALUE(operatable_, operatable) };


      // planUpgradeStatus Field Functions 
      bool hasPlanUpgradeStatus() const { return this->planUpgradeStatus_ != nullptr;};
      void deletePlanUpgradeStatus() { this->planUpgradeStatus_ = nullptr;};
      inline int32_t getPlanUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeStatus_, 0) };
      inline Instances& setPlanUpgradeStatus(int32_t planUpgradeStatus) { DARABONBA_PTR_SET_VALUE(planUpgradeStatus_, planUpgradeStatus) };


      // planUpgradeable Field Functions 
      bool hasPlanUpgradeable() const { return this->planUpgradeable_ != nullptr;};
      void deletePlanUpgradeable() { this->planUpgradeable_ = nullptr;};
      inline bool getPlanUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(planUpgradeable_, false) };
      inline Instances& setPlanUpgradeable(bool planUpgradeable) { DARABONBA_PTR_SET_VALUE(planUpgradeable_, planUpgradeable) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // renewable Field Functions 
      bool hasRenewable() const { return this->renewable_ != nullptr;};
      void deleteRenewable() { this->renewable_ = nullptr;};
      inline bool getRenewable() const { DARABONBA_PTR_GET_DEFAULT(renewable_, false) };
      inline Instances& setRenewable(bool renewable) { DARABONBA_PTR_SET_VALUE(renewable_, renewable) };


      // seriesCode Field Functions 
      bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
      void deleteSeriesCode() { this->seriesCode_ = nullptr;};
      inline string getSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
      inline Instances& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Instances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline int32_t getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, 0) };
      inline Instances& setUpgradeStatus(int32_t upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      // upgradeable Field Functions 
      bool hasUpgradeable() const { return this->upgradeable_ != nullptr;};
      void deleteUpgradeable() { this->upgradeable_ = nullptr;};
      inline bool getUpgradeable() const { DARABONBA_PTR_GET_DEFAULT(upgradeable_, false) };
      inline Instances& setUpgradeable(bool upgradeable) { DARABONBA_PTR_SET_VALUE(upgradeable_, upgradeable) };


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
      shared_ptr<bool> legacy_ {};
      shared_ptr<string> licenseCode_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<bool> operatable_ {};
      shared_ptr<int32_t> planUpgradeStatus_ {};
      shared_ptr<bool> planUpgradeable_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<bool> renewable_ {};
      shared_ptr<string> seriesCode_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> upgradeStatus_ {};
      shared_ptr<bool> upgradeable_ {};
      shared_ptr<string> vpcId_ {};
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
    shared_ptr<vector<DescribeInstancesResponseBody::Instances>> instances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
