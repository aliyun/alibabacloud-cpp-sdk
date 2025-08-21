// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunInstancesRequestDataDisk.hpp>
#include <alibabacloud/models/RunInstancesRequestSystemDisk.hpp>
#include <alibabacloud/models/RunInstancesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeStrategy, instanceChargeStrategy_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_TO_JSON(ScheduleAreaLevel, scheduleAreaLevel_);
      DARABONBA_PTR_TO_JSON(SchedulingPriceStrategy, schedulingPriceStrategy_);
      DARABONBA_PTR_TO_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityId, securityId_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeStrategy, instanceChargeStrategy_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_FROM_JSON(ScheduleAreaLevel, scheduleAreaLevel_);
      DARABONBA_PTR_FROM_JSON(SchedulingPriceStrategy, schedulingPriceStrategy_);
      DARABONBA_PTR_FROM_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityId, securityId_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    RunInstancesRequest() = default ;
    RunInstancesRequest(const RunInstancesRequest &) = default ;
    RunInstancesRequest(RunInstancesRequest &&) = default ;
    RunInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequest() = default ;
    RunInstancesRequest& operator=(const RunInstancesRequest &) = default ;
    RunInstancesRequest& operator=(RunInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->autoReleaseTime_ != nullptr && this->autoRenew_ != nullptr && this->autoUseCoupon_ != nullptr && this->billingCycle_ != nullptr && this->carrier_ != nullptr
        && this->dataDisk_ != nullptr && this->deletionProtection_ != nullptr && this->ensRegionId_ != nullptr && this->hostName_ != nullptr && this->imageId_ != nullptr
        && this->instanceChargeStrategy_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceName_ != nullptr && this->instanceType_ != nullptr && this->internetChargeType_ != nullptr
        && this->internetMaxBandwidthOut_ != nullptr && this->ipType_ != nullptr && this->ipv6AddressCount_ != nullptr && this->keyPairName_ != nullptr && this->netDistrictCode_ != nullptr
        && this->netWorkId_ != nullptr && this->password_ != nullptr && this->passwordInherit_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr
        && this->privateIpAddress_ != nullptr && this->publicIpIdentification_ != nullptr && this->scheduleAreaLevel_ != nullptr && this->schedulingPriceStrategy_ != nullptr && this->schedulingStrategy_ != nullptr
        && this->securityId_ != nullptr && this->spotDuration_ != nullptr && this->spotStrategy_ != nullptr && this->systemDisk_ != nullptr && this->tag_ != nullptr
        && this->uniqueSuffix_ != nullptr && this->userData_ != nullptr && this->vSwitchId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline RunInstancesRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline RunInstancesRequest& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RunInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline RunInstancesRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline RunInstancesRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string carrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline RunInstancesRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<RunInstancesRequestDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<RunInstancesRequestDataDisk>) };
    inline vector<RunInstancesRequestDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<RunInstancesRequestDataDisk>) };
    inline RunInstancesRequest& setDataDisk(const vector<RunInstancesRequestDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline RunInstancesRequest& setDataDisk(vector<RunInstancesRequestDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunInstancesRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline RunInstancesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline RunInstancesRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RunInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeStrategy Field Functions 
    bool hasInstanceChargeStrategy() const { return this->instanceChargeStrategy_ != nullptr;};
    void deleteInstanceChargeStrategy() { this->instanceChargeStrategy_ = nullptr;};
    inline string instanceChargeStrategy() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeStrategy_, "") };
    inline RunInstancesRequest& setInstanceChargeStrategy(string instanceChargeStrategy) { DARABONBA_PTR_SET_VALUE(instanceChargeStrategy_, instanceChargeStrategy) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline RunInstancesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RunInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RunInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline RunInstancesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline RunInstancesRequest& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline RunInstancesRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int64_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0L) };
    inline RunInstancesRequest& setIpv6AddressCount(int64_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline RunInstancesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string netDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline RunInstancesRequest& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netWorkId Field Functions 
    bool hasNetWorkId() const { return this->netWorkId_ != nullptr;};
    void deleteNetWorkId() { this->netWorkId_ = nullptr;};
    inline string netWorkId() const { DARABONBA_PTR_GET_DEFAULT(netWorkId_, "") };
    inline RunInstancesRequest& setNetWorkId(string netWorkId) { DARABONBA_PTR_SET_VALUE(netWorkId_, netWorkId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RunInstancesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline RunInstancesRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline RunInstancesRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RunInstancesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline RunInstancesRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // publicIpIdentification Field Functions 
    bool hasPublicIpIdentification() const { return this->publicIpIdentification_ != nullptr;};
    void deletePublicIpIdentification() { this->publicIpIdentification_ = nullptr;};
    inline bool publicIpIdentification() const { DARABONBA_PTR_GET_DEFAULT(publicIpIdentification_, false) };
    inline RunInstancesRequest& setPublicIpIdentification(bool publicIpIdentification) { DARABONBA_PTR_SET_VALUE(publicIpIdentification_, publicIpIdentification) };


    // scheduleAreaLevel Field Functions 
    bool hasScheduleAreaLevel() const { return this->scheduleAreaLevel_ != nullptr;};
    void deleteScheduleAreaLevel() { this->scheduleAreaLevel_ = nullptr;};
    inline string scheduleAreaLevel() const { DARABONBA_PTR_GET_DEFAULT(scheduleAreaLevel_, "") };
    inline RunInstancesRequest& setScheduleAreaLevel(string scheduleAreaLevel) { DARABONBA_PTR_SET_VALUE(scheduleAreaLevel_, scheduleAreaLevel) };


    // schedulingPriceStrategy Field Functions 
    bool hasSchedulingPriceStrategy() const { return this->schedulingPriceStrategy_ != nullptr;};
    void deleteSchedulingPriceStrategy() { this->schedulingPriceStrategy_ = nullptr;};
    inline string schedulingPriceStrategy() const { DARABONBA_PTR_GET_DEFAULT(schedulingPriceStrategy_, "") };
    inline RunInstancesRequest& setSchedulingPriceStrategy(string schedulingPriceStrategy) { DARABONBA_PTR_SET_VALUE(schedulingPriceStrategy_, schedulingPriceStrategy) };


    // schedulingStrategy Field Functions 
    bool hasSchedulingStrategy() const { return this->schedulingStrategy_ != nullptr;};
    void deleteSchedulingStrategy() { this->schedulingStrategy_ = nullptr;};
    inline string schedulingStrategy() const { DARABONBA_PTR_GET_DEFAULT(schedulingStrategy_, "") };
    inline RunInstancesRequest& setSchedulingStrategy(string schedulingStrategy) { DARABONBA_PTR_SET_VALUE(schedulingStrategy_, schedulingStrategy) };


    // securityId Field Functions 
    bool hasSecurityId() const { return this->securityId_ != nullptr;};
    void deleteSecurityId() { this->securityId_ = nullptr;};
    inline string securityId() const { DARABONBA_PTR_GET_DEFAULT(securityId_, "") };
    inline RunInstancesRequest& setSecurityId(string securityId) { DARABONBA_PTR_SET_VALUE(securityId_, securityId) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline RunInstancesRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline RunInstancesRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const RunInstancesRequestSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, RunInstancesRequestSystemDisk) };
    inline RunInstancesRequestSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, RunInstancesRequestSystemDisk) };
    inline RunInstancesRequest& setSystemDisk(const RunInstancesRequestSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline RunInstancesRequest& setSystemDisk(RunInstancesRequestSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunInstancesRequestTag>) };
    inline vector<RunInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<RunInstancesRequestTag>) };
    inline RunInstancesRequest& setTag(const vector<RunInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunInstancesRequest& setTag(vector<RunInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // uniqueSuffix Field Functions 
    bool hasUniqueSuffix() const { return this->uniqueSuffix_ != nullptr;};
    void deleteUniqueSuffix() { this->uniqueSuffix_ = nullptr;};
    inline bool uniqueSuffix() const { DARABONBA_PTR_GET_DEFAULT(uniqueSuffix_, false) };
    inline RunInstancesRequest& setUniqueSuffix(bool uniqueSuffix) { DARABONBA_PTR_SET_VALUE(uniqueSuffix_, uniqueSuffix) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RunInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RunInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of instances that you want to create. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // The time when to automatically release the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in Coordinated Universal Time (UTC).
    // 
    // *   If the value of `ss` is not `00`, the start time is automatically rounded down to the nearest minute based on the value of `mm`.
    // *   The specified time must be at least one hour later than the current time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> autoReleaseTime_ = nullptr;
    // Specifies whether to enable auto-renewal for the premium bandwidth plan. Valid values:
    // 
    // *   **true**.
    // *   **false** (default).
    // 
    // >  This parameter is not available when InstanceChargeType is set to PostPaid.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Specifies whether to use coupons. Default value: true.
    std::shared_ptr<string> autoUseCoupon_ = nullptr;
    // The billing cycle of computing resources of the instance. Only pay-as-you-go instances are supported. Valid values:
    // 
    // *   **Day**.
    // *   **Month**.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The Internet service provider (ISP).
    // 
    // >  This parameter required if ScheduleAreaLevel is set to Region.\\
    // If you set ScheduleAreaLevel to Region, a node has multiple ISPs, and you do not specify an ISP, then the create instance uses the ISP of the node. If the node has two ISPs, such as China Mobile and China Unicom, the created instance has two ISPs.\\
    // You can call the DescribeRegionIsps operation to query ISPs of the edge node.[](~~2637461~~)
    std::shared_ptr<string> carrier_ = nullptr;
    // The specifications of data disks.
    std::shared_ptr<vector<RunInstancesRequestDataDisk>> dataDisk_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The ID of the node.
    // 
    // >  This parameter is required if ScheduleAreaLevel is set to Region and is not available if ScheduleAreaLevel is set to other values.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image. For ARM PCB-based server instances, leave this parameter empty. For other instances, this parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing policy of the instance. Valid values:
    // 
    // *   **instance**: Bills are generated based on instances.
    // *   If you do not specify this parameter, bills are generated based on users.
    std::shared_ptr<string> instanceChargeStrategy_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid:** pay-as-you-go.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The name of the instance. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // The default value of this parameter is the value of the InstanceId parameter.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The bandwidth billing method. Valid values:
    // 
    // *   **BandwidthByDay**: pay by daily peak bandwidth
    // *   **95BandwidthByMonth**: pay by monthly 95th percentile bandwidth
    // 
    // >  This parameter is required if you purchase an ENS instance for the first time. The value that you specified is used as the default value for subsequent purchases.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum public bandwidth. If the value of this parameter is greater than 0, a public IP address is assigned to the instance.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> internetMaxBandwidthOut_ = nullptr;
    // The type of the IP address. Valid values:
    // 
    // *   **ipv4** (default).
    // *   **ipv6**.
    // *   **ipv4Andipv6** (single stack).
    // *   **ipv4Withipv6** (dual stack).
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<int64_t> ipv6AddressCount_ = nullptr;
    // The name of the key pair.
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The code of the region.
    // 
    // >  This parameter is not available if ScheduleAreaLevel is set to Region and is required if ScheduleAreaLevel is set to other values.
    std::shared_ptr<string> netDistrictCode_ = nullptr;
    // The ID of the network.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs.
    std::shared_ptr<string> netWorkId_ = nullptr;
    // The password that is used to connect to the instance.
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to use the preset password of the image. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The unit of the subscription period.
    // 
    // *   If **PeriodUnit** is set to **Day**, **Period** can only be set to **3**.
    // *   If **PeriodUnit** is **Month**, **Period** can be set to **1 to 9** or **12**.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The unit of the subscription period. Valid values:
    // 
    // *   **Month** (default).
    // *   **Day**.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The private IP address.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs. If you specify a private IP address, the number of instances must be 1. The private IP address takes effect only when the private IP address and the vSwitch ID are not empty.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // Specifies whether to enable public IP address identification. Valid values: true and false. Default value: false.
    std::shared_ptr<bool> publicIpIdentification_ = nullptr;
    // The scheduling level. This parameter specifies area-level scheduling or node-level scheduling. Valid values:
    // 
    // *   **Big**: greater area
    // *   **Middle**: province
    // *   **Small**: city
    // *   **Region**: node
    // 
    // This parameter is required.
    std::shared_ptr<string> scheduleAreaLevel_ = nullptr;
    // The scheduling price policy. Valid values:
    // 
    // *   **PriceHighPriority**: The high price prevails.
    // *   **PriceLowPriority**: The low price prevails.
    std::shared_ptr<string> schedulingPriceStrategy_ = nullptr;
    // The scheduling policy of the taint. Valid values:
    // 
    // *   **Concentrate**
    // *   **Disperse**
    // 
    // >  If ScheduleAreaLevel is set to Region, set this parameter to **Concentrate**. If ScheduleAreaLevel is set to other values, set this parameter to Concentrate or Disperse based on your business requirements.
    std::shared_ptr<string> schedulingStrategy_ = nullptr;
    // The ID of security group.
    std::shared_ptr<string> securityId_ = nullptr;
    // The protection period of the preemptible instance. Unit: hours. Default value: 1. Valid values:
    // 
    // *   1: After a preemptible instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // *   0: After a preemptible instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. Preemptible instances are billed by second. We recommend that you specify an appropriate protection period based on your business requirements.
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The bidding policy for the pay-as-you-go instance. This parameter is valid only when the `InstanceChargeType` parameter is set to `PostPaid`. Valid values:
    // 
    // *   NoSpot: The elastic container instances are pay-as-you-go instances.
    // *   SpotAsPriceGo: The instance is a preemptible instance for which the market price at the time of purchase is automatically used as the bidding price.
    // 
    // Default value: NoSpot.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The specification of the system disk.
    std::shared_ptr<RunInstancesRequestSystemDisk> systemDisk_ = nullptr;
    // The tags.
    std::shared_ptr<vector<RunInstancesRequestTag>> tag_ = nullptr;
    // Specifies whether to append sequential suffixes to the hostname specified by the **HostName** parameter and to the instance name specified by the **InstanceName** parameter. The sequential suffixes range from 001 to 999.
    std::shared_ptr<bool> uniqueSuffix_ = nullptr;
    // The custom data. The maximum data size is 16 KB. You can specify **UserData**. **UserData** must be Base64-encoded.
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the vSwitch.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
