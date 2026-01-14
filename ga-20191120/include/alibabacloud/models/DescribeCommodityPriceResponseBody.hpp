// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMODITYPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMODITYPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCommodityPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommodityPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetails_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(Promotions, promotions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleDetails, ruleDetails_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommodityPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetails_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleDetails, ruleDetails_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribeCommodityPriceResponseBody() = default ;
    DescribeCommodityPriceResponseBody(const DescribeCommodityPriceResponseBody &) = default ;
    DescribeCommodityPriceResponseBody(DescribeCommodityPriceResponseBody &&) = default ;
    DescribeCommodityPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommodityPriceResponseBody() = default ;
    DescribeCommodityPriceResponseBody& operator=(const DescribeCommodityPriceResponseBody &) = default ;
    DescribeCommodityPriceResponseBody& operator=(DescribeCommodityPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleDetails& obj) { 
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, RuleDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      };
      RuleDetails() = default ;
      RuleDetails(const RuleDetails &) = default ;
      RuleDetails(RuleDetails &&) = default ;
      RuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleDetails() = default ;
      RuleDetails& operator=(const RuleDetails &) = default ;
      RuleDetails& operator=(RuleDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline RuleDetails& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleDetails& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      // The ID of the discount rule.
      shared_ptr<string> ruleId_ {};
      // The name of the discount rule.
      shared_ptr<string> ruleName_ {};
    };

    class Promotions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Promotions& obj) { 
        DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
        DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
        DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
        DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
        DARABONBA_PTR_TO_JSON(Selected, selected_);
      };
      friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
        DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
        DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
        DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
        DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
        DARABONBA_PTR_FROM_JSON(Selected, selected_);
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
      virtual bool empty() const override { return this->canPromFee_ == nullptr
        && this->optionCode_ == nullptr && this->promotionName_ == nullptr && this->promotionOptionNo_ == nullptr && this->selected_ == nullptr; };
      // canPromFee Field Functions 
      bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
      void deleteCanPromFee() { this->canPromFee_ = nullptr;};
      inline double getCanPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0.0) };
      inline Promotions& setCanPromFee(double canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


      // optionCode Field Functions 
      bool hasOptionCode() const { return this->optionCode_ != nullptr;};
      void deleteOptionCode() { this->optionCode_ = nullptr;};
      inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
      inline Promotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


      // promotionName Field Functions 
      bool hasPromotionName() const { return this->promotionName_ != nullptr;};
      void deletePromotionName() { this->promotionName_ = nullptr;};
      inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
      inline Promotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


      // promotionOptionNo Field Functions 
      bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
      void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
      inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
      inline Promotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


      // selected Field Functions 
      bool hasSelected() const { return this->selected_ != nullptr;};
      void deleteSelected() { this->selected_ = nullptr;};
      inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
      inline Promotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


    protected:
      // The discounted amount.
      // 
      // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<double> canPromFee_ {};
      // The code of the commodity to which the coupon can be applied.
      // 
      // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<string> optionCode_ {};
      // The name of the coupon.
      // 
      // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<string> promotionName_ {};
      // The code of the coupon.
      // > *   `youhuiquan_promotion_option_id_for_blank` indicates coupons that cannot be applied to the commodity.
      // > *   This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<string> promotionOptionNo_ {};
      // Indicates whether the coupon was selected.
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<bool> selected_ {};
    };

    class OrderDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
        DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_TO_JSON(PromDetails, promDetails_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      };
      friend void from_json(const Darabonba::Json& j, OrderDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
        DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
        DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
        DARABONBA_PTR_FROM_JSON(PromDetails, promDetails_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
      };
      OrderDetails() = default ;
      OrderDetails(const OrderDetails &) = default ;
      OrderDetails(OrderDetails &&) = default ;
      OrderDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderDetails() = default ;
      OrderDetails& operator=(const OrderDetails &) = default ;
      OrderDetails& operator=(OrderDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PromDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromDetails& obj) { 
          DARABONBA_PTR_TO_JSON(FinalPromFee, finalPromFee_);
          DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_TO_JSON(PromType, promType_);
          DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
          DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
        };
        friend void from_json(const Darabonba::Json& j, PromDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(FinalPromFee, finalPromFee_);
          DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_FROM_JSON(PromType, promType_);
          DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
          DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
        };
        PromDetails() = default ;
        PromDetails(const PromDetails &) = default ;
        PromDetails(PromDetails &&) = default ;
        PromDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromDetails() = default ;
        PromDetails& operator=(const PromDetails &) = default ;
        PromDetails& operator=(PromDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->finalPromFee_ == nullptr
        && this->optionCode_ == nullptr && this->promType_ == nullptr && this->promotionId_ == nullptr && this->promotionName_ == nullptr; };
        // finalPromFee Field Functions 
        bool hasFinalPromFee() const { return this->finalPromFee_ != nullptr;};
        void deleteFinalPromFee() { this->finalPromFee_ = nullptr;};
        inline double getFinalPromFee() const { DARABONBA_PTR_GET_DEFAULT(finalPromFee_, 0.0) };
        inline PromDetails& setFinalPromFee(double finalPromFee) { DARABONBA_PTR_SET_VALUE(finalPromFee_, finalPromFee) };


        // optionCode Field Functions 
        bool hasOptionCode() const { return this->optionCode_ != nullptr;};
        void deleteOptionCode() { this->optionCode_ = nullptr;};
        inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
        inline PromDetails& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


        // promType Field Functions 
        bool hasPromType() const { return this->promType_ != nullptr;};
        void deletePromType() { this->promType_ = nullptr;};
        inline string getPromType() const { DARABONBA_PTR_GET_DEFAULT(promType_, "") };
        inline PromDetails& setPromType(string promType) { DARABONBA_PTR_SET_VALUE(promType_, promType) };


        // promotionId Field Functions 
        bool hasPromotionId() const { return this->promotionId_ != nullptr;};
        void deletePromotionId() { this->promotionId_ = nullptr;};
        inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
        inline PromDetails& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline PromDetails& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


      protected:
        // The discounted price.
        // 
        // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
        shared_ptr<double> finalPromFee_ {};
        // The code of the discount option.
        // 
        // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
        shared_ptr<string> optionCode_ {};
        // The sub-type of the discount.
        // 
        // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
        shared_ptr<string> promType_ {};
        // The ID of the discount item.
        // 
        // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
        shared_ptr<string> promotionId_ {};
        // The name of the discount item.
        // 
        // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
        shared_ptr<string> promotionName_ {};
      };

      class ModuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
        virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleName_ == nullptr && this->originalPrice_ == nullptr && this->tradePrice_ == nullptr; };
        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline double getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
        inline ModuleDetails& setDiscountPrice(double discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


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


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline double getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline ModuleDetails& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline double getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline ModuleDetails& setTradePrice(double tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The discount.
        shared_ptr<double> discountPrice_ {};
        // The code of the commodity module.
        shared_ptr<string> moduleCode_ {};
        // The name of the commodity module.
        shared_ptr<string> moduleName_ {};
        // The original price.
        shared_ptr<double> originalPrice_ {};
        // The transaction price, which is equal to the original price minus the discount.
        shared_ptr<double> tradePrice_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityName_ == nullptr && this->discountPrice_ == nullptr && this->moduleDetails_ == nullptr && this->originalPrice_ == nullptr && this->promDetails_ == nullptr
        && this->quantity_ == nullptr && this->ruleIds_ == nullptr && this->tradePrice_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline OrderDetails& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline OrderDetails& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // discountPrice Field Functions 
      bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
      void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
      inline double getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
      inline OrderDetails& setDiscountPrice(double discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


      // moduleDetails Field Functions 
      bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
      void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
      inline const vector<OrderDetails::ModuleDetails> & getModuleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<OrderDetails::ModuleDetails>) };
      inline vector<OrderDetails::ModuleDetails> getModuleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<OrderDetails::ModuleDetails>) };
      inline OrderDetails& setModuleDetails(const vector<OrderDetails::ModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
      inline OrderDetails& setModuleDetails(vector<OrderDetails::ModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


      // originalPrice Field Functions 
      bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
      void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
      inline double getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
      inline OrderDetails& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


      // promDetails Field Functions 
      bool hasPromDetails() const { return this->promDetails_ != nullptr;};
      void deletePromDetails() { this->promDetails_ = nullptr;};
      inline const vector<OrderDetails::PromDetails> & getPromDetails() const { DARABONBA_PTR_GET_CONST(promDetails_, vector<OrderDetails::PromDetails>) };
      inline vector<OrderDetails::PromDetails> getPromDetails() { DARABONBA_PTR_GET(promDetails_, vector<OrderDetails::PromDetails>) };
      inline OrderDetails& setPromDetails(const vector<OrderDetails::PromDetails> & promDetails) { DARABONBA_PTR_SET_VALUE(promDetails_, promDetails) };
      inline OrderDetails& setPromDetails(vector<OrderDetails::PromDetails> && promDetails) { DARABONBA_PTR_SET_RVALUE(promDetails_, promDetails) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline OrderDetails& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const vector<int64_t> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
      inline vector<int64_t> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
      inline OrderDetails& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline OrderDetails& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


      // tradePrice Field Functions 
      bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
      void deleteTradePrice() { this->tradePrice_ = nullptr;};
      inline double getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
      inline OrderDetails& setTradePrice(double tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    protected:
      // The code of the commodity.
      shared_ptr<string> commodityCode_ {};
      // The name of the commodity.
      shared_ptr<string> commodityName_ {};
      // The discount.
      shared_ptr<double> discountPrice_ {};
      // The information about the commodity module.
      shared_ptr<vector<OrderDetails::ModuleDetails>> moduleDetails_ {};
      // The original price.
      shared_ptr<double> originalPrice_ {};
      // The details of the discount.
      // 
      // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
      shared_ptr<vector<OrderDetails::PromDetails>> promDetails_ {};
      // The number of instances that are purchased.
      shared_ptr<int64_t> quantity_ {};
      // The IDs of discount rules.
      shared_ptr<vector<int64_t>> ruleIds_ {};
      // The transaction price, which is equal to the original price minus the discount.
      shared_ptr<double> tradePrice_ {};
    };

    virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->orderDetails_ == nullptr && this->originalPrice_ == nullptr && this->promotions_ == nullptr && this->requestId_ == nullptr
        && this->ruleDetails_ == nullptr && this->tradePrice_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeCommodityPriceResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline double getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribeCommodityPriceResponseBody& setDiscountPrice(double discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // orderDetails Field Functions 
    bool hasOrderDetails() const { return this->orderDetails_ != nullptr;};
    void deleteOrderDetails() { this->orderDetails_ = nullptr;};
    inline const vector<DescribeCommodityPriceResponseBody::OrderDetails> & getOrderDetails() const { DARABONBA_PTR_GET_CONST(orderDetails_, vector<DescribeCommodityPriceResponseBody::OrderDetails>) };
    inline vector<DescribeCommodityPriceResponseBody::OrderDetails> getOrderDetails() { DARABONBA_PTR_GET(orderDetails_, vector<DescribeCommodityPriceResponseBody::OrderDetails>) };
    inline DescribeCommodityPriceResponseBody& setOrderDetails(const vector<DescribeCommodityPriceResponseBody::OrderDetails> & orderDetails) { DARABONBA_PTR_SET_VALUE(orderDetails_, orderDetails) };
    inline DescribeCommodityPriceResponseBody& setOrderDetails(vector<DescribeCommodityPriceResponseBody::OrderDetails> && orderDetails) { DARABONBA_PTR_SET_RVALUE(orderDetails_, orderDetails) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline double getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribeCommodityPriceResponseBody& setOriginalPrice(double originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // promotions Field Functions 
    bool hasPromotions() const { return this->promotions_ != nullptr;};
    void deletePromotions() { this->promotions_ = nullptr;};
    inline const vector<DescribeCommodityPriceResponseBody::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<DescribeCommodityPriceResponseBody::Promotions>) };
    inline vector<DescribeCommodityPriceResponseBody::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<DescribeCommodityPriceResponseBody::Promotions>) };
    inline DescribeCommodityPriceResponseBody& setPromotions(const vector<DescribeCommodityPriceResponseBody::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
    inline DescribeCommodityPriceResponseBody& setPromotions(vector<DescribeCommodityPriceResponseBody::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommodityPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleDetails Field Functions 
    bool hasRuleDetails() const { return this->ruleDetails_ != nullptr;};
    void deleteRuleDetails() { this->ruleDetails_ = nullptr;};
    inline const vector<DescribeCommodityPriceResponseBody::RuleDetails> & getRuleDetails() const { DARABONBA_PTR_GET_CONST(ruleDetails_, vector<DescribeCommodityPriceResponseBody::RuleDetails>) };
    inline vector<DescribeCommodityPriceResponseBody::RuleDetails> getRuleDetails() { DARABONBA_PTR_GET(ruleDetails_, vector<DescribeCommodityPriceResponseBody::RuleDetails>) };
    inline DescribeCommodityPriceResponseBody& setRuleDetails(const vector<DescribeCommodityPriceResponseBody::RuleDetails> & ruleDetails) { DARABONBA_PTR_SET_VALUE(ruleDetails_, ruleDetails) };
    inline DescribeCommodityPriceResponseBody& setRuleDetails(vector<DescribeCommodityPriceResponseBody::RuleDetails> && ruleDetails) { DARABONBA_PTR_SET_RVALUE(ruleDetails_, ruleDetails) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline double getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribeCommodityPriceResponseBody& setTradePrice(double tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The currency unit.
    // 
    // *   China site: **CNY**.
    // *   International site: **USD**.
    shared_ptr<string> currency_ {};
    // The discount.
    shared_ptr<double> discountPrice_ {};
    // The details of the commodity module.
    shared_ptr<vector<DescribeCommodityPriceResponseBody::OrderDetails>> orderDetails_ {};
    // The original price.
    shared_ptr<double> originalPrice_ {};
    // The details of the coupon.
    // 
    // >  This parameter does not take effect for accounts registered on the China site (aliyun.com).
    shared_ptr<vector<DescribeCommodityPriceResponseBody::Promotions>> promotions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details about the discount rules.
    shared_ptr<vector<DescribeCommodityPriceResponseBody::RuleDetails>> ruleDetails_ {};
    // The transaction price, which is equal to the original price minus the discount.
    shared_ptr<double> tradePrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
