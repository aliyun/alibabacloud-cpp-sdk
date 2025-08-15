// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODEREQUESTNETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODEREQUESTNETWORKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCloudPhoneNodeRequestNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeRequestNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageName, bandwidthPackageName_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpRatio, ipRatio_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(LimitedBandwidth, limitedBandwidth_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeRequestNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageName, bandwidthPackageName_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpRatio, ipRatio_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(LimitedBandwidth, limitedBandwidth_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
    };
    CreateCloudPhoneNodeRequestNetworkInfo() = default ;
    CreateCloudPhoneNodeRequestNetworkInfo(const CreateCloudPhoneNodeRequestNetworkInfo &) = default ;
    CreateCloudPhoneNodeRequestNetworkInfo(CreateCloudPhoneNodeRequestNetworkInfo &&) = default ;
    CreateCloudPhoneNodeRequestNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeRequestNetworkInfo() = default ;
    CreateCloudPhoneNodeRequestNetworkInfo& operator=(const CreateCloudPhoneNodeRequestNetworkInfo &) = default ;
    CreateCloudPhoneNodeRequestNetworkInfo& operator=(CreateCloudPhoneNodeRequestNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageName_ != nullptr
        && this->cidrBlock_ != nullptr && this->internetChargeType_ != nullptr && this->ipRatio_ != nullptr && this->isp_ != nullptr && this->limitedBandwidth_ != nullptr
        && this->payType_ != nullptr; };
    // bandwidthPackageName Field Functions 
    bool hasBandwidthPackageName() const { return this->bandwidthPackageName_ != nullptr;};
    void deleteBandwidthPackageName() { this->bandwidthPackageName_ = nullptr;};
    inline string bandwidthPackageName() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageName_, "") };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setBandwidthPackageName(string bandwidthPackageName) { DARABONBA_PTR_SET_VALUE(bandwidthPackageName_, bandwidthPackageName) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipRatio Field Functions 
    bool hasIpRatio() const { return this->ipRatio_ != nullptr;};
    void deleteIpRatio() { this->ipRatio_ = nullptr;};
    inline int32_t ipRatio() const { DARABONBA_PTR_GET_DEFAULT(ipRatio_, 0) };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setIpRatio(int32_t ipRatio) { DARABONBA_PTR_SET_VALUE(ipRatio_, ipRatio) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // limitedBandwidth Field Functions 
    bool hasLimitedBandwidth() const { return this->limitedBandwidth_ != nullptr;};
    void deleteLimitedBandwidth() { this->limitedBandwidth_ = nullptr;};
    inline int32_t limitedBandwidth() const { DARABONBA_PTR_GET_DEFAULT(limitedBandwidth_, 0) };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setLimitedBandwidth(int32_t limitedBandwidth) { DARABONBA_PTR_SET_VALUE(limitedBandwidth_, limitedBandwidth) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateCloudPhoneNodeRequestNetworkInfo& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


  protected:
    std::shared_ptr<string> bandwidthPackageName_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<int32_t> ipRatio_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<int32_t> limitedBandwidth_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
