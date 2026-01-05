// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_TO_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_FROM_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateAndroidInstanceGroupRequest() = default ;
    CreateAndroidInstanceGroupRequest(const CreateAndroidInstanceGroupRequest &) = default ;
    CreateAndroidInstanceGroupRequest(CreateAndroidInstanceGroupRequest &&) = default ;
    CreateAndroidInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupRequest() = default ;
    CreateAndroidInstanceGroupRequest& operator=(const CreateAndroidInstanceGroupRequest &) = default ;
    CreateAndroidInstanceGroupRequest& operator=(CreateAndroidInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class NetworkInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageName, bandwidthPackageName_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(IpRatio, ipRatio_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(LimitedBandwidth, limitedBandwidth_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(VisibleType, visibleType_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageName, bandwidthPackageName_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(IpRatio, ipRatio_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(LimitedBandwidth, limitedBandwidth_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(VisibleType, visibleType_);
      };
      NetworkInfo() = default ;
      NetworkInfo(const NetworkInfo &) = default ;
      NetworkInfo(NetworkInfo &&) = default ;
      NetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInfo() = default ;
      NetworkInfo& operator=(const NetworkInfo &) = default ;
      NetworkInfo& operator=(NetworkInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bandwidthPackageName_ == nullptr && this->cidrBlock_ == nullptr && this->internetChargeType_ == nullptr && this->ipRatio_ == nullptr
        && this->isp_ == nullptr && this->limitedBandwidth_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->visibleType_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline NetworkInfo& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline NetworkInfo& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // bandwidthPackageName Field Functions 
      bool hasBandwidthPackageName() const { return this->bandwidthPackageName_ != nullptr;};
      void deleteBandwidthPackageName() { this->bandwidthPackageName_ = nullptr;};
      inline string getBandwidthPackageName() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageName_, "") };
      inline NetworkInfo& setBandwidthPackageName(string bandwidthPackageName) { DARABONBA_PTR_SET_VALUE(bandwidthPackageName_, bandwidthPackageName) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline NetworkInfo& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline NetworkInfo& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // ipRatio Field Functions 
      bool hasIpRatio() const { return this->ipRatio_ != nullptr;};
      void deleteIpRatio() { this->ipRatio_ = nullptr;};
      inline int32_t getIpRatio() const { DARABONBA_PTR_GET_DEFAULT(ipRatio_, 0) };
      inline NetworkInfo& setIpRatio(int32_t ipRatio) { DARABONBA_PTR_SET_VALUE(ipRatio_, ipRatio) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline NetworkInfo& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // limitedBandwidth Field Functions 
      bool hasLimitedBandwidth() const { return this->limitedBandwidth_ != nullptr;};
      void deleteLimitedBandwidth() { this->limitedBandwidth_ = nullptr;};
      inline int32_t getLimitedBandwidth() const { DARABONBA_PTR_GET_DEFAULT(limitedBandwidth_, 0) };
      inline NetworkInfo& setLimitedBandwidth(int32_t limitedBandwidth) { DARABONBA_PTR_SET_VALUE(limitedBandwidth_, limitedBandwidth) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline NetworkInfo& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline NetworkInfo& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline NetworkInfo& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // visibleType Field Functions 
      bool hasVisibleType() const { return this->visibleType_ != nullptr;};
      void deleteVisibleType() { this->visibleType_ = nullptr;};
      inline string getVisibleType() const { DARABONBA_PTR_GET_DEFAULT(visibleType_, "") };
      inline NetworkInfo& setVisibleType(string visibleType) { DARABONBA_PTR_SET_VALUE(visibleType_, visibleType) };


    protected:
      shared_ptr<bool> autoPay_ {};
      shared_ptr<bool> autoRenew_ {};
      shared_ptr<string> bandwidthPackageName_ {};
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> internetChargeType_ {};
      shared_ptr<int32_t> ipRatio_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<int32_t> limitedBandwidth_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<int32_t> period_ {};
      shared_ptr<string> periodUnit_ {};
      shared_ptr<string> visibleType_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthPackageType_ == nullptr && this->bizRegionId_ == nullptr
        && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->enableIpv6_ == nullptr && this->gpuAcceleration_ == nullptr && this->imageId_ == nullptr
        && this->instanceGroupName_ == nullptr && this->instanceGroupSpec_ == nullptr && this->ipv6Bandwidth_ == nullptr && this->keyPairId_ == nullptr && this->networkInfo_ == nullptr
        && this->networkType_ == nullptr && this->numberOfInstances_ == nullptr && this->officeSiteId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->policyGroupId_ == nullptr && this->promotionId_ == nullptr && this->streamMode_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateAndroidInstanceGroupRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAndroidInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAndroidInstanceGroupRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateAndroidInstanceGroupRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline CreateAndroidInstanceGroupRequest& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAndroidInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAndroidInstanceGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAndroidInstanceGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateAndroidInstanceGroupRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline bool getGpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, false) };
    inline CreateAndroidInstanceGroupRequest& setGpuAcceleration(bool gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAndroidInstanceGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string getInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline CreateAndroidInstanceGroupRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string getInstanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline CreateAndroidInstanceGroupRequest& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // ipv6Bandwidth Field Functions 
    bool hasIpv6Bandwidth() const { return this->ipv6Bandwidth_ != nullptr;};
    void deleteIpv6Bandwidth() { this->ipv6Bandwidth_ = nullptr;};
    inline int32_t getIpv6Bandwidth() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bandwidth_, 0) };
    inline CreateAndroidInstanceGroupRequest& setIpv6Bandwidth(int32_t ipv6Bandwidth) { DARABONBA_PTR_SET_VALUE(ipv6Bandwidth_, ipv6Bandwidth) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline CreateAndroidInstanceGroupRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const CreateAndroidInstanceGroupRequest::NetworkInfo & getNetworkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, CreateAndroidInstanceGroupRequest::NetworkInfo) };
    inline CreateAndroidInstanceGroupRequest::NetworkInfo getNetworkInfo() { DARABONBA_PTR_GET(networkInfo_, CreateAndroidInstanceGroupRequest::NetworkInfo) };
    inline CreateAndroidInstanceGroupRequest& setNetworkInfo(const CreateAndroidInstanceGroupRequest::NetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline CreateAndroidInstanceGroupRequest& setNetworkInfo(CreateAndroidInstanceGroupRequest::NetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateAndroidInstanceGroupRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // numberOfInstances Field Functions 
    bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
    void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
    inline int32_t getNumberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, 0) };
    inline CreateAndroidInstanceGroupRequest& setNumberOfInstances(int32_t numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateAndroidInstanceGroupRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAndroidInstanceGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAndroidInstanceGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateAndroidInstanceGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateAndroidInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t getStreamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline CreateAndroidInstanceGroupRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAndroidInstanceGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAndroidInstanceGroupRequest::Tag>) };
    inline vector<CreateAndroidInstanceGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAndroidInstanceGroupRequest::Tag>) };
    inline CreateAndroidInstanceGroupRequest& setTag(const vector<CreateAndroidInstanceGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAndroidInstanceGroupRequest& setTag(vector<CreateAndroidInstanceGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAndroidInstanceGroupRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of instance groups. Default value: 1. Maximum value: 1.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to enable automatic payment. Default value: false.
    // 
    // Valid values:
    // 
    // *   true: enables automatic payment. Make sure that your Alibaba Cloud account has sufficient balance.
    // *   false: disables automatic payment. You must manually complete the payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Default value: false.
    // 
    // Valid values:
    // 
    // *   true: automatically renew resource upon expiration.
    // *   false: manually renew resources upon expiration.
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<string> bandwidthPackageId_ {};
    shared_ptr<string> bandwidthPackageType_ {};
    // The ID of the region. You can call the DescribeRegions operation to query the regions where Cloud Phone is supported.
    // 
    // Valid values:
    // 
    // *   cn-shenzhen: China (Shenzhen).
    // *   cn-beijing: China (Beijing).
    // *   cn-shanghai: China (Shanghai).
    // *   cn-hongkong: China (Hong Kong).
    // *   ap-southeast-1: Singapore.
    // *   cn-hangzhou: China (Hangzhou).
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. The value cannot exceed 100 characters in length.
    shared_ptr<string> clientToken_ {};
    // >  This parameter is not publicly available.
    shared_ptr<bool> enableIpv6_ {};
    // Specifies whether to enable GPU acceleration.
    // 
    // Valid values:
    // 
    // *   true: enables GPU acceleration.
    // *   false (default): disables GPU acceleration.
    shared_ptr<bool> gpuAcceleration_ {};
    // The ID of the image. You can call the [DescribeImageList](https://help.aliyun.com/document_detail/2807324.html) operation to query images.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The name of the instance group.
    // 
    // >  The name can be up to 30 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), or hyphens (-). It must start with letters but cannot start with `http://` or `https://`.
    shared_ptr<string> instanceGroupName_ {};
    // The specifications of the instance group. You can call the [DescribeSpec](https://help.aliyun.com/document_detail/2807299.html) operation to query the available specifications.
    // 
    // Valid values:
    // 
    // *   acp.perf.large: Performance (8 vCPUs, 16 GiB of memory, and 32 GiB of storage.
    // *   acp.basic.small: Lightweight (2 vCPUs, 4 GiB of memory, and 32 GiB of storage).
    // *   acp.std.large: Standard (4 vCPUs, 8 GiB of memory, and 32 GiB of storage).
    // 
    // This parameter is required.
    shared_ptr<string> instanceGroupSpec_ {};
    // >  This parameter is not publicly available.
    shared_ptr<int32_t> ipv6Bandwidth_ {};
    // The ID of the key pair. When you create an instance group and specify a valid key pair ID, all cloud phone instances within the group will automatically be bound to that key pair upon creation. This eliminates the need to manually bind key pairs to individual cloud phone instances.
    // 
    // >  Binding key pairs to cloud phone instances is currently not supported during instance group resizing.
    shared_ptr<string> keyPairId_ {};
    shared_ptr<CreateAndroidInstanceGroupRequest::NetworkInfo> networkInfo_ {};
    shared_ptr<string> networkType_ {};
    // The number of cloud phones in the instance group. Maximum value: 100.
    shared_ptr<int32_t> numberOfInstances_ {};
    // The ID of the network.
    // 
    // *   This parameter is required if you assign a shared network to cloud phones. You can go to the [Network](https://wya.wuying.aliyun.com/network) page of the Cloud Phone console to retrieve the ID of a **shared network**. If no shared network is available in the Cloud Phone console, you can leave this parameter empty. The system automatically creates one when you create an instance group.
    // *   This parameter is required if you assign a virtual private cloud (VPC) to cloud phones. You can go to the [Network](https://wya.wuying.aliyun.com/network) page of the Cloud Phone console to retrieve the ID of a **VPC**. If no VPC is available in the Cloud Phone console, you must first create one.
    shared_ptr<string> officeSiteId_ {};
    // The subscription duration. The unit is specified by PeriodUnit.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    // *   Hour (Note that this unit is supported only by pay-as-you-go.)
    shared_ptr<string> periodUnit_ {};
    // The ID of the policy. You can call the [ListPolicyGroups](https://help.aliyun.com/document_detail/2807352.html) operation to query policies.
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<string> promotionId_ {};
    shared_ptr<int32_t> streamMode_ {};
    // The tags
    shared_ptr<vector<CreateAndroidInstanceGroupRequest::Tag>> tag_ {};
    // The ID of the vSwitch. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/448774.html) operation to query vSwitches.
    // 
    // *   This parameter is not required if you assign a shared network to cloud phones.
    // *   This parameter is required if you assign a VPC to cloud phones. The vSwitch specified by this parameter is used to create cloud phones.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
