// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTORDER_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultOrder& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
    };
    CommodityValueResultOrder() = default ;
    CommodityValueResultOrder(const CommodityValueResultOrder &) = default ;
    CommodityValueResultOrder(CommodityValueResultOrder &&) = default ;
    CommodityValueResultOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultOrder() = default ;
    CommodityValueResultOrder& operator=(const CommodityValueResultOrder &) = default ;
    CommodityValueResultOrder& operator=(CommodityValueResultOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->tradeAmount_ != nullptr && this->discountAmount_ != nullptr && this->originalAmount_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline CommodityValueResultOrder& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline string tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
    inline CommodityValueResultOrder& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline string discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
    inline CommodityValueResultOrder& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline string originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
    inline CommodityValueResultOrder& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


  protected:
    // The code of the native currency.
    std::shared_ptr<string> currency_ = nullptr;
    // Amount after the discount.
    std::shared_ptr<string> tradeAmount_ = nullptr;
    // The discount amount.
    std::shared_ptr<string> discountAmount_ = nullptr;
    // Amount before the discount.
    std::shared_ptr<string> originalAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
