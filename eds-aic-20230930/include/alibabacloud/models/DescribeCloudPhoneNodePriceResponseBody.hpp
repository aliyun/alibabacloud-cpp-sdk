// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeCloudPhoneNodePriceResponseBody() = default ;
    DescribeCloudPhoneNodePriceResponseBody(const DescribeCloudPhoneNodePriceResponseBody &) = default ;
    DescribeCloudPhoneNodePriceResponseBody(DescribeCloudPhoneNodePriceResponseBody &&) = default ;
    DescribeCloudPhoneNodePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodePriceResponseBody() = default ;
    DescribeCloudPhoneNodePriceResponseBody& operator=(const DescribeCloudPhoneNodePriceResponseBody &) = default ;
    DescribeCloudPhoneNodePriceResponseBody& operator=(DescribeCloudPhoneNodePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->ruleId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // The rule description.
      shared_ptr<string> description_ {};
      // The rule ID.
      shared_ptr<string> ruleId_ {};
    };

    class Price : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Price& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(PriceDetail, priceDetail_);
        DARABONBA_PTR_TO_JSON(Promotions, promotions_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, Price& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(PriceDetail, priceDetail_);
        DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
        DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
      class Promotions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
          DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
          DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_TO_JSON(selected, selected_);
        };
        friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
          DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
          DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_FROM_JSON(selected, selected_);
        };
        Promotions() = default ;
        Promotions(const Promotions &) = default ;
        Promotions(Promotions &&) = default ;
        Promotions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Promotions() = default ;
        Promotions& operator=(const Promotions &) = default ;
        Promotions& operator=(Promotions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->optionCode_ == nullptr
        && this->promotionDesc_ == nullptr && this->promotionId_ == nullptr && this->promotionName_ == nullptr && this->selected_ == nullptr; };
        // optionCode Field Functions 
        bool hasOptionCode() const { return this->optionCode_ != nullptr;};
        void deleteOptionCode() { this->optionCode_ = nullptr;};
        inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
        inline Promotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


        // promotionDesc Field Functions 
        bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
        void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
        inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
        inline Promotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


        // promotionId Field Functions 
        bool hasPromotionId() const { return this->promotionId_ != nullptr;};
        void deletePromotionId() { this->promotionId_ = nullptr;};
        inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
        inline Promotions& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline Promotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


        // selected Field Functions 
        bool hasSelected() const { return this->selected_ != nullptr;};
        void deleteSelected() { this->selected_ = nullptr;};
        inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
        inline Promotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


      protected:
        // The promotion code.
        shared_ptr<string> optionCode_ {};
        // The promotion description.
        shared_ptr<string> promotionDesc_ {};
        // The promotion ID.
        shared_ptr<string> promotionId_ {};
        // The promotion name.
        shared_ptr<string> promotionName_ {};
        // Indicates whether to receive SMS messages.
        shared_ptr<bool> selected_ {};
      };

      class PriceDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(ModulePrice, modulePrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, PriceDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(ModulePrice, modulePrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
        };
        PriceDetail() = default ;
        PriceDetail(const PriceDetail &) = default ;
        PriceDetail(PriceDetail &&) = default ;
        PriceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceDetail() = default ;
        PriceDetail& operator=(const PriceDetail &) = default ;
        PriceDetail& operator=(PriceDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModulePrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModulePrice& obj) { 
            DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
          };
          friend void from_json(const Darabonba::Json& j, ModulePrice& obj) { 
            DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
            DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
            DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
          };
          ModulePrice() = default ;
          ModulePrice(const ModulePrice &) = default ;
          ModulePrice(ModulePrice &&) = default ;
          ModulePrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModulePrice() = default ;
          ModulePrice& operator=(const ModulePrice &) = default ;
          ModulePrice& operator=(ModulePrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->moduleName_ == nullptr && this->originalPrice_ == nullptr && this->tradePrice_ == nullptr; };
          // discountPrice Field Functions 
          bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
          void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
          inline string getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, "") };
          inline ModulePrice& setDiscountPrice(string discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


          // moduleName Field Functions 
          bool hasModuleName() const { return this->moduleName_ != nullptr;};
          void deleteModuleName() { this->moduleName_ = nullptr;};
          inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
          inline ModulePrice& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


          // originalPrice Field Functions 
          bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
          void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
          inline string getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, "") };
          inline ModulePrice& setOriginalPrice(string originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


          // tradePrice Field Functions 
          bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
          void deleteTradePrice() { this->tradePrice_ = nullptr;};
          inline string getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, "") };
          inline ModulePrice& setTradePrice(string tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


        protected:
          // The discounted price.
          shared_ptr<string> discountPrice_ {};
          // The name of the module.
          shared_ptr<string> moduleName_ {};
          // The original price.
          shared_ptr<string> originalPrice_ {};
          // The transaction price.
          shared_ptr<string> tradePrice_ {};
        };

        virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->modulePrice_ == nullptr && this->originalPrice_ == nullptr && this->resourceType_ == nullptr && this->tradePrice_ == nullptr; };
        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
        inline PriceDetail& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // modulePrice Field Functions 
        bool hasModulePrice() const { return this->modulePrice_ != nullptr;};
        void deleteModulePrice() { this->modulePrice_ = nullptr;};
        inline const vector<PriceDetail::ModulePrice> & getModulePrice() const { DARABONBA_PTR_GET_CONST(modulePrice_, vector<PriceDetail::ModulePrice>) };
        inline vector<PriceDetail::ModulePrice> getModulePrice() { DARABONBA_PTR_GET(modulePrice_, vector<PriceDetail::ModulePrice>) };
        inline PriceDetail& setModulePrice(const vector<PriceDetail::ModulePrice> & modulePrice) { DARABONBA_PTR_SET_VALUE(modulePrice_, modulePrice) };
        inline PriceDetail& setModulePrice(vector<PriceDetail::ModulePrice> && modulePrice) { DARABONBA_PTR_SET_RVALUE(modulePrice_, modulePrice) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline PriceDetail& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline PriceDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline PriceDetail& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The discounted price.
        shared_ptr<float> discountPrice_ {};
        // The price of each module.
        shared_ptr<vector<PriceDetail::ModulePrice>> modulePrice_ {};
        // The original price.
        shared_ptr<float> originalPrice_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The transaction price.
        shared_ptr<float> tradePrice_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->priceDetail_ == nullptr && this->promotions_ == nullptr && this->tradePrice_ == nullptr; };
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


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline Price& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // priceDetail Field Functions 
      bool hasPriceDetail() const { return this->priceDetail_ != nullptr;};
      void deletePriceDetail() { this->priceDetail_ = nullptr;};
      inline const vector<Price::PriceDetail> & getPriceDetail() const { DARABONBA_PTR_GET_CONST(priceDetail_, vector<Price::PriceDetail>) };
      inline vector<Price::PriceDetail> getPriceDetail() { DARABONBA_PTR_GET(priceDetail_, vector<Price::PriceDetail>) };
      inline Price& setPriceDetail(const vector<Price::PriceDetail> & priceDetail) { DARABONBA_PTR_SET_VALUE(priceDetail_, priceDetail) };
      inline Price& setPriceDetail(vector<Price::PriceDetail> && priceDetail) { DARABONBA_PTR_SET_RVALUE(priceDetail_, priceDetail) };


      // promotions Field Functions 
      bool hasPromotions() const { return this->promotions_ != nullptr;};
      void deletePromotions() { this->promotions_ = nullptr;};
      inline const vector<Price::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Price::Promotions>) };
      inline vector<Price::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<Price::Promotions>) };
      inline Price& setPromotions(const vector<Price::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
      inline Price& setPromotions(vector<Price::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      // The currency.
      shared_ptr<string> currency_ {};
      // The discounted price.
      shared_ptr<float> discountPrice_ {};
      // The original price.
      shared_ptr<float> originalPrice_ {};
      // The price details.
      shared_ptr<vector<Price::PriceDetail>> priceDetail_ {};
      // The promotion information.
      shared_ptr<vector<Price::Promotions>> promotions_ {};
      // The transaction price.
      shared_ptr<float> tradePrice_ {};
    };

    virtual bool empty() const override { return this->price_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const DescribeCloudPhoneNodePriceResponseBody::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, DescribeCloudPhoneNodePriceResponseBody::Price) };
    inline DescribeCloudPhoneNodePriceResponseBody::Price getPrice() { DARABONBA_PTR_GET(price_, DescribeCloudPhoneNodePriceResponseBody::Price) };
    inline DescribeCloudPhoneNodePriceResponseBody& setPrice(const DescribeCloudPhoneNodePriceResponseBody::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline DescribeCloudPhoneNodePriceResponseBody& setPrice(DescribeCloudPhoneNodePriceResponseBody::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudPhoneNodePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeCloudPhoneNodePriceResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeCloudPhoneNodePriceResponseBody::Rules>) };
    inline vector<DescribeCloudPhoneNodePriceResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeCloudPhoneNodePriceResponseBody::Rules>) };
    inline DescribeCloudPhoneNodePriceResponseBody& setRules(const vector<DescribeCloudPhoneNodePriceResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeCloudPhoneNodePriceResponseBody& setRules(vector<DescribeCloudPhoneNodePriceResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The price.
    shared_ptr<DescribeCloudPhoneNodePriceResponseBody::Price> price_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The promotion rule information.
    shared_ptr<vector<DescribeCloudPhoneNodePriceResponseBody::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
