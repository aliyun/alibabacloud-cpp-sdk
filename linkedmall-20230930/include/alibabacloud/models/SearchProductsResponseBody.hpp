// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPRODUCTSRESPONSEBODY_HPP_
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
  class SearchProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    SearchProductsResponseBody() = default ;
    SearchProductsResponseBody(const SearchProductsResponseBody &) = default ;
    SearchProductsResponseBody(SearchProductsResponseBody &&) = default ;
    SearchProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchProductsResponseBody() = default ;
    SearchProductsResponseBody& operator=(const SearchProductsResponseBody &) = default ;
    SearchProductsResponseBody& operator=(SearchProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(bandName, bandName_);
        DARABONBA_PTR_TO_JSON(canNotSellReason, canNotSellReason_);
        DARABONBA_PTR_TO_JSON(canSell, canSell_);
        DARABONBA_PTR_TO_JSON(categoryChain, categoryChain_);
        DARABONBA_PTR_TO_JSON(credit, credit_);
        DARABONBA_PTR_TO_JSON(diffPrice, diffPrice_);
        DARABONBA_PTR_TO_JSON(distributionPrice, distributionPrice_);
        DARABONBA_PTR_TO_JSON(distributionPriceRatio, distributionPriceRatio_);
        DARABONBA_PTR_TO_JSON(externalPlatformType, externalPlatformType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(inGroup, inGroup_);
        DARABONBA_PTR_TO_JSON(inGroupTime, inGroupTime_);
        DARABONBA_PTR_TO_JSON(inventoryRiskLevel, inventoryRiskLevel_);
        DARABONBA_PTR_TO_JSON(invoiceType, invoiceType_);
        DARABONBA_PTR_TO_JSON(lmItemId, lmItemId_);
        DARABONBA_PTR_TO_JSON(picUrl, picUrl_);
        DARABONBA_PTR_TO_JSON(platformPrice, platformPrice_);
        DARABONBA_PTR_TO_JSON(platformReservePrice, platformReservePrice_);
        DARABONBA_PTR_TO_JSON(productId, productId_);
        DARABONBA_PTR_TO_JSON(productName, productName_);
        DARABONBA_PTR_TO_JSON(shopName, shopName_);
        DARABONBA_PTR_TO_JSON(soldQuantity, soldQuantity_);
        DARABONBA_PTR_TO_JSON(taxCode, taxCode_);
        DARABONBA_PTR_TO_JSON(taxRate, taxRate_);
        DARABONBA_PTR_TO_JSON(tradeMode, tradeMode_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(bandName, bandName_);
        DARABONBA_PTR_FROM_JSON(canNotSellReason, canNotSellReason_);
        DARABONBA_PTR_FROM_JSON(canSell, canSell_);
        DARABONBA_PTR_FROM_JSON(categoryChain, categoryChain_);
        DARABONBA_PTR_FROM_JSON(credit, credit_);
        DARABONBA_PTR_FROM_JSON(diffPrice, diffPrice_);
        DARABONBA_PTR_FROM_JSON(distributionPrice, distributionPrice_);
        DARABONBA_PTR_FROM_JSON(distributionPriceRatio, distributionPriceRatio_);
        DARABONBA_PTR_FROM_JSON(externalPlatformType, externalPlatformType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(inGroup, inGroup_);
        DARABONBA_PTR_FROM_JSON(inGroupTime, inGroupTime_);
        DARABONBA_PTR_FROM_JSON(inventoryRiskLevel, inventoryRiskLevel_);
        DARABONBA_PTR_FROM_JSON(invoiceType, invoiceType_);
        DARABONBA_PTR_FROM_JSON(lmItemId, lmItemId_);
        DARABONBA_PTR_FROM_JSON(picUrl, picUrl_);
        DARABONBA_PTR_FROM_JSON(platformPrice, platformPrice_);
        DARABONBA_PTR_FROM_JSON(platformReservePrice, platformReservePrice_);
        DARABONBA_PTR_FROM_JSON(productId, productId_);
        DARABONBA_PTR_FROM_JSON(productName, productName_);
        DARABONBA_PTR_FROM_JSON(shopName, shopName_);
        DARABONBA_PTR_FROM_JSON(soldQuantity, soldQuantity_);
        DARABONBA_PTR_FROM_JSON(taxCode, taxCode_);
        DARABONBA_PTR_FROM_JSON(taxRate, taxRate_);
        DARABONBA_PTR_FROM_JSON(tradeMode, tradeMode_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CategoryChain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CategoryChain& obj) { 
          DARABONBA_PTR_TO_JSON(categoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(isLeaf, isLeaf_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(parentId, parentId_);
        };
        friend void from_json(const Darabonba::Json& j, CategoryChain& obj) { 
          DARABONBA_PTR_FROM_JSON(categoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(isLeaf, isLeaf_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(parentId, parentId_);
        };
        CategoryChain() = default ;
        CategoryChain(const CategoryChain &) = default ;
        CategoryChain(CategoryChain &&) = default ;
        CategoryChain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CategoryChain() = default ;
        CategoryChain& operator=(const CategoryChain &) = default ;
        CategoryChain& operator=(CategoryChain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->isLeaf_ == nullptr && this->level_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
        inline CategoryChain& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // isLeaf Field Functions 
        bool hasIsLeaf() const { return this->isLeaf_ != nullptr;};
        void deleteIsLeaf() { this->isLeaf_ = nullptr;};
        inline bool getIsLeaf() const { DARABONBA_PTR_GET_DEFAULT(isLeaf_, false) };
        inline CategoryChain& setIsLeaf(bool isLeaf) { DARABONBA_PTR_SET_VALUE(isLeaf_, isLeaf) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline CategoryChain& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CategoryChain& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline CategoryChain& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      protected:
        shared_ptr<int64_t> categoryId_ {};
        shared_ptr<bool> isLeaf_ {};
        shared_ptr<int32_t> level_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> parentId_ {};
      };

      virtual bool empty() const override { return this->bandName_ == nullptr
        && this->canNotSellReason_ == nullptr && this->canSell_ == nullptr && this->categoryChain_ == nullptr && this->credit_ == nullptr && this->diffPrice_ == nullptr
        && this->distributionPrice_ == nullptr && this->distributionPriceRatio_ == nullptr && this->externalPlatformType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->inGroup_ == nullptr && this->inGroupTime_ == nullptr && this->inventoryRiskLevel_ == nullptr && this->invoiceType_ == nullptr && this->lmItemId_ == nullptr
        && this->picUrl_ == nullptr && this->platformPrice_ == nullptr && this->platformReservePrice_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr
        && this->shopName_ == nullptr && this->soldQuantity_ == nullptr && this->taxCode_ == nullptr && this->taxRate_ == nullptr && this->tradeMode_ == nullptr; };
      // bandName Field Functions 
      bool hasBandName() const { return this->bandName_ != nullptr;};
      void deleteBandName() { this->bandName_ = nullptr;};
      inline string getBandName() const { DARABONBA_PTR_GET_DEFAULT(bandName_, "") };
      inline Products& setBandName(string bandName) { DARABONBA_PTR_SET_VALUE(bandName_, bandName) };


      // canNotSellReason Field Functions 
      bool hasCanNotSellReason() const { return this->canNotSellReason_ != nullptr;};
      void deleteCanNotSellReason() { this->canNotSellReason_ = nullptr;};
      inline string getCanNotSellReason() const { DARABONBA_PTR_GET_DEFAULT(canNotSellReason_, "") };
      inline Products& setCanNotSellReason(string canNotSellReason) { DARABONBA_PTR_SET_VALUE(canNotSellReason_, canNotSellReason) };


      // canSell Field Functions 
      bool hasCanSell() const { return this->canSell_ != nullptr;};
      void deleteCanSell() { this->canSell_ = nullptr;};
      inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
      inline Products& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


      // categoryChain Field Functions 
      bool hasCategoryChain() const { return this->categoryChain_ != nullptr;};
      void deleteCategoryChain() { this->categoryChain_ = nullptr;};
      inline const vector<Products::CategoryChain> & getCategoryChain() const { DARABONBA_PTR_GET_CONST(categoryChain_, vector<Products::CategoryChain>) };
      inline vector<Products::CategoryChain> getCategoryChain() { DARABONBA_PTR_GET(categoryChain_, vector<Products::CategoryChain>) };
      inline Products& setCategoryChain(const vector<Products::CategoryChain> & categoryChain) { DARABONBA_PTR_SET_VALUE(categoryChain_, categoryChain) };
      inline Products& setCategoryChain(vector<Products::CategoryChain> && categoryChain) { DARABONBA_PTR_SET_RVALUE(categoryChain_, categoryChain) };


      // credit Field Functions 
      bool hasCredit() const { return this->credit_ != nullptr;};
      void deleteCredit() { this->credit_ = nullptr;};
      inline const vector<string> & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, vector<string>) };
      inline vector<string> getCredit() { DARABONBA_PTR_GET(credit_, vector<string>) };
      inline Products& setCredit(const vector<string> & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
      inline Products& setCredit(vector<string> && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


      // diffPrice Field Functions 
      bool hasDiffPrice() const { return this->diffPrice_ != nullptr;};
      void deleteDiffPrice() { this->diffPrice_ = nullptr;};
      inline string getDiffPrice() const { DARABONBA_PTR_GET_DEFAULT(diffPrice_, "") };
      inline Products& setDiffPrice(string diffPrice) { DARABONBA_PTR_SET_VALUE(diffPrice_, diffPrice) };


      // distributionPrice Field Functions 
      bool hasDistributionPrice() const { return this->distributionPrice_ != nullptr;};
      void deleteDistributionPrice() { this->distributionPrice_ = nullptr;};
      inline string getDistributionPrice() const { DARABONBA_PTR_GET_DEFAULT(distributionPrice_, "") };
      inline Products& setDistributionPrice(string distributionPrice) { DARABONBA_PTR_SET_VALUE(distributionPrice_, distributionPrice) };


      // distributionPriceRatio Field Functions 
      bool hasDistributionPriceRatio() const { return this->distributionPriceRatio_ != nullptr;};
      void deleteDistributionPriceRatio() { this->distributionPriceRatio_ = nullptr;};
      inline string getDistributionPriceRatio() const { DARABONBA_PTR_GET_DEFAULT(distributionPriceRatio_, "") };
      inline Products& setDistributionPriceRatio(string distributionPriceRatio) { DARABONBA_PTR_SET_VALUE(distributionPriceRatio_, distributionPriceRatio) };


      // externalPlatformType Field Functions 
      bool hasExternalPlatformType() const { return this->externalPlatformType_ != nullptr;};
      void deleteExternalPlatformType() { this->externalPlatformType_ = nullptr;};
      inline string getExternalPlatformType() const { DARABONBA_PTR_GET_DEFAULT(externalPlatformType_, "") };
      inline Products& setExternalPlatformType(string externalPlatformType) { DARABONBA_PTR_SET_VALUE(externalPlatformType_, externalPlatformType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Products& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Products& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // inGroup Field Functions 
      bool hasInGroup() const { return this->inGroup_ != nullptr;};
      void deleteInGroup() { this->inGroup_ = nullptr;};
      inline bool getInGroup() const { DARABONBA_PTR_GET_DEFAULT(inGroup_, false) };
      inline Products& setInGroup(bool inGroup) { DARABONBA_PTR_SET_VALUE(inGroup_, inGroup) };


      // inGroupTime Field Functions 
      bool hasInGroupTime() const { return this->inGroupTime_ != nullptr;};
      void deleteInGroupTime() { this->inGroupTime_ = nullptr;};
      inline string getInGroupTime() const { DARABONBA_PTR_GET_DEFAULT(inGroupTime_, "") };
      inline Products& setInGroupTime(string inGroupTime) { DARABONBA_PTR_SET_VALUE(inGroupTime_, inGroupTime) };


      // inventoryRiskLevel Field Functions 
      bool hasInventoryRiskLevel() const { return this->inventoryRiskLevel_ != nullptr;};
      void deleteInventoryRiskLevel() { this->inventoryRiskLevel_ = nullptr;};
      inline string getInventoryRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(inventoryRiskLevel_, "") };
      inline Products& setInventoryRiskLevel(string inventoryRiskLevel) { DARABONBA_PTR_SET_VALUE(inventoryRiskLevel_, inventoryRiskLevel) };


      // invoiceType Field Functions 
      bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
      void deleteInvoiceType() { this->invoiceType_ = nullptr;};
      inline string getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, "") };
      inline Products& setInvoiceType(string invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


      // lmItemId Field Functions 
      bool hasLmItemId() const { return this->lmItemId_ != nullptr;};
      void deleteLmItemId() { this->lmItemId_ = nullptr;};
      inline string getLmItemId() const { DARABONBA_PTR_GET_DEFAULT(lmItemId_, "") };
      inline Products& setLmItemId(string lmItemId) { DARABONBA_PTR_SET_VALUE(lmItemId_, lmItemId) };


      // picUrl Field Functions 
      bool hasPicUrl() const { return this->picUrl_ != nullptr;};
      void deletePicUrl() { this->picUrl_ = nullptr;};
      inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
      inline Products& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


      // platformPrice Field Functions 
      bool hasPlatformPrice() const { return this->platformPrice_ != nullptr;};
      void deletePlatformPrice() { this->platformPrice_ = nullptr;};
      inline string getPlatformPrice() const { DARABONBA_PTR_GET_DEFAULT(platformPrice_, "") };
      inline Products& setPlatformPrice(string platformPrice) { DARABONBA_PTR_SET_VALUE(platformPrice_, platformPrice) };


      // platformReservePrice Field Functions 
      bool hasPlatformReservePrice() const { return this->platformReservePrice_ != nullptr;};
      void deletePlatformReservePrice() { this->platformReservePrice_ = nullptr;};
      inline string getPlatformReservePrice() const { DARABONBA_PTR_GET_DEFAULT(platformReservePrice_, "") };
      inline Products& setPlatformReservePrice(string platformReservePrice) { DARABONBA_PTR_SET_VALUE(platformReservePrice_, platformReservePrice) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Products& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Products& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // shopName Field Functions 
      bool hasShopName() const { return this->shopName_ != nullptr;};
      void deleteShopName() { this->shopName_ = nullptr;};
      inline string getShopName() const { DARABONBA_PTR_GET_DEFAULT(shopName_, "") };
      inline Products& setShopName(string shopName) { DARABONBA_PTR_SET_VALUE(shopName_, shopName) };


      // soldQuantity Field Functions 
      bool hasSoldQuantity() const { return this->soldQuantity_ != nullptr;};
      void deleteSoldQuantity() { this->soldQuantity_ = nullptr;};
      inline string getSoldQuantity() const { DARABONBA_PTR_GET_DEFAULT(soldQuantity_, "") };
      inline Products& setSoldQuantity(string soldQuantity) { DARABONBA_PTR_SET_VALUE(soldQuantity_, soldQuantity) };


      // taxCode Field Functions 
      bool hasTaxCode() const { return this->taxCode_ != nullptr;};
      void deleteTaxCode() { this->taxCode_ = nullptr;};
      inline string getTaxCode() const { DARABONBA_PTR_GET_DEFAULT(taxCode_, "") };
      inline Products& setTaxCode(string taxCode) { DARABONBA_PTR_SET_VALUE(taxCode_, taxCode) };


      // taxRate Field Functions 
      bool hasTaxRate() const { return this->taxRate_ != nullptr;};
      void deleteTaxRate() { this->taxRate_ = nullptr;};
      inline int64_t getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, 0L) };
      inline Products& setTaxRate(int64_t taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


      // tradeMode Field Functions 
      bool hasTradeMode() const { return this->tradeMode_ != nullptr;};
      void deleteTradeMode() { this->tradeMode_ = nullptr;};
      inline string getTradeMode() const { DARABONBA_PTR_GET_DEFAULT(tradeMode_, "") };
      inline Products& setTradeMode(string tradeMode) { DARABONBA_PTR_SET_VALUE(tradeMode_, tradeMode) };


    protected:
      shared_ptr<string> bandName_ {};
      shared_ptr<string> canNotSellReason_ {};
      shared_ptr<bool> canSell_ {};
      shared_ptr<vector<Products::CategoryChain>> categoryChain_ {};
      shared_ptr<vector<string>> credit_ {};
      shared_ptr<string> diffPrice_ {};
      shared_ptr<string> distributionPrice_ {};
      shared_ptr<string> distributionPriceRatio_ {};
      shared_ptr<string> externalPlatformType_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<bool> inGroup_ {};
      shared_ptr<string> inGroupTime_ {};
      shared_ptr<string> inventoryRiskLevel_ {};
      shared_ptr<string> invoiceType_ {};
      shared_ptr<string> lmItemId_ {};
      shared_ptr<string> picUrl_ {};
      shared_ptr<string> platformPrice_ {};
      shared_ptr<string> platformReservePrice_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> shopName_ {};
      shared_ptr<string> soldQuantity_ {};
      shared_ptr<string> taxCode_ {};
      shared_ptr<int64_t> taxRate_ {};
      shared_ptr<string> tradeMode_ {};
    };

    virtual bool empty() const override { return this->products_ == nullptr
        && this->total_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<SearchProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<SearchProductsResponseBody::Products>) };
    inline vector<SearchProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<SearchProductsResponseBody::Products>) };
    inline SearchProductsResponseBody& setProducts(const vector<SearchProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline SearchProductsResponseBody& setProducts(vector<SearchProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline SearchProductsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<SearchProductsResponseBody::Products>> products_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
