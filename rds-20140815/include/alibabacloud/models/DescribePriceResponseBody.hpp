// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfo.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyRules.hpp>
#include <alibabacloud/models/DescribePriceResponseBodyServerlessPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderParams, orderParams_);
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(ServerlessPrice, serverlessPrice_);
      DARABONBA_PTR_TO_JSON(ShowDiscount, showDiscount_);
      DARABONBA_PTR_TO_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_TO_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderParams, orderParams_);
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(ServerlessPrice, serverlessPrice_);
      DARABONBA_PTR_FROM_JSON(ShowDiscount, showDiscount_);
      DARABONBA_PTR_FROM_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_FROM_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderParams_ == nullptr
        && return this->priceInfo_ == nullptr && return this->requestId_ == nullptr && return this->rules_ == nullptr && return this->serverlessPrice_ == nullptr && return this->showDiscount_ == nullptr
        && return this->tradeMaxRCUAmount_ == nullptr && return this->tradeMinRCUAmount_ == nullptr; };
    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string orderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline DescribePriceResponseBody& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribePriceResponseBodyPriceInfo & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribePriceResponseBodyPriceInfo) };
    inline DescribePriceResponseBodyPriceInfo priceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribePriceResponseBodyPriceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(const DescribePriceResponseBodyPriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(DescribePriceResponseBodyPriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribePriceResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, DescribePriceResponseBodyRules) };
    inline DescribePriceResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, DescribePriceResponseBodyRules) };
    inline DescribePriceResponseBody& setRules(const DescribePriceResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribePriceResponseBody& setRules(DescribePriceResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // serverlessPrice Field Functions 
    bool hasServerlessPrice() const { return this->serverlessPrice_ != nullptr;};
    void deleteServerlessPrice() { this->serverlessPrice_ = nullptr;};
    inline const DescribePriceResponseBodyServerlessPrice & serverlessPrice() const { DARABONBA_PTR_GET_CONST(serverlessPrice_, DescribePriceResponseBodyServerlessPrice) };
    inline DescribePriceResponseBodyServerlessPrice serverlessPrice() { DARABONBA_PTR_GET(serverlessPrice_, DescribePriceResponseBodyServerlessPrice) };
    inline DescribePriceResponseBody& setServerlessPrice(const DescribePriceResponseBodyServerlessPrice & serverlessPrice) { DARABONBA_PTR_SET_VALUE(serverlessPrice_, serverlessPrice) };
    inline DescribePriceResponseBody& setServerlessPrice(DescribePriceResponseBodyServerlessPrice && serverlessPrice) { DARABONBA_PTR_SET_RVALUE(serverlessPrice_, serverlessPrice) };


    // showDiscount Field Functions 
    bool hasShowDiscount() const { return this->showDiscount_ != nullptr;};
    void deleteShowDiscount() { this->showDiscount_ = nullptr;};
    inline bool showDiscount() const { DARABONBA_PTR_GET_DEFAULT(showDiscount_, false) };
    inline DescribePriceResponseBody& setShowDiscount(bool showDiscount) { DARABONBA_PTR_SET_VALUE(showDiscount_, showDiscount) };


    // tradeMaxRCUAmount Field Functions 
    bool hasTradeMaxRCUAmount() const { return this->tradeMaxRCUAmount_ != nullptr;};
    void deleteTradeMaxRCUAmount() { this->tradeMaxRCUAmount_ = nullptr;};
    inline float tradeMaxRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMaxRCUAmount_, 0.0) };
    inline DescribePriceResponseBody& setTradeMaxRCUAmount(float tradeMaxRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMaxRCUAmount_, tradeMaxRCUAmount) };


    // tradeMinRCUAmount Field Functions 
    bool hasTradeMinRCUAmount() const { return this->tradeMinRCUAmount_ != nullptr;};
    void deleteTradeMinRCUAmount() { this->tradeMinRCUAmount_ = nullptr;};
    inline float tradeMinRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMinRCUAmount_, 0.0) };
    inline DescribePriceResponseBody& setTradeMinRCUAmount(float tradeMinRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMinRCUAmount_, tradeMinRCUAmount) };


  protected:
    // The order parameters.
    // 
    // >  If the **OrderParamOut** parameter is set to **true**, the value of the OrderParams parameter is returned.
    std::shared_ptr<string> orderParams_ = nullptr;
    // The price information.
    std::shared_ptr<DescribePriceResponseBodyPriceInfo> priceInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the promotion rule.
    std::shared_ptr<DescribePriceResponseBodyRules> rules_ = nullptr;
    // The pricing information about a serverless RDS instance.
    std::shared_ptr<DescribePriceResponseBodyServerlessPrice> serverlessPrice_ = nullptr;
    // Indicates whether discounts can be used.
    std::shared_ptr<bool> showDiscount_ = nullptr;
    // The estimated hourly fee that is calculated based on the maximum number of RCUs.
    std::shared_ptr<float> tradeMaxRCUAmount_ = nullptr;
    // The estimated hourly fee that is calculated based on the minimum number of RCUs.
    std::shared_ptr<float> tradeMinRCUAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
