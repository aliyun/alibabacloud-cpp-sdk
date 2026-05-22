// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Cuxiao, cuxiao_);
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExpressionCode, expressionCode_);
      DARABONBA_PTR_TO_JSON(ExpressionMessage, expressionMessage_);
      DARABONBA_PTR_TO_JSON(InfoTitle, infoTitle_);
      DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(PromotionRules, promotionRules_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Cuxiao, cuxiao_);
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExpressionCode, expressionCode_);
      DARABONBA_PTR_FROM_JSON(ExpressionMessage, expressionMessage_);
      DARABONBA_PTR_FROM_JSON(InfoTitle, infoTitle_);
      DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(PromotionRules, promotionRules_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PromotionRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PromotionRules& obj) { 
        DARABONBA_PTR_TO_JSON(PromotionRule, promotionRule_);
      };
      friend void from_json(const Darabonba::Json& j, PromotionRules& obj) { 
        DARABONBA_PTR_FROM_JSON(PromotionRule, promotionRule_);
      };
      PromotionRules() = default ;
      PromotionRules(const PromotionRules &) = default ;
      PromotionRules(PromotionRules &&) = default ;
      PromotionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PromotionRules() = default ;
      PromotionRules& operator=(const PromotionRules &) = default ;
      PromotionRules& operator=(PromotionRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PromotionRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionRule& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        PromotionRule() = default ;
        PromotionRule(const PromotionRule &) = default ;
        PromotionRule(PromotionRule &&) = default ;
        PromotionRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionRule() = default ;
        PromotionRule& operator=(const PromotionRule &) = default ;
        PromotionRule& operator=(PromotionRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleId_ == nullptr && this->title_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PromotionRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline PromotionRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline PromotionRule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> ruleId_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->promotionRule_ == nullptr; };
      // promotionRule Field Functions 
      bool hasPromotionRule() const { return this->promotionRule_ != nullptr;};
      void deletePromotionRule() { this->promotionRule_ = nullptr;};
      inline const vector<PromotionRules::PromotionRule> & getPromotionRule() const { DARABONBA_PTR_GET_CONST(promotionRule_, vector<PromotionRules::PromotionRule>) };
      inline vector<PromotionRules::PromotionRule> getPromotionRule() { DARABONBA_PTR_GET(promotionRule_, vector<PromotionRules::PromotionRule>) };
      inline PromotionRules& setPromotionRule(const vector<PromotionRules::PromotionRule> & promotionRule) { DARABONBA_PTR_SET_VALUE(promotionRule_, promotionRule) };
      inline PromotionRules& setPromotionRule(vector<PromotionRules::PromotionRule> && promotionRule) { DARABONBA_PTR_SET_RVALUE(promotionRule_, promotionRule) };


    protected:
      shared_ptr<vector<PromotionRules::PromotionRule>> promotionRule_ {};
    };

    class Coupons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Coupons& obj) { 
        DARABONBA_PTR_TO_JSON(Coupon, coupon_);
      };
      friend void from_json(const Darabonba::Json& j, Coupons& obj) { 
        DARABONBA_PTR_FROM_JSON(Coupon, coupon_);
      };
      Coupons() = default ;
      Coupons(const Coupons &) = default ;
      Coupons(Coupons &&) = default ;
      Coupons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Coupons() = default ;
      Coupons& operator=(const Coupons &) = default ;
      Coupons& operator=(Coupons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Coupon : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Coupon& obj) { 
          DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_TO_JSON(CouponDesc, couponDesc_);
          DARABONBA_PTR_TO_JSON(CouponName, couponName_);
          DARABONBA_PTR_TO_JSON(CouponOptionCode, couponOptionCode_);
          DARABONBA_PTR_TO_JSON(CouponOptionNo, couponOptionNo_);
          DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
        };
        friend void from_json(const Darabonba::Json& j, Coupon& obj) { 
          DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_FROM_JSON(CouponDesc, couponDesc_);
          DARABONBA_PTR_FROM_JSON(CouponName, couponName_);
          DARABONBA_PTR_FROM_JSON(CouponOptionCode, couponOptionCode_);
          DARABONBA_PTR_FROM_JSON(CouponOptionNo, couponOptionNo_);
          DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
        };
        Coupon() = default ;
        Coupon(const Coupon &) = default ;
        Coupon(Coupon &&) = default ;
        Coupon(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Coupon() = default ;
        Coupon& operator=(const Coupon &) = default ;
        Coupon& operator=(Coupon &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canPromFee_ == nullptr
        && this->couponDesc_ == nullptr && this->couponName_ == nullptr && this->couponOptionCode_ == nullptr && this->couponOptionNo_ == nullptr && this->isSelected_ == nullptr; };
        // canPromFee Field Functions 
        bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
        void deleteCanPromFee() { this->canPromFee_ = nullptr;};
        inline float getCanPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0.0) };
        inline Coupon& setCanPromFee(float canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


        // couponDesc Field Functions 
        bool hasCouponDesc() const { return this->couponDesc_ != nullptr;};
        void deleteCouponDesc() { this->couponDesc_ = nullptr;};
        inline string getCouponDesc() const { DARABONBA_PTR_GET_DEFAULT(couponDesc_, "") };
        inline Coupon& setCouponDesc(string couponDesc) { DARABONBA_PTR_SET_VALUE(couponDesc_, couponDesc) };


        // couponName Field Functions 
        bool hasCouponName() const { return this->couponName_ != nullptr;};
        void deleteCouponName() { this->couponName_ = nullptr;};
        inline string getCouponName() const { DARABONBA_PTR_GET_DEFAULT(couponName_, "") };
        inline Coupon& setCouponName(string couponName) { DARABONBA_PTR_SET_VALUE(couponName_, couponName) };


        // couponOptionCode Field Functions 
        bool hasCouponOptionCode() const { return this->couponOptionCode_ != nullptr;};
        void deleteCouponOptionCode() { this->couponOptionCode_ = nullptr;};
        inline string getCouponOptionCode() const { DARABONBA_PTR_GET_DEFAULT(couponOptionCode_, "") };
        inline Coupon& setCouponOptionCode(string couponOptionCode) { DARABONBA_PTR_SET_VALUE(couponOptionCode_, couponOptionCode) };


        // couponOptionNo Field Functions 
        bool hasCouponOptionNo() const { return this->couponOptionNo_ != nullptr;};
        void deleteCouponOptionNo() { this->couponOptionNo_ = nullptr;};
        inline string getCouponOptionNo() const { DARABONBA_PTR_GET_DEFAULT(couponOptionNo_, "") };
        inline Coupon& setCouponOptionNo(string couponOptionNo) { DARABONBA_PTR_SET_VALUE(couponOptionNo_, couponOptionNo) };


        // isSelected Field Functions 
        bool hasIsSelected() const { return this->isSelected_ != nullptr;};
        void deleteIsSelected() { this->isSelected_ = nullptr;};
        inline bool getIsSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, false) };
        inline Coupon& setIsSelected(bool isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


      protected:
        shared_ptr<float> canPromFee_ {};
        shared_ptr<string> couponDesc_ {};
        shared_ptr<string> couponName_ {};
        shared_ptr<string> couponOptionCode_ {};
        shared_ptr<string> couponOptionNo_ {};
        shared_ptr<bool> isSelected_ {};
      };

      virtual bool empty() const override { return this->coupon_ == nullptr; };
      // coupon Field Functions 
      bool hasCoupon() const { return this->coupon_ != nullptr;};
      void deleteCoupon() { this->coupon_ = nullptr;};
      inline const vector<Coupons::Coupon> & getCoupon() const { DARABONBA_PTR_GET_CONST(coupon_, vector<Coupons::Coupon>) };
      inline vector<Coupons::Coupon> getCoupon() { DARABONBA_PTR_GET(coupon_, vector<Coupons::Coupon>) };
      inline Coupons& setCoupon(const vector<Coupons::Coupon> & coupon) { DARABONBA_PTR_SET_VALUE(coupon_, coupon) };
      inline Coupons& setCoupon(vector<Coupons::Coupon> && coupon) { DARABONBA_PTR_SET_RVALUE(coupon_, coupon) };


    protected:
      shared_ptr<vector<Coupons::Coupon>> coupon_ {};
    };

    virtual bool empty() const override { return this->coupons_ == nullptr
        && this->currency_ == nullptr && this->cuxiao_ == nullptr && this->cycle_ == nullptr && this->discountPrice_ == nullptr && this->duration_ == nullptr
        && this->expressionCode_ == nullptr && this->expressionMessage_ == nullptr && this->infoTitle_ == nullptr && this->originalPrice_ == nullptr && this->productCode_ == nullptr
        && this->promotionRules_ == nullptr && this->tradePrice_ == nullptr; };
    // coupons Field Functions 
    bool hasCoupons() const { return this->coupons_ != nullptr;};
    void deleteCoupons() { this->coupons_ = nullptr;};
    inline const DescribePriceResponseBody::Coupons & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, DescribePriceResponseBody::Coupons) };
    inline DescribePriceResponseBody::Coupons getCoupons() { DARABONBA_PTR_GET(coupons_, DescribePriceResponseBody::Coupons) };
    inline DescribePriceResponseBody& setCoupons(const DescribePriceResponseBody::Coupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
    inline DescribePriceResponseBody& setCoupons(DescribePriceResponseBody::Coupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribePriceResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // cuxiao Field Functions 
    bool hasCuxiao() const { return this->cuxiao_ != nullptr;};
    void deleteCuxiao() { this->cuxiao_ = nullptr;};
    inline bool getCuxiao() const { DARABONBA_PTR_GET_DEFAULT(cuxiao_, false) };
    inline DescribePriceResponseBody& setCuxiao(bool cuxiao) { DARABONBA_PTR_SET_VALUE(cuxiao_, cuxiao) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline DescribePriceResponseBody& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // discountPrice Field Functions 
    bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
    void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
    inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
    inline DescribePriceResponseBody& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribePriceResponseBody& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expressionCode Field Functions 
    bool hasExpressionCode() const { return this->expressionCode_ != nullptr;};
    void deleteExpressionCode() { this->expressionCode_ = nullptr;};
    inline string getExpressionCode() const { DARABONBA_PTR_GET_DEFAULT(expressionCode_, "") };
    inline DescribePriceResponseBody& setExpressionCode(string expressionCode) { DARABONBA_PTR_SET_VALUE(expressionCode_, expressionCode) };


    // expressionMessage Field Functions 
    bool hasExpressionMessage() const { return this->expressionMessage_ != nullptr;};
    void deleteExpressionMessage() { this->expressionMessage_ = nullptr;};
    inline string getExpressionMessage() const { DARABONBA_PTR_GET_DEFAULT(expressionMessage_, "") };
    inline DescribePriceResponseBody& setExpressionMessage(string expressionMessage) { DARABONBA_PTR_SET_VALUE(expressionMessage_, expressionMessage) };


    // infoTitle Field Functions 
    bool hasInfoTitle() const { return this->infoTitle_ != nullptr;};
    void deleteInfoTitle() { this->infoTitle_ = nullptr;};
    inline string getInfoTitle() const { DARABONBA_PTR_GET_DEFAULT(infoTitle_, "") };
    inline DescribePriceResponseBody& setInfoTitle(string infoTitle) { DARABONBA_PTR_SET_VALUE(infoTitle_, infoTitle) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline DescribePriceResponseBody& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePriceResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // promotionRules Field Functions 
    bool hasPromotionRules() const { return this->promotionRules_ != nullptr;};
    void deletePromotionRules() { this->promotionRules_ = nullptr;};
    inline const DescribePriceResponseBody::PromotionRules & getPromotionRules() const { DARABONBA_PTR_GET_CONST(promotionRules_, DescribePriceResponseBody::PromotionRules) };
    inline DescribePriceResponseBody::PromotionRules getPromotionRules() { DARABONBA_PTR_GET(promotionRules_, DescribePriceResponseBody::PromotionRules) };
    inline DescribePriceResponseBody& setPromotionRules(const DescribePriceResponseBody::PromotionRules & promotionRules) { DARABONBA_PTR_SET_VALUE(promotionRules_, promotionRules) };
    inline DescribePriceResponseBody& setPromotionRules(DescribePriceResponseBody::PromotionRules && promotionRules) { DARABONBA_PTR_SET_RVALUE(promotionRules_, promotionRules) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline DescribePriceResponseBody& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    shared_ptr<DescribePriceResponseBody::Coupons> coupons_ {};
    shared_ptr<string> currency_ {};
    shared_ptr<bool> cuxiao_ {};
    shared_ptr<string> cycle_ {};
    shared_ptr<float> discountPrice_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> expressionCode_ {};
    shared_ptr<string> expressionMessage_ {};
    shared_ptr<string> infoTitle_ {};
    shared_ptr<float> originalPrice_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<DescribePriceResponseBody::PromotionRules> promotionRules_ {};
    shared_ptr<float> tradePrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
