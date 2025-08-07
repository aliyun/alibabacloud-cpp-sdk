// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICESDETAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICESDETAILINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& operator=(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& operator=(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountAmount_ != nullptr
        && this->originalAmount_ != nullptr && this->resource_ != nullptr && this->tradeAmount_ != nullptr; };
    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline float discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline float originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline float tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    // Discount amount.
    std::shared_ptr<float> discountAmount_ = nullptr;
    // Original price.
    std::shared_ptr<float> originalAmount_ = nullptr;
    // Pricing module identifier.
    std::shared_ptr<string> resource_ = nullptr;
    // Discounted price.
    std::shared_ptr<float> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
