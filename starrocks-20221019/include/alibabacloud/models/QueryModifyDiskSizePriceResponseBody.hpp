// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYDISKSIZEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYDISKSIZEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class QueryModifyDiskSizePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyDiskSizePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyDiskSizePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryModifyDiskSizePriceResponseBody() = default ;
    QueryModifyDiskSizePriceResponseBody(const QueryModifyDiskSizePriceResponseBody &) = default ;
    QueryModifyDiskSizePriceResponseBody(QueryModifyDiskSizePriceResponseBody &&) = default ;
    QueryModifyDiskSizePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyDiskSizePriceResponseBody() = default ;
    QueryModifyDiskSizePriceResponseBody& operator=(const QueryModifyDiskSizePriceResponseBody &) = default ;
    QueryModifyDiskSizePriceResponseBody& operator=(QueryModifyDiskSizePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentPrices, componentPrices_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentPrices, componentPrices_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
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
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->name_ == nullptr && this->ruleDescId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline float getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline Rules& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleDescId Field Functions 
        bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
        void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
        inline string getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, "") };
        inline Rules& setRuleDescId(string ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


      protected:
        shared_ptr<float> amount_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> ruleDescId_ {};
      };

      class OptionalPromotions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OptionalPromotions& obj) { 
          DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
        };
        friend void from_json(const Darabonba::Json& j, OptionalPromotions& obj) { 
          DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
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
        && this->promotionName_ == nullptr && this->promotionOptionNo_ == nullptr; };
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


      protected:
        shared_ptr<string> promotionDesc_ {};
        shared_ptr<string> promotionName_ {};
        shared_ptr<string> promotionOptionNo_ {};
      };

      class DepreciateInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DepreciateInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_TO_JSON(IsShow, isShow_);
          DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
        };
        friend void from_json(const Darabonba::Json& j, DepreciateInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_FROM_JSON(IsShow, isShow_);
          DARABONBA_PTR_FROM_JSON(OriginalStandAmount, originalStandAmount_);
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
        && this->cheapStandAmount_ == nullptr && this->isShow_ == nullptr && this->originalStandAmount_ == nullptr; };
        // cheapRate Field Functions 
        bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
        void deleteCheapRate() { this->cheapRate_ = nullptr;};
        inline float getCheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, 0.0) };
        inline DepreciateInfo& setCheapRate(float cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


        // cheapStandAmount Field Functions 
        bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
        void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
        inline float getCheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, 0.0) };
        inline DepreciateInfo& setCheapStandAmount(float cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


        // isShow Field Functions 
        bool hasIsShow() const { return this->isShow_ != nullptr;};
        void deleteIsShow() { this->isShow_ = nullptr;};
        inline bool getIsShow() const { DARABONBA_PTR_GET_DEFAULT(isShow_, false) };
        inline DepreciateInfo& setIsShow(bool isShow) { DARABONBA_PTR_SET_VALUE(isShow_, isShow) };


        // originalStandAmount Field Functions 
        bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
        void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
        inline float getOriginalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, 0.0) };
        inline DepreciateInfo& setOriginalStandAmount(float originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


      protected:
        shared_ptr<float> cheapRate_ {};
        shared_ptr<float> cheapStandAmount_ {};
        shared_ptr<bool> isShow_ {};
        shared_ptr<float> originalStandAmount_ {};
      };

      class ComponentPrices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentPrices& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentPrices& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
          DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
        };
        ComponentPrices() = default ;
        ComponentPrices(const ComponentPrices &) = default ;
        ComponentPrices(ComponentPrices &&) = default ;
        ComponentPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentPrices() = default ;
        ComponentPrices& operator=(const ComponentPrices &) = default ;
        ComponentPrices& operator=(ComponentPrices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentName_ == nullptr
        && this->discountAmount_ == nullptr && this->originalAmount_ == nullptr && this->tradeAmount_ == nullptr; };
        // componentName Field Functions 
        bool hasComponentName() const { return this->componentName_ != nullptr;};
        void deleteComponentName() { this->componentName_ = nullptr;};
        inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
        inline ComponentPrices& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


        // discountAmount Field Functions 
        bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
        void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
        inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
        inline ComponentPrices& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


        // originalAmount Field Functions 
        bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
        void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
        inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
        inline ComponentPrices& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
        inline ComponentPrices& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


      protected:
        shared_ptr<string> componentName_ {};
        shared_ptr<float> discountAmount_ {};
        shared_ptr<float> originalAmount_ {};
        shared_ptr<float> tradeAmount_ {};
      };

      virtual bool empty() const override { return this->componentPrices_ == nullptr
        && this->currency_ == nullptr && this->depreciateInfo_ == nullptr && this->discountAmount_ == nullptr && this->optionalPromotions_ == nullptr && this->originalAmount_ == nullptr
        && this->rules_ == nullptr && this->standDiscountPrice_ == nullptr && this->standPrice_ == nullptr && this->tradeAmount_ == nullptr; };
      // componentPrices Field Functions 
      bool hasComponentPrices() const { return this->componentPrices_ != nullptr;};
      void deleteComponentPrices() { this->componentPrices_ = nullptr;};
      inline const vector<Data::ComponentPrices> & getComponentPrices() const { DARABONBA_PTR_GET_CONST(componentPrices_, vector<Data::ComponentPrices>) };
      inline vector<Data::ComponentPrices> getComponentPrices() { DARABONBA_PTR_GET(componentPrices_, vector<Data::ComponentPrices>) };
      inline Data& setComponentPrices(const vector<Data::ComponentPrices> & componentPrices) { DARABONBA_PTR_SET_VALUE(componentPrices_, componentPrices) };
      inline Data& setComponentPrices(vector<Data::ComponentPrices> && componentPrices) { DARABONBA_PTR_SET_RVALUE(componentPrices_, componentPrices) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // depreciateInfo Field Functions 
      bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
      void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
      inline const Data::DepreciateInfo & getDepreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, Data::DepreciateInfo) };
      inline Data::DepreciateInfo getDepreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, Data::DepreciateInfo) };
      inline Data& setDepreciateInfo(const Data::DepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
      inline Data& setDepreciateInfo(Data::DepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
      inline Data& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // optionalPromotions Field Functions 
      bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
      void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
      inline const vector<Data::OptionalPromotions> & getOptionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<Data::OptionalPromotions>) };
      inline vector<Data::OptionalPromotions> getOptionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<Data::OptionalPromotions>) };
      inline Data& setOptionalPromotions(const vector<Data::OptionalPromotions> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
      inline Data& setOptionalPromotions(vector<Data::OptionalPromotions> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
      inline Data& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // standDiscountPrice Field Functions 
      bool hasStandDiscountPrice() const { return this->standDiscountPrice_ != nullptr;};
      void deleteStandDiscountPrice() { this->standDiscountPrice_ = nullptr;};
      inline float getStandDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standDiscountPrice_, 0.0) };
      inline Data& setStandDiscountPrice(float standDiscountPrice) { DARABONBA_PTR_SET_VALUE(standDiscountPrice_, standDiscountPrice) };


      // standPrice Field Functions 
      bool hasStandPrice() const { return this->standPrice_ != nullptr;};
      void deleteStandPrice() { this->standPrice_ = nullptr;};
      inline float getStandPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, 0.0) };
      inline Data& setStandPrice(float standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
      inline Data& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      shared_ptr<vector<Data::ComponentPrices>> componentPrices_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<Data::DepreciateInfo> depreciateInfo_ {};
      shared_ptr<float> discountAmount_ {};
      shared_ptr<vector<Data::OptionalPromotions>> optionalPromotions_ {};
      shared_ptr<float> originalAmount_ {};
      shared_ptr<vector<Data::Rules>> rules_ {};
      shared_ptr<float> standDiscountPrice_ {};
      shared_ptr<float> standPrice_ {};
      shared_ptr<float> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryModifyDiskSizePriceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryModifyDiskSizePriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryModifyDiskSizePriceResponseBody::Data) };
    inline QueryModifyDiskSizePriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryModifyDiskSizePriceResponseBody::Data) };
    inline QueryModifyDiskSizePriceResponseBody& setData(const QueryModifyDiskSizePriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryModifyDiskSizePriceResponseBody& setData(QueryModifyDiskSizePriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline QueryModifyDiskSizePriceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline QueryModifyDiskSizePriceResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryModifyDiskSizePriceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryModifyDiskSizePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryModifyDiskSizePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<QueryModifyDiskSizePriceResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
