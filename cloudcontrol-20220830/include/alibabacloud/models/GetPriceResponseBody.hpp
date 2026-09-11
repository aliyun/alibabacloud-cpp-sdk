// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPriceResponseBody() = default ;
    GetPriceResponseBody(const GetPriceResponseBody &) = default ;
    GetPriceResponseBody(GetPriceResponseBody &&) = default ;
    GetPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceResponseBody() = default ;
    GetPriceResponseBody& operator=(const GetPriceResponseBody &) = default ;
    GetPriceResponseBody& operator=(GetPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Price : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Price& obj) { 
        DARABONBA_PTR_TO_JSON(currency, currency_);
        DARABONBA_PTR_TO_JSON(discountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(moduleDetails, moduleDetails_);
        DARABONBA_PTR_TO_JSON(originalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(promotionDetails, promotionDetails_);
        DARABONBA_PTR_TO_JSON(tradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, Price& obj) { 
        DARABONBA_PTR_FROM_JSON(currency, currency_);
        DARABONBA_PTR_FROM_JSON(discountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(moduleDetails, moduleDetails_);
        DARABONBA_PTR_FROM_JSON(originalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(promotionDetails, promotionDetails_);
        DARABONBA_PTR_FROM_JSON(tradePrice, tradePrice_);
      };
      Price() = default ;
      Price(const Price &) = default ;
      Price(Price &&) = default ;
      Price(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Price() = default ;
      Price& operator=(const Price &) = default ;
      Price& operator=(Price &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PromotionDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionDetails& obj) { 
          DARABONBA_PTR_TO_JSON(promotionDesc, promotionDesc_);
          DARABONBA_PTR_TO_JSON(promotionId, promotionId_);
          DARABONBA_PTR_TO_JSON(promotionName, promotionName_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(promotionDesc, promotionDesc_);
          DARABONBA_PTR_FROM_JSON(promotionId, promotionId_);
          DARABONBA_PTR_FROM_JSON(promotionName, promotionName_);
        };
        PromotionDetails() = default ;
        PromotionDetails(const PromotionDetails &) = default ;
        PromotionDetails(PromotionDetails &&) = default ;
        PromotionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionDetails() = default ;
        PromotionDetails& operator=(const PromotionDetails &) = default ;
        PromotionDetails& operator=(PromotionDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->promotionDesc_ == nullptr
        && this->promotionId_ == nullptr && this->promotionName_ == nullptr; };
        // promotionDesc Field Functions 
        bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
        void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
        inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
        inline PromotionDetails& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


        // promotionId Field Functions 
        bool hasPromotionId() const { return this->promotionId_ != nullptr;};
        void deletePromotionId() { this->promotionId_ = nullptr;};
        inline int64_t getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, 0L) };
        inline PromotionDetails& setPromotionId(int64_t promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline PromotionDetails& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


      protected:
        // The description of the promotion.
        shared_ptr<string> promotionDesc_ {};
        // The ID of the promotion.
        shared_ptr<int64_t> promotionId_ {};
        // The name of the promotion.
        shared_ptr<string> promotionName_ {};
      };

      class ModuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(costAfterDiscount, costAfterDiscount_);
          DARABONBA_PTR_TO_JSON(invoiceDiscount, invoiceDiscount_);
          DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
          DARABONBA_PTR_TO_JSON(originalCost, originalCost_);
          DARABONBA_PTR_TO_JSON(priceType, priceType_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(costAfterDiscount, costAfterDiscount_);
          DARABONBA_PTR_FROM_JSON(invoiceDiscount, invoiceDiscount_);
          DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(originalCost, originalCost_);
          DARABONBA_PTR_FROM_JSON(priceType, priceType_);
        };
        ModuleDetails() = default ;
        ModuleDetails(const ModuleDetails &) = default ;
        ModuleDetails(ModuleDetails &&) = default ;
        ModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleDetails() = default ;
        ModuleDetails& operator=(const ModuleDetails &) = default ;
        ModuleDetails& operator=(ModuleDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->costAfterDiscount_ == nullptr
        && this->invoiceDiscount_ == nullptr && this->moduleCode_ == nullptr && this->moduleName_ == nullptr && this->originalCost_ == nullptr && this->priceType_ == nullptr; };
        // costAfterDiscount Field Functions 
        bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
        void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
        inline float getCostAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
        inline ModuleDetails& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


        // invoiceDiscount Field Functions 
        bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
        void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
        inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
        inline ModuleDetails& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline ModuleDetails& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline ModuleDetails& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        // originalCost Field Functions 
        bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
        void deleteOriginalCost() { this->originalCost_ = nullptr;};
        inline float getOriginalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
        inline ModuleDetails& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


        // priceType Field Functions 
        bool hasPriceType() const { return this->priceType_ != nullptr;};
        void deletePriceType() { this->priceType_ = nullptr;};
        inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
        inline ModuleDetails& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


      protected:
        // The discount price.
        shared_ptr<float> costAfterDiscount_ {};
        // The discount.
        shared_ptr<float> invoiceDiscount_ {};
        // The code of the pricing module.
        shared_ptr<string> moduleCode_ {};
        // The name of the pricing module.
        shared_ptr<string> moduleName_ {};
        // The original price.
        shared_ptr<float> originalCost_ {};
        // The price type.
        shared_ptr<string> priceType_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->moduleDetails_ == nullptr && this->originalPrice_ == nullptr && this->promotionDetails_ == nullptr && this->tradePrice_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline Price& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // moduleDetails Field Functions 
      bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
      void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
      inline const vector<Price::ModuleDetails> & getModuleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<Price::ModuleDetails>) };
      inline vector<Price::ModuleDetails> getModuleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<Price::ModuleDetails>) };
      inline Price& setModuleDetails(const vector<Price::ModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
      inline Price& setModuleDetails(vector<Price::ModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline Price& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // promotionDetails Field Functions 
      bool hasPromotionDetails() const { return this->promotionDetails_ != nullptr;};
      void deletePromotionDetails() { this->promotionDetails_ = nullptr;};
      inline const vector<Price::PromotionDetails> & getPromotionDetails() const { DARABONBA_PTR_GET_CONST(promotionDetails_, vector<Price::PromotionDetails>) };
      inline vector<Price::PromotionDetails> getPromotionDetails() { DARABONBA_PTR_GET(promotionDetails_, vector<Price::PromotionDetails>) };
      inline Price& setPromotionDetails(const vector<Price::PromotionDetails> & promotionDetails) { DARABONBA_PTR_SET_VALUE(promotionDetails_, promotionDetails) };
      inline Price& setPromotionDetails(vector<Price::PromotionDetails> && promotionDetails) { DARABONBA_PTR_SET_RVALUE(promotionDetails_, promotionDetails) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      // The currency type. Valid values: CNY: Chinese Yuan. USD: US dollar. JPY: Japanese Yen.
      shared_ptr<string> currency_ {};
      // The discount.
      shared_ptr<float> discountPrice_ {};
      // The order details of the pricing module.
      shared_ptr<vector<Price::ModuleDetails>> moduleDetails_ {};
      // The original price.
      shared_ptr<float> originalPrice_ {};
      // The details of the promotion.
      shared_ptr<vector<Price::PromotionDetails>> promotionDetails_ {};
      // The discount price.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->price_ == nullptr
        && this->requestId_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const GetPriceResponseBody::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, GetPriceResponseBody::Price) };
    inline GetPriceResponseBody::Price getPrice() { DARABONBA_PTR_GET(price_, GetPriceResponseBody::Price) };
    inline GetPriceResponseBody& setPrice(const GetPriceResponseBody::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetPriceResponseBody& setPrice(GetPriceResponseBody::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price.
    shared_ptr<GetPriceResponseBody::Price> price_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
