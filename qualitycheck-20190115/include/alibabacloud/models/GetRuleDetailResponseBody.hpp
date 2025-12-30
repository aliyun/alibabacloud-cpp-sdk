// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRuleDetailResponseBody() = default ;
    GetRuleDetailResponseBody(const GetRuleDetailResponseBody &) = default ;
    GetRuleDetailResponseBody(GetRuleDetailResponseBody &&) = default ;
    GetRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBody() = default ;
    GetRuleDetailResponseBody& operator=(const GetRuleDetailResponseBody &) = default ;
    GetRuleDetailResponseBody& operator=(GetRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
          DARABONBA_PTR_TO_JSON(RuleBasicInfo, ruleBasicInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleBasicInfo, ruleBasicInfo_);
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
        class RuleBasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleBasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BusinessCategories, businessCategories_);
            DARABONBA_PTR_TO_JSON(Rid, rid_);
            DARABONBA_PTR_TO_JSON(RuleLambda, ruleLambda_);
            DARABONBA_PTR_TO_JSON(Triggers, triggers_);
          };
          friend void from_json(const Darabonba::Json& j, RuleBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BusinessCategories, businessCategories_);
            DARABONBA_PTR_FROM_JSON(Rid, rid_);
            DARABONBA_PTR_FROM_JSON(RuleLambda, ruleLambda_);
            DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
          };
          RuleBasicInfo() = default ;
          RuleBasicInfo(const RuleBasicInfo &) = default ;
          RuleBasicInfo(RuleBasicInfo &&) = default ;
          RuleBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleBasicInfo() = default ;
          RuleBasicInfo& operator=(const RuleBasicInfo &) = default ;
          RuleBasicInfo& operator=(RuleBasicInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Triggers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
              DARABONBA_PTR_TO_JSON(Trigger, trigger_);
            };
            friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
              DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
            };
            Triggers() = default ;
            Triggers(const Triggers &) = default ;
            Triggers(Triggers &&) = default ;
            Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Triggers() = default ;
            Triggers& operator=(const Triggers &) = default ;
            Triggers& operator=(Triggers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->trigger_ == nullptr; };
            // trigger Field Functions 
            bool hasTrigger() const { return this->trigger_ != nullptr;};
            void deleteTrigger() { this->trigger_ = nullptr;};
            inline const vector<string> & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, vector<string>) };
            inline vector<string> getTrigger() { DARABONBA_PTR_GET(trigger_, vector<string>) };
            inline Triggers& setTrigger(const vector<string> & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
            inline Triggers& setTrigger(vector<string> && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


          protected:
            shared_ptr<vector<string>> trigger_ {};
          };

          class BusinessCategories : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BusinessCategories& obj) { 
              DARABONBA_PTR_TO_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
            };
            friend void from_json(const Darabonba::Json& j, BusinessCategories& obj) { 
              DARABONBA_PTR_FROM_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
            };
            BusinessCategories() = default ;
            BusinessCategories(const BusinessCategories &) = default ;
            BusinessCategories(BusinessCategories &&) = default ;
            BusinessCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BusinessCategories() = default ;
            BusinessCategories& operator=(const BusinessCategories &) = default ;
            BusinessCategories& operator=(BusinessCategories &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class BusinessCategoryBasicInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BusinessCategoryBasicInfo& obj) { 
                DARABONBA_PTR_TO_JSON(Bid, bid_);
                DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
                DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
              };
              friend void from_json(const Darabonba::Json& j, BusinessCategoryBasicInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(Bid, bid_);
                DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
                DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
              };
              BusinessCategoryBasicInfo() = default ;
              BusinessCategoryBasicInfo(const BusinessCategoryBasicInfo &) = default ;
              BusinessCategoryBasicInfo(BusinessCategoryBasicInfo &&) = default ;
              BusinessCategoryBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BusinessCategoryBasicInfo() = default ;
              BusinessCategoryBasicInfo& operator=(const BusinessCategoryBasicInfo &) = default ;
              BusinessCategoryBasicInfo& operator=(BusinessCategoryBasicInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->bid_ == nullptr
        && this->businessName_ == nullptr && this->serviceType_ == nullptr; };
              // bid Field Functions 
              bool hasBid() const { return this->bid_ != nullptr;};
              void deleteBid() { this->bid_ = nullptr;};
              inline int32_t getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0) };
              inline BusinessCategoryBasicInfo& setBid(int32_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


              // businessName Field Functions 
              bool hasBusinessName() const { return this->businessName_ != nullptr;};
              void deleteBusinessName() { this->businessName_ = nullptr;};
              inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
              inline BusinessCategoryBasicInfo& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


              // serviceType Field Functions 
              bool hasServiceType() const { return this->serviceType_ != nullptr;};
              void deleteServiceType() { this->serviceType_ = nullptr;};
              inline int32_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
              inline BusinessCategoryBasicInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


            protected:
              shared_ptr<int32_t> bid_ {};
              shared_ptr<string> businessName_ {};
              shared_ptr<int32_t> serviceType_ {};
            };

            virtual bool empty() const override { return this->businessCategoryBasicInfo_ == nullptr; };
            // businessCategoryBasicInfo Field Functions 
            bool hasBusinessCategoryBasicInfo() const { return this->businessCategoryBasicInfo_ != nullptr;};
            void deleteBusinessCategoryBasicInfo() { this->businessCategoryBasicInfo_ = nullptr;};
            inline const vector<BusinessCategories::BusinessCategoryBasicInfo> & getBusinessCategoryBasicInfo() const { DARABONBA_PTR_GET_CONST(businessCategoryBasicInfo_, vector<BusinessCategories::BusinessCategoryBasicInfo>) };
            inline vector<BusinessCategories::BusinessCategoryBasicInfo> getBusinessCategoryBasicInfo() { DARABONBA_PTR_GET(businessCategoryBasicInfo_, vector<BusinessCategories::BusinessCategoryBasicInfo>) };
            inline BusinessCategories& setBusinessCategoryBasicInfo(const vector<BusinessCategories::BusinessCategoryBasicInfo> & businessCategoryBasicInfo) { DARABONBA_PTR_SET_VALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };
            inline BusinessCategories& setBusinessCategoryBasicInfo(vector<BusinessCategories::BusinessCategoryBasicInfo> && businessCategoryBasicInfo) { DARABONBA_PTR_SET_RVALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };


          protected:
            shared_ptr<vector<BusinessCategories::BusinessCategoryBasicInfo>> businessCategoryBasicInfo_ {};
          };

          virtual bool empty() const override { return this->businessCategories_ == nullptr
        && this->rid_ == nullptr && this->ruleLambda_ == nullptr && this->triggers_ == nullptr; };
          // businessCategories Field Functions 
          bool hasBusinessCategories() const { return this->businessCategories_ != nullptr;};
          void deleteBusinessCategories() { this->businessCategories_ = nullptr;};
          inline const RuleBasicInfo::BusinessCategories & getBusinessCategories() const { DARABONBA_PTR_GET_CONST(businessCategories_, RuleBasicInfo::BusinessCategories) };
          inline RuleBasicInfo::BusinessCategories getBusinessCategories() { DARABONBA_PTR_GET(businessCategories_, RuleBasicInfo::BusinessCategories) };
          inline RuleBasicInfo& setBusinessCategories(const RuleBasicInfo::BusinessCategories & businessCategories) { DARABONBA_PTR_SET_VALUE(businessCategories_, businessCategories) };
          inline RuleBasicInfo& setBusinessCategories(RuleBasicInfo::BusinessCategories && businessCategories) { DARABONBA_PTR_SET_RVALUE(businessCategories_, businessCategories) };


          // rid Field Functions 
          bool hasRid() const { return this->rid_ != nullptr;};
          void deleteRid() { this->rid_ = nullptr;};
          inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
          inline RuleBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


          // ruleLambda Field Functions 
          bool hasRuleLambda() const { return this->ruleLambda_ != nullptr;};
          void deleteRuleLambda() { this->ruleLambda_ = nullptr;};
          inline string getRuleLambda() const { DARABONBA_PTR_GET_DEFAULT(ruleLambda_, "") };
          inline RuleBasicInfo& setRuleLambda(string ruleLambda) { DARABONBA_PTR_SET_VALUE(ruleLambda_, ruleLambda) };


          // triggers Field Functions 
          bool hasTriggers() const { return this->triggers_ != nullptr;};
          void deleteTriggers() { this->triggers_ = nullptr;};
          inline const RuleBasicInfo::Triggers & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, RuleBasicInfo::Triggers) };
          inline RuleBasicInfo::Triggers getTriggers() { DARABONBA_PTR_GET(triggers_, RuleBasicInfo::Triggers) };
          inline RuleBasicInfo& setTriggers(const RuleBasicInfo::Triggers & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
          inline RuleBasicInfo& setTriggers(RuleBasicInfo::Triggers && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


        protected:
          shared_ptr<RuleBasicInfo::BusinessCategories> businessCategories_ {};
          shared_ptr<string> rid_ {};
          shared_ptr<string> ruleLambda_ {};
          shared_ptr<RuleBasicInfo::Triggers> triggers_ {};
        };

        virtual bool empty() const override { return this->ruleBasicInfo_ == nullptr; };
        // ruleBasicInfo Field Functions 
        bool hasRuleBasicInfo() const { return this->ruleBasicInfo_ != nullptr;};
        void deleteRuleBasicInfo() { this->ruleBasicInfo_ = nullptr;};
        inline const vector<Rules::RuleBasicInfo> & getRuleBasicInfo() const { DARABONBA_PTR_GET_CONST(ruleBasicInfo_, vector<Rules::RuleBasicInfo>) };
        inline vector<Rules::RuleBasicInfo> getRuleBasicInfo() { DARABONBA_PTR_GET(ruleBasicInfo_, vector<Rules::RuleBasicInfo>) };
        inline Rules& setRuleBasicInfo(const vector<Rules::RuleBasicInfo> & ruleBasicInfo) { DARABONBA_PTR_SET_VALUE(ruleBasicInfo_, ruleBasicInfo) };
        inline Rules& setRuleBasicInfo(vector<Rules::RuleBasicInfo> && ruleBasicInfo) { DARABONBA_PTR_SET_RVALUE(ruleBasicInfo_, ruleBasicInfo) };


      protected:
        shared_ptr<vector<Rules::RuleBasicInfo>> ruleBasicInfo_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionBasicInfo, conditionBasicInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionBasicInfo, conditionBasicInfo_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConditionBasicInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConditionBasicInfo& obj) { 
            DARABONBA_PTR_TO_JSON(CheckRange, checkRange_);
            DARABONBA_PTR_TO_JSON(ConditionInfoCid, conditionInfoCid_);
            DARABONBA_PTR_TO_JSON(OperLambda, operLambda_);
            DARABONBA_PTR_TO_JSON(Operators, operators_);
          };
          friend void from_json(const Darabonba::Json& j, ConditionBasicInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckRange, checkRange_);
            DARABONBA_PTR_FROM_JSON(ConditionInfoCid, conditionInfoCid_);
            DARABONBA_PTR_FROM_JSON(OperLambda, operLambda_);
            DARABONBA_PTR_FROM_JSON(Operators, operators_);
          };
          ConditionBasicInfo() = default ;
          ConditionBasicInfo(const ConditionBasicInfo &) = default ;
          ConditionBasicInfo(ConditionBasicInfo &&) = default ;
          ConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConditionBasicInfo() = default ;
          ConditionBasicInfo& operator=(const ConditionBasicInfo &) = default ;
          ConditionBasicInfo& operator=(ConditionBasicInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Operators : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Operators& obj) { 
              DARABONBA_PTR_TO_JSON(OperatorBasicInfo, operatorBasicInfo_);
            };
            friend void from_json(const Darabonba::Json& j, Operators& obj) { 
              DARABONBA_PTR_FROM_JSON(OperatorBasicInfo, operatorBasicInfo_);
            };
            Operators() = default ;
            Operators(const Operators &) = default ;
            Operators(Operators &&) = default ;
            Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Operators() = default ;
            Operators& operator=(const Operators &) = default ;
            Operators& operator=(Operators &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OperatorBasicInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OperatorBasicInfo& obj) { 
                DARABONBA_PTR_TO_JSON(Oid, oid_);
                DARABONBA_PTR_TO_JSON(OperName, operName_);
                DARABONBA_PTR_TO_JSON(Param, param_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, OperatorBasicInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(Oid, oid_);
                DARABONBA_PTR_FROM_JSON(OperName, operName_);
                DARABONBA_PTR_FROM_JSON(Param, param_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              OperatorBasicInfo() = default ;
              OperatorBasicInfo(const OperatorBasicInfo &) = default ;
              OperatorBasicInfo(OperatorBasicInfo &&) = default ;
              OperatorBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OperatorBasicInfo() = default ;
              OperatorBasicInfo& operator=(const OperatorBasicInfo &) = default ;
              OperatorBasicInfo& operator=(OperatorBasicInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Param : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Param& obj) { 
                  DARABONBA_PTR_TO_JSON(AntModelInfo, antModelInfo_);
                  DARABONBA_PTR_TO_JSON(Average, average_);
                  DARABONBA_PTR_TO_JSON(BeginType, beginType_);
                  DARABONBA_PTR_TO_JSON(CheckType, checkType_);
                  DARABONBA_PTR_TO_JSON(CompareOperator, compareOperator_);
                  DARABONBA_PTR_TO_JSON(ContextChatMatch, contextChatMatch_);
                  DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
                  DARABONBA_PTR_TO_JSON(DifferentRole, differentRole_);
                  DARABONBA_PTR_TO_JSON(Excludes, excludes_);
                  DARABONBA_PTR_TO_JSON(From, from_);
                  DARABONBA_PTR_TO_JSON(FromEnd, fromEnd_);
                  DARABONBA_PTR_TO_JSON(HitTime, hitTime_);
                  DARABONBA_PTR_TO_JSON(InSentence, inSentence_);
                  DARABONBA_PTR_TO_JSON(Interval, interval_);
                  DARABONBA_PTR_TO_JSON(KeywordExtension, keywordExtension_);
                  DARABONBA_PTR_TO_JSON(KeywordMatchSize, keywordMatchSize_);
                  DARABONBA_PTR_TO_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
                  DARABONBA_PTR_TO_JSON(MinWordSize, minWordSize_);
                  DARABONBA_PTR_TO_JSON(NotRegex, notRegex_);
                  DARABONBA_PTR_TO_JSON(OperKeyWords, operKeyWords_);
                  DARABONBA_PTR_TO_JSON(Phrase, phrase_);
                  DARABONBA_PTR_TO_JSON(Pvalues, pvalues_);
                  DARABONBA_PTR_TO_JSON(References, references_);
                  DARABONBA_PTR_TO_JSON(Regex, regex_);
                  DARABONBA_PTR_TO_JSON(Score, score_);
                  DARABONBA_PTR_TO_JSON(Similarity_threshold, similarityThreshold_);
                  DARABONBA_PTR_TO_JSON(SimilarlySentences, similarlySentences_);
                  DARABONBA_PTR_TO_JSON(Target, target_);
                  DARABONBA_PTR_TO_JSON(TargetRole, targetRole_);
                  DARABONBA_PTR_TO_JSON(Threshold, threshold_);
                  DARABONBA_PTR_TO_JSON(VelocityInMint, velocityInMint_);
                };
                friend void from_json(const Darabonba::Json& j, Param& obj) { 
                  DARABONBA_PTR_FROM_JSON(AntModelInfo, antModelInfo_);
                  DARABONBA_PTR_FROM_JSON(Average, average_);
                  DARABONBA_PTR_FROM_JSON(BeginType, beginType_);
                  DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
                  DARABONBA_PTR_FROM_JSON(CompareOperator, compareOperator_);
                  DARABONBA_PTR_FROM_JSON(ContextChatMatch, contextChatMatch_);
                  DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
                  DARABONBA_PTR_FROM_JSON(DifferentRole, differentRole_);
                  DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
                  DARABONBA_PTR_FROM_JSON(From, from_);
                  DARABONBA_PTR_FROM_JSON(FromEnd, fromEnd_);
                  DARABONBA_PTR_FROM_JSON(HitTime, hitTime_);
                  DARABONBA_PTR_FROM_JSON(InSentence, inSentence_);
                  DARABONBA_PTR_FROM_JSON(Interval, interval_);
                  DARABONBA_PTR_FROM_JSON(KeywordExtension, keywordExtension_);
                  DARABONBA_PTR_FROM_JSON(KeywordMatchSize, keywordMatchSize_);
                  DARABONBA_PTR_FROM_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
                  DARABONBA_PTR_FROM_JSON(MinWordSize, minWordSize_);
                  DARABONBA_PTR_FROM_JSON(NotRegex, notRegex_);
                  DARABONBA_PTR_FROM_JSON(OperKeyWords, operKeyWords_);
                  DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
                  DARABONBA_PTR_FROM_JSON(Pvalues, pvalues_);
                  DARABONBA_PTR_FROM_JSON(References, references_);
                  DARABONBA_PTR_FROM_JSON(Regex, regex_);
                  DARABONBA_PTR_FROM_JSON(Score, score_);
                  DARABONBA_PTR_FROM_JSON(Similarity_threshold, similarityThreshold_);
                  DARABONBA_PTR_FROM_JSON(SimilarlySentences, similarlySentences_);
                  DARABONBA_PTR_FROM_JSON(Target, target_);
                  DARABONBA_PTR_FROM_JSON(TargetRole, targetRole_);
                  DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
                  DARABONBA_PTR_FROM_JSON(VelocityInMint, velocityInMint_);
                };
                Param() = default ;
                Param(const Param &) = default ;
                Param(Param &&) = default ;
                Param(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Param() = default ;
                Param& operator=(const Param &) = default ;
                Param& operator=(Param &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SimilarlySentences : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SimilarlySentences& obj) { 
                    DARABONBA_PTR_TO_JSON(SimilarlySentence, similarlySentence_);
                  };
                  friend void from_json(const Darabonba::Json& j, SimilarlySentences& obj) { 
                    DARABONBA_PTR_FROM_JSON(SimilarlySentence, similarlySentence_);
                  };
                  SimilarlySentences() = default ;
                  SimilarlySentences(const SimilarlySentences &) = default ;
                  SimilarlySentences(SimilarlySentences &&) = default ;
                  SimilarlySentences(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SimilarlySentences() = default ;
                  SimilarlySentences& operator=(const SimilarlySentences &) = default ;
                  SimilarlySentences& operator=(SimilarlySentences &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->similarlySentence_ == nullptr; };
                  // similarlySentence Field Functions 
                  bool hasSimilarlySentence() const { return this->similarlySentence_ != nullptr;};
                  void deleteSimilarlySentence() { this->similarlySentence_ = nullptr;};
                  inline const vector<string> & getSimilarlySentence() const { DARABONBA_PTR_GET_CONST(similarlySentence_, vector<string>) };
                  inline vector<string> getSimilarlySentence() { DARABONBA_PTR_GET(similarlySentence_, vector<string>) };
                  inline SimilarlySentences& setSimilarlySentence(const vector<string> & similarlySentence) { DARABONBA_PTR_SET_VALUE(similarlySentence_, similarlySentence) };
                  inline SimilarlySentences& setSimilarlySentence(vector<string> && similarlySentence) { DARABONBA_PTR_SET_RVALUE(similarlySentence_, similarlySentence) };


                protected:
                  shared_ptr<vector<string>> similarlySentence_ {};
                };

                class References : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const References& obj) { 
                    DARABONBA_PTR_TO_JSON(Reference, reference_);
                  };
                  friend void from_json(const Darabonba::Json& j, References& obj) { 
                    DARABONBA_PTR_FROM_JSON(Reference, reference_);
                  };
                  References() = default ;
                  References(const References &) = default ;
                  References(References &&) = default ;
                  References(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~References() = default ;
                  References& operator=(const References &) = default ;
                  References& operator=(References &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->reference_ == nullptr; };
                  // reference Field Functions 
                  bool hasReference() const { return this->reference_ != nullptr;};
                  void deleteReference() { this->reference_ = nullptr;};
                  inline const vector<string> & getReference() const { DARABONBA_PTR_GET_CONST(reference_, vector<string>) };
                  inline vector<string> getReference() { DARABONBA_PTR_GET(reference_, vector<string>) };
                  inline References& setReference(const vector<string> & reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };
                  inline References& setReference(vector<string> && reference) { DARABONBA_PTR_SET_RVALUE(reference_, reference) };


                protected:
                  shared_ptr<vector<string>> reference_ {};
                };

                class Pvalues : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Pvalues& obj) { 
                    DARABONBA_PTR_TO_JSON(Pvalues, pvalues_);
                  };
                  friend void from_json(const Darabonba::Json& j, Pvalues& obj) { 
                    DARABONBA_PTR_FROM_JSON(Pvalues, pvalues_);
                  };
                  Pvalues() = default ;
                  Pvalues(const Pvalues &) = default ;
                  Pvalues(Pvalues &&) = default ;
                  Pvalues(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Pvalues() = default ;
                  Pvalues& operator=(const Pvalues &) = default ;
                  Pvalues& operator=(Pvalues &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->pvalues_ == nullptr; };
                  // pvalues Field Functions 
                  bool hasPvalues() const { return this->pvalues_ != nullptr;};
                  void deletePvalues() { this->pvalues_ = nullptr;};
                  inline const vector<string> & getPvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, vector<string>) };
                  inline vector<string> getPvalues() { DARABONBA_PTR_GET(pvalues_, vector<string>) };
                  inline Pvalues& setPvalues(const vector<string> & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
                  inline Pvalues& setPvalues(vector<string> && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


                protected:
                  shared_ptr<vector<string>> pvalues_ {};
                };

                class OperKeyWords : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const OperKeyWords& obj) { 
                    DARABONBA_PTR_TO_JSON(OperKeyWord, operKeyWord_);
                  };
                  friend void from_json(const Darabonba::Json& j, OperKeyWords& obj) { 
                    DARABONBA_PTR_FROM_JSON(OperKeyWord, operKeyWord_);
                  };
                  OperKeyWords() = default ;
                  OperKeyWords(const OperKeyWords &) = default ;
                  OperKeyWords(OperKeyWords &&) = default ;
                  OperKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~OperKeyWords() = default ;
                  OperKeyWords& operator=(const OperKeyWords &) = default ;
                  OperKeyWords& operator=(OperKeyWords &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->operKeyWord_ == nullptr; };
                  // operKeyWord Field Functions 
                  bool hasOperKeyWord() const { return this->operKeyWord_ != nullptr;};
                  void deleteOperKeyWord() { this->operKeyWord_ = nullptr;};
                  inline const vector<string> & getOperKeyWord() const { DARABONBA_PTR_GET_CONST(operKeyWord_, vector<string>) };
                  inline vector<string> getOperKeyWord() { DARABONBA_PTR_GET(operKeyWord_, vector<string>) };
                  inline OperKeyWords& setOperKeyWord(const vector<string> & operKeyWord) { DARABONBA_PTR_SET_VALUE(operKeyWord_, operKeyWord) };
                  inline OperKeyWords& setOperKeyWord(vector<string> && operKeyWord) { DARABONBA_PTR_SET_RVALUE(operKeyWord_, operKeyWord) };


                protected:
                  shared_ptr<vector<string>> operKeyWord_ {};
                };

                class Excludes : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Excludes& obj) { 
                    DARABONBA_PTR_TO_JSON(Excludes, excludes_);
                  };
                  friend void from_json(const Darabonba::Json& j, Excludes& obj) { 
                    DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
                  };
                  Excludes() = default ;
                  Excludes(const Excludes &) = default ;
                  Excludes(Excludes &&) = default ;
                  Excludes(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Excludes() = default ;
                  Excludes& operator=(const Excludes &) = default ;
                  Excludes& operator=(Excludes &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->excludes_ == nullptr; };
                  // excludes Field Functions 
                  bool hasExcludes() const { return this->excludes_ != nullptr;};
                  void deleteExcludes() { this->excludes_ = nullptr;};
                  inline const vector<string> & getExcludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<string>) };
                  inline vector<string> getExcludes() { DARABONBA_PTR_GET(excludes_, vector<string>) };
                  inline Excludes& setExcludes(const vector<string> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
                  inline Excludes& setExcludes(vector<string> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


                protected:
                  shared_ptr<vector<string>> excludes_ {};
                };

                class AntModelInfo : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const AntModelInfo& obj) { 
                    DARABONBA_PTR_TO_JSON(AntModelInfo, antModelInfo_);
                  };
                  friend void from_json(const Darabonba::Json& j, AntModelInfo& obj) { 
                    DARABONBA_PTR_FROM_JSON(AntModelInfo, antModelInfo_);
                  };
                  AntModelInfo() = default ;
                  AntModelInfo(const AntModelInfo &) = default ;
                  AntModelInfo(AntModelInfo &&) = default ;
                  AntModelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~AntModelInfo() = default ;
                  AntModelInfo& operator=(const AntModelInfo &) = default ;
                  AntModelInfo& operator=(AntModelInfo &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->antModelInfo_ == nullptr; };
                  // antModelInfo Field Functions 
                  bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
                  void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
                  inline const vector<string> & getAntModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, vector<string>) };
                  inline vector<string> getAntModelInfo() { DARABONBA_PTR_GET(antModelInfo_, vector<string>) };
                  inline AntModelInfo& setAntModelInfo(const vector<string> & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
                  inline AntModelInfo& setAntModelInfo(vector<string> && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


                protected:
                  shared_ptr<vector<string>> antModelInfo_ {};
                };

                virtual bool empty() const override { return this->antModelInfo_ == nullptr
        && this->average_ == nullptr && this->beginType_ == nullptr && this->checkType_ == nullptr && this->compareOperator_ == nullptr && this->contextChatMatch_ == nullptr
        && this->delayTime_ == nullptr && this->differentRole_ == nullptr && this->excludes_ == nullptr && this->from_ == nullptr && this->fromEnd_ == nullptr
        && this->hitTime_ == nullptr && this->inSentence_ == nullptr && this->interval_ == nullptr && this->keywordExtension_ == nullptr && this->keywordMatchSize_ == nullptr
        && this->maxEmotionChangeValue_ == nullptr && this->minWordSize_ == nullptr && this->notRegex_ == nullptr && this->operKeyWords_ == nullptr && this->phrase_ == nullptr
        && this->pvalues_ == nullptr && this->references_ == nullptr && this->regex_ == nullptr && this->score_ == nullptr && this->similarityThreshold_ == nullptr
        && this->similarlySentences_ == nullptr && this->target_ == nullptr && this->targetRole_ == nullptr && this->threshold_ == nullptr && this->velocityInMint_ == nullptr; };
                // antModelInfo Field Functions 
                bool hasAntModelInfo() const { return this->antModelInfo_ != nullptr;};
                void deleteAntModelInfo() { this->antModelInfo_ = nullptr;};
                inline const Param::AntModelInfo & getAntModelInfo() const { DARABONBA_PTR_GET_CONST(antModelInfo_, Param::AntModelInfo) };
                inline Param::AntModelInfo getAntModelInfo() { DARABONBA_PTR_GET(antModelInfo_, Param::AntModelInfo) };
                inline Param& setAntModelInfo(const Param::AntModelInfo & antModelInfo) { DARABONBA_PTR_SET_VALUE(antModelInfo_, antModelInfo) };
                inline Param& setAntModelInfo(Param::AntModelInfo && antModelInfo) { DARABONBA_PTR_SET_RVALUE(antModelInfo_, antModelInfo) };


                // average Field Functions 
                bool hasAverage() const { return this->average_ != nullptr;};
                void deleteAverage() { this->average_ = nullptr;};
                inline bool getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
                inline Param& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


                // beginType Field Functions 
                bool hasBeginType() const { return this->beginType_ != nullptr;};
                void deleteBeginType() { this->beginType_ = nullptr;};
                inline string getBeginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
                inline Param& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


                // checkType Field Functions 
                bool hasCheckType() const { return this->checkType_ != nullptr;};
                void deleteCheckType() { this->checkType_ = nullptr;};
                inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
                inline Param& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


                // compareOperator Field Functions 
                bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
                void deleteCompareOperator() { this->compareOperator_ = nullptr;};
                inline string getCompareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
                inline Param& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


                // contextChatMatch Field Functions 
                bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
                void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
                inline bool getContextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
                inline Param& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


                // delayTime Field Functions 
                bool hasDelayTime() const { return this->delayTime_ != nullptr;};
                void deleteDelayTime() { this->delayTime_ = nullptr;};
                inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
                inline Param& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


                // differentRole Field Functions 
                bool hasDifferentRole() const { return this->differentRole_ != nullptr;};
                void deleteDifferentRole() { this->differentRole_ = nullptr;};
                inline bool getDifferentRole() const { DARABONBA_PTR_GET_DEFAULT(differentRole_, false) };
                inline Param& setDifferentRole(bool differentRole) { DARABONBA_PTR_SET_VALUE(differentRole_, differentRole) };


                // excludes Field Functions 
                bool hasExcludes() const { return this->excludes_ != nullptr;};
                void deleteExcludes() { this->excludes_ = nullptr;};
                inline const Param::Excludes & getExcludes() const { DARABONBA_PTR_GET_CONST(excludes_, Param::Excludes) };
                inline Param::Excludes getExcludes() { DARABONBA_PTR_GET(excludes_, Param::Excludes) };
                inline Param& setExcludes(const Param::Excludes & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
                inline Param& setExcludes(Param::Excludes && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


                // from Field Functions 
                bool hasFrom() const { return this->from_ != nullptr;};
                void deleteFrom() { this->from_ = nullptr;};
                inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                inline Param& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                // fromEnd Field Functions 
                bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
                void deleteFromEnd() { this->fromEnd_ = nullptr;};
                inline bool getFromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
                inline Param& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


                // hitTime Field Functions 
                bool hasHitTime() const { return this->hitTime_ != nullptr;};
                void deleteHitTime() { this->hitTime_ = nullptr;};
                inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
                inline Param& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


                // inSentence Field Functions 
                bool hasInSentence() const { return this->inSentence_ != nullptr;};
                void deleteInSentence() { this->inSentence_ = nullptr;};
                inline bool getInSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
                inline Param& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


                // interval Field Functions 
                bool hasInterval() const { return this->interval_ != nullptr;};
                void deleteInterval() { this->interval_ = nullptr;};
                inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
                inline Param& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


                // keywordExtension Field Functions 
                bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
                void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
                inline bool getKeywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, false) };
                inline Param& setKeywordExtension(bool keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


                // keywordMatchSize Field Functions 
                bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
                void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
                inline int32_t getKeywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
                inline Param& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


                // maxEmotionChangeValue Field Functions 
                bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
                void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
                inline int32_t getMaxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
                inline Param& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


                // minWordSize Field Functions 
                bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
                void deleteMinWordSize() { this->minWordSize_ = nullptr;};
                inline int32_t getMinWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
                inline Param& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


                // notRegex Field Functions 
                bool hasNotRegex() const { return this->notRegex_ != nullptr;};
                void deleteNotRegex() { this->notRegex_ = nullptr;};
                inline string getNotRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
                inline Param& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


                // operKeyWords Field Functions 
                bool hasOperKeyWords() const { return this->operKeyWords_ != nullptr;};
                void deleteOperKeyWords() { this->operKeyWords_ = nullptr;};
                inline const Param::OperKeyWords & getOperKeyWords() const { DARABONBA_PTR_GET_CONST(operKeyWords_, Param::OperKeyWords) };
                inline Param::OperKeyWords getOperKeyWords() { DARABONBA_PTR_GET(operKeyWords_, Param::OperKeyWords) };
                inline Param& setOperKeyWords(const Param::OperKeyWords & operKeyWords) { DARABONBA_PTR_SET_VALUE(operKeyWords_, operKeyWords) };
                inline Param& setOperKeyWords(Param::OperKeyWords && operKeyWords) { DARABONBA_PTR_SET_RVALUE(operKeyWords_, operKeyWords) };


                // phrase Field Functions 
                bool hasPhrase() const { return this->phrase_ != nullptr;};
                void deletePhrase() { this->phrase_ = nullptr;};
                inline string getPhrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
                inline Param& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


                // pvalues Field Functions 
                bool hasPvalues() const { return this->pvalues_ != nullptr;};
                void deletePvalues() { this->pvalues_ = nullptr;};
                inline const Param::Pvalues & getPvalues() const { DARABONBA_PTR_GET_CONST(pvalues_, Param::Pvalues) };
                inline Param::Pvalues getPvalues() { DARABONBA_PTR_GET(pvalues_, Param::Pvalues) };
                inline Param& setPvalues(const Param::Pvalues & pvalues) { DARABONBA_PTR_SET_VALUE(pvalues_, pvalues) };
                inline Param& setPvalues(Param::Pvalues && pvalues) { DARABONBA_PTR_SET_RVALUE(pvalues_, pvalues) };


                // references Field Functions 
                bool hasReferences() const { return this->references_ != nullptr;};
                void deleteReferences() { this->references_ = nullptr;};
                inline const Param::References & getReferences() const { DARABONBA_PTR_GET_CONST(references_, Param::References) };
                inline Param::References getReferences() { DARABONBA_PTR_GET(references_, Param::References) };
                inline Param& setReferences(const Param::References & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
                inline Param& setReferences(Param::References && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


                // regex Field Functions 
                bool hasRegex() const { return this->regex_ != nullptr;};
                void deleteRegex() { this->regex_ = nullptr;};
                inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
                inline Param& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


                // score Field Functions 
                bool hasScore() const { return this->score_ != nullptr;};
                void deleteScore() { this->score_ = nullptr;};
                inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
                inline Param& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


                // similarityThreshold Field Functions 
                bool hasSimilarityThreshold() const { return this->similarityThreshold_ != nullptr;};
                void deleteSimilarityThreshold() { this->similarityThreshold_ = nullptr;};
                inline float getSimilarityThreshold() const { DARABONBA_PTR_GET_DEFAULT(similarityThreshold_, 0.0) };
                inline Param& setSimilarityThreshold(float similarityThreshold) { DARABONBA_PTR_SET_VALUE(similarityThreshold_, similarityThreshold) };


                // similarlySentences Field Functions 
                bool hasSimilarlySentences() const { return this->similarlySentences_ != nullptr;};
                void deleteSimilarlySentences() { this->similarlySentences_ = nullptr;};
                inline const Param::SimilarlySentences & getSimilarlySentences() const { DARABONBA_PTR_GET_CONST(similarlySentences_, Param::SimilarlySentences) };
                inline Param::SimilarlySentences getSimilarlySentences() { DARABONBA_PTR_GET(similarlySentences_, Param::SimilarlySentences) };
                inline Param& setSimilarlySentences(const Param::SimilarlySentences & similarlySentences) { DARABONBA_PTR_SET_VALUE(similarlySentences_, similarlySentences) };
                inline Param& setSimilarlySentences(Param::SimilarlySentences && similarlySentences) { DARABONBA_PTR_SET_RVALUE(similarlySentences_, similarlySentences) };


                // target Field Functions 
                bool hasTarget() const { return this->target_ != nullptr;};
                void deleteTarget() { this->target_ = nullptr;};
                inline int32_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
                inline Param& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


                // targetRole Field Functions 
                bool hasTargetRole() const { return this->targetRole_ != nullptr;};
                void deleteTargetRole() { this->targetRole_ = nullptr;};
                inline string getTargetRole() const { DARABONBA_PTR_GET_DEFAULT(targetRole_, "") };
                inline Param& setTargetRole(string targetRole) { DARABONBA_PTR_SET_VALUE(targetRole_, targetRole) };


                // threshold Field Functions 
                bool hasThreshold() const { return this->threshold_ != nullptr;};
                void deleteThreshold() { this->threshold_ = nullptr;};
                inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
                inline Param& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


                // velocityInMint Field Functions 
                bool hasVelocityInMint() const { return this->velocityInMint_ != nullptr;};
                void deleteVelocityInMint() { this->velocityInMint_ = nullptr;};
                inline int32_t getVelocityInMint() const { DARABONBA_PTR_GET_DEFAULT(velocityInMint_, 0) };
                inline Param& setVelocityInMint(int32_t velocityInMint) { DARABONBA_PTR_SET_VALUE(velocityInMint_, velocityInMint) };


              protected:
                shared_ptr<Param::AntModelInfo> antModelInfo_ {};
                shared_ptr<bool> average_ {};
                shared_ptr<string> beginType_ {};
                shared_ptr<int32_t> checkType_ {};
                shared_ptr<string> compareOperator_ {};
                shared_ptr<bool> contextChatMatch_ {};
                shared_ptr<int32_t> delayTime_ {};
                shared_ptr<bool> differentRole_ {};
                shared_ptr<Param::Excludes> excludes_ {};
                shared_ptr<int32_t> from_ {};
                shared_ptr<bool> fromEnd_ {};
                shared_ptr<int32_t> hitTime_ {};
                shared_ptr<bool> inSentence_ {};
                shared_ptr<int32_t> interval_ {};
                shared_ptr<bool> keywordExtension_ {};
                shared_ptr<int32_t> keywordMatchSize_ {};
                shared_ptr<int32_t> maxEmotionChangeValue_ {};
                shared_ptr<int32_t> minWordSize_ {};
                shared_ptr<string> notRegex_ {};
                shared_ptr<Param::OperKeyWords> operKeyWords_ {};
                shared_ptr<string> phrase_ {};
                shared_ptr<Param::Pvalues> pvalues_ {};
                shared_ptr<Param::References> references_ {};
                shared_ptr<string> regex_ {};
                shared_ptr<int32_t> score_ {};
                shared_ptr<float> similarityThreshold_ {};
                shared_ptr<Param::SimilarlySentences> similarlySentences_ {};
                shared_ptr<int32_t> target_ {};
                shared_ptr<string> targetRole_ {};
                shared_ptr<float> threshold_ {};
                shared_ptr<int32_t> velocityInMint_ {};
              };

              virtual bool empty() const override { return this->oid_ == nullptr
        && this->operName_ == nullptr && this->param_ == nullptr && this->type_ == nullptr; };
              // oid Field Functions 
              bool hasOid() const { return this->oid_ != nullptr;};
              void deleteOid() { this->oid_ = nullptr;};
              inline string getOid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
              inline OperatorBasicInfo& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


              // operName Field Functions 
              bool hasOperName() const { return this->operName_ != nullptr;};
              void deleteOperName() { this->operName_ = nullptr;};
              inline string getOperName() const { DARABONBA_PTR_GET_DEFAULT(operName_, "") };
              inline OperatorBasicInfo& setOperName(string operName) { DARABONBA_PTR_SET_VALUE(operName_, operName) };


              // param Field Functions 
              bool hasParam() const { return this->param_ != nullptr;};
              void deleteParam() { this->param_ = nullptr;};
              inline const OperatorBasicInfo::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, OperatorBasicInfo::Param) };
              inline OperatorBasicInfo::Param getParam() { DARABONBA_PTR_GET(param_, OperatorBasicInfo::Param) };
              inline OperatorBasicInfo& setParam(const OperatorBasicInfo::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
              inline OperatorBasicInfo& setParam(OperatorBasicInfo::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline OperatorBasicInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<string> oid_ {};
              shared_ptr<string> operName_ {};
              shared_ptr<OperatorBasicInfo::Param> param_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->operatorBasicInfo_ == nullptr; };
            // operatorBasicInfo Field Functions 
            bool hasOperatorBasicInfo() const { return this->operatorBasicInfo_ != nullptr;};
            void deleteOperatorBasicInfo() { this->operatorBasicInfo_ = nullptr;};
            inline const vector<Operators::OperatorBasicInfo> & getOperatorBasicInfo() const { DARABONBA_PTR_GET_CONST(operatorBasicInfo_, vector<Operators::OperatorBasicInfo>) };
            inline vector<Operators::OperatorBasicInfo> getOperatorBasicInfo() { DARABONBA_PTR_GET(operatorBasicInfo_, vector<Operators::OperatorBasicInfo>) };
            inline Operators& setOperatorBasicInfo(const vector<Operators::OperatorBasicInfo> & operatorBasicInfo) { DARABONBA_PTR_SET_VALUE(operatorBasicInfo_, operatorBasicInfo) };
            inline Operators& setOperatorBasicInfo(vector<Operators::OperatorBasicInfo> && operatorBasicInfo) { DARABONBA_PTR_SET_RVALUE(operatorBasicInfo_, operatorBasicInfo) };


          protected:
            shared_ptr<vector<Operators::OperatorBasicInfo>> operatorBasicInfo_ {};
          };

          class CheckRange : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CheckRange& obj) { 
              DARABONBA_PTR_TO_JSON(Absolute, absolute_);
              DARABONBA_PTR_TO_JSON(Anchor, anchor_);
              DARABONBA_PTR_TO_JSON(Range, range_);
              DARABONBA_PTR_TO_JSON(Role, role_);
            };
            friend void from_json(const Darabonba::Json& j, CheckRange& obj) { 
              DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
              DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
              DARABONBA_PTR_FROM_JSON(Range, range_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
            };
            CheckRange() = default ;
            CheckRange(const CheckRange &) = default ;
            CheckRange(CheckRange &&) = default ;
            CheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CheckRange() = default ;
            CheckRange& operator=(const CheckRange &) = default ;
            CheckRange& operator=(CheckRange &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Range : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Range& obj) { 
                DARABONBA_PTR_TO_JSON(From, from_);
                DARABONBA_PTR_TO_JSON(To, to_);
              };
              friend void from_json(const Darabonba::Json& j, Range& obj) { 
                DARABONBA_PTR_FROM_JSON(From, from_);
                DARABONBA_PTR_FROM_JSON(To, to_);
              };
              Range() = default ;
              Range(const Range &) = default ;
              Range(Range &&) = default ;
              Range(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Range() = default ;
              Range& operator=(const Range &) = default ;
              Range& operator=(Range &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
              // from Field Functions 
              bool hasFrom() const { return this->from_ != nullptr;};
              void deleteFrom() { this->from_ = nullptr;};
              inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
              inline Range& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


              // to Field Functions 
              bool hasTo() const { return this->to_ != nullptr;};
              void deleteTo() { this->to_ = nullptr;};
              inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
              inline Range& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            protected:
              shared_ptr<int32_t> from_ {};
              shared_ptr<int32_t> to_ {};
            };

            class Anchor : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Anchor& obj) { 
                DARABONBA_PTR_TO_JSON(AnchorCid, anchorCid_);
                DARABONBA_PTR_TO_JSON(HitTime, hitTime_);
                DARABONBA_PTR_TO_JSON(Location, location_);
              };
              friend void from_json(const Darabonba::Json& j, Anchor& obj) { 
                DARABONBA_PTR_FROM_JSON(AnchorCid, anchorCid_);
                DARABONBA_PTR_FROM_JSON(HitTime, hitTime_);
                DARABONBA_PTR_FROM_JSON(Location, location_);
              };
              Anchor() = default ;
              Anchor(const Anchor &) = default ;
              Anchor(Anchor &&) = default ;
              Anchor(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Anchor() = default ;
              Anchor& operator=(const Anchor &) = default ;
              Anchor& operator=(Anchor &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->anchorCid_ == nullptr
        && this->hitTime_ == nullptr && this->location_ == nullptr; };
              // anchorCid Field Functions 
              bool hasAnchorCid() const { return this->anchorCid_ != nullptr;};
              void deleteAnchorCid() { this->anchorCid_ = nullptr;};
              inline string getAnchorCid() const { DARABONBA_PTR_GET_DEFAULT(anchorCid_, "") };
              inline Anchor& setAnchorCid(string anchorCid) { DARABONBA_PTR_SET_VALUE(anchorCid_, anchorCid) };


              // hitTime Field Functions 
              bool hasHitTime() const { return this->hitTime_ != nullptr;};
              void deleteHitTime() { this->hitTime_ = nullptr;};
              inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
              inline Anchor& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


              // location Field Functions 
              bool hasLocation() const { return this->location_ != nullptr;};
              void deleteLocation() { this->location_ = nullptr;};
              inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
              inline Anchor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


            protected:
              shared_ptr<string> anchorCid_ {};
              shared_ptr<int32_t> hitTime_ {};
              shared_ptr<string> location_ {};
            };

            virtual bool empty() const override { return this->absolute_ == nullptr
        && this->anchor_ == nullptr && this->range_ == nullptr && this->role_ == nullptr; };
            // absolute Field Functions 
            bool hasAbsolute() const { return this->absolute_ != nullptr;};
            void deleteAbsolute() { this->absolute_ = nullptr;};
            inline bool getAbsolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
            inline CheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


            // anchor Field Functions 
            bool hasAnchor() const { return this->anchor_ != nullptr;};
            void deleteAnchor() { this->anchor_ = nullptr;};
            inline const CheckRange::Anchor & getAnchor() const { DARABONBA_PTR_GET_CONST(anchor_, CheckRange::Anchor) };
            inline CheckRange::Anchor getAnchor() { DARABONBA_PTR_GET(anchor_, CheckRange::Anchor) };
            inline CheckRange& setAnchor(const CheckRange::Anchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
            inline CheckRange& setAnchor(CheckRange::Anchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


            // range Field Functions 
            bool hasRange() const { return this->range_ != nullptr;};
            void deleteRange() { this->range_ = nullptr;};
            inline const CheckRange::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, CheckRange::Range) };
            inline CheckRange::Range getRange() { DARABONBA_PTR_GET(range_, CheckRange::Range) };
            inline CheckRange& setRange(const CheckRange::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
            inline CheckRange& setRange(CheckRange::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline CheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          protected:
            shared_ptr<bool> absolute_ {};
            shared_ptr<CheckRange::Anchor> anchor_ {};
            shared_ptr<CheckRange::Range> range_ {};
            shared_ptr<string> role_ {};
          };

          virtual bool empty() const override { return this->checkRange_ == nullptr
        && this->conditionInfoCid_ == nullptr && this->operLambda_ == nullptr && this->operators_ == nullptr; };
          // checkRange Field Functions 
          bool hasCheckRange() const { return this->checkRange_ != nullptr;};
          void deleteCheckRange() { this->checkRange_ = nullptr;};
          inline const ConditionBasicInfo::CheckRange & getCheckRange() const { DARABONBA_PTR_GET_CONST(checkRange_, ConditionBasicInfo::CheckRange) };
          inline ConditionBasicInfo::CheckRange getCheckRange() { DARABONBA_PTR_GET(checkRange_, ConditionBasicInfo::CheckRange) };
          inline ConditionBasicInfo& setCheckRange(const ConditionBasicInfo::CheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
          inline ConditionBasicInfo& setCheckRange(ConditionBasicInfo::CheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


          // conditionInfoCid Field Functions 
          bool hasConditionInfoCid() const { return this->conditionInfoCid_ != nullptr;};
          void deleteConditionInfoCid() { this->conditionInfoCid_ = nullptr;};
          inline string getConditionInfoCid() const { DARABONBA_PTR_GET_DEFAULT(conditionInfoCid_, "") };
          inline ConditionBasicInfo& setConditionInfoCid(string conditionInfoCid) { DARABONBA_PTR_SET_VALUE(conditionInfoCid_, conditionInfoCid) };


          // operLambda Field Functions 
          bool hasOperLambda() const { return this->operLambda_ != nullptr;};
          void deleteOperLambda() { this->operLambda_ = nullptr;};
          inline string getOperLambda() const { DARABONBA_PTR_GET_DEFAULT(operLambda_, "") };
          inline ConditionBasicInfo& setOperLambda(string operLambda) { DARABONBA_PTR_SET_VALUE(operLambda_, operLambda) };


          // operators Field Functions 
          bool hasOperators() const { return this->operators_ != nullptr;};
          void deleteOperators() { this->operators_ = nullptr;};
          inline const ConditionBasicInfo::Operators & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, ConditionBasicInfo::Operators) };
          inline ConditionBasicInfo::Operators getOperators() { DARABONBA_PTR_GET(operators_, ConditionBasicInfo::Operators) };
          inline ConditionBasicInfo& setOperators(const ConditionBasicInfo::Operators & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
          inline ConditionBasicInfo& setOperators(ConditionBasicInfo::Operators && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


        protected:
          shared_ptr<ConditionBasicInfo::CheckRange> checkRange_ {};
          shared_ptr<string> conditionInfoCid_ {};
          shared_ptr<string> operLambda_ {};
          shared_ptr<ConditionBasicInfo::Operators> operators_ {};
        };

        virtual bool empty() const override { return this->conditionBasicInfo_ == nullptr; };
        // conditionBasicInfo Field Functions 
        bool hasConditionBasicInfo() const { return this->conditionBasicInfo_ != nullptr;};
        void deleteConditionBasicInfo() { this->conditionBasicInfo_ = nullptr;};
        inline const vector<Conditions::ConditionBasicInfo> & getConditionBasicInfo() const { DARABONBA_PTR_GET_CONST(conditionBasicInfo_, vector<Conditions::ConditionBasicInfo>) };
        inline vector<Conditions::ConditionBasicInfo> getConditionBasicInfo() { DARABONBA_PTR_GET(conditionBasicInfo_, vector<Conditions::ConditionBasicInfo>) };
        inline Conditions& setConditionBasicInfo(const vector<Conditions::ConditionBasicInfo> & conditionBasicInfo) { DARABONBA_PTR_SET_VALUE(conditionBasicInfo_, conditionBasicInfo) };
        inline Conditions& setConditionBasicInfo(vector<Conditions::ConditionBasicInfo> && conditionBasicInfo) { DARABONBA_PTR_SET_RVALUE(conditionBasicInfo_, conditionBasicInfo) };


      protected:
        shared_ptr<vector<Conditions::ConditionBasicInfo>> conditionBasicInfo_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->count_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->rules_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const Data::Conditions & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, Data::Conditions) };
      inline Data::Conditions getConditions() { DARABONBA_PTR_GET(conditions_, Data::Conditions) };
      inline Data& setConditions(const Data::Conditions & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Data& setConditions(Data::Conditions && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const Data::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, Data::Rules) };
      inline Data::Rules getRules() { DARABONBA_PTR_GET(rules_, Data::Rules) };
      inline Data& setRules(const Data::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(Data::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<Data::Conditions> conditions_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<Data::Rules> rules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRuleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuleDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuleDetailResponseBody::Data) };
    inline GetRuleDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuleDetailResponseBody::Data) };
    inline GetRuleDetailResponseBody& setData(const GetRuleDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuleDetailResponseBody& setData(GetRuleDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRuleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRuleDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRuleDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
