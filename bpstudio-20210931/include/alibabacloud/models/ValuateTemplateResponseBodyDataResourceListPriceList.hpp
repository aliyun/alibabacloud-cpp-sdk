// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATARESOURCELISTPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATARESOURCELISTPRICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateResponseBodyDataResourceListPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateResponseBodyDataResourceListPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateResponseBodyDataResourceListPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ValuateTemplateResponseBodyDataResourceListPriceList() = default ;
    ValuateTemplateResponseBodyDataResourceListPriceList(const ValuateTemplateResponseBodyDataResourceListPriceList &) = default ;
    ValuateTemplateResponseBodyDataResourceListPriceList(ValuateTemplateResponseBodyDataResourceListPriceList &&) = default ;
    ValuateTemplateResponseBodyDataResourceListPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateResponseBodyDataResourceListPriceList() = default ;
    ValuateTemplateResponseBodyDataResourceListPriceList& operator=(const ValuateTemplateResponseBodyDataResourceListPriceList &) = default ;
    ValuateTemplateResponseBodyDataResourceListPriceList& operator=(ValuateTemplateResponseBodyDataResourceListPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discountAmount_ == nullptr
        && return this->error_ == nullptr && return this->nodeType_ == nullptr && return this->originalPrice_ == nullptr && return this->priceUnit_ == nullptr && return this->promotionName_ == nullptr
        && return this->resourceId_ == nullptr && return this->tradePrice_ == nullptr && return this->type_ == nullptr; };
    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline float discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float originalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string priceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // promotionName Field Functions 
    bool hasPromotionName() const { return this->promotionName_ != nullptr;};
    void deletePromotionName() { this->promotionName_ = nullptr;};
    inline string promotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ValuateTemplateResponseBodyDataResourceListPriceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The discount amount.
    std::shared_ptr<float> discountAmount_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> error_ = nullptr;
    // The resource type.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The original price.
    std::shared_ptr<float> originalPrice_ = nullptr;
    // The pricing unit.
    std::shared_ptr<string> priceUnit_ = nullptr;
    // The discount information.
    std::shared_ptr<string> promotionName_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The price at which the transaction is made.
    std::shared_ptr<float> tradePrice_ = nullptr;
    // Indicates whether the instance is newly created. Valid values:\\
    // 1: The instance is newly created.\\
    // 2: The instance already exists.\\
    // 0: The price of the instance is not included.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
