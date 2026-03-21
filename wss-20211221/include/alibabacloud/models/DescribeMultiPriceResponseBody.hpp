// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeMultiPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMultiPriceResponseBody() = default ;
    DescribeMultiPriceResponseBody(const DescribeMultiPriceResponseBody &) = default ;
    DescribeMultiPriceResponseBody(DescribeMultiPriceResponseBody &&) = default ;
    DescribeMultiPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceResponseBody() = default ;
    DescribeMultiPriceResponseBody& operator=(const DescribeMultiPriceResponseBody &) = default ;
    DescribeMultiPriceResponseBody& operator=(DescribeMultiPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      PriceInfo() = default ;
      PriceInfo(const PriceInfo &) = default ;
      PriceInfo(PriceInfo &&) = default ;
      PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceInfo() = default ;
      PriceInfo& operator=(const PriceInfo &) = default ;
      PriceInfo& operator=(PriceInfo &&) = default ;
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
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> ruleId_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(PriceDetails, priceDetails_);
          DARABONBA_PTR_TO_JSON(Promotions, promotions_);
          DARABONBA_PTR_TO_JSON(RefundInstanceIdPriceMap, refundInstanceIdPriceMap_);
          DARABONBA_PTR_TO_JSON(RefundPrice, refundPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(PriceDetails, priceDetails_);
          DARABONBA_PTR_FROM_JSON(Promotions, promotions_);
          DARABONBA_PTR_FROM_JSON(RefundInstanceIdPriceMap, refundInstanceIdPriceMap_);
          DARABONBA_PTR_FROM_JSON(RefundPrice, refundPrice_);
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
            DARABONBA_PTR_TO_JSON(Selected, selected_);
          };
          friend void from_json(const Darabonba::Json& j, Promotions& obj) { 
            DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
            DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
            DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
            DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
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
          shared_ptr<string> optionCode_ {};
          shared_ptr<string> promotionDesc_ {};
          shared_ptr<string> promotionId_ {};
          shared_ptr<string> promotionName_ {};
          shared_ptr<bool> selected_ {};
        };

        class PriceDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PriceDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
            DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
            DARABONBA_PTR_TO_JSON(PriceDetail, priceDetail_);
          };
          friend void from_json(const Darabonba::Json& j, PriceDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
            DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
            DARABONBA_PTR_FROM_JSON(PriceDetail, priceDetail_);
          };
          PriceDetails() = default ;
          PriceDetails(const PriceDetails &) = default ;
          PriceDetails(PriceDetails &&) = default ;
          PriceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PriceDetails() = default ;
          PriceDetails& operator=(const PriceDetails &) = default ;
          PriceDetails& operator=(PriceDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PriceDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PriceDetail& obj) { 
              DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_TO_JSON(SavingPlanRecommendPrice, savingPlanRecommendPrice_);
              DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
            };
            friend void from_json(const Darabonba::Json& j, PriceDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_FROM_JSON(SavingPlanRecommendPrice, savingPlanRecommendPrice_);
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
            virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->originalPrice_ == nullptr && this->resourceType_ == nullptr && this->savingPlanRecommendPrice_ == nullptr && this->tradePrice_ == nullptr; };
            // discountPrice Field Functions 
            bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
            void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
            inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
            inline PriceDetail& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


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


            // savingPlanRecommendPrice Field Functions 
            bool hasSavingPlanRecommendPrice() const { return this->savingPlanRecommendPrice_ != nullptr;};
            void deleteSavingPlanRecommendPrice() { this->savingPlanRecommendPrice_ = nullptr;};
            inline float getSavingPlanRecommendPrice() const { DARABONBA_PTR_GET_DEFAULT(savingPlanRecommendPrice_, 0.0) };
            inline PriceDetail& setSavingPlanRecommendPrice(float savingPlanRecommendPrice) { DARABONBA_PTR_SET_VALUE(savingPlanRecommendPrice_, savingPlanRecommendPrice) };


            // tradePrice Field Functions 
            bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
            void deleteTradePrice() { this->tradePrice_ = nullptr;};
            inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
            inline PriceDetail& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


          protected:
            shared_ptr<float> discountPrice_ {};
            shared_ptr<float> originalPrice_ {};
            shared_ptr<string> resourceType_ {};
            shared_ptr<float> savingPlanRecommendPrice_ {};
            shared_ptr<float> tradePrice_ {};
          };

          class ModuleDetails : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModuleDetails& obj) { 
              DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_TO_JSON(SavingPlanDiscountPrice, savingPlanDiscountPrice_);
              DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
            };
            friend void from_json(const Darabonba::Json& j, ModuleDetails& obj) { 
              DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_FROM_JSON(SavingPlanDiscountPrice, savingPlanDiscountPrice_);
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
        && this->moduleCode_ == nullptr && this->moduleName_ == nullptr && this->moduleValue_ == nullptr && this->originalPrice_ == nullptr && this->savingPlanDiscountPrice_ == nullptr
        && this->tradePrice_ == nullptr; };
            // discountPrice Field Functions 
            bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
            void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
            inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
            inline ModuleDetails& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


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


            // moduleValue Field Functions 
            bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
            void deleteModuleValue() { this->moduleValue_ = nullptr;};
            inline string getModuleValue() const { DARABONBA_PTR_GET_DEFAULT(moduleValue_, "") };
            inline ModuleDetails& setModuleValue(string moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };


            // originalPrice Field Functions 
            bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
            void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
            inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
            inline ModuleDetails& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


            // savingPlanDiscountPrice Field Functions 
            bool hasSavingPlanDiscountPrice() const { return this->savingPlanDiscountPrice_ != nullptr;};
            void deleteSavingPlanDiscountPrice() { this->savingPlanDiscountPrice_ = nullptr;};
            inline float getSavingPlanDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(savingPlanDiscountPrice_, 0.0) };
            inline ModuleDetails& setSavingPlanDiscountPrice(float savingPlanDiscountPrice) { DARABONBA_PTR_SET_VALUE(savingPlanDiscountPrice_, savingPlanDiscountPrice) };


            // tradePrice Field Functions 
            bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
            void deleteTradePrice() { this->tradePrice_ = nullptr;};
            inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
            inline ModuleDetails& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


          protected:
            shared_ptr<float> discountPrice_ {};
            shared_ptr<string> moduleCode_ {};
            shared_ptr<string> moduleName_ {};
            shared_ptr<string> moduleValue_ {};
            shared_ptr<float> originalPrice_ {};
            shared_ptr<float> savingPlanDiscountPrice_ {};
            shared_ptr<float> tradePrice_ {};
          };

          virtual bool empty() const override { return this->moduleDetails_ == nullptr
        && this->orderItem_ == nullptr && this->priceDetail_ == nullptr; };
          // moduleDetails Field Functions 
          bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
          void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
          inline const vector<PriceDetails::ModuleDetails> & getModuleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<PriceDetails::ModuleDetails>) };
          inline vector<PriceDetails::ModuleDetails> getModuleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<PriceDetails::ModuleDetails>) };
          inline PriceDetails& setModuleDetails(const vector<PriceDetails::ModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
          inline PriceDetails& setModuleDetails(vector<PriceDetails::ModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


          // orderItem Field Functions 
          bool hasOrderItem() const { return this->orderItem_ != nullptr;};
          void deleteOrderItem() { this->orderItem_ = nullptr;};
          inline int32_t getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, 0) };
          inline PriceDetails& setOrderItem(int32_t orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


          // priceDetail Field Functions 
          bool hasPriceDetail() const { return this->priceDetail_ != nullptr;};
          void deletePriceDetail() { this->priceDetail_ = nullptr;};
          inline const PriceDetails::PriceDetail & getPriceDetail() const { DARABONBA_PTR_GET_CONST(priceDetail_, PriceDetails::PriceDetail) };
          inline PriceDetails::PriceDetail getPriceDetail() { DARABONBA_PTR_GET(priceDetail_, PriceDetails::PriceDetail) };
          inline PriceDetails& setPriceDetail(const PriceDetails::PriceDetail & priceDetail) { DARABONBA_PTR_SET_VALUE(priceDetail_, priceDetail) };
          inline PriceDetails& setPriceDetail(PriceDetails::PriceDetail && priceDetail) { DARABONBA_PTR_SET_RVALUE(priceDetail_, priceDetail) };


        protected:
          shared_ptr<vector<PriceDetails::ModuleDetails>> moduleDetails_ {};
          shared_ptr<int32_t> orderItem_ {};
          shared_ptr<PriceDetails::PriceDetail> priceDetail_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->priceDetails_ == nullptr && this->promotions_ == nullptr && this->refundInstanceIdPriceMap_ == nullptr
        && this->refundPrice_ == nullptr && this->tradePrice_ == nullptr; };
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


        // priceDetails Field Functions 
        bool hasPriceDetails() const { return this->priceDetails_ != nullptr;};
        void deletePriceDetails() { this->priceDetails_ = nullptr;};
        inline const vector<Price::PriceDetails> & getPriceDetails() const { DARABONBA_PTR_GET_CONST(priceDetails_, vector<Price::PriceDetails>) };
        inline vector<Price::PriceDetails> getPriceDetails() { DARABONBA_PTR_GET(priceDetails_, vector<Price::PriceDetails>) };
        inline Price& setPriceDetails(const vector<Price::PriceDetails> & priceDetails) { DARABONBA_PTR_SET_VALUE(priceDetails_, priceDetails) };
        inline Price& setPriceDetails(vector<Price::PriceDetails> && priceDetails) { DARABONBA_PTR_SET_RVALUE(priceDetails_, priceDetails) };


        // promotions Field Functions 
        bool hasPromotions() const { return this->promotions_ != nullptr;};
        void deletePromotions() { this->promotions_ = nullptr;};
        inline const vector<Price::Promotions> & getPromotions() const { DARABONBA_PTR_GET_CONST(promotions_, vector<Price::Promotions>) };
        inline vector<Price::Promotions> getPromotions() { DARABONBA_PTR_GET(promotions_, vector<Price::Promotions>) };
        inline Price& setPromotions(const vector<Price::Promotions> & promotions) { DARABONBA_PTR_SET_VALUE(promotions_, promotions) };
        inline Price& setPromotions(vector<Price::Promotions> && promotions) { DARABONBA_PTR_SET_RVALUE(promotions_, promotions) };


        // refundInstanceIdPriceMap Field Functions 
        bool hasRefundInstanceIdPriceMap() const { return this->refundInstanceIdPriceMap_ != nullptr;};
        void deleteRefundInstanceIdPriceMap() { this->refundInstanceIdPriceMap_ = nullptr;};
        inline const map<string, float> & getRefundInstanceIdPriceMap() const { DARABONBA_PTR_GET_CONST(refundInstanceIdPriceMap_, map<string, float>) };
        inline map<string, float> getRefundInstanceIdPriceMap() { DARABONBA_PTR_GET(refundInstanceIdPriceMap_, map<string, float>) };
        inline Price& setRefundInstanceIdPriceMap(const map<string, float> & refundInstanceIdPriceMap) { DARABONBA_PTR_SET_VALUE(refundInstanceIdPriceMap_, refundInstanceIdPriceMap) };
        inline Price& setRefundInstanceIdPriceMap(map<string, float> && refundInstanceIdPriceMap) { DARABONBA_PTR_SET_RVALUE(refundInstanceIdPriceMap_, refundInstanceIdPriceMap) };


        // refundPrice Field Functions 
        bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
        void deleteRefundPrice() { this->refundPrice_ = nullptr;};
        inline float getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0.0) };
        inline Price& setRefundPrice(float refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        shared_ptr<string> currency_ {};
        shared_ptr<float> discountPrice_ {};
        shared_ptr<float> originalPrice_ {};
        shared_ptr<vector<Price::PriceDetails>> priceDetails_ {};
        shared_ptr<vector<Price::Promotions>> promotions_ {};
        shared_ptr<map<string, float>> refundInstanceIdPriceMap_ {};
        shared_ptr<float> refundPrice_ {};
        shared_ptr<float> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr
        && this->rules_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const PriceInfo::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, PriceInfo::Price) };
      inline PriceInfo::Price getPrice() { DARABONBA_PTR_GET(price_, PriceInfo::Price) };
      inline PriceInfo& setPrice(const PriceInfo::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline PriceInfo& setPrice(PriceInfo::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<PriceInfo::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceInfo::Rules>) };
      inline vector<PriceInfo::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceInfo::Rules>) };
      inline PriceInfo& setRules(const vector<PriceInfo::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceInfo& setRules(vector<PriceInfo::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<PriceInfo::Price> price_ {};
      shared_ptr<vector<PriceInfo::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeMultiPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeMultiPriceResponseBody::PriceInfo) };
    inline DescribeMultiPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeMultiPriceResponseBody::PriceInfo) };
    inline DescribeMultiPriceResponseBody& setPriceInfo(const DescribeMultiPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeMultiPriceResponseBody& setPriceInfo(DescribeMultiPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultiPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeMultiPriceResponseBody::PriceInfo> priceInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
