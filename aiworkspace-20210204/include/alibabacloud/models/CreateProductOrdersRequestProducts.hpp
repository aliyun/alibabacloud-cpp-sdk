// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUESTPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUESTPRODUCTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProductOrdersRequestProductsInstanceProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateProductOrdersRequestProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductOrdersRequestProducts& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceProperties, instanceProperties_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductOrdersRequestProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceProperties, instanceProperties_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CreateProductOrdersRequestProducts() = default ;
    CreateProductOrdersRequestProducts(const CreateProductOrdersRequestProducts &) = default ;
    CreateProductOrdersRequestProducts(CreateProductOrdersRequestProducts &&) = default ;
    CreateProductOrdersRequestProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductOrdersRequestProducts() = default ;
    CreateProductOrdersRequestProducts& operator=(const CreateProductOrdersRequestProducts &) = default ;
    CreateProductOrdersRequestProducts& operator=(CreateProductOrdersRequestProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->chargeType_ != nullptr && this->duration_ != nullptr && this->instanceProperties_ != nullptr && this->orderType_ != nullptr && this->pricingCycle_ != nullptr
        && this->productCode_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateProductOrdersRequestProducts& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateProductOrdersRequestProducts& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateProductOrdersRequestProducts& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceProperties Field Functions 
    bool hasInstanceProperties() const { return this->instanceProperties_ != nullptr;};
    void deleteInstanceProperties() { this->instanceProperties_ = nullptr;};
    inline const vector<Models::CreateProductOrdersRequestProductsInstanceProperties> & instanceProperties() const { DARABONBA_PTR_GET_CONST(instanceProperties_, vector<Models::CreateProductOrdersRequestProductsInstanceProperties>) };
    inline vector<Models::CreateProductOrdersRequestProductsInstanceProperties> instanceProperties() { DARABONBA_PTR_GET(instanceProperties_, vector<Models::CreateProductOrdersRequestProductsInstanceProperties>) };
    inline CreateProductOrdersRequestProducts& setInstanceProperties(const vector<Models::CreateProductOrdersRequestProductsInstanceProperties> & instanceProperties) { DARABONBA_PTR_SET_VALUE(instanceProperties_, instanceProperties) };
    inline CreateProductOrdersRequestProducts& setInstanceProperties(vector<Models::CreateProductOrdersRequestProductsInstanceProperties> && instanceProperties) { DARABONBA_PTR_SET_RVALUE(instanceProperties_, instanceProperties) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateProductOrdersRequestProducts& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateProductOrdersRequestProducts& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateProductOrdersRequestProducts& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to automatically renew the product.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The billing method. Only POSTPAY is supported.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The purchase duration. You can use this parameter together with pricingCycle. Only 1 is supported.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The properties of the instance.
    // 
    // *   DataWorks_share: [ { "Code": "region", "Value": "cn-shanghai" } ]
    // *   OSS_share: [ { "Code": "commodity_type", "Value": "oss", "Name": "Object Storage Service" }, { "Code": "ord_time", "Value": "1:Hour", "Name": "1 Hour" } ]
    // *   PAI_share: None
    // *   China bid MaxCompute_share: [ { "Code": "region", "Value": "cn-hangzhou" }, { "Code": "odps_specification_type", "Value": "OdpsStandard" }, { "Code": "ord_time", "Value": "1:Hour" } ]
    // *   International bid MaxCompute_share: [ { "Code": "region", "Value": "cn-hangzhou" }, { "Code": "ord_time", "Value": "1:Hour" } ]
    std::shared_ptr<vector<Models::CreateProductOrdersRequestProductsInstanceProperties>> instanceProperties_ = nullptr;
    // The type of the order. Only BUY is supported.
    std::shared_ptr<string> orderType_ = nullptr;
    // The billing cycle. Valid values:
    // 
    // *   Month: The price is calculated every month. DataWorks_share only supports Month.
    // *   Hour: The price is calculated every hour. OSS_share and MaxCompute_share only support Hour.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The product code. Valid values:
    // 
    // *   DataWorks_share: pay-as-you-go DataWorks
    // *   MaxCompute_share: pay-as-you-go MaxCompute
    // *   PAI_share: pay-as-you-go PAI.
    // *   OSS_share: pay-as-you-go OSS
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
