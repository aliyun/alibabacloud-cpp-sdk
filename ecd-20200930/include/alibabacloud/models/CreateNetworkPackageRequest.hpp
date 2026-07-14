// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateNetworkPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChannelCookie, channelCookie_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateNetworkPackageRequest() = default ;
    CreateNetworkPackageRequest(const CreateNetworkPackageRequest &) = default ;
    CreateNetworkPackageRequest(CreateNetworkPackageRequest &&) = default ;
    CreateNetworkPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkPackageRequest() = default ;
    CreateNetworkPackageRequest& operator=(const CreateNetworkPackageRequest &) = default ;
    CreateNetworkPackageRequest& operator=(CreateNetworkPackageRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bandwidth_ == nullptr && this->channelCookie_ == nullptr && this->internetChargeType_ == nullptr && this->officeSiteId_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr && this->regionId_ == nullptr
        && this->resellerOwnerUid_ == nullptr && this->tag_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateNetworkPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateNetworkPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateNetworkPackageRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // channelCookie Field Functions 
    bool hasChannelCookie() const { return this->channelCookie_ != nullptr;};
    void deleteChannelCookie() { this->channelCookie_ = nullptr;};
    inline string getChannelCookie() const { DARABONBA_PTR_GET_DEFAULT(channelCookie_, "") };
    inline CreateNetworkPackageRequest& setChannelCookie(string channelCookie) { DARABONBA_PTR_SET_VALUE(channelCookie_, channelCookie) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateNetworkPackageRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateNetworkPackageRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateNetworkPackageRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateNetworkPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateNetworkPackageRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateNetworkPackageRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateNetworkPackageRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkPackageRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkPackageRequest::Tag>) };
    inline vector<CreateNetworkPackageRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkPackageRequest::Tag>) };
    inline CreateNetworkPackageRequest& setTag(const vector<CreateNetworkPackageRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkPackageRequest& setTag(vector<CreateNetworkPackageRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The bandwidth of the premium bandwidth plan. Unit: Mbit/s.    
    // 
    // - If the premium bandwidth plan uses the subscription billing method, the valid values are 2 to 1000.
    // - If the premium bandwidth plan uses the pay-as-you-go billing method and the billing type is pay-by-data-transfer (PayByTraffic), the valid values are 2 to 200.
    // - If the premium bandwidth plan uses the pay-as-you-go billing method and the billing type is pay-by-bandwidth (PayByBandwidth), the valid values are 2 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bandwidth_ {};
    shared_ptr<string> channelCookie_ {};
    // The billable methods of the premium bandwidth plan.
    // 
    // - If the parameter `PayType` is set to `PrePaid`, valid values:
    //     - PayByBandwidth: billing by fixed bandwidth.
    // - If the parameter `PayType` is set to `PostPaid`, valid values:
    //     - PayByTraffic: billing by data transfer.
    //     - PayByBandwidth: billing by fixed bandwidth.
    shared_ptr<string> internetChargeType_ {};
    // The office network ID.
    shared_ptr<string> officeSiteId_ {};
    // The billing method.
    shared_ptr<string> payType_ {};
    // The subscription duration of the premium bandwidth plan. This parameter takes effect and is required only when PayType is set to PrePaid. Valid values are determined by the PeriodUnit parameter.
    // 
    // - If PeriodUnit is set to Week, the valid value is 1.
    // - If PeriodUnit is set to Month, valid values are 1, 2, 3, and 6.
    // - If PeriodUnit is set to Year, valid values are 1, 2, and 3.
    // 
    // Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration for the premium bandwidth plan. This parameter takes effect and is required only when PayType is set to PrePaid.
    shared_ptr<string> periodUnit_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
    shared_ptr<vector<CreateNetworkPackageRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
