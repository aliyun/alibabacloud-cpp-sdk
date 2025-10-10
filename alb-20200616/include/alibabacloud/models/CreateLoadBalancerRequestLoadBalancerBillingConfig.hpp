// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTLOADBALANCERBILLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTLOADBALANCERBILLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateLoadBalancerRequestLoadBalancerBillingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequestLoadBalancerBillingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequestLoadBalancerBillingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
    };
    CreateLoadBalancerRequestLoadBalancerBillingConfig() = default ;
    CreateLoadBalancerRequestLoadBalancerBillingConfig(const CreateLoadBalancerRequestLoadBalancerBillingConfig &) = default ;
    CreateLoadBalancerRequestLoadBalancerBillingConfig(CreateLoadBalancerRequestLoadBalancerBillingConfig &&) = default ;
    CreateLoadBalancerRequestLoadBalancerBillingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequestLoadBalancerBillingConfig() = default ;
    CreateLoadBalancerRequestLoadBalancerBillingConfig& operator=(const CreateLoadBalancerRequestLoadBalancerBillingConfig &) = default ;
    CreateLoadBalancerRequestLoadBalancerBillingConfig& operator=(CreateLoadBalancerRequestLoadBalancerBillingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageId_ != nullptr
        && this->payType_ != nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateLoadBalancerRequestLoadBalancerBillingConfig& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLoadBalancerRequestLoadBalancerBillingConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


  protected:
    // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing ALB instance.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The billing method of the instance.
    // 
    // Set the value to **PostPay**, which specifies the pay-as-you-go billing method.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
