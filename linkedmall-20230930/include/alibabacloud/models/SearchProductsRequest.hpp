// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SearchProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(brandName, brandName_);
      DARABONBA_PTR_TO_JSON(categoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(distributionHighPrice, distributionHighPrice_);
      DARABONBA_PTR_TO_JSON(distributionHighPriceRatio, distributionHighPriceRatio_);
      DARABONBA_PTR_TO_JSON(distributionLowPrice, distributionLowPrice_);
      DARABONBA_PTR_TO_JSON(distributionLowPriceRatio, distributionLowPriceRatio_);
      DARABONBA_PTR_TO_JSON(highMarkPrice, highMarkPrice_);
      DARABONBA_PTR_TO_JSON(highPrice, highPrice_);
      DARABONBA_PTR_TO_JSON(inGroup, inGroup_);
      DARABONBA_PTR_TO_JSON(inGroupEndTime, inGroupEndTime_);
      DARABONBA_PTR_TO_JSON(inGroupStartTime, inGroupStartTime_);
      DARABONBA_PTR_TO_JSON(inventoryRiskLevel, inventoryRiskLevel_);
      DARABONBA_PTR_TO_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_TO_JSON(lowMarkPrice, lowMarkPrice_);
      DARABONBA_PTR_TO_JSON(lowPrice, lowPrice_);
      DARABONBA_PTR_TO_JSON(modifyEndTime, modifyEndTime_);
      DARABONBA_PTR_TO_JSON(modifyStartTime, modifyStartTime_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(productStatus, productStatus_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(taxRate, taxRate_);
      DARABONBA_PTR_TO_JSON(tradeModeAndCredit, tradeModeAndCredit_);
    };
    friend void from_json(const Darabonba::Json& j, SearchProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(brandName, brandName_);
      DARABONBA_PTR_FROM_JSON(categoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(createEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(createStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(distributionHighPrice, distributionHighPrice_);
      DARABONBA_PTR_FROM_JSON(distributionHighPriceRatio, distributionHighPriceRatio_);
      DARABONBA_PTR_FROM_JSON(distributionLowPrice, distributionLowPrice_);
      DARABONBA_PTR_FROM_JSON(distributionLowPriceRatio, distributionLowPriceRatio_);
      DARABONBA_PTR_FROM_JSON(highMarkPrice, highMarkPrice_);
      DARABONBA_PTR_FROM_JSON(highPrice, highPrice_);
      DARABONBA_PTR_FROM_JSON(inGroup, inGroup_);
      DARABONBA_PTR_FROM_JSON(inGroupEndTime, inGroupEndTime_);
      DARABONBA_PTR_FROM_JSON(inGroupStartTime, inGroupStartTime_);
      DARABONBA_PTR_FROM_JSON(inventoryRiskLevel, inventoryRiskLevel_);
      DARABONBA_PTR_FROM_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_FROM_JSON(lowMarkPrice, lowMarkPrice_);
      DARABONBA_PTR_FROM_JSON(lowPrice, lowPrice_);
      DARABONBA_PTR_FROM_JSON(modifyEndTime, modifyEndTime_);
      DARABONBA_PTR_FROM_JSON(modifyStartTime, modifyStartTime_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(productStatus, productStatus_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(taxRate, taxRate_);
      DARABONBA_PTR_FROM_JSON(tradeModeAndCredit, tradeModeAndCredit_);
    };
    SearchProductsRequest() = default ;
    SearchProductsRequest(const SearchProductsRequest &) = default ;
    SearchProductsRequest(SearchProductsRequest &&) = default ;
    SearchProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchProductsRequest() = default ;
    SearchProductsRequest& operator=(const SearchProductsRequest &) = default ;
    SearchProductsRequest& operator=(SearchProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandName_ == nullptr
        && this->categoryIds_ == nullptr && this->createEndTime_ == nullptr && this->createStartTime_ == nullptr && this->distributionHighPrice_ == nullptr && this->distributionHighPriceRatio_ == nullptr
        && this->distributionLowPrice_ == nullptr && this->distributionLowPriceRatio_ == nullptr && this->highMarkPrice_ == nullptr && this->highPrice_ == nullptr && this->inGroup_ == nullptr
        && this->inGroupEndTime_ == nullptr && this->inGroupStartTime_ == nullptr && this->inventoryRiskLevel_ == nullptr && this->lmItemId_ == nullptr && this->lowMarkPrice_ == nullptr
        && this->lowPrice_ == nullptr && this->modifyEndTime_ == nullptr && this->modifyStartTime_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->platform_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr
        && this->productStatus_ == nullptr && this->purchaserId_ == nullptr && this->taxRate_ == nullptr && this->tradeModeAndCredit_ == nullptr; };
    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline SearchProductsRequest& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<string> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<string>) };
    inline vector<string> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<string>) };
    inline SearchProductsRequest& setCategoryIds(const vector<string> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline SearchProductsRequest& setCategoryIds(vector<string> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline string getCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, "") };
    inline SearchProductsRequest& setCreateEndTime(string createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline string getCreateStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, "") };
    inline SearchProductsRequest& setCreateStartTime(string createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // distributionHighPrice Field Functions 
    bool hasDistributionHighPrice() const { return this->distributionHighPrice_ != nullptr;};
    void deleteDistributionHighPrice() { this->distributionHighPrice_ = nullptr;};
    inline int64_t getDistributionHighPrice() const { DARABONBA_PTR_GET_DEFAULT(distributionHighPrice_, 0L) };
    inline SearchProductsRequest& setDistributionHighPrice(int64_t distributionHighPrice) { DARABONBA_PTR_SET_VALUE(distributionHighPrice_, distributionHighPrice) };


    // distributionHighPriceRatio Field Functions 
    bool hasDistributionHighPriceRatio() const { return this->distributionHighPriceRatio_ != nullptr;};
    void deleteDistributionHighPriceRatio() { this->distributionHighPriceRatio_ = nullptr;};
    inline int64_t getDistributionHighPriceRatio() const { DARABONBA_PTR_GET_DEFAULT(distributionHighPriceRatio_, 0L) };
    inline SearchProductsRequest& setDistributionHighPriceRatio(int64_t distributionHighPriceRatio) { DARABONBA_PTR_SET_VALUE(distributionHighPriceRatio_, distributionHighPriceRatio) };


    // distributionLowPrice Field Functions 
    bool hasDistributionLowPrice() const { return this->distributionLowPrice_ != nullptr;};
    void deleteDistributionLowPrice() { this->distributionLowPrice_ = nullptr;};
    inline int64_t getDistributionLowPrice() const { DARABONBA_PTR_GET_DEFAULT(distributionLowPrice_, 0L) };
    inline SearchProductsRequest& setDistributionLowPrice(int64_t distributionLowPrice) { DARABONBA_PTR_SET_VALUE(distributionLowPrice_, distributionLowPrice) };


    // distributionLowPriceRatio Field Functions 
    bool hasDistributionLowPriceRatio() const { return this->distributionLowPriceRatio_ != nullptr;};
    void deleteDistributionLowPriceRatio() { this->distributionLowPriceRatio_ = nullptr;};
    inline int64_t getDistributionLowPriceRatio() const { DARABONBA_PTR_GET_DEFAULT(distributionLowPriceRatio_, 0L) };
    inline SearchProductsRequest& setDistributionLowPriceRatio(int64_t distributionLowPriceRatio) { DARABONBA_PTR_SET_VALUE(distributionLowPriceRatio_, distributionLowPriceRatio) };


    // highMarkPrice Field Functions 
    bool hasHighMarkPrice() const { return this->highMarkPrice_ != nullptr;};
    void deleteHighMarkPrice() { this->highMarkPrice_ = nullptr;};
    inline int64_t getHighMarkPrice() const { DARABONBA_PTR_GET_DEFAULT(highMarkPrice_, 0L) };
    inline SearchProductsRequest& setHighMarkPrice(int64_t highMarkPrice) { DARABONBA_PTR_SET_VALUE(highMarkPrice_, highMarkPrice) };


    // highPrice Field Functions 
    bool hasHighPrice() const { return this->highPrice_ != nullptr;};
    void deleteHighPrice() { this->highPrice_ = nullptr;};
    inline int64_t getHighPrice() const { DARABONBA_PTR_GET_DEFAULT(highPrice_, 0L) };
    inline SearchProductsRequest& setHighPrice(int64_t highPrice) { DARABONBA_PTR_SET_VALUE(highPrice_, highPrice) };


    // inGroup Field Functions 
    bool hasInGroup() const { return this->inGroup_ != nullptr;};
    void deleteInGroup() { this->inGroup_ = nullptr;};
    inline bool getInGroup() const { DARABONBA_PTR_GET_DEFAULT(inGroup_, false) };
    inline SearchProductsRequest& setInGroup(bool inGroup) { DARABONBA_PTR_SET_VALUE(inGroup_, inGroup) };


    // inGroupEndTime Field Functions 
    bool hasInGroupEndTime() const { return this->inGroupEndTime_ != nullptr;};
    void deleteInGroupEndTime() { this->inGroupEndTime_ = nullptr;};
    inline string getInGroupEndTime() const { DARABONBA_PTR_GET_DEFAULT(inGroupEndTime_, "") };
    inline SearchProductsRequest& setInGroupEndTime(string inGroupEndTime) { DARABONBA_PTR_SET_VALUE(inGroupEndTime_, inGroupEndTime) };


    // inGroupStartTime Field Functions 
    bool hasInGroupStartTime() const { return this->inGroupStartTime_ != nullptr;};
    void deleteInGroupStartTime() { this->inGroupStartTime_ = nullptr;};
    inline string getInGroupStartTime() const { DARABONBA_PTR_GET_DEFAULT(inGroupStartTime_, "") };
    inline SearchProductsRequest& setInGroupStartTime(string inGroupStartTime) { DARABONBA_PTR_SET_VALUE(inGroupStartTime_, inGroupStartTime) };


    // inventoryRiskLevel Field Functions 
    bool hasInventoryRiskLevel() const { return this->inventoryRiskLevel_ != nullptr;};
    void deleteInventoryRiskLevel() { this->inventoryRiskLevel_ = nullptr;};
    inline string getInventoryRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(inventoryRiskLevel_, "") };
    inline SearchProductsRequest& setInventoryRiskLevel(string inventoryRiskLevel) { DARABONBA_PTR_SET_VALUE(inventoryRiskLevel_, inventoryRiskLevel) };


    // lmItemId Field Functions 
    bool hasLmItemId() const { return this->lmItemId_ != nullptr;};
    void deleteLmItemId() { this->lmItemId_ = nullptr;};
    inline string getLmItemId() const { DARABONBA_PTR_GET_DEFAULT(lmItemId_, "") };
    inline SearchProductsRequest& setLmItemId(string lmItemId) { DARABONBA_PTR_SET_VALUE(lmItemId_, lmItemId) };


    // lowMarkPrice Field Functions 
    bool hasLowMarkPrice() const { return this->lowMarkPrice_ != nullptr;};
    void deleteLowMarkPrice() { this->lowMarkPrice_ = nullptr;};
    inline int64_t getLowMarkPrice() const { DARABONBA_PTR_GET_DEFAULT(lowMarkPrice_, 0L) };
    inline SearchProductsRequest& setLowMarkPrice(int64_t lowMarkPrice) { DARABONBA_PTR_SET_VALUE(lowMarkPrice_, lowMarkPrice) };


    // lowPrice Field Functions 
    bool hasLowPrice() const { return this->lowPrice_ != nullptr;};
    void deleteLowPrice() { this->lowPrice_ = nullptr;};
    inline int64_t getLowPrice() const { DARABONBA_PTR_GET_DEFAULT(lowPrice_, 0L) };
    inline SearchProductsRequest& setLowPrice(int64_t lowPrice) { DARABONBA_PTR_SET_VALUE(lowPrice_, lowPrice) };


    // modifyEndTime Field Functions 
    bool hasModifyEndTime() const { return this->modifyEndTime_ != nullptr;};
    void deleteModifyEndTime() { this->modifyEndTime_ = nullptr;};
    inline string getModifyEndTime() const { DARABONBA_PTR_GET_DEFAULT(modifyEndTime_, "") };
    inline SearchProductsRequest& setModifyEndTime(string modifyEndTime) { DARABONBA_PTR_SET_VALUE(modifyEndTime_, modifyEndTime) };


    // modifyStartTime Field Functions 
    bool hasModifyStartTime() const { return this->modifyStartTime_ != nullptr;};
    void deleteModifyStartTime() { this->modifyStartTime_ = nullptr;};
    inline string getModifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(modifyStartTime_, "") };
    inline SearchProductsRequest& setModifyStartTime(string modifyStartTime) { DARABONBA_PTR_SET_VALUE(modifyStartTime_, modifyStartTime) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline SearchProductsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline SearchProductsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchProductsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchProductsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline SearchProductsRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline SearchProductsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline SearchProductsRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productStatus Field Functions 
    bool hasProductStatus() const { return this->productStatus_ != nullptr;};
    void deleteProductStatus() { this->productStatus_ = nullptr;};
    inline string getProductStatus() const { DARABONBA_PTR_GET_DEFAULT(productStatus_, "") };
    inline SearchProductsRequest& setProductStatus(string productStatus) { DARABONBA_PTR_SET_VALUE(productStatus_, productStatus) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline SearchProductsRequest& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline string getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, "") };
    inline SearchProductsRequest& setTaxRate(string taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // tradeModeAndCredit Field Functions 
    bool hasTradeModeAndCredit() const { return this->tradeModeAndCredit_ != nullptr;};
    void deleteTradeModeAndCredit() { this->tradeModeAndCredit_ = nullptr;};
    inline string getTradeModeAndCredit() const { DARABONBA_PTR_GET_DEFAULT(tradeModeAndCredit_, "") };
    inline SearchProductsRequest& setTradeModeAndCredit(string tradeModeAndCredit) { DARABONBA_PTR_SET_VALUE(tradeModeAndCredit_, tradeModeAndCredit) };


  protected:
    shared_ptr<string> brandName_ {};
    shared_ptr<vector<string>> categoryIds_ {};
    shared_ptr<string> createEndTime_ {};
    shared_ptr<string> createStartTime_ {};
    shared_ptr<int64_t> distributionHighPrice_ {};
    shared_ptr<int64_t> distributionHighPriceRatio_ {};
    shared_ptr<int64_t> distributionLowPrice_ {};
    shared_ptr<int64_t> distributionLowPriceRatio_ {};
    shared_ptr<int64_t> highMarkPrice_ {};
    shared_ptr<int64_t> highPrice_ {};
    shared_ptr<bool> inGroup_ {};
    shared_ptr<string> inGroupEndTime_ {};
    shared_ptr<string> inGroupStartTime_ {};
    shared_ptr<string> inventoryRiskLevel_ {};
    shared_ptr<string> lmItemId_ {};
    shared_ptr<int64_t> lowMarkPrice_ {};
    shared_ptr<int64_t> lowPrice_ {};
    shared_ptr<string> modifyEndTime_ {};
    shared_ptr<string> modifyStartTime_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> productStatus_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
    shared_ptr<string> taxRate_ {};
    shared_ptr<string> tradeModeAndCredit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
