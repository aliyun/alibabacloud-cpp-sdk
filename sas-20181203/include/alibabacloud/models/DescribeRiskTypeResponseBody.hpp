// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODY_HPP_
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
  class DescribeRiskTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskTypes, riskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskTypes, riskTypes_);
    };
    DescribeRiskTypeResponseBody() = default ;
    DescribeRiskTypeResponseBody(const DescribeRiskTypeResponseBody &) = default ;
    DescribeRiskTypeResponseBody(DescribeRiskTypeResponseBody &&) = default ;
    DescribeRiskTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBody() = default ;
    DescribeRiskTypeResponseBody& operator=(const DescribeRiskTypeResponseBody &) = default ;
    DescribeRiskTypeResponseBody& operator=(DescribeRiskTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskTypes& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
        DARABONBA_PTR_TO_JSON(SubTypes, subTypes_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, RiskTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
        DARABONBA_PTR_FROM_JSON(SubTypes, subTypes_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      RiskTypes() = default ;
      RiskTypes(const RiskTypes &) = default ;
      RiskTypes(RiskTypes &&) = default ;
      RiskTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskTypes() = default ;
      RiskTypes& operator=(const RiskTypes &) = default ;
      RiskTypes& operator=(RiskTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTypes& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
          DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
          DARABONBA_PTR_TO_JSON(SupportedOs, supportedOs_);
          DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        };
        friend void from_json(const Darabonba::Json& j, SubTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
          DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
          DARABONBA_PTR_FROM_JSON(SupportedOs, supportedOs_);
          DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        };
        SubTypes() = default ;
        SubTypes(const SubTypes &) = default ;
        SubTypes(SubTypes &&) = default ;
        SubTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTypes() = default ;
        SubTypes& operator=(const SubTypes &) = default ;
        SubTypes& operator=(SubTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CheckDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CheckDetails& obj) { 
            DARABONBA_PTR_TO_JSON(CheckDesc, checkDesc_);
            DARABONBA_PTR_TO_JSON(CheckId, checkId_);
            DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_TO_JSON(Rules, rules_);
          };
          friend void from_json(const Darabonba::Json& j, CheckDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckDesc, checkDesc_);
            DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
            DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_FROM_JSON(Rules, rules_);
          };
          CheckDetails() = default ;
          CheckDetails(const CheckDetails &) = default ;
          CheckDetails(CheckDetails &&) = default ;
          CheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CheckDetails() = default ;
          CheckDetails& operator=(const CheckDetails &) = default ;
          CheckDetails& operator=(CheckDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rules& obj) { 
              DARABONBA_PTR_TO_JSON(Optional, optional_);
              DARABONBA_PTR_TO_JSON(ParamList, paramList_);
              DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
              DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            };
            friend void from_json(const Darabonba::Json& j, Rules& obj) { 
              DARABONBA_PTR_FROM_JSON(Optional, optional_);
              DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
              DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
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
              };
              friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
                DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
                DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
                DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
                DARABONBA_PTR_FROM_JSON(ParamDefaultValue, paramDefaultValue_);
                DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
                DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
                DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
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
        && this->paramType_ == nullptr; };
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


            protected:
              // If the value of paramType is 1, this parameter is empty. If the value of paramType is 2, this parameter provides the options that can be selected for paramType.
              shared_ptr<string> enumValue_ {};
              // The maximum value of the parameter.
              shared_ptr<int32_t> maxValue_ {};
              // The minimum value of the parameter.
              shared_ptr<int32_t> minValue_ {};
              // The default value of the parameter.
              shared_ptr<string> paramDefaultValue_ {};
              // The description of the parameter.
              shared_ptr<string> paramDesc_ {};
              // The name of the parameter.
              shared_ptr<string> paramName_ {};
              // The configuration type of the parameter. Valid values:
              // 
              // *   **1**: input
              // *   **2**: selection
              shared_ptr<int32_t> paramType_ {};
            };

            virtual bool empty() const override { return this->optional_ == nullptr
        && this->paramList_ == nullptr && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr; };
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


          protected:
            // Indicates whether the baseline can be edited. Valid values:
            // 
            // *   **0**: no
            // *   **1**: yes
            shared_ptr<int32_t> optional_ {};
            // An array that consists of the parameters in the rule for the baseline.
            shared_ptr<vector<Rules::ParamList>> paramList_ {};
            // The description of the rule for the baseline.
            shared_ptr<string> ruleDesc_ {};
            // The ID of the rule for the baseline.
            shared_ptr<string> ruleId_ {};
          };

          virtual bool empty() const override { return this->checkDesc_ == nullptr
        && this->checkId_ == nullptr && this->checkItem_ == nullptr && this->rules_ == nullptr; };
          // checkDesc Field Functions 
          bool hasCheckDesc() const { return this->checkDesc_ != nullptr;};
          void deleteCheckDesc() { this->checkDesc_ = nullptr;};
          inline string getCheckDesc() const { DARABONBA_PTR_GET_DEFAULT(checkDesc_, "") };
          inline CheckDetails& setCheckDesc(string checkDesc) { DARABONBA_PTR_SET_VALUE(checkDesc_, checkDesc) };


          // checkId Field Functions 
          bool hasCheckId() const { return this->checkId_ != nullptr;};
          void deleteCheckId() { this->checkId_ = nullptr;};
          inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
          inline CheckDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


          // checkItem Field Functions 
          bool hasCheckItem() const { return this->checkItem_ != nullptr;};
          void deleteCheckItem() { this->checkItem_ = nullptr;};
          inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
          inline CheckDetails& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


          // rules Field Functions 
          bool hasRules() const { return this->rules_ != nullptr;};
          void deleteRules() { this->rules_ = nullptr;};
          inline const vector<CheckDetails::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CheckDetails::Rules>) };
          inline vector<CheckDetails::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CheckDetails::Rules>) };
          inline CheckDetails& setRules(const vector<CheckDetails::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
          inline CheckDetails& setRules(vector<CheckDetails::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        protected:
          // The description of the baseline.
          shared_ptr<string> checkDesc_ {};
          // The ID of the baseline.
          shared_ptr<int64_t> checkId_ {};
          // The baseline.
          shared_ptr<string> checkItem_ {};
          // An array that consists of the rule details about the baseline.
          shared_ptr<vector<CheckDetails::Rules>> rules_ {};
        };

        virtual bool empty() const override { return this->alias_ == nullptr
        && this->authFlag_ == nullptr && this->checkDetails_ == nullptr && this->supportedOs_ == nullptr && this->typeName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline SubTypes& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // authFlag Field Functions 
        bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
        void deleteAuthFlag() { this->authFlag_ = nullptr;};
        inline bool getAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, false) };
        inline SubTypes& setAuthFlag(bool authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


        // checkDetails Field Functions 
        bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
        void deleteCheckDetails() { this->checkDetails_ = nullptr;};
        inline const vector<SubTypes::CheckDetails> & getCheckDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<SubTypes::CheckDetails>) };
        inline vector<SubTypes::CheckDetails> getCheckDetails() { DARABONBA_PTR_GET(checkDetails_, vector<SubTypes::CheckDetails>) };
        inline SubTypes& setCheckDetails(const vector<SubTypes::CheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
        inline SubTypes& setCheckDetails(vector<SubTypes::CheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


        // supportedOs Field Functions 
        bool hasSupportedOs() const { return this->supportedOs_ != nullptr;};
        void deleteSupportedOs() { this->supportedOs_ = nullptr;};
        inline string getSupportedOs() const { DARABONBA_PTR_GET_DEFAULT(supportedOs_, "") };
        inline SubTypes& setSupportedOs(string supportedOs) { DARABONBA_PTR_SET_VALUE(supportedOs_, supportedOs) };


        // typeName Field Functions 
        bool hasTypeName() const { return this->typeName_ != nullptr;};
        void deleteTypeName() { this->typeName_ = nullptr;};
        inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
        inline SubTypes& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      protected:
        // The alias of the baseline subtype.
        shared_ptr<string> alias_ {};
        // The baseline subtype permission flag of the current user version. Valid values:
        // 
        // - **true**: Have access
        // - **false**: No permissions
        shared_ptr<bool> authFlag_ {};
        // An array that consists of the check details about the baseline subtype.
        shared_ptr<vector<SubTypes::CheckDetails>> checkDetails_ {};
        // The operating system type of the server. Valid values:
        // 
        // - **windows**
        // - **linux**
        shared_ptr<string> supportedOs_ {};
        // The name of the baseline subtype.
        shared_ptr<string> typeName_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->authFlag_ == nullptr && this->subTypes_ == nullptr && this->typeName_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline RiskTypes& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // authFlag Field Functions 
      bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
      void deleteAuthFlag() { this->authFlag_ = nullptr;};
      inline bool getAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, false) };
      inline RiskTypes& setAuthFlag(bool authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


      // subTypes Field Functions 
      bool hasSubTypes() const { return this->subTypes_ != nullptr;};
      void deleteSubTypes() { this->subTypes_ = nullptr;};
      inline const vector<RiskTypes::SubTypes> & getSubTypes() const { DARABONBA_PTR_GET_CONST(subTypes_, vector<RiskTypes::SubTypes>) };
      inline vector<RiskTypes::SubTypes> getSubTypes() { DARABONBA_PTR_GET(subTypes_, vector<RiskTypes::SubTypes>) };
      inline RiskTypes& setSubTypes(const vector<RiskTypes::SubTypes> & subTypes) { DARABONBA_PTR_SET_VALUE(subTypes_, subTypes) };
      inline RiskTypes& setSubTypes(vector<RiskTypes::SubTypes> && subTypes) { DARABONBA_PTR_SET_RVALUE(subTypes_, subTypes) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline RiskTypes& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      // The alias of the baseline type.
      shared_ptr<string> alias_ {};
      // The baseline type flag of the current user version. Valid values:
      // 
      // - **true**: Have access
      // - **false**: No permissions
      shared_ptr<bool> authFlag_ {};
      // An array that consists of the information about baseline subtypes.
      shared_ptr<vector<RiskTypes::SubTypes>> subTypes_ {};
      // The name of the baseline type.
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskTypes Field Functions 
    bool hasRiskTypes() const { return this->riskTypes_ != nullptr;};
    void deleteRiskTypes() { this->riskTypes_ = nullptr;};
    inline const vector<DescribeRiskTypeResponseBody::RiskTypes> & getRiskTypes() const { DARABONBA_PTR_GET_CONST(riskTypes_, vector<DescribeRiskTypeResponseBody::RiskTypes>) };
    inline vector<DescribeRiskTypeResponseBody::RiskTypes> getRiskTypes() { DARABONBA_PTR_GET(riskTypes_, vector<DescribeRiskTypeResponseBody::RiskTypes>) };
    inline DescribeRiskTypeResponseBody& setRiskTypes(const vector<DescribeRiskTypeResponseBody::RiskTypes> & riskTypes) { DARABONBA_PTR_SET_VALUE(riskTypes_, riskTypes) };
    inline DescribeRiskTypeResponseBody& setRiskTypes(vector<DescribeRiskTypeResponseBody::RiskTypes> && riskTypes) { DARABONBA_PTR_SET_RVALUE(riskTypes_, riskTypes) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information about baseline types.
    shared_ptr<vector<DescribeRiskTypeResponseBody::RiskTypes>> riskTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
