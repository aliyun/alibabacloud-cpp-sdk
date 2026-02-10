// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckFixDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckFixDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckFixDetails, checkFixDetails_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckFixDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckFixDetails, checkFixDetails_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCheckFixDetailsResponseBody() = default ;
    DescribeCheckFixDetailsResponseBody(const DescribeCheckFixDetailsResponseBody &) = default ;
    DescribeCheckFixDetailsResponseBody(DescribeCheckFixDetailsResponseBody &&) = default ;
    DescribeCheckFixDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckFixDetailsResponseBody() = default ;
    DescribeCheckFixDetailsResponseBody& operator=(const DescribeCheckFixDetailsResponseBody &) = default ;
    DescribeCheckFixDetailsResponseBody& operator=(DescribeCheckFixDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckFixDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckFixDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CheckDesc, checkDesc_);
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, CheckFixDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckDesc, checkDesc_);
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      CheckFixDetails() = default ;
      CheckFixDetails(const CheckFixDetails &) = default ;
      CheckFixDetails(CheckFixDetails &&) = default ;
      CheckFixDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckFixDetails() = default ;
      CheckFixDetails& operator=(const CheckFixDetails &) = default ;
      CheckFixDetails& operator=(CheckFixDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Optional, optional_);
          DARABONBA_PTR_TO_JSON(ParamList, paramList_);
          DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(VarName, varName_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Optional, optional_);
          DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
          DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(VarName, varName_);
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
        class ParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
            DARABONBA_PTR_TO_JSON(EnumValue, enumValue_);
            DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(MinValue, minValue_);
            DARABONBA_PTR_TO_JSON(ParamDefaultValue, paramDefaultValue_);
            DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
            DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
            DARABONBA_PTR_FROM_JSON(ParamDefaultValue, paramDefaultValue_);
            DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ParamList() = default ;
          ParamList(const ParamList &) = default ;
          ParamList(ParamList &&) = default ;
          ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamList() = default ;
          ParamList& operator=(const ParamList &) = default ;
          ParamList& operator=(ParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enumValue_ == nullptr
        && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->paramDefaultValue_ == nullptr && this->paramDesc_ == nullptr && this->paramName_ == nullptr
        && this->paramType_ == nullptr && this->ruleId_ == nullptr && this->value_ == nullptr; };
          // enumValue Field Functions 
          bool hasEnumValue() const { return this->enumValue_ != nullptr;};
          void deleteEnumValue() { this->enumValue_ = nullptr;};
          inline string getEnumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
          inline ParamList& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
          inline ParamList& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
          inline ParamList& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


          // paramDefaultValue Field Functions 
          bool hasParamDefaultValue() const { return this->paramDefaultValue_ != nullptr;};
          void deleteParamDefaultValue() { this->paramDefaultValue_ = nullptr;};
          inline string getParamDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(paramDefaultValue_, "") };
          inline ParamList& setParamDefaultValue(string paramDefaultValue) { DARABONBA_PTR_SET_VALUE(paramDefaultValue_, paramDefaultValue) };


          // paramDesc Field Functions 
          bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
          void deleteParamDesc() { this->paramDesc_ = nullptr;};
          inline string getParamDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
          inline ParamList& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline ParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline int32_t getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, 0) };
          inline ParamList& setParamType(int32_t paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
          inline ParamList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The options that can be selected for the rule parameter if the value of the ParamType parameter is 2.
          shared_ptr<string> enumValue_ {};
          // The maximum value of the rule parameter.
          shared_ptr<int32_t> maxValue_ {};
          // The minimum value of the rule parameter.
          shared_ptr<int32_t> minValue_ {};
          // The default value of the rule parameter.
          shared_ptr<string> paramDefaultValue_ {};
          // The description of the rule parameter.
          shared_ptr<string> paramDesc_ {};
          // The name of the rule parameter.
          shared_ptr<string> paramName_ {};
          // The type of the rule parameter. Valid values:
          // 
          // *   **1**: input
          // *   **2**: selection
          shared_ptr<int32_t> paramType_ {};
          // The ID of the rule.
          shared_ptr<string> ruleId_ {};
          // The specified value of the rule parameter.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->defaultValue_ == nullptr && this->optional_ == nullptr && this->paramList_ == nullptr && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr
        && this->value_ == nullptr && this->varName_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
        inline Rules& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline int32_t getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, 0) };
        inline Rules& setDefaultValue(int32_t defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // optional Field Functions 
        bool hasOptional() const { return this->optional_ != nullptr;};
        void deleteOptional() { this->optional_ = nullptr;};
        inline int32_t getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0) };
        inline Rules& setOptional(int32_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


        // paramList Field Functions 
        bool hasParamList() const { return this->paramList_ != nullptr;};
        void deleteParamList() { this->paramList_ = nullptr;};
        inline const vector<Rules::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Rules::ParamList>) };
        inline vector<Rules::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<Rules::ParamList>) };
        inline Rules& setParamList(const vector<Rules::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
        inline Rules& setParamList(vector<Rules::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


        // ruleDesc Field Functions 
        bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
        void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
        inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
        inline Rules& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
        inline Rules& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // varName Field Functions 
        bool hasVarName() const { return this->varName_ != nullptr;};
        void deleteVarName() { this->varName_ = nullptr;};
        inline string getVarName() const { DARABONBA_PTR_GET_DEFAULT(varName_, "") };
        inline Rules& setVarName(string varName) { DARABONBA_PTR_SET_VALUE(varName_, varName) };


      protected:
        // The ID of the risk item.
        shared_ptr<int64_t> checkId_ {};
        // The default value of the rule.
        shared_ptr<int32_t> defaultValue_ {};
        // Indicates whether the rule is optional. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> optional_ {};
        // An array that consists of the rule parameters.
        shared_ptr<vector<Rules::ParamList>> paramList_ {};
        // The description of the rule.
        shared_ptr<string> ruleDesc_ {};
        // The ID of the rule.
        shared_ptr<string> ruleId_ {};
        // The specified value of the rule parameter.
        shared_ptr<int32_t> value_ {};
        // The name of the variable.
        shared_ptr<string> varName_ {};
      };

      virtual bool empty() const override { return this->checkDesc_ == nullptr
        && this->checkId_ == nullptr && this->checkItem_ == nullptr && this->rules_ == nullptr; };
      // checkDesc Field Functions 
      bool hasCheckDesc() const { return this->checkDesc_ != nullptr;};
      void deleteCheckDesc() { this->checkDesc_ = nullptr;};
      inline string getCheckDesc() const { DARABONBA_PTR_GET_DEFAULT(checkDesc_, "") };
      inline CheckFixDetails& setCheckDesc(string checkDesc) { DARABONBA_PTR_SET_VALUE(checkDesc_, checkDesc) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckFixDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkItem Field Functions 
      bool hasCheckItem() const { return this->checkItem_ != nullptr;};
      void deleteCheckItem() { this->checkItem_ = nullptr;};
      inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
      inline CheckFixDetails& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<CheckFixDetails::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CheckFixDetails::Rules>) };
      inline vector<CheckFixDetails::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CheckFixDetails::Rules>) };
      inline CheckFixDetails& setRules(const vector<CheckFixDetails::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline CheckFixDetails& setRules(vector<CheckFixDetails::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The detailed description of the risk item.
      shared_ptr<string> checkDesc_ {};
      // The ID of the risk item.
      shared_ptr<int64_t> checkId_ {};
      // The description of the risk item.
      shared_ptr<string> checkItem_ {};
      // An array consisting of the rules that are supported by the risk item.
      shared_ptr<vector<CheckFixDetails::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->checkFixDetails_ == nullptr
        && this->count_ == nullptr && this->requestId_ == nullptr; };
    // checkFixDetails Field Functions 
    bool hasCheckFixDetails() const { return this->checkFixDetails_ != nullptr;};
    void deleteCheckFixDetails() { this->checkFixDetails_ = nullptr;};
    inline const vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails> & getCheckFixDetails() const { DARABONBA_PTR_GET_CONST(checkFixDetails_, vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails>) };
    inline vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails> getCheckFixDetails() { DARABONBA_PTR_GET(checkFixDetails_, vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails>) };
    inline DescribeCheckFixDetailsResponseBody& setCheckFixDetails(const vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails> & checkFixDetails) { DARABONBA_PTR_SET_VALUE(checkFixDetails_, checkFixDetails) };
    inline DescribeCheckFixDetailsResponseBody& setCheckFixDetails(vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails> && checkFixDetails) { DARABONBA_PTR_SET_RVALUE(checkFixDetails_, checkFixDetails) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckFixDetailsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckFixDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the parameters.
    shared_ptr<vector<DescribeCheckFixDetailsResponseBody::CheckFixDetails>> checkFixDetails_ {};
    // The number of risk items that can be fixed.
    shared_ptr<int32_t> count_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
