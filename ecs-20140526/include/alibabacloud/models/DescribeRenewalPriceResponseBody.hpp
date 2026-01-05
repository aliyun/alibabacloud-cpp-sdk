// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody(DescribeRenewalPriceResponseBody &&) = default ;
    DescribeRenewalPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBody() = default ;
    DescribeRenewalPriceResponseBody& operator=(const DescribeRenewalPriceResponseBody &) = default ;
    DescribeRenewalPriceResponseBody& operator=(DescribeRenewalPriceResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Rule, rule_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
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
        class Rule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rule& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          };
          friend void from_json(const Darabonba::Json& j, Rule& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          };
          Rule() = default ;
          Rule(const Rule &) = default ;
          Rule(Rule &&) = default ;
          Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rule() = default ;
          Rule& operator=(const Rule &) = default ;
          Rule& operator=(Rule &&) = default ;
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
          inline Rule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
          inline Rule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        protected:
          // The description of the promotion rule.
          shared_ptr<string> description_ {};
          // The ID of the promotion rule.
          shared_ptr<int64_t> ruleId_ {};
        };

        virtual bool empty() const override { return this->rule_ == nullptr; };
        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline const vector<Rules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Rules::Rule>) };
        inline vector<Rules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<Rules::Rule>) };
        inline Rules& setRule(const vector<Rules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
        inline Rules& setRule(vector<Rules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


      protected:
        shared_ptr<vector<Rules::Rule>> rule_ {};
      };

      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DetailInfos, detailInfos_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DetailInfos, detailInfos_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
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
        class DetailInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailInfos& obj) { 
            DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
          };
          friend void from_json(const Darabonba::Json& j, DetailInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
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
          class DetailInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_TO_JSON(Resource, resource_);
              DARABONBA_PTR_TO_JSON(SubRules, subRules_);
              DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
            };
            friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
              DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
              DARABONBA_PTR_FROM_JSON(Resource, resource_);
              DARABONBA_PTR_FROM_JSON(SubRules, subRules_);
              DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
            };
            DetailInfo() = default ;
            DetailInfo(const DetailInfo &) = default ;
            DetailInfo(DetailInfo &&) = default ;
            DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DetailInfo() = default ;
            DetailInfo& operator=(const DetailInfo &) = default ;
            DetailInfo& operator=(DetailInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SubRules : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubRules& obj) { 
                DARABONBA_PTR_TO_JSON(Rule, rule_);
              };
              friend void from_json(const Darabonba::Json& j, SubRules& obj) { 
                DARABONBA_PTR_FROM_JSON(Rule, rule_);
              };
              SubRules() = default ;
              SubRules(const SubRules &) = default ;
              SubRules(SubRules &&) = default ;
              SubRules(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubRules() = default ;
              SubRules& operator=(const SubRules &) = default ;
              SubRules& operator=(SubRules &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Rule : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Rule& obj) { 
                  DARABONBA_PTR_TO_JSON(Description, description_);
                  DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
                };
                friend void from_json(const Darabonba::Json& j, Rule& obj) { 
                  DARABONBA_PTR_FROM_JSON(Description, description_);
                  DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
                };
                Rule() = default ;
                Rule(const Rule &) = default ;
                Rule(Rule &&) = default ;
                Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Rule() = default ;
                Rule& operator=(const Rule &) = default ;
                Rule& operator=(Rule &&) = default ;
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
                inline Rule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


                // ruleId Field Functions 
                bool hasRuleId() const { return this->ruleId_ != nullptr;};
                void deleteRuleId() { this->ruleId_ = nullptr;};
                inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
                inline Rule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


              protected:
                // The description of the pricing rule.
                shared_ptr<string> description_ {};
                // The ID of the pricing rule.
                shared_ptr<int64_t> ruleId_ {};
              };

              virtual bool empty() const override { return this->rule_ == nullptr; };
              // rule Field Functions 
              bool hasRule() const { return this->rule_ != nullptr;};
              void deleteRule() { this->rule_ = nullptr;};
              inline const vector<SubRules::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<SubRules::Rule>) };
              inline vector<SubRules::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<SubRules::Rule>) };
              inline SubRules& setRule(const vector<SubRules::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
              inline SubRules& setRule(vector<SubRules::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


            protected:
              shared_ptr<vector<SubRules::Rule>> rule_ {};
            };

            virtual bool empty() const override { return this->discountPrice_ == nullptr
        && this->originalPrice_ == nullptr && this->resource_ == nullptr && this->subRules_ == nullptr && this->tradePrice_ == nullptr; };
            // discountPrice Field Functions 
            bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
            void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
            inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
            inline DetailInfo& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


            // originalPrice Field Functions 
            bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
            void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
            inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
            inline DetailInfo& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


            // resource Field Functions 
            bool hasResource() const { return this->resource_ != nullptr;};
            void deleteResource() { this->resource_ = nullptr;};
            inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
            inline DetailInfo& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


            // subRules Field Functions 
            bool hasSubRules() const { return this->subRules_ != nullptr;};
            void deleteSubRules() { this->subRules_ = nullptr;};
            inline const DetailInfo::SubRules & getSubRules() const { DARABONBA_PTR_GET_CONST(subRules_, DetailInfo::SubRules) };
            inline DetailInfo::SubRules getSubRules() { DARABONBA_PTR_GET(subRules_, DetailInfo::SubRules) };
            inline DetailInfo& setSubRules(const DetailInfo::SubRules & subRules) { DARABONBA_PTR_SET_VALUE(subRules_, subRules) };
            inline DetailInfo& setSubRules(DetailInfo::SubRules && subRules) { DARABONBA_PTR_SET_RVALUE(subRules_, subRules) };


            // tradePrice Field Functions 
            bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
            void deleteTradePrice() { this->tradePrice_ = nullptr;};
            inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
            inline DetailInfo& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


          protected:
            // The discount.
            shared_ptr<float> discountPrice_ {};
            // The original price.
            shared_ptr<float> originalPrice_ {};
            // The name of the resource that corresponds to the price.
            shared_ptr<string> resource_ {};
            // The pricing rules.
            shared_ptr<DetailInfo::SubRules> subRules_ {};
            // The transaction price.
            shared_ptr<float> tradePrice_ {};
          };

          virtual bool empty() const override { return this->detailInfo_ == nullptr; };
          // detailInfo Field Functions 
          bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
          void deleteDetailInfo() { this->detailInfo_ = nullptr;};
          inline const vector<DetailInfos::DetailInfo> & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<DetailInfos::DetailInfo>) };
          inline vector<DetailInfos::DetailInfo> getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<DetailInfos::DetailInfo>) };
          inline DetailInfos& setDetailInfo(const vector<DetailInfos::DetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
          inline DetailInfos& setDetailInfo(vector<DetailInfos::DetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


        protected:
          shared_ptr<vector<DetailInfos::DetailInfo>> detailInfo_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->detailInfos_ == nullptr && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->tradePrice_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // detailInfos Field Functions 
        bool hasDetailInfos() const { return this->detailInfos_ != nullptr;};
        void deleteDetailInfos() { this->detailInfos_ = nullptr;};
        inline const Price::DetailInfos & getDetailInfos() const { DARABONBA_PTR_GET_CONST(detailInfos_, Price::DetailInfos) };
        inline Price::DetailInfos getDetailInfos() { DARABONBA_PTR_GET(detailInfos_, Price::DetailInfos) };
        inline Price& setDetailInfos(const Price::DetailInfos & detailInfos) { DARABONBA_PTR_SET_VALUE(detailInfos_, detailInfos) };
        inline Price& setDetailInfos(Price::DetailInfos && detailInfos) { DARABONBA_PTR_SET_RVALUE(detailInfos_, detailInfos) };


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


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The currency unit.
        // 
        // Alibaba Cloud China site (aliyun.com): CNY.
        // 
        // Alibaba Cloud International site (alibabacloud.com): USD.
        shared_ptr<string> currency_ {};
        // Details about the resource prices.
        shared_ptr<Price::DetailInfos> detailInfos_ {};
        // The discount.
        shared_ptr<float> discountPrice_ {};
        // The original price.
        shared_ptr<float> originalPrice_ {};
        // The transaction price, which is equal to the original price minus the discount.
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
      inline const PriceInfo::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, PriceInfo::Rules) };
      inline PriceInfo::Rules getRules() { DARABONBA_PTR_GET(rules_, PriceInfo::Rules) };
      inline PriceInfo& setRules(const PriceInfo::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline PriceInfo& setRules(PriceInfo::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The price.
      shared_ptr<PriceInfo::Price> price_ {};
      // The information about the promotion rules.
      shared_ptr<PriceInfo::Rules> rules_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribeRenewalPriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribeRenewalPriceResponseBody::PriceInfo) };
    inline DescribeRenewalPriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribeRenewalPriceResponseBody::PriceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(const DescribeRenewalPriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribeRenewalPriceResponseBody& setPriceInfo(DescribeRenewalPriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenewalPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the prices and promotion rules.
    shared_ptr<DescribeRenewalPriceResponseBody::PriceInfo> priceInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
