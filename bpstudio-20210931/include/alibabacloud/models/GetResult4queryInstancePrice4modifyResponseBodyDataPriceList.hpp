// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODYDATAPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODYDATAPRICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList(const GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList(GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList &&) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& operator=(const GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& operator=(GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountAmount_ != nullptr
        && this->error_ != nullptr && this->nodeType_ != nullptr && this->originalAmount_ != nullptr && this->priceUnit_ != nullptr && this->promotionName_ != nullptr
        && this->tradeAmount_ != nullptr; };
    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline double discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setDiscountAmount(double discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline double originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setOriginalAmount(double originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline double tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList& setTradeAmount(double tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    std::shared_ptr<double> discountAmount_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<double> originalAmount_ = nullptr;
    std::shared_ptr<string> priceUnit_ = nullptr;
    std::shared_ptr<string> promotionName_ = nullptr;
    std::shared_ptr<double> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
