// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATARESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATARESOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValuateTemplateResponseBodyDataResourceListPriceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateResponseBodyDataResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PriceList, priceList_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PriceList, priceList_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    ValuateTemplateResponseBodyDataResourceList() = default ;
    ValuateTemplateResponseBodyDataResourceList(const ValuateTemplateResponseBodyDataResourceList &) = default ;
    ValuateTemplateResponseBodyDataResourceList(ValuateTemplateResponseBodyDataResourceList &&) = default ;
    ValuateTemplateResponseBodyDataResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateResponseBodyDataResourceList() = default ;
    ValuateTemplateResponseBodyDataResourceList& operator=(const ValuateTemplateResponseBodyDataResourceList &) = default ;
    ValuateTemplateResponseBodyDataResourceList& operator=(ValuateTemplateResponseBodyDataResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discountAmount_ != nullptr
        && this->error_ != nullptr && this->nodeType_ != nullptr && this->originalPrice_ != nullptr && this->priceList_ != nullptr && this->priceUnit_ != nullptr
        && this->promotionName_ != nullptr && this->tradePrice_ != nullptr; };
    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline double discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceList& setDiscountAmount(double discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ValuateTemplateResponseBodyDataResourceList& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValuateTemplateResponseBodyDataResourceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline double originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceList& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // priceList Field Functions 
    bool hasPriceList() const { return this->priceList_ != nullptr;};
    void deletePriceList() { this->priceList_ = nullptr;};
    inline const vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList> & priceList() const { DARABONBA_PTR_GET_CONST(priceList_, vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList>) };
    inline vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList> priceList() { DARABONBA_PTR_GET(priceList_, vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList>) };
    inline ValuateTemplateResponseBodyDataResourceList& setPriceList(const vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList> & priceList) { DARABONBA_PTR_SET_VALUE(priceList_, priceList) };
    inline ValuateTemplateResponseBodyDataResourceList& setPriceList(vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList> && priceList) { DARABONBA_PTR_SET_RVALUE(priceList_, priceList) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline ValuateTemplateResponseBodyDataResourceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline ValuateTemplateResponseBodyDataResourceList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline double tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceList& setTradePrice(double tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The discount amount.
    std::shared_ptr<double> discountAmount_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> error_ = nullptr;
    // The resource type.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The original price.
    std::shared_ptr<double> originalPrice_ = nullptr;
    // The information about the price.
    std::shared_ptr<vector<Models::ValuateTemplateResponseBodyDataResourceListPriceList>> priceList_ = nullptr;
    // The pricing unit.
    std::shared_ptr<string> priceUnit_ = nullptr;
    // The discount information.
    std::shared_ptr<string> promotionName_ = nullptr;
    // The price at which the transaction is made.
    std::shared_ptr<double> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
