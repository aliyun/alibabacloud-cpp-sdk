// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePrices, resourcePrices_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePrices, resourcePrices_);
    };
    GetServiceInstanceSubscriptionEstimateCostResponseBody() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(const GetServiceInstanceSubscriptionEstimateCostResponseBody &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(GetServiceInstanceSubscriptionEstimateCostResponseBody &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostResponseBody() = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody& operator=(const GetServiceInstanceSubscriptionEstimateCostResponseBody &) = default ;
    GetServiceInstanceSubscriptionEstimateCostResponseBody& operator=(GetServiceInstanceSubscriptionEstimateCostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePrices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePrices& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
        DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePrices& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
        DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
      };
      ResourcePrices() = default ;
      ResourcePrices(const ResourcePrices &) = default ;
      ResourcePrices(ResourcePrices &&) = default ;
      ResourcePrices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePrices() = default ;
      ResourcePrices& operator=(const ResourcePrices &) = default ;
      ResourcePrices& operator=(ResourcePrices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->ruleDescId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleDescId Field Functions 
        bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
        void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
        inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
        inline Rules& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


      protected:
        // Promotion description.
        shared_ptr<string> description_ {};
        // Promotion name.
        shared_ptr<string> name_ {};
        // Promotion ID.
        shared_ptr<int64_t> ruleDescId_ {};
      };

      class DetailInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailInfos& obj) { 
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, DetailInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
        };
        DetailInfos() = default ;
        DetailInfos(const DetailInfos &) = default ;
        DetailInfos(DetailInfos &&) = default ;
        DetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailInfos() = default ;
        DetailInfos& operator=(const DetailInfos &) = default ;
        DetailInfos& operator=(DetailInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->discountAmount_ == nullptr
        && this->originalAmount_ == nullptr && this->resource_ == nullptr && this->tradeAmount_ == nullptr; };
        // discountAmount Field Functions 
        bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
        void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
        inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
        inline DetailInfos& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


        // originalAmount Field Functions 
        bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
        void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
        inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
        inline DetailInfos& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline DetailInfos& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
        inline DetailInfos& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


      protected:
        // Discount amount.
        shared_ptr<float> discountAmount_ {};
        // Original price.
        shared_ptr<float> originalAmount_ {};
        // Pricing module identifier.
        shared_ptr<string> resource_ {};
        // Discounted price.
        shared_ptr<float> tradeAmount_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->detailInfos_ == nullptr && this->discountAmount_ == nullptr && this->originalAmount_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->resourceArn_ == nullptr && this->rules_ == nullptr && this->tradeAmount_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline ResourcePrices& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // detailInfos Field Functions 
      bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
      void deleteDetailInfos() { this->detailInfos_ = nullptr;};
      inline const vector<ResourcePrices::DetailInfos> & getDetailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, vector<ResourcePrices::DetailInfos>) };
      inline vector<ResourcePrices::DetailInfos> getDetailInfos() { DARABONBA_PTR_GET(detailInfos_, vector<ResourcePrices::DetailInfos>) };
      inline ResourcePrices& setDetailInfos(const vector<ResourcePrices::DetailInfos> & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
      inline ResourcePrices& setDetailInfos(vector<ResourcePrices::DetailInfos> && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
      inline ResourcePrices& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
      inline ResourcePrices& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline ResourcePrices& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline ResourcePrices& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline ResourcePrices& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<ResourcePrices::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ResourcePrices::Rules>) };
      inline vector<ResourcePrices::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ResourcePrices::Rules>) };
      inline ResourcePrices& setRules(const vector<ResourcePrices::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline ResourcePrices& setRules(vector<ResourcePrices::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline float getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
      inline ResourcePrices& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      // Currency. Valid values:
      // - CNY: Chinese Yuan.
      // - USD: US Dollar.
      // - JPY: Japanese Yen.
      shared_ptr<string> currency_ {};
      // The price details of the pricing module.
      shared_ptr<vector<ResourcePrices::DetailInfos>> detailInfos_ {};
      // Discount.
      shared_ptr<float> discountAmount_ {};
      // Original price.
      shared_ptr<float> originalAmount_ {};
      // Renewal duration. The unit is specified by PeriodUnit.
      shared_ptr<int32_t> period_ {};
      // The time unit for the renewal duration, which is the unit of the Period parameter. Valid values: Month, Year. Default value: Month.
      shared_ptr<string> periodUnit_ {};
      // Resource ARN (Aliyun Resource Name).
      shared_ptr<string> resourceArn_ {};
      // Promotion details.
      shared_ptr<vector<ResourcePrices::Rules>> rules_ {};
      // Discounted price.
      shared_ptr<float> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourcePrices_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePrices Field Functions 
    bool hasResourcePrices() const { return this->resourcePrices_ != nullptr;};
    void deleteResourcePrices() { this->resourcePrices_ = nullptr;};
    inline const vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices> & getResourcePrices() const { DARABONBA_PTR_GET_CONST(resourcePrices_, vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices>) };
    inline vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices> getResourcePrices() { DARABONBA_PTR_GET(resourcePrices_, vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices>) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setResourcePrices(const vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices> & resourcePrices) { DARABONBA_PTR_SET_VALUE(resourcePrices_, resourcePrices) };
    inline GetServiceInstanceSubscriptionEstimateCostResponseBody& setResourcePrices(vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices> && resourcePrices) { DARABONBA_PTR_SET_RVALUE(resourcePrices_, resourcePrices) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of resource price information.
    shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostResponseBody::ResourcePrices>> resourcePrices_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
