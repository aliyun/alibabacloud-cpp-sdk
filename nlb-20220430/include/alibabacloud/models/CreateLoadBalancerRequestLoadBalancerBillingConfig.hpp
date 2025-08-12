// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTLOADBALANCERBILLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUESTLOADBALANCERBILLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateLoadBalancerRequestLoadBalancerBillingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequestLoadBalancerBillingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PayType, payType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequestLoadBalancerBillingConfig& obj) { 
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
    virtual bool empty() const override { this->payType_ != nullptr; };
    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLoadBalancerRequestLoadBalancerBillingConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


  protected:
    // The billing method of the NLB instance.
    // 
    // Set the value to **PostPay**, which specifies the pay-as-you-go billing method.
    std::shared_ptr<string> payType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
