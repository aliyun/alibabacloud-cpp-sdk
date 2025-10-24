// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPREQUESTNETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPREQUESTNETWORKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupRequestNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupRequestNetworkInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupRequestNetworkInfo& obj) { 
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
    CreateAndroidInstanceGroupRequestNetworkInfo() = default ;
    CreateAndroidInstanceGroupRequestNetworkInfo(const CreateAndroidInstanceGroupRequestNetworkInfo &) = default ;
    CreateAndroidInstanceGroupRequestNetworkInfo(CreateAndroidInstanceGroupRequestNetworkInfo &&) = default ;
    CreateAndroidInstanceGroupRequestNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupRequestNetworkInfo() = default ;
    CreateAndroidInstanceGroupRequestNetworkInfo& operator=(const CreateAndroidInstanceGroupRequestNetworkInfo &) = default ;
    CreateAndroidInstanceGroupRequestNetworkInfo& operator=(CreateAndroidInstanceGroupRequestNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->bandwidthPackageName_ == nullptr && return this->cidrBlock_ == nullptr && return this->internetChargeType_ == nullptr && return this->ipRatio_ == nullptr
        && return this->isp_ == nullptr && return this->limitedBandwidth_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr
        && return this->visibleType_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageName Field Functions 
    bool hasBandwidthPackageName() const { return this->bandwidthPackageName_ != nullptr;};
    void deleteBandwidthPackageName() { this->bandwidthPackageName_ = nullptr;};
    inline string bandwidthPackageName() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageName_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setBandwidthPackageName(string bandwidthPackageName) { DARABONBA_PTR_SET_VALUE(bandwidthPackageName_, bandwidthPackageName) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipRatio Field Functions 
    bool hasIpRatio() const { return this->ipRatio_ != nullptr;};
    void deleteIpRatio() { this->ipRatio_ = nullptr;};
    inline int32_t ipRatio() const { DARABONBA_PTR_GET_DEFAULT(ipRatio_, 0) };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setIpRatio(int32_t ipRatio) { DARABONBA_PTR_SET_VALUE(ipRatio_, ipRatio) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // limitedBandwidth Field Functions 
    bool hasLimitedBandwidth() const { return this->limitedBandwidth_ != nullptr;};
    void deleteLimitedBandwidth() { this->limitedBandwidth_ = nullptr;};
    inline int32_t limitedBandwidth() const { DARABONBA_PTR_GET_DEFAULT(limitedBandwidth_, 0) };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setLimitedBandwidth(int32_t limitedBandwidth) { DARABONBA_PTR_SET_VALUE(limitedBandwidth_, limitedBandwidth) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // visibleType Field Functions 
    bool hasVisibleType() const { return this->visibleType_ != nullptr;};
    void deleteVisibleType() { this->visibleType_ = nullptr;};
    inline string visibleType() const { DARABONBA_PTR_GET_DEFAULT(visibleType_, "") };
    inline CreateAndroidInstanceGroupRequestNetworkInfo& setVisibleType(string visibleType) { DARABONBA_PTR_SET_VALUE(visibleType_, visibleType) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> bandwidthPackageName_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<int32_t> ipRatio_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<int32_t> limitedBandwidth_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> visibleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
