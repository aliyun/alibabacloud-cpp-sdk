// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODYRESOURCEPRICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos.hpp>
#include <alibabacloud/models/GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& operator=(const GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& operator=(GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->detailInfos_ != nullptr && this->discountAmount_ != nullptr && this->originalAmount_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr
        && this->resourceArn_ != nullptr && this->rules_ != nullptr && this->tradeAmount_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // detailInfos Field Functions 
    bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
    void deleteDetailInfos() { this->detailInfos_ = nullptr;};
    inline const vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos> & detailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos>) };
    inline vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos> detailInfos() { DARABONBA_PTR_GET(detailInfos_, vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos>) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setDetailInfos(const vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos> & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setDetailInfos(vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos> && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline float discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline float originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules>) };
    inline vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules>) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setRules(const vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setRules(vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline float tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePrices& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    // Currency. Valid values:
    // - CNY: Chinese Yuan.
    // - USD: US Dollar.
    // - JPY: Japanese Yen.
    std::shared_ptr<string> currency_ = nullptr;
    // The price details of the pricing module.
    std::shared_ptr<vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesDetailInfos>> detailInfos_ = nullptr;
    // Discount.
    std::shared_ptr<float> discountAmount_ = nullptr;
    // Original price.
    std::shared_ptr<float> originalAmount_ = nullptr;
    // Renewal duration. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The time unit for the renewal duration, which is the unit of the Period parameter. Valid values: Month, Year. Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Resource ARN (Aliyun Resource Name).
    std::shared_ptr<string> resourceArn_ = nullptr;
    // Promotion details.
    std::shared_ptr<vector<Models::GetServiceInstanceSubscriptionEstimateCostResponseBodyResourcePricesRules>> rules_ = nullptr;
    // Discounted price.
    std::shared_ptr<float> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
