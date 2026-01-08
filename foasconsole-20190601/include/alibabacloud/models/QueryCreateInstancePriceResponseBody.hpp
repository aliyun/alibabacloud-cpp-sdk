// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCreateInstancePriceResponseBody() = default ;
    QueryCreateInstancePriceResponseBody(const QueryCreateInstancePriceResponseBody &) = default ;
    QueryCreateInstancePriceResponseBody(QueryCreateInstancePriceResponseBody &&) = default ;
    QueryCreateInstancePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceResponseBody() = default ;
    QueryCreateInstancePriceResponseBody& operator=(const QueryCreateInstancePriceResponseBody &) = default ;
    QueryCreateInstancePriceResponseBody& operator=(QueryCreateInstancePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
        DARABONBA_PTR_TO_JSON(LxRequestId, lxRequestId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
        DARABONBA_PTR_FROM_JSON(LxRequestId, lxRequestId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
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

      class OptionalPromotions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OptionalPromotions& obj) { 
          DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
          DARABONBA_PTR_TO_JSON(Selected, selected_);
        };
        friend void from_json(const Darabonba::Json& j, OptionalPromotions& obj) { 
          DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
          DARABONBA_PTR_FROM_JSON(Selected, selected_);
        };
        OptionalPromotions() = default ;
        OptionalPromotions(const OptionalPromotions &) = default ;
        OptionalPromotions(OptionalPromotions &&) = default ;
        OptionalPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OptionalPromotions() = default ;
        OptionalPromotions& operator=(const OptionalPromotions &) = default ;
        OptionalPromotions& operator=(OptionalPromotions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->promotionDesc_ == nullptr
        && this->promotionName_ == nullptr && this->promotionOptionNo_ == nullptr && this->selected_ == nullptr; };
        // promotionDesc Field Functions 
        bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
        void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
        inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
        inline OptionalPromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline OptionalPromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


        // promotionOptionNo Field Functions 
        bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
        void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
        inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
        inline OptionalPromotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


        // selected Field Functions 
        bool hasSelected() const { return this->selected_ != nullptr;};
        void deleteSelected() { this->selected_ = nullptr;};
        inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
        inline OptionalPromotions& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


      protected:
        shared_ptr<string> promotionDesc_ {};
        shared_ptr<string> promotionName_ {};
        shared_ptr<string> promotionOptionNo_ {};
        shared_ptr<bool> selected_ {};
      };

      class DepreciateInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DepreciateInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_TO_JSON(IsShow, isShow_);
          DARABONBA_PTR_TO_JSON(MonthPrice, monthPrice_);
          DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, DepreciateInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_FROM_JSON(IsShow, isShow_);
          DARABONBA_PTR_FROM_JSON(MonthPrice, monthPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalStandAmount, originalStandAmount_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        DepreciateInfo() = default ;
        DepreciateInfo(const DepreciateInfo &) = default ;
        DepreciateInfo(DepreciateInfo &&) = default ;
        DepreciateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DepreciateInfo() = default ;
        DepreciateInfo& operator=(const DepreciateInfo &) = default ;
        DepreciateInfo& operator=(DepreciateInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cheapRate_ == nullptr
        && this->cheapStandAmount_ == nullptr && this->isShow_ == nullptr && this->monthPrice_ == nullptr && this->originalStandAmount_ == nullptr && this->startTime_ == nullptr; };
        // cheapRate Field Functions 
        bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
        void deleteCheapRate() { this->cheapRate_ = nullptr;};
        inline string getCheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, "") };
        inline DepreciateInfo& setCheapRate(string cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


        // cheapStandAmount Field Functions 
        bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
        void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
        inline string getCheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, "") };
        inline DepreciateInfo& setCheapStandAmount(string cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


        // isShow Field Functions 
        bool hasIsShow() const { return this->isShow_ != nullptr;};
        void deleteIsShow() { this->isShow_ = nullptr;};
        inline bool getIsShow() const { DARABONBA_PTR_GET_DEFAULT(isShow_, false) };
        inline DepreciateInfo& setIsShow(bool isShow) { DARABONBA_PTR_SET_VALUE(isShow_, isShow) };


        // monthPrice Field Functions 
        bool hasMonthPrice() const { return this->monthPrice_ != nullptr;};
        void deleteMonthPrice() { this->monthPrice_ = nullptr;};
        inline string getMonthPrice() const { DARABONBA_PTR_GET_DEFAULT(monthPrice_, "") };
        inline DepreciateInfo& setMonthPrice(string monthPrice) { DARABONBA_PTR_SET_VALUE(monthPrice_, monthPrice) };


        // originalStandAmount Field Functions 
        bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
        void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
        inline string getOriginalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, "") };
        inline DepreciateInfo& setOriginalStandAmount(string originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline DepreciateInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> cheapRate_ {};
        shared_ptr<string> cheapStandAmount_ {};
        shared_ptr<bool> isShow_ {};
        shared_ptr<string> monthPrice_ {};
        shared_ptr<string> originalStandAmount_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->currency_ == nullptr && this->depreciateInfo_ == nullptr && this->discountAmount_ == nullptr && this->isContractActivity_ == nullptr && this->lxRequestId_ == nullptr
        && this->message_ == nullptr && this->optionalPromotions_ == nullptr && this->originalAmount_ == nullptr && this->rules_ == nullptr && this->standDiscountPrice_ == nullptr
        && this->standPrice_ == nullptr && this->tradeAmount_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline PriceInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // depreciateInfo Field Functions 
      bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
      void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
      inline const PriceInfo::DepreciateInfo & getDepreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, PriceInfo::DepreciateInfo) };
      inline PriceInfo::DepreciateInfo getDepreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, PriceInfo::DepreciateInfo) };
      inline PriceInfo& setDepreciateInfo(const PriceInfo::DepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
      inline PriceInfo& setDepreciateInfo(PriceInfo::DepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
      inline PriceInfo& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // isContractActivity Field Functions 
      bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
      void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
      inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
      inline PriceInfo& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


      // lxRequestId Field Functions 
      bool hasLxRequestId() const { return this->lxRequestId_ != nullptr;};
      void deleteLxRequestId() { this->lxRequestId_ = nullptr;};
      inline string getLxRequestId() const { DARABONBA_PTR_GET_DEFAULT(lxRequestId_, "") };
      inline PriceInfo& setLxRequestId(string lxRequestId) { DARABONBA_PTR_SET_VALUE(lxRequestId_, lxRequestId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline PriceInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // optionalPromotions Field Functions 
      bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
      void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
      inline const vector<PriceInfo::OptionalPromotions> & getOptionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<PriceInfo::OptionalPromotions>) };
      inline vector<PriceInfo::OptionalPromotions> getOptionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<PriceInfo::OptionalPromotions>) };
      inline PriceInfo& setOptionalPromotions(const vector<PriceInfo::OptionalPromotions> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
      inline PriceInfo& setOptionalPromotions(vector<PriceInfo::OptionalPromotions> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
      inline PriceInfo& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<PriceInfo::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceInfo::Rules>) };
      inline vector<PriceInfo::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceInfo::Rules>) };
      inline PriceInfo& setRules(const vector<PriceInfo::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceInfo& setRules(vector<PriceInfo::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // standDiscountPrice Field Functions 
      bool hasStandDiscountPrice() const { return this->standDiscountPrice_ != nullptr;};
      void deleteStandDiscountPrice() { this->standDiscountPrice_ = nullptr;};
      inline string getStandDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standDiscountPrice_, "") };
      inline PriceInfo& setStandDiscountPrice(string standDiscountPrice) { DARABONBA_PTR_SET_VALUE(standDiscountPrice_, standDiscountPrice) };


      // standPrice Field Functions 
      bool hasStandPrice() const { return this->standPrice_ != nullptr;};
      void deleteStandPrice() { this->standPrice_ = nullptr;};
      inline string getStandPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, "") };
      inline PriceInfo& setStandPrice(string standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
      inline PriceInfo& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<PriceInfo::DepreciateInfo> depreciateInfo_ {};
      shared_ptr<float> discountAmount_ {};
      shared_ptr<bool> isContractActivity_ {};
      shared_ptr<string> lxRequestId_ {};
      shared_ptr<string> message_ {};
      shared_ptr<vector<PriceInfo::OptionalPromotions>> optionalPromotions_ {};
      shared_ptr<float> originalAmount_ {};
      shared_ptr<vector<PriceInfo::Rules>> rules_ {};
      shared_ptr<string> standDiscountPrice_ {};
      shared_ptr<string> standPrice_ {};
      shared_ptr<float> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const QueryCreateInstancePriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, QueryCreateInstancePriceResponseBody::PriceInfo) };
    inline QueryCreateInstancePriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, QueryCreateInstancePriceResponseBody::PriceInfo) };
    inline QueryCreateInstancePriceResponseBody& setPriceInfo(const QueryCreateInstancePriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline QueryCreateInstancePriceResponseBody& setPriceInfo(QueryCreateInstancePriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCreateInstancePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCreateInstancePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<QueryCreateInstancePriceResponseBody::PriceInfo> priceInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
