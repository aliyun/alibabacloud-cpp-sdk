// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODYPRODUCTITEMSPRODUCTITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODYPRODUCTITEMSPRODUCTITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductsResponseBodyProductItemsProductItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsResponseBodyProductItemsProductItem& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeliveryDate, deliveryDate_);
      DARABONBA_PTR_TO_JSON(DeliveryWay, deliveryWay_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_TO_JSON(SuggestedPrice, suggestedPrice_);
      DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(WarrantyDate, warrantyDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsResponseBodyProductItemsProductItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeliveryDate, deliveryDate_);
      DARABONBA_PTR_FROM_JSON(DeliveryWay, deliveryWay_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationSystem, operationSystem_);
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_FROM_JSON(SuggestedPrice, suggestedPrice_);
      DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(WarrantyDate, warrantyDate_);
    };
    DescribeProductsResponseBodyProductItemsProductItem() = default ;
    DescribeProductsResponseBodyProductItemsProductItem(const DescribeProductsResponseBodyProductItemsProductItem &) = default ;
    DescribeProductsResponseBodyProductItemsProductItem(DescribeProductsResponseBodyProductItemsProductItem &&) = default ;
    DescribeProductsResponseBodyProductItemsProductItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsResponseBodyProductItemsProductItem() = default ;
    DescribeProductsResponseBodyProductItemsProductItem& operator=(const DescribeProductsResponseBodyProductItemsProductItem &) = default ;
    DescribeProductsResponseBodyProductItemsProductItem& operator=(DescribeProductsResponseBodyProductItemsProductItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->code_ != nullptr && this->deliveryDate_ != nullptr && this->deliveryWay_ != nullptr && this->imageUrl_ != nullptr && this->name_ != nullptr
        && this->operationSystem_ != nullptr && this->priceInfo_ != nullptr && this->score_ != nullptr && this->shortDescription_ != nullptr && this->suggestedPrice_ != nullptr
        && this->supplierId_ != nullptr && this->supplierName_ != nullptr && this->tags_ != nullptr && this->targetUrl_ != nullptr && this->warrantyDate_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DescribeProductsResponseBodyProductItemsProductItem& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deliveryDate Field Functions 
    bool hasDeliveryDate() const { return this->deliveryDate_ != nullptr;};
    void deleteDeliveryDate() { this->deliveryDate_ = nullptr;};
    inline string deliveryDate() const { DARABONBA_PTR_GET_DEFAULT(deliveryDate_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setDeliveryDate(string deliveryDate) { DARABONBA_PTR_SET_VALUE(deliveryDate_, deliveryDate) };


    // deliveryWay Field Functions 
    bool hasDeliveryWay() const { return this->deliveryWay_ != nullptr;};
    void deleteDeliveryWay() { this->deliveryWay_ = nullptr;};
    inline string deliveryWay() const { DARABONBA_PTR_GET_DEFAULT(deliveryWay_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setDeliveryWay(string deliveryWay) { DARABONBA_PTR_SET_VALUE(deliveryWay_, deliveryWay) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationSystem Field Functions 
    bool hasOperationSystem() const { return this->operationSystem_ != nullptr;};
    void deleteOperationSystem() { this->operationSystem_ = nullptr;};
    inline string operationSystem() const { DARABONBA_PTR_GET_DEFAULT(operationSystem_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setOperationSystem(string operationSystem) { DARABONBA_PTR_SET_VALUE(operationSystem_, operationSystem) };


    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline string priceInfo() const { DARABONBA_PTR_GET_DEFAULT(priceInfo_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setPriceInfo(string priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string shortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


    // suggestedPrice Field Functions 
    bool hasSuggestedPrice() const { return this->suggestedPrice_ != nullptr;};
    void deleteSuggestedPrice() { this->suggestedPrice_ = nullptr;};
    inline string suggestedPrice() const { DARABONBA_PTR_GET_DEFAULT(suggestedPrice_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setSuggestedPrice(string suggestedPrice) { DARABONBA_PTR_SET_VALUE(suggestedPrice_, suggestedPrice) };


    // supplierId Field Functions 
    bool hasSupplierId() const { return this->supplierId_ != nullptr;};
    void deleteSupplierId() { this->supplierId_ = nullptr;};
    inline int64_t supplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
    inline DescribeProductsResponseBodyProductItemsProductItem& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // warrantyDate Field Functions 
    bool hasWarrantyDate() const { return this->warrantyDate_ != nullptr;};
    void deleteWarrantyDate() { this->warrantyDate_ = nullptr;};
    inline string warrantyDate() const { DARABONBA_PTR_GET_DEFAULT(warrantyDate_, "") };
    inline DescribeProductsResponseBodyProductItemsProductItem& setWarrantyDate(string warrantyDate) { DARABONBA_PTR_SET_VALUE(warrantyDate_, warrantyDate) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> deliveryDate_ = nullptr;
    std::shared_ptr<string> deliveryWay_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operationSystem_ = nullptr;
    std::shared_ptr<string> priceInfo_ = nullptr;
    std::shared_ptr<string> score_ = nullptr;
    std::shared_ptr<string> shortDescription_ = nullptr;
    std::shared_ptr<string> suggestedPrice_ = nullptr;
    std::shared_ptr<int64_t> supplierId_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<string> targetUrl_ = nullptr;
    std::shared_ptr<string> warrantyDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
