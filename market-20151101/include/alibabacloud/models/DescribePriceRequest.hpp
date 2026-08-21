// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodity_ == nullptr
        && this->orderType_ == nullptr; };
    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline string getCommodity() const { DARABONBA_PTR_GET_DEFAULT(commodity_, "") };
    inline DescribePriceRequest& setCommodity(string commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // Serialized commodity information based on the specified OrderType. The CommodityType corresponding to each OrderType is as follows:
    // 
    // INSTANCE_BUY: InstanceBuyCommodity
    // INSTANCE_RENEW: InstanceRenewCommodity
    // INSTANCE_UPGRADE: InstanceUpgradeCommodity
    // The parameters in the example are described as follows:
    // 
    // productCode: The product code.
    // skuCode: The product specification code. For non-image products: prepay for subscription, postpay for pay-as-you-go. For image products: ECS for pay-as-you-go, Package for subscription.
    // components: Specification modules. The version package_version is required, and other modules depend on the product settings.
    // duration: Number of cycles, such as 1, 2, 3...
    // pricingCycle: Cycle unit. Day, Month, or Year.
    // 
    // This parameter is required.
    shared_ptr<string> commodity_ {};
    // Order type. Valid values:
    // 
    // INSTANCE_BUY: Product purchase
    // INSTANCE_RENEW: Instance renewal
    // INSTANCE_UPGRADE: Instance upgrade
    // Note: For renewal-type price inquiries, you must pass InstanceId in the Commodity parameter.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
