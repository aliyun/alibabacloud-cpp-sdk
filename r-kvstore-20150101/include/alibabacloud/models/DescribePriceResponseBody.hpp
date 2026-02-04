// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderParams, orderParams_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SubOrders, subOrders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderParams, orderParams_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SubOrders, subOrders_);
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
    class SubOrders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubOrders& obj) { 
        DARABONBA_PTR_TO_JSON(SubOrder, subOrder_);
      };
      friend void from_json(const Darabonba::Json& j, SubOrders& obj) { 
        DARABONBA_PTR_FROM_JSON(SubOrder, subOrder_);
      };
      SubOrders() = default ;
      SubOrders(const SubOrders &) = default ;
      SubOrders(SubOrders &&) = default ;
      SubOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubOrders() = default ;
      SubOrders& operator=(const SubOrders &) = default ;
      SubOrders& operator=(SubOrders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubOrder : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubOrder& obj) { 
          DARABONBA_PTR_TO_JSON(ContractActivity, contractActivity_);
          DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
          DARABONBA_PTR_TO_JSON(ModuleInstance, moduleInstance_);
          DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_TO_JSON(PromDetailList, promDetailList_);
          DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
          DARABONBA_PTR_TO_JSON(StandDiscountPrice, standDiscountPrice_);
          DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
        };
        friend void from_json(const Darabonba::Json& j, SubOrder& obj) { 
          DARABONBA_PTR_FROM_JSON(ContractActivity, contractActivity_);
          DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
          DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
          DARABONBA_PTR_FROM_JSON(ModuleInstance, moduleInstance_);
          DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
          DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
          DARABONBA_PTR_FROM_JSON(PromDetailList, promDetailList_);
          DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
          DARABONBA_PTR_FROM_JSON(StandDiscountPrice, standDiscountPrice_);
          DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
          DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
        };
        SubOrder() = default ;
        SubOrder(const SubOrder &) = default ;
        SubOrder(SubOrder &&) = default ;
        SubOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubOrder() = default ;
        SubOrder& operator=(const SubOrder &) = default ;
        SubOrder& operator=(SubOrder &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          };
          friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          };
          RuleIds() = default ;
          RuleIds(const RuleIds &) = default ;
          RuleIds(RuleIds &&) = default ;
          RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleIds() = default ;
          RuleIds& operator=(const RuleIds &) = default ;
          RuleIds& operator=(RuleIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ruleId_ == nullptr; };
          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
          inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
          inline RuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
          inline RuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


        protected:
          shared_ptr<vector<string>> ruleId_ {};
        };

        class PromDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PromDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(PromDetail, promDetail_);
          };
          friend void from_json(const Darabonba::Json& j, PromDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(PromDetail, promDetail_);
          };
          PromDetailList() = default ;
          PromDetailList(const PromDetailList &) = default ;
          PromDetailList(PromDetailList &&) = default ;
          PromDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PromDetailList() = default ;
          PromDetailList& operator=(const PromDetailList &) = default ;
          PromDetailList& operator=(PromDetailList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PromDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PromDetail& obj) { 
              DARABONBA_ANY_TO_JSON(ActivityExtInfo, activityExtInfo_);
              DARABONBA_PTR_TO_JSON(DerivedPromType, derivedPromType_);
              DARABONBA_PTR_TO_JSON(FinalPromFee, finalPromFee_);
              DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_TO_JSON(PromType, promType_);
              DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
              DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
              DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
            };
            friend void from_json(const Darabonba::Json& j, PromDetail& obj) { 
              DARABONBA_ANY_FROM_JSON(ActivityExtInfo, activityExtInfo_);
              DARABONBA_PTR_FROM_JSON(DerivedPromType, derivedPromType_);
              DARABONBA_PTR_FROM_JSON(FinalPromFee, finalPromFee_);
              DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_FROM_JSON(PromType, promType_);
              DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
              DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
              DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
            };
            PromDetail() = default ;
            PromDetail(const PromDetail &) = default ;
            PromDetail(PromDetail &&) = default ;
            PromDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PromDetail() = default ;
            PromDetail& operator=(const PromDetail &) = default ;
            PromDetail& operator=(PromDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->activityExtInfo_ == nullptr
        && this->derivedPromType_ == nullptr && this->finalPromFee_ == nullptr && this->optionCode_ == nullptr && this->promType_ == nullptr && this->promotionCode_ == nullptr
        && this->promotionId_ == nullptr && this->promotionName_ == nullptr; };
            // activityExtInfo Field Functions 
            bool hasActivityExtInfo() const { return this->activityExtInfo_ != nullptr;};
            void deleteActivityExtInfo() { this->activityExtInfo_ = nullptr;};
            inline             const Darabonba::Json & getActivityExtInfo() const { DARABONBA_GET(activityExtInfo_) };
            Darabonba::Json & getActivityExtInfo() { DARABONBA_GET(activityExtInfo_) };
            inline PromDetail& setActivityExtInfo(const Darabonba::Json & activityExtInfo) { DARABONBA_SET_VALUE(activityExtInfo_, activityExtInfo) };
            inline PromDetail& setActivityExtInfo(Darabonba::Json && activityExtInfo) { DARABONBA_SET_RVALUE(activityExtInfo_, activityExtInfo) };


            // derivedPromType Field Functions 
            bool hasDerivedPromType() const { return this->derivedPromType_ != nullptr;};
            void deleteDerivedPromType() { this->derivedPromType_ = nullptr;};
            inline string getDerivedPromType() const { DARABONBA_PTR_GET_DEFAULT(derivedPromType_, "") };
            inline PromDetail& setDerivedPromType(string derivedPromType) { DARABONBA_PTR_SET_VALUE(derivedPromType_, derivedPromType) };


            // finalPromFee Field Functions 
            bool hasFinalPromFee() const { return this->finalPromFee_ != nullptr;};
            void deleteFinalPromFee() { this->finalPromFee_ = nullptr;};
            inline double getFinalPromFee() const { DARABONBA_PTR_GET_DEFAULT(finalPromFee_, 0.0) };
            inline PromDetail& setFinalPromFee(double finalPromFee) { DARABONBA_PTR_SET_VALUE(finalPromFee_, finalPromFee) };


            // optionCode Field Functions 
            bool hasOptionCode() const { return this->optionCode_ != nullptr;};
            void deleteOptionCode() { this->optionCode_ = nullptr;};
            inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
            inline PromDetail& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


            // promType Field Functions 
            bool hasPromType() const { return this->promType_ != nullptr;};
            void deletePromType() { this->promType_ = nullptr;};
            inline string getPromType() const { DARABONBA_PTR_GET_DEFAULT(promType_, "") };
            inline PromDetail& setPromType(string promType) { DARABONBA_PTR_SET_VALUE(promType_, promType) };


            // promotionCode Field Functions 
            bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
            void deletePromotionCode() { this->promotionCode_ = nullptr;};
            inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
            inline PromDetail& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


            // promotionId Field Functions 
            bool hasPromotionId() const { return this->promotionId_ != nullptr;};
            void deletePromotionId() { this->promotionId_ = nullptr;};
            inline int64_t getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, 0L) };
            inline PromDetail& setPromotionId(int64_t promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


            // promotionName Field Functions 
            bool hasPromotionName() const { return this->promotionName_ != nullptr;};
            void deletePromotionName() { this->promotionName_ = nullptr;};
            inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
            inline PromDetail& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


          protected:
            // The additional activity information.
            Darabonba::Json activityExtInfo_ {};
            // The derived promotion type.
            shared_ptr<string> derivedPromType_ {};
            // The discount amount.
            shared_ptr<double> finalPromFee_ {};
            // The coupon code.
            shared_ptr<string> optionCode_ {};
            // The promotion type.
            shared_ptr<string> promType_ {};
            // The promotion code.
            shared_ptr<string> promotionCode_ {};
            // The promotion ID.
            shared_ptr<int64_t> promotionId_ {};
            // The promotion name.
            shared_ptr<string> promotionName_ {};
          };

          virtual bool empty() const override { return this->promDetail_ == nullptr; };
          // promDetail Field Functions 
          bool hasPromDetail() const { return this->promDetail_ != nullptr;};
          void deletePromDetail() { this->promDetail_ = nullptr;};
          inline const vector<PromDetailList::PromDetail> & getPromDetail() const { DARABONBA_PTR_GET_CONST(promDetail_, vector<PromDetailList::PromDetail>) };
          inline vector<PromDetailList::PromDetail> getPromDetail() { DARABONBA_PTR_GET(promDetail_, vector<PromDetailList::PromDetail>) };
          inline PromDetailList& setPromDetail(const vector<PromDetailList::PromDetail> & promDetail) { DARABONBA_PTR_SET_VALUE(promDetail_, promDetail) };
          inline PromDetailList& setPromDetail(vector<PromDetailList::PromDetail> && promDetail) { DARABONBA_PTR_SET_RVALUE(promDetail_, promDetail) };


        protected:
          shared_ptr<vector<PromDetailList::PromDetail>> promDetail_ {};
        };

        class OptionalPromotions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OptionalPromotions& obj) { 
            DARABONBA_PTR_TO_JSON(OptionalPromotion, optionalPromotion_);
          };
          friend void from_json(const Darabonba::Json& j, OptionalPromotions& obj) { 
            DARABONBA_PTR_FROM_JSON(OptionalPromotion, optionalPromotion_);
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
          class OptionalPromotion : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OptionalPromotion& obj) { 
              DARABONBA_ANY_TO_JSON(ActivityExtInfo, activityExtInfo_);
              DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
              DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
              DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
              DARABONBA_PTR_TO_JSON(Selected, selected_);
              DARABONBA_PTR_TO_JSON(Show, show_);
            };
            friend void from_json(const Darabonba::Json& j, OptionalPromotion& obj) { 
              DARABONBA_ANY_FROM_JSON(ActivityExtInfo, activityExtInfo_);
              DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
              DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
              DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
              DARABONBA_PTR_FROM_JSON(Selected, selected_);
              DARABONBA_PTR_FROM_JSON(Show, show_);
            };
            OptionalPromotion() = default ;
            OptionalPromotion(const OptionalPromotion &) = default ;
            OptionalPromotion(OptionalPromotion &&) = default ;
            OptionalPromotion(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OptionalPromotion() = default ;
            OptionalPromotion& operator=(const OptionalPromotion &) = default ;
            OptionalPromotion& operator=(OptionalPromotion &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->activityExtInfo_ == nullptr
        && this->canPromFee_ == nullptr && this->couponNo_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->optionCode_ == nullptr
        && this->promotionName_ == nullptr && this->promotionOptionNo_ == nullptr && this->selected_ == nullptr && this->show_ == nullptr; };
            // activityExtInfo Field Functions 
            bool hasActivityExtInfo() const { return this->activityExtInfo_ != nullptr;};
            void deleteActivityExtInfo() { this->activityExtInfo_ = nullptr;};
            inline             const Darabonba::Json & getActivityExtInfo() const { DARABONBA_GET(activityExtInfo_) };
            Darabonba::Json & getActivityExtInfo() { DARABONBA_GET(activityExtInfo_) };
            inline OptionalPromotion& setActivityExtInfo(const Darabonba::Json & activityExtInfo) { DARABONBA_SET_VALUE(activityExtInfo_, activityExtInfo) };
            inline OptionalPromotion& setActivityExtInfo(Darabonba::Json && activityExtInfo) { DARABONBA_SET_RVALUE(activityExtInfo_, activityExtInfo) };


            // canPromFee Field Functions 
            bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
            void deleteCanPromFee() { this->canPromFee_ = nullptr;};
            inline string getCanPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, "") };
            inline OptionalPromotion& setCanPromFee(string canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


            // couponNo Field Functions 
            bool hasCouponNo() const { return this->couponNo_ != nullptr;};
            void deleteCouponNo() { this->couponNo_ = nullptr;};
            inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
            inline OptionalPromotion& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline OptionalPromotion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline OptionalPromotion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // optionCode Field Functions 
            bool hasOptionCode() const { return this->optionCode_ != nullptr;};
            void deleteOptionCode() { this->optionCode_ = nullptr;};
            inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
            inline OptionalPromotion& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


            // promotionName Field Functions 
            bool hasPromotionName() const { return this->promotionName_ != nullptr;};
            void deletePromotionName() { this->promotionName_ = nullptr;};
            inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
            inline OptionalPromotion& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


            // promotionOptionNo Field Functions 
            bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
            void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
            inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
            inline OptionalPromotion& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


            // selected Field Functions 
            bool hasSelected() const { return this->selected_ != nullptr;};
            void deleteSelected() { this->selected_ = nullptr;};
            inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
            inline OptionalPromotion& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


            // show Field Functions 
            bool hasShow() const { return this->show_ != nullptr;};
            void deleteShow() { this->show_ = nullptr;};
            inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
            inline OptionalPromotion& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


          protected:
            // The additional activity information.
            Darabonba::Json activityExtInfo_ {};
            // The amount that can be deducted by using the coupon.
            shared_ptr<string> canPromFee_ {};
            // Indicates whether coupons are used. Valid values:
            // 
            // *   default or null (default): Coupons are used.
            // *   youhuiquan_promotion_option_id_for_blank: Coupons are not used.
            shared_ptr<string> couponNo_ {};
            // The description of the coupon.
            shared_ptr<string> description_ {};
            // The coupon name.
            shared_ptr<string> name_ {};
            // The promotion code.
            shared_ptr<string> optionCode_ {};
            // The promotion name.
            shared_ptr<string> promotionName_ {};
            // The promotion ID.
            shared_ptr<string> promotionOptionNo_ {};
            // Indicates whether the promotion option is selected.
            shared_ptr<bool> selected_ {};
            // Indicates whether the discount is displayed.
            shared_ptr<bool> show_ {};
          };

          virtual bool empty() const override { return this->optionalPromotion_ == nullptr; };
          // optionalPromotion Field Functions 
          bool hasOptionalPromotion() const { return this->optionalPromotion_ != nullptr;};
          void deleteOptionalPromotion() { this->optionalPromotion_ = nullptr;};
          inline const vector<OptionalPromotions::OptionalPromotion> & getOptionalPromotion() const { DARABONBA_PTR_GET_CONST(optionalPromotion_, vector<OptionalPromotions::OptionalPromotion>) };
          inline vector<OptionalPromotions::OptionalPromotion> getOptionalPromotion() { DARABONBA_PTR_GET(optionalPromotion_, vector<OptionalPromotions::OptionalPromotion>) };
          inline OptionalPromotions& setOptionalPromotion(const vector<OptionalPromotions::OptionalPromotion> & optionalPromotion) { DARABONBA_PTR_SET_VALUE(optionalPromotion_, optionalPromotion) };
          inline OptionalPromotions& setOptionalPromotion(vector<OptionalPromotions::OptionalPromotion> && optionalPromotion) { DARABONBA_PTR_SET_RVALUE(optionalPromotion_, optionalPromotion) };


        protected:
          shared_ptr<vector<OptionalPromotions::OptionalPromotion>> optionalPromotion_ {};
        };

        class ModuleInstance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModuleInstance& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleInstance, moduleInstance_);
          };
          friend void from_json(const Darabonba::Json& j, ModuleInstance& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleInstance, moduleInstance_);
          };
          ModuleInstance() = default ;
          ModuleInstance(const ModuleInstance &) = default ;
          ModuleInstance(ModuleInstance &&) = default ;
          ModuleInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModuleInstance() = default ;
          ModuleInstance& operator=(const ModuleInstance &) = default ;
          ModuleInstance& operator=(ModuleInstance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ModuleInstanceItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModuleInstanceItem& obj) { 
              DARABONBA_PTR_TO_JSON(ContractActivity, contractActivity_);
              DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
              DARABONBA_PTR_TO_JSON(DiscountFee, discountFee_);
              DARABONBA_PTR_TO_JSON(ModuleAttrs, moduleAttrs_);
              DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
              DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_TO_JSON(NeedOrderPay, needOrderPay_);
              DARABONBA_PTR_TO_JSON(PayFee, payFee_);
              DARABONBA_PTR_TO_JSON(PricingModule, pricingModule_);
              DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
              DARABONBA_PTR_TO_JSON(TotalProductFee, totalProductFee_);
            };
            friend void from_json(const Darabonba::Json& j, ModuleInstanceItem& obj) { 
              DARABONBA_PTR_FROM_JSON(ContractActivity, contractActivity_);
              DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
              DARABONBA_PTR_FROM_JSON(DiscountFee, discountFee_);
              DARABONBA_PTR_FROM_JSON(ModuleAttrs, moduleAttrs_);
              DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
              DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_FROM_JSON(NeedOrderPay, needOrderPay_);
              DARABONBA_PTR_FROM_JSON(PayFee, payFee_);
              DARABONBA_PTR_FROM_JSON(PricingModule, pricingModule_);
              DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
              DARABONBA_PTR_FROM_JSON(TotalProductFee, totalProductFee_);
            };
            ModuleInstanceItem() = default ;
            ModuleInstanceItem(const ModuleInstanceItem &) = default ;
            ModuleInstanceItem(ModuleInstanceItem &&) = default ;
            ModuleInstanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModuleInstanceItem() = default ;
            ModuleInstanceItem& operator=(const ModuleInstanceItem &) = default ;
            ModuleInstanceItem& operator=(ModuleInstanceItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ModuleAttrs : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ModuleAttrs& obj) { 
                DARABONBA_PTR_TO_JSON(moduleAttr, moduleAttr_);
              };
              friend void from_json(const Darabonba::Json& j, ModuleAttrs& obj) { 
                DARABONBA_PTR_FROM_JSON(moduleAttr, moduleAttr_);
              };
              ModuleAttrs() = default ;
              ModuleAttrs(const ModuleAttrs &) = default ;
              ModuleAttrs(ModuleAttrs &&) = default ;
              ModuleAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ModuleAttrs() = default ;
              ModuleAttrs& operator=(const ModuleAttrs &) = default ;
              ModuleAttrs& operator=(ModuleAttrs &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ModuleAttr : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ModuleAttr& obj) { 
                  DARABONBA_PTR_TO_JSON(Code, code_);
                  DARABONBA_PTR_TO_JSON(Name, name_);
                  DARABONBA_PTR_TO_JSON(Type, type_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, ModuleAttr& obj) { 
                  DARABONBA_PTR_FROM_JSON(Code, code_);
                  DARABONBA_PTR_FROM_JSON(Name, name_);
                  DARABONBA_PTR_FROM_JSON(Type, type_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                ModuleAttr() = default ;
                ModuleAttr(const ModuleAttr &) = default ;
                ModuleAttr(ModuleAttr &&) = default ;
                ModuleAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ModuleAttr() = default ;
                ModuleAttr& operator=(const ModuleAttr &) = default ;
                ModuleAttr& operator=(ModuleAttr &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
                // code Field Functions 
                bool hasCode() const { return this->code_ != nullptr;};
                void deleteCode() { this->code_ = nullptr;};
                inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
                inline ModuleAttr& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline ModuleAttr& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // type Field Functions 
                bool hasType() const { return this->type_ != nullptr;};
                void deleteType() { this->type_ = nullptr;};
                inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
                inline ModuleAttr& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline ModuleAttr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // The attribute code.
                shared_ptr<string> code_ {};
                // The attribute name.
                shared_ptr<string> name_ {};
                // The attribute type.
                shared_ptr<int64_t> type_ {};
                // The attribute value.
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->moduleAttr_ == nullptr; };
              // moduleAttr Field Functions 
              bool hasModuleAttr() const { return this->moduleAttr_ != nullptr;};
              void deleteModuleAttr() { this->moduleAttr_ = nullptr;};
              inline const vector<ModuleAttrs::ModuleAttr> & getModuleAttr() const { DARABONBA_PTR_GET_CONST(moduleAttr_, vector<ModuleAttrs::ModuleAttr>) };
              inline vector<ModuleAttrs::ModuleAttr> getModuleAttr() { DARABONBA_PTR_GET(moduleAttr_, vector<ModuleAttrs::ModuleAttr>) };
              inline ModuleAttrs& setModuleAttr(const vector<ModuleAttrs::ModuleAttr> & moduleAttr) { DARABONBA_PTR_SET_VALUE(moduleAttr_, moduleAttr) };
              inline ModuleAttrs& setModuleAttr(vector<ModuleAttrs::ModuleAttr> && moduleAttr) { DARABONBA_PTR_SET_RVALUE(moduleAttr_, moduleAttr) };


            protected:
              shared_ptr<vector<ModuleAttrs::ModuleAttr>> moduleAttr_ {};
            };

            class DepreciateInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DepreciateInfo& obj) { 
                DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
                DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
                DARABONBA_PTR_TO_JSON(Differential, differential_);
                DARABONBA_PTR_TO_JSON(DifferentialName, differentialName_);
                DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
                DARABONBA_PTR_TO_JSON(IsShow, isShow_);
                DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
                DARABONBA_PTR_TO_JSON(MonthPrice, monthPrice_);
                DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              };
              friend void from_json(const Darabonba::Json& j, DepreciateInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
                DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
                DARABONBA_PTR_FROM_JSON(Differential, differential_);
                DARABONBA_PTR_FROM_JSON(DifferentialName, differentialName_);
                DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
                DARABONBA_PTR_FROM_JSON(IsShow, isShow_);
                DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
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
        && this->cheapStandAmount_ == nullptr && this->differential_ == nullptr && this->differentialName_ == nullptr && this->isContractActivity_ == nullptr && this->isShow_ == nullptr
        && this->listPrice_ == nullptr && this->monthPrice_ == nullptr && this->originalStandAmount_ == nullptr && this->startTime_ == nullptr; };
              // cheapRate Field Functions 
              bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
              void deleteCheapRate() { this->cheapRate_ = nullptr;};
              inline double getCheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, 0.0) };
              inline DepreciateInfo& setCheapRate(double cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


              // cheapStandAmount Field Functions 
              bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
              void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
              inline double getCheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, 0.0) };
              inline DepreciateInfo& setCheapStandAmount(double cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


              // differential Field Functions 
              bool hasDifferential() const { return this->differential_ != nullptr;};
              void deleteDifferential() { this->differential_ = nullptr;};
              inline double getDifferential() const { DARABONBA_PTR_GET_DEFAULT(differential_, 0.0) };
              inline DepreciateInfo& setDifferential(double differential) { DARABONBA_PTR_SET_VALUE(differential_, differential) };


              // differentialName Field Functions 
              bool hasDifferentialName() const { return this->differentialName_ != nullptr;};
              void deleteDifferentialName() { this->differentialName_ = nullptr;};
              inline string getDifferentialName() const { DARABONBA_PTR_GET_DEFAULT(differentialName_, "") };
              inline DepreciateInfo& setDifferentialName(string differentialName) { DARABONBA_PTR_SET_VALUE(differentialName_, differentialName) };


              // isContractActivity Field Functions 
              bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
              void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
              inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
              inline DepreciateInfo& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


              // isShow Field Functions 
              bool hasIsShow() const { return this->isShow_ != nullptr;};
              void deleteIsShow() { this->isShow_ = nullptr;};
              inline bool getIsShow() const { DARABONBA_PTR_GET_DEFAULT(isShow_, false) };
              inline DepreciateInfo& setIsShow(bool isShow) { DARABONBA_PTR_SET_VALUE(isShow_, isShow) };


              // listPrice Field Functions 
              bool hasListPrice() const { return this->listPrice_ != nullptr;};
              void deleteListPrice() { this->listPrice_ = nullptr;};
              inline double getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, 0.0) };
              inline DepreciateInfo& setListPrice(double listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


              // monthPrice Field Functions 
              bool hasMonthPrice() const { return this->monthPrice_ != nullptr;};
              void deleteMonthPrice() { this->monthPrice_ = nullptr;};
              inline double getMonthPrice() const { DARABONBA_PTR_GET_DEFAULT(monthPrice_, 0.0) };
              inline DepreciateInfo& setMonthPrice(double monthPrice) { DARABONBA_PTR_SET_VALUE(monthPrice_, monthPrice) };


              // originalStandAmount Field Functions 
              bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
              void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
              inline double getOriginalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, 0.0) };
              inline DepreciateInfo& setOriginalStandAmount(double originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline DepreciateInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            protected:
              // The price reduction rate.
              shared_ptr<double> cheapRate_ {};
              // The new total price displayed on the official website.
              shared_ptr<double> cheapStandAmount_ {};
              // The promotional offer (displayed in the total order amount).
              shared_ptr<double> differential_ {};
              // The name of the promotional offer.
              shared_ptr<string> differentialName_ {};
              // Indicates whether eligibility for the contracted discount is met.
              shared_ptr<bool> isContractActivity_ {};
              // Indicates whether the price reduction rate is displayed.
              shared_ptr<bool> isShow_ {};
              // The list price.
              shared_ptr<double> listPrice_ {};
              // The monthly price.
              shared_ptr<double> monthPrice_ {};
              // The original total price displayed on the official website.
              shared_ptr<double> originalStandAmount_ {};
              // The start time of the activity.
              shared_ptr<string> startTime_ {};
            };

            virtual bool empty() const override { return this->contractActivity_ == nullptr
        && this->depreciateInfo_ == nullptr && this->discountFee_ == nullptr && this->moduleAttrs_ == nullptr && this->moduleCode_ == nullptr && this->moduleId_ == nullptr
        && this->moduleName_ == nullptr && this->needOrderPay_ == nullptr && this->payFee_ == nullptr && this->pricingModule_ == nullptr && this->standPrice_ == nullptr
        && this->totalProductFee_ == nullptr; };
            // contractActivity Field Functions 
            bool hasContractActivity() const { return this->contractActivity_ != nullptr;};
            void deleteContractActivity() { this->contractActivity_ = nullptr;};
            inline bool getContractActivity() const { DARABONBA_PTR_GET_DEFAULT(contractActivity_, false) };
            inline ModuleInstanceItem& setContractActivity(bool contractActivity) { DARABONBA_PTR_SET_VALUE(contractActivity_, contractActivity) };


            // depreciateInfo Field Functions 
            bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
            void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
            inline const ModuleInstanceItem::DepreciateInfo & getDepreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, ModuleInstanceItem::DepreciateInfo) };
            inline ModuleInstanceItem::DepreciateInfo getDepreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, ModuleInstanceItem::DepreciateInfo) };
            inline ModuleInstanceItem& setDepreciateInfo(const ModuleInstanceItem::DepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
            inline ModuleInstanceItem& setDepreciateInfo(ModuleInstanceItem::DepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


            // discountFee Field Functions 
            bool hasDiscountFee() const { return this->discountFee_ != nullptr;};
            void deleteDiscountFee() { this->discountFee_ = nullptr;};
            inline double getDiscountFee() const { DARABONBA_PTR_GET_DEFAULT(discountFee_, 0.0) };
            inline ModuleInstanceItem& setDiscountFee(double discountFee) { DARABONBA_PTR_SET_VALUE(discountFee_, discountFee) };


            // moduleAttrs Field Functions 
            bool hasModuleAttrs() const { return this->moduleAttrs_ != nullptr;};
            void deleteModuleAttrs() { this->moduleAttrs_ = nullptr;};
            inline const ModuleInstanceItem::ModuleAttrs & getModuleAttrs() const { DARABONBA_PTR_GET_CONST(moduleAttrs_, ModuleInstanceItem::ModuleAttrs) };
            inline ModuleInstanceItem::ModuleAttrs getModuleAttrs() { DARABONBA_PTR_GET(moduleAttrs_, ModuleInstanceItem::ModuleAttrs) };
            inline ModuleInstanceItem& setModuleAttrs(const ModuleInstanceItem::ModuleAttrs & moduleAttrs) { DARABONBA_PTR_SET_VALUE(moduleAttrs_, moduleAttrs) };
            inline ModuleInstanceItem& setModuleAttrs(ModuleInstanceItem::ModuleAttrs && moduleAttrs) { DARABONBA_PTR_SET_RVALUE(moduleAttrs_, moduleAttrs) };


            // moduleCode Field Functions 
            bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
            void deleteModuleCode() { this->moduleCode_ = nullptr;};
            inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
            inline ModuleInstanceItem& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


            // moduleId Field Functions 
            bool hasModuleId() const { return this->moduleId_ != nullptr;};
            void deleteModuleId() { this->moduleId_ = nullptr;};
            inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
            inline ModuleInstanceItem& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


            // moduleName Field Functions 
            bool hasModuleName() const { return this->moduleName_ != nullptr;};
            void deleteModuleName() { this->moduleName_ = nullptr;};
            inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
            inline ModuleInstanceItem& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


            // needOrderPay Field Functions 
            bool hasNeedOrderPay() const { return this->needOrderPay_ != nullptr;};
            void deleteNeedOrderPay() { this->needOrderPay_ = nullptr;};
            inline bool getNeedOrderPay() const { DARABONBA_PTR_GET_DEFAULT(needOrderPay_, false) };
            inline ModuleInstanceItem& setNeedOrderPay(bool needOrderPay) { DARABONBA_PTR_SET_VALUE(needOrderPay_, needOrderPay) };


            // payFee Field Functions 
            bool hasPayFee() const { return this->payFee_ != nullptr;};
            void deletePayFee() { this->payFee_ = nullptr;};
            inline double getPayFee() const { DARABONBA_PTR_GET_DEFAULT(payFee_, 0.0) };
            inline ModuleInstanceItem& setPayFee(double payFee) { DARABONBA_PTR_SET_VALUE(payFee_, payFee) };


            // pricingModule Field Functions 
            bool hasPricingModule() const { return this->pricingModule_ != nullptr;};
            void deletePricingModule() { this->pricingModule_ = nullptr;};
            inline bool getPricingModule() const { DARABONBA_PTR_GET_DEFAULT(pricingModule_, false) };
            inline ModuleInstanceItem& setPricingModule(bool pricingModule) { DARABONBA_PTR_SET_VALUE(pricingModule_, pricingModule) };


            // standPrice Field Functions 
            bool hasStandPrice() const { return this->standPrice_ != nullptr;};
            void deleteStandPrice() { this->standPrice_ = nullptr;};
            inline double getStandPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, 0.0) };
            inline ModuleInstanceItem& setStandPrice(double standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


            // totalProductFee Field Functions 
            bool hasTotalProductFee() const { return this->totalProductFee_ != nullptr;};
            void deleteTotalProductFee() { this->totalProductFee_ = nullptr;};
            inline double getTotalProductFee() const { DARABONBA_PTR_GET_DEFAULT(totalProductFee_, 0.0) };
            inline ModuleInstanceItem& setTotalProductFee(double totalProductFee) { DARABONBA_PTR_SET_VALUE(totalProductFee_, totalProductFee) };


          protected:
            // Indicates whether eligibility for the contracted discount is met.
            shared_ptr<bool> contractActivity_ {};
            // The price reduction information.
            shared_ptr<ModuleInstanceItem::DepreciateInfo> depreciateInfo_ {};
            // The discount.
            shared_ptr<double> discountFee_ {};
            // The module attributes.
            shared_ptr<ModuleInstanceItem::ModuleAttrs> moduleAttrs_ {};
            // The module code.
            shared_ptr<string> moduleCode_ {};
            // The module ID.
            shared_ptr<string> moduleId_ {};
            // The module name.
            shared_ptr<string> moduleName_ {};
            // Indicates whether the order is paid.
            shared_ptr<bool> needOrderPay_ {};
            // The actual amount paid.
            shared_ptr<double> payFee_ {};
            // Indicates whether the item is billed.
            shared_ptr<bool> pricingModule_ {};
            // The discounted price.
            shared_ptr<double> standPrice_ {};
            // The original price of the instance.
            shared_ptr<double> totalProductFee_ {};
          };

          virtual bool empty() const override { return this->moduleInstance_ == nullptr; };
          // moduleInstance Field Functions 
          bool hasModuleInstance() const { return this->moduleInstance_ != nullptr;};
          void deleteModuleInstance() { this->moduleInstance_ = nullptr;};
          inline const vector<ModuleInstance::ModuleInstanceItem> & getModuleInstance() const { DARABONBA_PTR_GET_CONST(moduleInstance_, vector<ModuleInstance::ModuleInstanceItem>) };
          inline vector<ModuleInstance::ModuleInstanceItem> getModuleInstance() { DARABONBA_PTR_GET(moduleInstance_, vector<ModuleInstance::ModuleInstanceItem>) };
          inline ModuleInstance& setModuleInstance(const vector<ModuleInstance::ModuleInstanceItem> & moduleInstance) { DARABONBA_PTR_SET_VALUE(moduleInstance_, moduleInstance) };
          inline ModuleInstance& setModuleInstance(vector<ModuleInstance::ModuleInstanceItem> && moduleInstance) { DARABONBA_PTR_SET_RVALUE(moduleInstance_, moduleInstance) };


        protected:
          shared_ptr<vector<ModuleInstance::ModuleInstanceItem>> moduleInstance_ {};
        };

        class DepreciateInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DepreciateInfo& obj) { 
            DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
            DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
            DARABONBA_PTR_TO_JSON(ContractActivity, contractActivity_);
            DARABONBA_PTR_TO_JSON(Differential, differential_);
            DARABONBA_PTR_TO_JSON(DifferentialName, differentialName_);
            DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
            DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
            DARABONBA_PTR_TO_JSON(MonthPrice, monthPrice_);
            DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, DepreciateInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
            DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
            DARABONBA_PTR_FROM_JSON(ContractActivity, contractActivity_);
            DARABONBA_PTR_FROM_JSON(Differential, differential_);
            DARABONBA_PTR_FROM_JSON(DifferentialName, differentialName_);
            DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
            DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
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
          class ContractActivity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ContractActivity& obj) { 
              DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
              DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
              DARABONBA_PTR_TO_JSON(FinalFee, finalFee_);
              DARABONBA_PTR_TO_JSON(FinalPromFee, finalPromFee_);
              DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_TO_JSON(OptionIds, optionIds_);
              DARABONBA_PTR_TO_JSON(ProdFee, prodFee_);
            };
            friend void from_json(const Darabonba::Json& j, ContractActivity& obj) { 
              DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
              DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
              DARABONBA_PTR_FROM_JSON(FinalFee, finalFee_);
              DARABONBA_PTR_FROM_JSON(FinalPromFee, finalPromFee_);
              DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
              DARABONBA_PTR_FROM_JSON(OptionIds, optionIds_);
              DARABONBA_PTR_FROM_JSON(ProdFee, prodFee_);
            };
            ContractActivity() = default ;
            ContractActivity(const ContractActivity &) = default ;
            ContractActivity(ContractActivity &&) = default ;
            ContractActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ContractActivity() = default ;
            ContractActivity& operator=(const ContractActivity &) = default ;
            ContractActivity& operator=(ContractActivity &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OptionIds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OptionIds& obj) { 
                DARABONBA_PTR_TO_JSON(OptionId, optionId_);
              };
              friend void from_json(const Darabonba::Json& j, OptionIds& obj) { 
                DARABONBA_PTR_FROM_JSON(OptionId, optionId_);
              };
              OptionIds() = default ;
              OptionIds(const OptionIds &) = default ;
              OptionIds(OptionIds &&) = default ;
              OptionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OptionIds() = default ;
              OptionIds& operator=(const OptionIds &) = default ;
              OptionIds& operator=(OptionIds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->optionId_ == nullptr; };
              // optionId Field Functions 
              bool hasOptionId() const { return this->optionId_ != nullptr;};
              void deleteOptionId() { this->optionId_ = nullptr;};
              inline const vector<int64_t> & getOptionId() const { DARABONBA_PTR_GET_CONST(optionId_, vector<int64_t>) };
              inline vector<int64_t> getOptionId() { DARABONBA_PTR_GET(optionId_, vector<int64_t>) };
              inline OptionIds& setOptionId(const vector<int64_t> & optionId) { DARABONBA_PTR_SET_VALUE(optionId_, optionId) };
              inline OptionIds& setOptionId(vector<int64_t> && optionId) { DARABONBA_PTR_SET_RVALUE(optionId_, optionId) };


            protected:
              shared_ptr<vector<int64_t>> optionId_ {};
            };

            virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityName_ == nullptr && this->finalFee_ == nullptr && this->finalPromFee_ == nullptr && this->optionCode_ == nullptr && this->optionIds_ == nullptr
        && this->prodFee_ == nullptr; };
            // activityId Field Functions 
            bool hasActivityId() const { return this->activityId_ != nullptr;};
            void deleteActivityId() { this->activityId_ = nullptr;};
            inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
            inline ContractActivity& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


            // activityName Field Functions 
            bool hasActivityName() const { return this->activityName_ != nullptr;};
            void deleteActivityName() { this->activityName_ = nullptr;};
            inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
            inline ContractActivity& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


            // finalFee Field Functions 
            bool hasFinalFee() const { return this->finalFee_ != nullptr;};
            void deleteFinalFee() { this->finalFee_ = nullptr;};
            inline double getFinalFee() const { DARABONBA_PTR_GET_DEFAULT(finalFee_, 0.0) };
            inline ContractActivity& setFinalFee(double finalFee) { DARABONBA_PTR_SET_VALUE(finalFee_, finalFee) };


            // finalPromFee Field Functions 
            bool hasFinalPromFee() const { return this->finalPromFee_ != nullptr;};
            void deleteFinalPromFee() { this->finalPromFee_ = nullptr;};
            inline double getFinalPromFee() const { DARABONBA_PTR_GET_DEFAULT(finalPromFee_, 0.0) };
            inline ContractActivity& setFinalPromFee(double finalPromFee) { DARABONBA_PTR_SET_VALUE(finalPromFee_, finalPromFee) };


            // optionCode Field Functions 
            bool hasOptionCode() const { return this->optionCode_ != nullptr;};
            void deleteOptionCode() { this->optionCode_ = nullptr;};
            inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
            inline ContractActivity& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


            // optionIds Field Functions 
            bool hasOptionIds() const { return this->optionIds_ != nullptr;};
            void deleteOptionIds() { this->optionIds_ = nullptr;};
            inline const ContractActivity::OptionIds & getOptionIds() const { DARABONBA_PTR_GET_CONST(optionIds_, ContractActivity::OptionIds) };
            inline ContractActivity::OptionIds getOptionIds() { DARABONBA_PTR_GET(optionIds_, ContractActivity::OptionIds) };
            inline ContractActivity& setOptionIds(const ContractActivity::OptionIds & optionIds) { DARABONBA_PTR_SET_VALUE(optionIds_, optionIds) };
            inline ContractActivity& setOptionIds(ContractActivity::OptionIds && optionIds) { DARABONBA_PTR_SET_RVALUE(optionIds_, optionIds) };


            // prodFee Field Functions 
            bool hasProdFee() const { return this->prodFee_ != nullptr;};
            void deleteProdFee() { this->prodFee_ = nullptr;};
            inline double getProdFee() const { DARABONBA_PTR_GET_DEFAULT(prodFee_, 0.0) };
            inline ContractActivity& setProdFee(double prodFee) { DARABONBA_PTR_SET_VALUE(prodFee_, prodFee) };


          protected:
            // The activity ID.
            shared_ptr<int64_t> activityId_ {};
            // The activity name.
            shared_ptr<string> activityName_ {};
            // The preferential price.
            shared_ptr<double> finalFee_ {};
            // The total discount amount.
            shared_ptr<double> finalPromFee_ {};
            // The promotion ID.
            shared_ptr<string> optionCode_ {};
            // The promotion IDs.
            shared_ptr<ContractActivity::OptionIds> optionIds_ {};
            // The original price.
            shared_ptr<double> prodFee_ {};
          };

          virtual bool empty() const override { return this->cheapRate_ == nullptr
        && this->cheapStandAmount_ == nullptr && this->contractActivity_ == nullptr && this->differential_ == nullptr && this->differentialName_ == nullptr && this->isContractActivity_ == nullptr
        && this->listPrice_ == nullptr && this->monthPrice_ == nullptr && this->originalStandAmount_ == nullptr && this->startTime_ == nullptr; };
          // cheapRate Field Functions 
          bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
          void deleteCheapRate() { this->cheapRate_ = nullptr;};
          inline int64_t getCheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, 0L) };
          inline DepreciateInfo& setCheapRate(int64_t cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


          // cheapStandAmount Field Functions 
          bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
          void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
          inline int64_t getCheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, 0L) };
          inline DepreciateInfo& setCheapStandAmount(int64_t cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


          // contractActivity Field Functions 
          bool hasContractActivity() const { return this->contractActivity_ != nullptr;};
          void deleteContractActivity() { this->contractActivity_ = nullptr;};
          inline const DepreciateInfo::ContractActivity & getContractActivity() const { DARABONBA_PTR_GET_CONST(contractActivity_, DepreciateInfo::ContractActivity) };
          inline DepreciateInfo::ContractActivity getContractActivity() { DARABONBA_PTR_GET(contractActivity_, DepreciateInfo::ContractActivity) };
          inline DepreciateInfo& setContractActivity(const DepreciateInfo::ContractActivity & contractActivity) { DARABONBA_PTR_SET_VALUE(contractActivity_, contractActivity) };
          inline DepreciateInfo& setContractActivity(DepreciateInfo::ContractActivity && contractActivity) { DARABONBA_PTR_SET_RVALUE(contractActivity_, contractActivity) };


          // differential Field Functions 
          bool hasDifferential() const { return this->differential_ != nullptr;};
          void deleteDifferential() { this->differential_ = nullptr;};
          inline int64_t getDifferential() const { DARABONBA_PTR_GET_DEFAULT(differential_, 0L) };
          inline DepreciateInfo& setDifferential(int64_t differential) { DARABONBA_PTR_SET_VALUE(differential_, differential) };


          // differentialName Field Functions 
          bool hasDifferentialName() const { return this->differentialName_ != nullptr;};
          void deleteDifferentialName() { this->differentialName_ = nullptr;};
          inline string getDifferentialName() const { DARABONBA_PTR_GET_DEFAULT(differentialName_, "") };
          inline DepreciateInfo& setDifferentialName(string differentialName) { DARABONBA_PTR_SET_VALUE(differentialName_, differentialName) };


          // isContractActivity Field Functions 
          bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
          void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
          inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
          inline DepreciateInfo& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


          // listPrice Field Functions 
          bool hasListPrice() const { return this->listPrice_ != nullptr;};
          void deleteListPrice() { this->listPrice_ = nullptr;};
          inline int64_t getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, 0L) };
          inline DepreciateInfo& setListPrice(int64_t listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


          // monthPrice Field Functions 
          bool hasMonthPrice() const { return this->monthPrice_ != nullptr;};
          void deleteMonthPrice() { this->monthPrice_ = nullptr;};
          inline int64_t getMonthPrice() const { DARABONBA_PTR_GET_DEFAULT(monthPrice_, 0L) };
          inline DepreciateInfo& setMonthPrice(int64_t monthPrice) { DARABONBA_PTR_SET_VALUE(monthPrice_, monthPrice) };


          // originalStandAmount Field Functions 
          bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
          void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
          inline int64_t getOriginalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, 0L) };
          inline DepreciateInfo& setOriginalStandAmount(int64_t originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline DepreciateInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          // The price reduction rate.
          shared_ptr<int64_t> cheapRate_ {};
          // The new total price displayed on the official website.
          shared_ptr<int64_t> cheapStandAmount_ {};
          // The contract promotion.
          shared_ptr<DepreciateInfo::ContractActivity> contractActivity_ {};
          // The promotional offer (displayed in the total order amount).
          shared_ptr<int64_t> differential_ {};
          // The name of the promotional offer.
          shared_ptr<string> differentialName_ {};
          // Indicates whether eligibility for the contracted discount is met.
          shared_ptr<bool> isContractActivity_ {};
          // The list price.
          shared_ptr<int64_t> listPrice_ {};
          // The monthly price.
          shared_ptr<int64_t> monthPrice_ {};
          // The original total price displayed on the official website.
          shared_ptr<int64_t> originalStandAmount_ {};
          // The start time of the activity.
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->contractActivity_ == nullptr
        && this->depreciateInfo_ == nullptr && this->discountAmount_ == nullptr && this->instanceId_ == nullptr && this->isContractActivity_ == nullptr && this->moduleInstance_ == nullptr
        && this->optionalPromotions_ == nullptr && this->originalAmount_ == nullptr && this->promDetailList_ == nullptr && this->ruleIds_ == nullptr && this->standDiscountPrice_ == nullptr
        && this->standPrice_ == nullptr && this->tradeAmount_ == nullptr; };
        // contractActivity Field Functions 
        bool hasContractActivity() const { return this->contractActivity_ != nullptr;};
        void deleteContractActivity() { this->contractActivity_ = nullptr;};
        inline bool getContractActivity() const { DARABONBA_PTR_GET_DEFAULT(contractActivity_, false) };
        inline SubOrder& setContractActivity(bool contractActivity) { DARABONBA_PTR_SET_VALUE(contractActivity_, contractActivity) };


        // depreciateInfo Field Functions 
        bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
        void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
        inline const SubOrder::DepreciateInfo & getDepreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, SubOrder::DepreciateInfo) };
        inline SubOrder::DepreciateInfo getDepreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, SubOrder::DepreciateInfo) };
        inline SubOrder& setDepreciateInfo(const SubOrder::DepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
        inline SubOrder& setDepreciateInfo(SubOrder::DepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


        // discountAmount Field Functions 
        bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
        void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
        inline string getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
        inline SubOrder& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SubOrder& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // isContractActivity Field Functions 
        bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
        void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
        inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
        inline SubOrder& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


        // moduleInstance Field Functions 
        bool hasModuleInstance() const { return this->moduleInstance_ != nullptr;};
        void deleteModuleInstance() { this->moduleInstance_ = nullptr;};
        inline const SubOrder::ModuleInstance & getModuleInstance() const { DARABONBA_PTR_GET_CONST(moduleInstance_, SubOrder::ModuleInstance) };
        inline SubOrder::ModuleInstance getModuleInstance() { DARABONBA_PTR_GET(moduleInstance_, SubOrder::ModuleInstance) };
        inline SubOrder& setModuleInstance(const SubOrder::ModuleInstance & moduleInstance) { DARABONBA_PTR_SET_VALUE(moduleInstance_, moduleInstance) };
        inline SubOrder& setModuleInstance(SubOrder::ModuleInstance && moduleInstance) { DARABONBA_PTR_SET_RVALUE(moduleInstance_, moduleInstance) };


        // optionalPromotions Field Functions 
        bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
        void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
        inline const SubOrder::OptionalPromotions & getOptionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, SubOrder::OptionalPromotions) };
        inline SubOrder::OptionalPromotions getOptionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, SubOrder::OptionalPromotions) };
        inline SubOrder& setOptionalPromotions(const SubOrder::OptionalPromotions & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
        inline SubOrder& setOptionalPromotions(SubOrder::OptionalPromotions && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


        // originalAmount Field Functions 
        bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
        void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
        inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
        inline SubOrder& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


        // promDetailList Field Functions 
        bool hasPromDetailList() const { return this->promDetailList_ != nullptr;};
        void deletePromDetailList() { this->promDetailList_ = nullptr;};
        inline const SubOrder::PromDetailList & getPromDetailList() const { DARABONBA_PTR_GET_CONST(promDetailList_, SubOrder::PromDetailList) };
        inline SubOrder::PromDetailList getPromDetailList() { DARABONBA_PTR_GET(promDetailList_, SubOrder::PromDetailList) };
        inline SubOrder& setPromDetailList(const SubOrder::PromDetailList & promDetailList) { DARABONBA_PTR_SET_VALUE(promDetailList_, promDetailList) };
        inline SubOrder& setPromDetailList(SubOrder::PromDetailList && promDetailList) { DARABONBA_PTR_SET_RVALUE(promDetailList_, promDetailList) };


        // ruleIds Field Functions 
        bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
        void deleteRuleIds() { this->ruleIds_ = nullptr;};
        inline const SubOrder::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, SubOrder::RuleIds) };
        inline SubOrder::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, SubOrder::RuleIds) };
        inline SubOrder& setRuleIds(const SubOrder::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
        inline SubOrder& setRuleIds(SubOrder::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


        // standDiscountPrice Field Functions 
        bool hasStandDiscountPrice() const { return this->standDiscountPrice_ != nullptr;};
        void deleteStandDiscountPrice() { this->standDiscountPrice_ = nullptr;};
        inline int64_t getStandDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standDiscountPrice_, 0L) };
        inline SubOrder& setStandDiscountPrice(int64_t standDiscountPrice) { DARABONBA_PTR_SET_VALUE(standDiscountPrice_, standDiscountPrice) };


        // standPrice Field Functions 
        bool hasStandPrice() const { return this->standPrice_ != nullptr;};
        void deleteStandPrice() { this->standPrice_ = nullptr;};
        inline int64_t getStandPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, 0L) };
        inline SubOrder& setStandPrice(int64_t standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline string getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
        inline SubOrder& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


      protected:
        // Indicates whether eligibility for the contracted discount is met.
        shared_ptr<bool> contractActivity_ {};
        // The price reduction information.
        shared_ptr<SubOrder::DepreciateInfo> depreciateInfo_ {};
        // The discount amount of the order.
        shared_ptr<string> discountAmount_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // Indicates whether eligibility for the contracted discount is met.
        shared_ptr<bool> isContractActivity_ {};
        // The configuration details for each instance of an order line item.
        shared_ptr<SubOrder::ModuleInstance> moduleInstance_ {};
        // The optional promotions.
        shared_ptr<SubOrder::OptionalPromotions> optionalPromotions_ {};
        // The original price of the order.
        shared_ptr<string> originalAmount_ {};
        // Details about promotions.
        shared_ptr<SubOrder::PromDetailList> promDetailList_ {};
        // The hit rule IDs.
        shared_ptr<SubOrder::RuleIds> ruleIds_ {};
        // The discounted price.
        shared_ptr<int64_t> standDiscountPrice_ {};
        // The discounted price.
        shared_ptr<int64_t> standPrice_ {};
        // The transaction price of the order.
        shared_ptr<string> tradeAmount_ {};
      };

      virtual bool empty() const override { return this->subOrder_ == nullptr; };
      // subOrder Field Functions 
      bool hasSubOrder() const { return this->subOrder_ != nullptr;};
      void deleteSubOrder() { this->subOrder_ = nullptr;};
      inline const vector<SubOrders::SubOrder> & getSubOrder() const { DARABONBA_PTR_GET_CONST(subOrder_, vector<SubOrders::SubOrder>) };
      inline vector<SubOrders::SubOrder> getSubOrder() { DARABONBA_PTR_GET(subOrder_, vector<SubOrders::SubOrder>) };
      inline SubOrders& setSubOrder(const vector<SubOrders::SubOrder> & subOrder) { DARABONBA_PTR_SET_VALUE(subOrder_, subOrder) };
      inline SubOrders& setSubOrder(vector<SubOrders::SubOrder> && subOrder) { DARABONBA_PTR_SET_RVALUE(subOrder_, subOrder) };


    protected:
      shared_ptr<vector<SubOrders::SubOrder>> subOrder_ {};
    };

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
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleDescId, ruleDescId_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Rule& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleDescId, ruleDescId_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->ruleDescId_ == nullptr && this->title_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleDescId Field Functions 
        bool hasRuleDescId() const { return this->ruleDescId_ != nullptr;};
        void deleteRuleDescId() { this->ruleDescId_ = nullptr;};
        inline int64_t getRuleDescId() const { DARABONBA_PTR_GET_DEFAULT(ruleDescId_, 0L) };
        inline Rule& setRuleDescId(int64_t ruleDescId) { DARABONBA_PTR_SET_VALUE(ruleDescId_, ruleDescId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Rule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The ID of the rule.
        shared_ptr<int64_t> ruleDescId_ {};
        // The title of the rule.
        shared_ptr<string> title_ {};
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

    class Order : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Order& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Coupons, coupons_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(HandlingFeeAmount, handlingFeeAmount_);
        DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(ShowDiscountInfo, showDiscountInfo_);
        DARABONBA_PTR_TO_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Order& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
        DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(HandlingFeeAmount, handlingFeeAmount_);
        DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_FROM_JSON(ShowDiscountInfo, showDiscountInfo_);
        DARABONBA_PTR_FROM_JSON(StandDiscountPrice, standDiscountPrice_);
        DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
      };
      Order() = default ;
      Order(const Order &) = default ;
      Order(Order &&) = default ;
      Order(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Order() = default ;
      Order& operator=(const Order &) = default ;
      Order& operator=(Order &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        RuleIds() = default ;
        RuleIds(const RuleIds &) = default ;
        RuleIds(RuleIds &&) = default ;
        RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleIds() = default ;
        RuleIds& operator=(const RuleIds &) = default ;
        RuleIds& operator=(RuleIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleId_ == nullptr; };
        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
        inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
        inline RuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
        inline RuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


      protected:
        shared_ptr<vector<string>> ruleId_ {};
      };

      class DepreciateInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DepreciateInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_TO_JSON(ContractActivity, contractActivity_);
          DARABONBA_PTR_TO_JSON(Differential, differential_);
          DARABONBA_PTR_TO_JSON(DifferentialName, differentialName_);
          DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
          DARABONBA_PTR_TO_JSON(IsShow, isShow_);
          DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
          DARABONBA_PTR_TO_JSON(MonthPrice, monthPrice_);
          DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
        };
        friend void from_json(const Darabonba::Json& j, DepreciateInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
          DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
          DARABONBA_PTR_FROM_JSON(ContractActivity, contractActivity_);
          DARABONBA_PTR_FROM_JSON(Differential, differential_);
          DARABONBA_PTR_FROM_JSON(DifferentialName, differentialName_);
          DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
          DARABONBA_PTR_FROM_JSON(IsShow, isShow_);
          DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
          DARABONBA_PTR_FROM_JSON(MonthPrice, monthPrice_);
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
        class ContractActivity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContractActivity& obj) { 
            DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
            DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
            DARABONBA_PTR_TO_JSON(FinalFee, finalFee_);
            DARABONBA_PTR_TO_JSON(FinalPromFee, finalPromFee_);
            DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
            DARABONBA_PTR_TO_JSON(OptionIds, optionIds_);
            DARABONBA_PTR_TO_JSON(ProdFee, prodFee_);
          };
          friend void from_json(const Darabonba::Json& j, ContractActivity& obj) { 
            DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
            DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
            DARABONBA_PTR_FROM_JSON(FinalFee, finalFee_);
            DARABONBA_PTR_FROM_JSON(FinalPromFee, finalPromFee_);
            DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
            DARABONBA_PTR_FROM_JSON(OptionIds, optionIds_);
            DARABONBA_PTR_FROM_JSON(ProdFee, prodFee_);
          };
          ContractActivity() = default ;
          ContractActivity(const ContractActivity &) = default ;
          ContractActivity(ContractActivity &&) = default ;
          ContractActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContractActivity() = default ;
          ContractActivity& operator=(const ContractActivity &) = default ;
          ContractActivity& operator=(ContractActivity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OptionIds : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OptionIds& obj) { 
              DARABONBA_PTR_TO_JSON(OptionId, optionId_);
            };
            friend void from_json(const Darabonba::Json& j, OptionIds& obj) { 
              DARABONBA_PTR_FROM_JSON(OptionId, optionId_);
            };
            OptionIds() = default ;
            OptionIds(const OptionIds &) = default ;
            OptionIds(OptionIds &&) = default ;
            OptionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OptionIds() = default ;
            OptionIds& operator=(const OptionIds &) = default ;
            OptionIds& operator=(OptionIds &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->optionId_ == nullptr; };
            // optionId Field Functions 
            bool hasOptionId() const { return this->optionId_ != nullptr;};
            void deleteOptionId() { this->optionId_ = nullptr;};
            inline const vector<int64_t> & getOptionId() const { DARABONBA_PTR_GET_CONST(optionId_, vector<int64_t>) };
            inline vector<int64_t> getOptionId() { DARABONBA_PTR_GET(optionId_, vector<int64_t>) };
            inline OptionIds& setOptionId(const vector<int64_t> & optionId) { DARABONBA_PTR_SET_VALUE(optionId_, optionId) };
            inline OptionIds& setOptionId(vector<int64_t> && optionId) { DARABONBA_PTR_SET_RVALUE(optionId_, optionId) };


          protected:
            shared_ptr<vector<int64_t>> optionId_ {};
          };

          virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityName_ == nullptr && this->finalFee_ == nullptr && this->finalPromFee_ == nullptr && this->optionCode_ == nullptr && this->optionIds_ == nullptr
        && this->prodFee_ == nullptr; };
          // activityId Field Functions 
          bool hasActivityId() const { return this->activityId_ != nullptr;};
          void deleteActivityId() { this->activityId_ = nullptr;};
          inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
          inline ContractActivity& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


          // activityName Field Functions 
          bool hasActivityName() const { return this->activityName_ != nullptr;};
          void deleteActivityName() { this->activityName_ = nullptr;};
          inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
          inline ContractActivity& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


          // finalFee Field Functions 
          bool hasFinalFee() const { return this->finalFee_ != nullptr;};
          void deleteFinalFee() { this->finalFee_ = nullptr;};
          inline double getFinalFee() const { DARABONBA_PTR_GET_DEFAULT(finalFee_, 0.0) };
          inline ContractActivity& setFinalFee(double finalFee) { DARABONBA_PTR_SET_VALUE(finalFee_, finalFee) };


          // finalPromFee Field Functions 
          bool hasFinalPromFee() const { return this->finalPromFee_ != nullptr;};
          void deleteFinalPromFee() { this->finalPromFee_ = nullptr;};
          inline double getFinalPromFee() const { DARABONBA_PTR_GET_DEFAULT(finalPromFee_, 0.0) };
          inline ContractActivity& setFinalPromFee(double finalPromFee) { DARABONBA_PTR_SET_VALUE(finalPromFee_, finalPromFee) };


          // optionCode Field Functions 
          bool hasOptionCode() const { return this->optionCode_ != nullptr;};
          void deleteOptionCode() { this->optionCode_ = nullptr;};
          inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
          inline ContractActivity& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


          // optionIds Field Functions 
          bool hasOptionIds() const { return this->optionIds_ != nullptr;};
          void deleteOptionIds() { this->optionIds_ = nullptr;};
          inline const ContractActivity::OptionIds & getOptionIds() const { DARABONBA_PTR_GET_CONST(optionIds_, ContractActivity::OptionIds) };
          inline ContractActivity::OptionIds getOptionIds() { DARABONBA_PTR_GET(optionIds_, ContractActivity::OptionIds) };
          inline ContractActivity& setOptionIds(const ContractActivity::OptionIds & optionIds) { DARABONBA_PTR_SET_VALUE(optionIds_, optionIds) };
          inline ContractActivity& setOptionIds(ContractActivity::OptionIds && optionIds) { DARABONBA_PTR_SET_RVALUE(optionIds_, optionIds) };


          // prodFee Field Functions 
          bool hasProdFee() const { return this->prodFee_ != nullptr;};
          void deleteProdFee() { this->prodFee_ = nullptr;};
          inline double getProdFee() const { DARABONBA_PTR_GET_DEFAULT(prodFee_, 0.0) };
          inline ContractActivity& setProdFee(double prodFee) { DARABONBA_PTR_SET_VALUE(prodFee_, prodFee) };


        protected:
          // The activity ID.
          shared_ptr<int64_t> activityId_ {};
          // The activity name.
          shared_ptr<string> activityName_ {};
          // The preferential price.
          shared_ptr<double> finalFee_ {};
          // The total discount amount.
          shared_ptr<double> finalPromFee_ {};
          // The promotion code.
          shared_ptr<string> optionCode_ {};
          // The promotion IDs.
          shared_ptr<ContractActivity::OptionIds> optionIds_ {};
          // The original price.
          shared_ptr<double> prodFee_ {};
        };

        virtual bool empty() const override { return this->cheapRate_ == nullptr
        && this->cheapStandAmount_ == nullptr && this->contractActivity_ == nullptr && this->differential_ == nullptr && this->differentialName_ == nullptr && this->isContractActivity_ == nullptr
        && this->isShow_ == nullptr && this->listPrice_ == nullptr && this->monthPrice_ == nullptr && this->originalStandAmount_ == nullptr; };
        // cheapRate Field Functions 
        bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
        void deleteCheapRate() { this->cheapRate_ = nullptr;};
        inline int64_t getCheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, 0L) };
        inline DepreciateInfo& setCheapRate(int64_t cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


        // cheapStandAmount Field Functions 
        bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
        void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
        inline int64_t getCheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, 0L) };
        inline DepreciateInfo& setCheapStandAmount(int64_t cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


        // contractActivity Field Functions 
        bool hasContractActivity() const { return this->contractActivity_ != nullptr;};
        void deleteContractActivity() { this->contractActivity_ = nullptr;};
        inline const DepreciateInfo::ContractActivity & getContractActivity() const { DARABONBA_PTR_GET_CONST(contractActivity_, DepreciateInfo::ContractActivity) };
        inline DepreciateInfo::ContractActivity getContractActivity() { DARABONBA_PTR_GET(contractActivity_, DepreciateInfo::ContractActivity) };
        inline DepreciateInfo& setContractActivity(const DepreciateInfo::ContractActivity & contractActivity) { DARABONBA_PTR_SET_VALUE(contractActivity_, contractActivity) };
        inline DepreciateInfo& setContractActivity(DepreciateInfo::ContractActivity && contractActivity) { DARABONBA_PTR_SET_RVALUE(contractActivity_, contractActivity) };


        // differential Field Functions 
        bool hasDifferential() const { return this->differential_ != nullptr;};
        void deleteDifferential() { this->differential_ = nullptr;};
        inline int64_t getDifferential() const { DARABONBA_PTR_GET_DEFAULT(differential_, 0L) };
        inline DepreciateInfo& setDifferential(int64_t differential) { DARABONBA_PTR_SET_VALUE(differential_, differential) };


        // differentialName Field Functions 
        bool hasDifferentialName() const { return this->differentialName_ != nullptr;};
        void deleteDifferentialName() { this->differentialName_ = nullptr;};
        inline string getDifferentialName() const { DARABONBA_PTR_GET_DEFAULT(differentialName_, "") };
        inline DepreciateInfo& setDifferentialName(string differentialName) { DARABONBA_PTR_SET_VALUE(differentialName_, differentialName) };


        // isContractActivity Field Functions 
        bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
        void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
        inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
        inline DepreciateInfo& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


        // isShow Field Functions 
        bool hasIsShow() const { return this->isShow_ != nullptr;};
        void deleteIsShow() { this->isShow_ = nullptr;};
        inline bool getIsShow() const { DARABONBA_PTR_GET_DEFAULT(isShow_, false) };
        inline DepreciateInfo& setIsShow(bool isShow) { DARABONBA_PTR_SET_VALUE(isShow_, isShow) };


        // listPrice Field Functions 
        bool hasListPrice() const { return this->listPrice_ != nullptr;};
        void deleteListPrice() { this->listPrice_ = nullptr;};
        inline int64_t getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, 0L) };
        inline DepreciateInfo& setListPrice(int64_t listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


        // monthPrice Field Functions 
        bool hasMonthPrice() const { return this->monthPrice_ != nullptr;};
        void deleteMonthPrice() { this->monthPrice_ = nullptr;};
        inline int64_t getMonthPrice() const { DARABONBA_PTR_GET_DEFAULT(monthPrice_, 0L) };
        inline DepreciateInfo& setMonthPrice(int64_t monthPrice) { DARABONBA_PTR_SET_VALUE(monthPrice_, monthPrice) };


        // originalStandAmount Field Functions 
        bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
        void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
        inline int64_t getOriginalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, 0L) };
        inline DepreciateInfo& setOriginalStandAmount(int64_t originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


      protected:
        // The price reduction rate.
        shared_ptr<int64_t> cheapRate_ {};
        // The new total price displayed on the official website.
        shared_ptr<int64_t> cheapStandAmount_ {};
        // The activity information.
        shared_ptr<DepreciateInfo::ContractActivity> contractActivity_ {};
        // The promotional offer (displayed in the total order amount).
        shared_ptr<int64_t> differential_ {};
        // The name of the promotional offer.
        shared_ptr<string> differentialName_ {};
        // Indicates whether eligibility for the contracted discount is met.
        shared_ptr<bool> isContractActivity_ {};
        // Indicates whether the price reduction rate is displayed.
        shared_ptr<bool> isShow_ {};
        // The list price.
        shared_ptr<int64_t> listPrice_ {};
        // The monthly price.
        shared_ptr<int64_t> monthPrice_ {};
        // The original total price displayed on the official website.
        shared_ptr<int64_t> originalStandAmount_ {};
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
            DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Coupon& obj) { 
            DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(IsSelected, isSelected_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
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
          virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->description_ == nullptr && this->isSelected_ == nullptr && this->name_ == nullptr; };
          // couponNo Field Functions 
          bool hasCouponNo() const { return this->couponNo_ != nullptr;};
          void deleteCouponNo() { this->couponNo_ = nullptr;};
          inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
          inline Coupon& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Coupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // isSelected Field Functions 
          bool hasIsSelected() const { return this->isSelected_ != nullptr;};
          void deleteIsSelected() { this->isSelected_ = nullptr;};
          inline string getIsSelected() const { DARABONBA_PTR_GET_DEFAULT(isSelected_, "") };
          inline Coupon& setIsSelected(string isSelected) { DARABONBA_PTR_SET_VALUE(isSelected_, isSelected) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Coupon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The coupon ID.
          shared_ptr<string> couponNo_ {};
          // The coupon description.
          shared_ptr<string> description_ {};
          // Indicates whether the coupon is selected.
          shared_ptr<string> isSelected_ {};
          // The coupon name.
          shared_ptr<string> name_ {};
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

      virtual bool empty() const override { return this->code_ == nullptr
        && this->coupons_ == nullptr && this->currency_ == nullptr && this->depreciateInfo_ == nullptr && this->discountAmount_ == nullptr && this->handlingFeeAmount_ == nullptr
        && this->isContractActivity_ == nullptr && this->message_ == nullptr && this->originalAmount_ == nullptr && this->ruleIds_ == nullptr && this->showDiscountInfo_ == nullptr
        && this->standDiscountPrice_ == nullptr && this->standPrice_ == nullptr && this->tradeAmount_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Order& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // coupons Field Functions 
      bool hasCoupons() const { return this->coupons_ != nullptr;};
      void deleteCoupons() { this->coupons_ = nullptr;};
      inline const Order::Coupons & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, Order::Coupons) };
      inline Order::Coupons getCoupons() { DARABONBA_PTR_GET(coupons_, Order::Coupons) };
      inline Order& setCoupons(const Order::Coupons & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
      inline Order& setCoupons(Order::Coupons && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Order& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // depreciateInfo Field Functions 
      bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
      void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
      inline const Order::DepreciateInfo & getDepreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, Order::DepreciateInfo) };
      inline Order::DepreciateInfo getDepreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, Order::DepreciateInfo) };
      inline Order& setDepreciateInfo(const Order::DepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
      inline Order& setDepreciateInfo(Order::DepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline string getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
      inline Order& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // handlingFeeAmount Field Functions 
      bool hasHandlingFeeAmount() const { return this->handlingFeeAmount_ != nullptr;};
      void deleteHandlingFeeAmount() { this->handlingFeeAmount_ = nullptr;};
      inline string getHandlingFeeAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingFeeAmount_, "") };
      inline Order& setHandlingFeeAmount(string handlingFeeAmount) { DARABONBA_PTR_SET_VALUE(handlingFeeAmount_, handlingFeeAmount) };


      // isContractActivity Field Functions 
      bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
      void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
      inline bool getIsContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
      inline Order& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Order& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
      inline Order& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const Order::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, Order::RuleIds) };
      inline Order::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, Order::RuleIds) };
      inline Order& setRuleIds(const Order::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline Order& setRuleIds(Order::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


      // showDiscountInfo Field Functions 
      bool hasShowDiscountInfo() const { return this->showDiscountInfo_ != nullptr;};
      void deleteShowDiscountInfo() { this->showDiscountInfo_ = nullptr;};
      inline bool getShowDiscountInfo() const { DARABONBA_PTR_GET_DEFAULT(showDiscountInfo_, false) };
      inline Order& setShowDiscountInfo(bool showDiscountInfo) { DARABONBA_PTR_SET_VALUE(showDiscountInfo_, showDiscountInfo) };


      // standDiscountPrice Field Functions 
      bool hasStandDiscountPrice() const { return this->standDiscountPrice_ != nullptr;};
      void deleteStandDiscountPrice() { this->standDiscountPrice_ = nullptr;};
      inline int64_t getStandDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standDiscountPrice_, 0L) };
      inline Order& setStandDiscountPrice(int64_t standDiscountPrice) { DARABONBA_PTR_SET_VALUE(standDiscountPrice_, standDiscountPrice) };


      // standPrice Field Functions 
      bool hasStandPrice() const { return this->standPrice_ != nullptr;};
      void deleteStandPrice() { this->standPrice_ = nullptr;};
      inline int64_t getStandPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, 0L) };
      inline Order& setStandPrice(int64_t standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline string getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
      inline Order& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      // The order code.
      shared_ptr<string> code_ {};
      // Details about coupons.
      shared_ptr<Order::Coupons> coupons_ {};
      // The currency used for payment. A value of CNY is used when the order was generated on the China site (aliyun.com), and a value of USD is used when the order was generated on the international site (alibabacloud.com).
      shared_ptr<string> currency_ {};
      // The activity information.
      shared_ptr<Order::DepreciateInfo> depreciateInfo_ {};
      // The discount amount of the order.
      shared_ptr<string> discountAmount_ {};
      // The service fees of the order.
      shared_ptr<string> handlingFeeAmount_ {};
      // Indicates whether eligibility for the contracted discount is met.
      shared_ptr<bool> isContractActivity_ {};
      // The information about the order.
      shared_ptr<string> message_ {};
      // The original price of the order.
      shared_ptr<string> originalAmount_ {};
      // The rule IDs.
      shared_ptr<Order::RuleIds> ruleIds_ {};
      // Indicates whether the discount information is displayed.
      shared_ptr<bool> showDiscountInfo_ {};
      // The discount.
      shared_ptr<int64_t> standDiscountPrice_ {};
      // The discounted price.
      shared_ptr<int64_t> standPrice_ {};
      // The transaction price of the order.
      shared_ptr<string> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->order_ == nullptr
        && this->orderParams_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->subOrders_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const DescribePriceResponseBody::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, DescribePriceResponseBody::Order) };
    inline DescribePriceResponseBody::Order getOrder() { DARABONBA_PTR_GET(order_, DescribePriceResponseBody::Order) };
    inline DescribePriceResponseBody& setOrder(const DescribePriceResponseBody::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribePriceResponseBody& setOrder(DescribePriceResponseBody::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // orderParams Field Functions 
    bool hasOrderParams() const { return this->orderParams_ != nullptr;};
    void deleteOrderParams() { this->orderParams_ = nullptr;};
    inline string getOrderParams() const { DARABONBA_PTR_GET_DEFAULT(orderParams_, "") };
    inline DescribePriceResponseBody& setOrderParams(string orderParams) { DARABONBA_PTR_SET_VALUE(orderParams_, orderParams) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribePriceResponseBody::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, DescribePriceResponseBody::Rules) };
    inline DescribePriceResponseBody::Rules getRules() { DARABONBA_PTR_GET(rules_, DescribePriceResponseBody::Rules) };
    inline DescribePriceResponseBody& setRules(const DescribePriceResponseBody::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribePriceResponseBody& setRules(DescribePriceResponseBody::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // subOrders Field Functions 
    bool hasSubOrders() const { return this->subOrders_ != nullptr;};
    void deleteSubOrders() { this->subOrders_ = nullptr;};
    inline const DescribePriceResponseBody::SubOrders & getSubOrders() const { DARABONBA_PTR_GET_CONST(subOrders_, DescribePriceResponseBody::SubOrders) };
    inline DescribePriceResponseBody::SubOrders getSubOrders() { DARABONBA_PTR_GET(subOrders_, DescribePriceResponseBody::SubOrders) };
    inline DescribePriceResponseBody& setSubOrders(const DescribePriceResponseBody::SubOrders & subOrders) { DARABONBA_PTR_SET_VALUE(subOrders_, subOrders) };
    inline DescribePriceResponseBody& setSubOrders(DescribePriceResponseBody::SubOrders && subOrders) { DARABONBA_PTR_SET_RVALUE(subOrders_, subOrders) };


  protected:
    // The information about the order.
    shared_ptr<DescribePriceResponseBody::Order> order_ {};
    // The parameters of the order. When OrderParamOut is set to `true`, this parameter is returned.
    shared_ptr<string> orderParams_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about promotion rules.
    shared_ptr<DescribePriceResponseBody::Rules> rules_ {};
    // The orders that match the coupons.
    shared_ptr<DescribePriceResponseBody::SubOrders> subOrders_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
