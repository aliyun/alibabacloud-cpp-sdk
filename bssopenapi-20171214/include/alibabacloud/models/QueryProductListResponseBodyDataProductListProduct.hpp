// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODYDATAPRODUCTLISTPRODUCT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODYDATAPRODUCTLISTPRODUCT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryProductListResponseBodyDataProductListProduct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductListResponseBodyDataProductListProduct& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductListResponseBodyDataProductListProduct& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryProductListResponseBodyDataProductListProduct() = default ;
    QueryProductListResponseBodyDataProductListProduct(const QueryProductListResponseBodyDataProductListProduct &) = default ;
    QueryProductListResponseBodyDataProductListProduct(QueryProductListResponseBodyDataProductListProduct &&) = default ;
    QueryProductListResponseBodyDataProductListProduct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductListResponseBodyDataProductListProduct() = default ;
    QueryProductListResponseBodyDataProductListProduct& operator=(const QueryProductListResponseBodyDataProductListProduct &) = default ;
    QueryProductListResponseBodyDataProductListProduct& operator=(QueryProductListResponseBodyDataProductListProduct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->productName_ != nullptr && this->productType_ != nullptr && this->subscriptionType_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryProductListResponseBodyDataProductListProduct& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline QueryProductListResponseBodyDataProductListProduct& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryProductListResponseBodyDataProductListProduct& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryProductListResponseBodyDataProductListProduct& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> productName_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: subscription
    // *   PayAsYouGo: pay-as-you-go
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
