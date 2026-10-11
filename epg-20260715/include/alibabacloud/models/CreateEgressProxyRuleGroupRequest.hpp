// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYRULEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYRULEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class CreateEgressProxyRuleGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyRuleGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
      DARABONBA_PTR_TO_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyRuleGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateEgressProxyRuleGroupRequest() = default ;
    CreateEgressProxyRuleGroupRequest(const CreateEgressProxyRuleGroupRequest &) = default ;
    CreateEgressProxyRuleGroupRequest(CreateEgressProxyRuleGroupRequest &&) = default ;
    CreateEgressProxyRuleGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyRuleGroupRequest() = default ;
    CreateEgressProxyRuleGroupRequest& operator=(const CreateEgressProxyRuleGroupRequest &) = default ;
    CreateEgressProxyRuleGroupRequest& operator=(CreateEgressProxyRuleGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. It can be up to 128 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. It can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class EgressProxyRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyRules& obj) { 
        DARABONBA_PTR_TO_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_TO_JSON(PreDns, preDns_);
        DARABONBA_PTR_TO_JSON(PreRequest, preRequest_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyRules& obj) { 
        DARABONBA_PTR_FROM_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_FROM_JSON(PreDns, preDns_);
        DARABONBA_PTR_FROM_JSON(PreRequest, preRequest_);
      };
      EgressProxyRules() = default ;
      EgressProxyRules(const EgressProxyRules &) = default ;
      EgressProxyRules(EgressProxyRules &&) = default ;
      EgressProxyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyRules() = default ;
      EgressProxyRules& operator=(const EgressProxyRules &) = default ;
      EgressProxyRules& operator=(EgressProxyRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreRequest : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreRequest& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreRequest& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PreRequest() = default ;
        PreRequest(const PreRequest &) = default ;
        PreRequest(PreRequest &&) = default ;
        PreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreRequest() = default ;
        PreRequest& operator=(const PreRequest &) = default ;
        PreRequest& operator=(PreRequest &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_TO_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_FROM_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
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
          virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionOperator_ == nullptr && this->conditionValues_ == nullptr; };
          // conditionKey Field Functions 
          bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
          void deleteConditionKey() { this->conditionKey_ = nullptr;};
          inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
          inline Conditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


          // conditionOperator Field Functions 
          bool hasConditionOperator() const { return this->conditionOperator_ != nullptr;};
          void deleteConditionOperator() { this->conditionOperator_ = nullptr;};
          inline string getConditionOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionOperator_, "") };
          inline Conditions& setConditionOperator(string conditionOperator) { DARABONBA_PTR_SET_VALUE(conditionOperator_, conditionOperator) };


          // conditionValues Field Functions 
          bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
          void deleteConditionValues() { this->conditionValues_ = nullptr;};
          inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
          inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
          inline Conditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
          inline Conditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


        protected:
          // The key of the matching condition. The value must match the phase of the rule and be used with an operator (ConditionOperator) of the corresponding category. Valid values:
          // 
          // - **request:SourceIp**: the source IP address of the request. Used with IP address operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:DestinationDomain**: the destination domain name of the request. Used with string operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:Http:Uri**: the URI of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Method**: the HTTP request method. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:UserAgent**: the User-Agent of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:ContentType**: the Content-Type of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Header**: the HTTP request header. Used with string operators. Supported in the PreRequest phase. When you use this key, append the header name to the key in the format of request:Http:Header/<HeaderName>.
          // 
          // - **request:Protocol**: the request protocol. Used with string operators. Supported in the PreRequest phase.
          // 
          // This parameter is required.
          shared_ptr<string> conditionKey_ {};
          // The operator of the matching condition. It must be used with a condition key (ConditionKey). Valid values:
          // 
          // - **StringEquals**: exact string match.
          // 
          // - **StringNotEquals**: string inequality.
          // 
          // - **StringEqualsIgnoreCase**: case-insensitive exact string match.
          // 
          // - **StringNotEqualsIgnoreCase**: case-insensitive string inequality.
          // 
          // - **StringPrefixMatch**: string prefix match.
          // 
          // - **StringPrefixMatchIgnoreCase**: case-insensitive string prefix match.
          // 
          // - **StringPrefixNotMatch**: string prefix mismatch.
          // 
          // - **StringPrefixNotMatchIgnoreCase**: case-insensitive string prefix mismatch.
          // 
          // - **StringSuffixMatch**: string suffix match.
          // 
          // - **StringSuffixMatchIgnoreCase**: case-insensitive string suffix match.
          // 
          // - **StringSuffixNotMatch**: string suffix mismatch.
          // 
          // - **StringSuffixNotMatchIgnoreCase**: case-insensitive string suffix mismatch.
          // 
          // - **StringRegexMatch**: string regular expression match.
          // 
          // - **StringRegexNotMatch**: string regular expression mismatch.
          // 
          // - **StringWildcardMatch**: string wildcard match.
          // 
          // - **StringWildcardMatchIgnoreCase**: case-insensitive string wildcard match.
          // 
          // - **StringWildcardNotMatch**: string wildcard mismatch.
          // 
          // - **StringWildcardNotMatchIgnoreCase**: case-insensitive string wildcard mismatch.
          // 
          // - **IpAddress**: The source IP address belongs to the specified IP address or CIDR block.
          // 
          // - **NotIpAddress**: The source IP address does not belong to the specified IP address or CIDR block.
          // 
          // This parameter is required.
          shared_ptr<string> conditionOperator_ {};
          // The list of condition values.
          // 
          // This parameter is required.
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->description_ == nullptr && this->egressProxyRuleName_ == nullptr && this->priority_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline PreRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<PreRequest::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<PreRequest::Conditions>) };
        inline vector<PreRequest::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<PreRequest::Conditions>) };
        inline PreRequest& setConditions(const vector<PreRequest::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline PreRequest& setConditions(vector<PreRequest::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleName Field Functions 
        bool hasEgressProxyRuleName() const { return this->egressProxyRuleName_ != nullptr;};
        void deleteEgressProxyRuleName() { this->egressProxyRuleName_ = nullptr;};
        inline string getEgressProxyRuleName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleName_, "") };
        inline PreRequest& setEgressProxyRuleName(string egressProxyRuleName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleName_, egressProxyRuleName) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PreRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The action to perform on the matched traffic after the rule is hit. Valid values:
        // 
        // - **Allow**: allows the traffic that matches the rule.
        // 
        // - **Deny**: denies the traffic that matches the rule.
        // 
        // This parameter is required.
        shared_ptr<string> action_ {};
        // The list of matching conditions for the rule. Each condition consists of a condition key (ConditionKey), an operator (ConditionOperator), and condition values (ConditionValues). The combination of a condition key and an operator must be unique within the same rule.
        // 
        // This parameter is required.
        shared_ptr<vector<PreRequest::Conditions>> conditions_ {};
        // The description of the egress rule. The description must be 2 to 256 characters in length and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
        shared_ptr<string> description_ {};
        // The name of the egress rule. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
        // 
        // This parameter is required.
        shared_ptr<string> egressProxyRuleName_ {};
        // The priority of the egress rule within its phase. Valid values: 1 to 1000. A smaller value indicates a higher priority. The priority must be unique within the same phase of a rule group.
        // 
        // This parameter is required.
        shared_ptr<int32_t> priority_ {};
      };

      class PreDns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreDns& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreDns& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PreDns() = default ;
        PreDns(const PreDns &) = default ;
        PreDns(PreDns &&) = default ;
        PreDns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreDns() = default ;
        PreDns& operator=(const PreDns &) = default ;
        PreDns& operator=(PreDns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_TO_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_FROM_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
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
          virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionOperator_ == nullptr && this->conditionValues_ == nullptr; };
          // conditionKey Field Functions 
          bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
          void deleteConditionKey() { this->conditionKey_ = nullptr;};
          inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
          inline Conditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


          // conditionOperator Field Functions 
          bool hasConditionOperator() const { return this->conditionOperator_ != nullptr;};
          void deleteConditionOperator() { this->conditionOperator_ = nullptr;};
          inline string getConditionOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionOperator_, "") };
          inline Conditions& setConditionOperator(string conditionOperator) { DARABONBA_PTR_SET_VALUE(conditionOperator_, conditionOperator) };


          // conditionValues Field Functions 
          bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
          void deleteConditionValues() { this->conditionValues_ = nullptr;};
          inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
          inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
          inline Conditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
          inline Conditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


        protected:
          // The key of the matching condition. The value must match the phase of the rule and be used with an operator (ConditionOperator) of the corresponding category. Valid values:
          // 
          // - **request:SourceIp**: the source IP address of the request. Used with IP address operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:DestinationDomain**: the destination domain name of the request. Used with string operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:Http:Uri**: the URI of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Method**: the HTTP request method. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:UserAgent**: the User-Agent of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:ContentType**: the Content-Type of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Header**: the HTTP request header. Used with string operators. Supported in the PreRequest phase. When you use this key, append the header name to the key in the format of request:Http:Header/<HeaderName>.
          // 
          // - **request:Protocol**: the request protocol. Used with string operators. Supported in the PreRequest phase.
          // 
          // This parameter is required.
          shared_ptr<string> conditionKey_ {};
          // The operator of the matching condition. It must be used with a condition key (ConditionKey). Valid values:
          // 
          // - **StringEquals**: exact string match.
          // 
          // - **StringNotEquals**: string inequality.
          // 
          // - **StringEqualsIgnoreCase**: case-insensitive exact string match.
          // 
          // - **StringNotEqualsIgnoreCase**: case-insensitive string inequality.
          // 
          // - **StringPrefixMatch**: string prefix match.
          // 
          // - **StringPrefixMatchIgnoreCase**: case-insensitive string prefix match.
          // 
          // - **StringPrefixNotMatch**: string prefix mismatch.
          // 
          // - **StringPrefixNotMatchIgnoreCase**: case-insensitive string prefix mismatch.
          // 
          // - **StringSuffixMatch**: string suffix match.
          // 
          // - **StringSuffixMatchIgnoreCase**: case-insensitive string suffix match.
          // 
          // - **StringSuffixNotMatch**: string suffix mismatch.
          // 
          // - **StringSuffixNotMatchIgnoreCase**: case-insensitive string suffix mismatch.
          // 
          // - **StringRegexMatch**: string regular expression match.
          // 
          // - **StringRegexNotMatch**: string regular expression mismatch.
          // 
          // - **StringWildcardMatch**: string wildcard match.
          // 
          // - **StringWildcardMatchIgnoreCase**: case-insensitive string wildcard match.
          // 
          // - **StringWildcardNotMatch**: string wildcard mismatch.
          // 
          // - **StringWildcardNotMatchIgnoreCase**: case-insensitive string wildcard mismatch.
          // 
          // - **IpAddress**: The source IP address belongs to the specified IP address or CIDR block.
          // 
          // - **NotIpAddress**: The source IP address does not belong to the specified IP address or CIDR block.
          // 
          // This parameter is required.
          shared_ptr<string> conditionOperator_ {};
          // The list of condition values.
          // 
          // This parameter is required.
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->description_ == nullptr && this->egressProxyRuleName_ == nullptr && this->priority_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline PreDns& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<PreDns::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<PreDns::Conditions>) };
        inline vector<PreDns::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<PreDns::Conditions>) };
        inline PreDns& setConditions(const vector<PreDns::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline PreDns& setConditions(vector<PreDns::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreDns& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleName Field Functions 
        bool hasEgressProxyRuleName() const { return this->egressProxyRuleName_ != nullptr;};
        void deleteEgressProxyRuleName() { this->egressProxyRuleName_ = nullptr;};
        inline string getEgressProxyRuleName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleName_, "") };
        inline PreDns& setEgressProxyRuleName(string egressProxyRuleName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleName_, egressProxyRuleName) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PreDns& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The action to perform on the matched traffic after the rule is hit. Valid values:
        // 
        // - **Allow**: allows the traffic that matches the rule.
        // 
        // - **Deny**: denies the traffic that matches the rule.
        // 
        // This parameter is required.
        shared_ptr<string> action_ {};
        // The list of matching conditions for the rule. Each condition consists of a condition key (ConditionKey), an operator (ConditionOperator), and condition values (ConditionValues). The combination of a condition key and an operator must be unique within the same rule.
        // 
        // This parameter is required.
        shared_ptr<vector<PreDns::Conditions>> conditions_ {};
        // The description of the egress rule. The description must be 2 to 256 characters in length and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
        shared_ptr<string> description_ {};
        // The name of the egress rule. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
        // 
        // This parameter is required.
        shared_ptr<string> egressProxyRuleName_ {};
        // The priority of the egress rule within its phase. Valid values: 1 to 1000. A smaller value indicates a higher priority. The priority must be unique within the same phase of a rule group.
        // 
        // This parameter is required.
        shared_ptr<int32_t> priority_ {};
      };

      class PostResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PostResponse& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PostResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        PostResponse() = default ;
        PostResponse(const PostResponse &) = default ;
        PostResponse(PostResponse &&) = default ;
        PostResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PostResponse() = default ;
        PostResponse& operator=(const PostResponse &) = default ;
        PostResponse& operator=(PostResponse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_TO_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
            DARABONBA_PTR_FROM_JSON(ConditionOperator, conditionOperator_);
            DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
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
          virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionOperator_ == nullptr && this->conditionValues_ == nullptr; };
          // conditionKey Field Functions 
          bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
          void deleteConditionKey() { this->conditionKey_ = nullptr;};
          inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
          inline Conditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


          // conditionOperator Field Functions 
          bool hasConditionOperator() const { return this->conditionOperator_ != nullptr;};
          void deleteConditionOperator() { this->conditionOperator_ = nullptr;};
          inline string getConditionOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionOperator_, "") };
          inline Conditions& setConditionOperator(string conditionOperator) { DARABONBA_PTR_SET_VALUE(conditionOperator_, conditionOperator) };


          // conditionValues Field Functions 
          bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
          void deleteConditionValues() { this->conditionValues_ = nullptr;};
          inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
          inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
          inline Conditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
          inline Conditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


        protected:
          // The key of the matching condition. The value must match the phase of the rule and be used with an operator (ConditionOperator) of the corresponding category. Valid values:
          // 
          // - **request:SourceIp**: the source IP address of the request. Used with IP address operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:DestinationDomain**: the destination domain name of the request. Used with string operators. Supported in the PreDns and PreRequest phases.
          // 
          // - **request:Http:Uri**: the URI of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Method**: the HTTP request method. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:UserAgent**: the User-Agent of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:ContentType**: the Content-Type of the HTTP request. Used with string operators. Supported in the PreRequest phase.
          // 
          // - **request:Http:Header**: the HTTP request header. Used with string operators. Supported in the PreRequest phase. When you use this key, append the header name to the key in the format of request:Http:Header/<HeaderName>.
          // 
          // - **request:Protocol**: the request protocol. Used with string operators. Supported in the PreRequest phase.
          // 
          // This parameter is required.
          shared_ptr<string> conditionKey_ {};
          // The operator of the matching condition. It must be used with a condition key (ConditionKey). Valid values:
          // 
          // - **StringEquals**: exact string match.
          // 
          // - **StringNotEquals**: string inequality.
          // 
          // - **StringEqualsIgnoreCase**: case-insensitive exact string match.
          // 
          // - **StringNotEqualsIgnoreCase**: case-insensitive string inequality.
          // 
          // - **StringPrefixMatch**: string prefix match.
          // 
          // - **StringPrefixMatchIgnoreCase**: case-insensitive string prefix match.
          // 
          // - **StringPrefixNotMatch**: string prefix mismatch.
          // 
          // - **StringPrefixNotMatchIgnoreCase**: case-insensitive string prefix mismatch.
          // 
          // - **StringSuffixMatch**: string suffix match.
          // 
          // - **StringSuffixMatchIgnoreCase**: case-insensitive string suffix match.
          // 
          // - **StringSuffixNotMatch**: string suffix mismatch.
          // 
          // - **StringSuffixNotMatchIgnoreCase**: case-insensitive string suffix mismatch.
          // 
          // - **StringRegexMatch**: string regular expression match.
          // 
          // - **StringRegexNotMatch**: string regular expression mismatch.
          // 
          // - **StringWildcardMatch**: string wildcard match.
          // 
          // - **StringWildcardMatchIgnoreCase**: case-insensitive string wildcard match.
          // 
          // - **StringWildcardNotMatch**: string wildcard mismatch.
          // 
          // - **StringWildcardNotMatchIgnoreCase**: case-insensitive string wildcard mismatch.
          // 
          // - **IpAddress**: The source IP address belongs to the specified IP address or CIDR block.
          // 
          // - **NotIpAddress**: The source IP address does not belong to the specified IP address or CIDR block.
          // 
          // This parameter is required.
          shared_ptr<string> conditionOperator_ {};
          // The list of condition values.
          // 
          // This parameter is required.
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->description_ == nullptr && this->egressProxyRuleName_ == nullptr && this->priority_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline PostResponse& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<PostResponse::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<PostResponse::Conditions>) };
        inline vector<PostResponse::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<PostResponse::Conditions>) };
        inline PostResponse& setConditions(const vector<PostResponse::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline PostResponse& setConditions(vector<PostResponse::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PostResponse& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleName Field Functions 
        bool hasEgressProxyRuleName() const { return this->egressProxyRuleName_ != nullptr;};
        void deleteEgressProxyRuleName() { this->egressProxyRuleName_ = nullptr;};
        inline string getEgressProxyRuleName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleName_, "") };
        inline PostResponse& setEgressProxyRuleName(string egressProxyRuleName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleName_, egressProxyRuleName) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline PostResponse& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The action to perform on the matched traffic after the rule is hit. Valid values:
        // 
        // - **Allow**: allows the traffic that matches the rule.
        // 
        // - **Deny**: denies the traffic that matches the rule.
        // 
        // This parameter is required.
        shared_ptr<string> action_ {};
        // The list of matching conditions for the rule. Each condition consists of a condition key (ConditionKey), an operator (ConditionOperator), and condition values (ConditionValues). The combination of a condition key and an operator must be unique within the same rule.
        // 
        // This parameter is required.
        shared_ptr<vector<PostResponse::Conditions>> conditions_ {};
        // The description of the egress rule. The description must be 2 to 256 characters in length and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
        shared_ptr<string> description_ {};
        // The name of the egress rule. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
        // 
        // This parameter is required.
        shared_ptr<string> egressProxyRuleName_ {};
        // The priority of the egress rule within its phase. Valid values: 1 to 1000. A smaller value indicates a higher priority. The priority must be unique within the same phase of a rule group.
        // 
        // This parameter is required.
        shared_ptr<int32_t> priority_ {};
      };

      virtual bool empty() const override { return this->postResponse_ == nullptr
        && this->preDns_ == nullptr && this->preRequest_ == nullptr; };
      // postResponse Field Functions 
      bool hasPostResponse() const { return this->postResponse_ != nullptr;};
      void deletePostResponse() { this->postResponse_ = nullptr;};
      inline const vector<EgressProxyRules::PostResponse> & getPostResponse() const { DARABONBA_PTR_GET_CONST(postResponse_, vector<EgressProxyRules::PostResponse>) };
      inline vector<EgressProxyRules::PostResponse> getPostResponse() { DARABONBA_PTR_GET(postResponse_, vector<EgressProxyRules::PostResponse>) };
      inline EgressProxyRules& setPostResponse(const vector<EgressProxyRules::PostResponse> & postResponse) { DARABONBA_PTR_SET_VALUE(postResponse_, postResponse) };
      inline EgressProxyRules& setPostResponse(vector<EgressProxyRules::PostResponse> && postResponse) { DARABONBA_PTR_SET_RVALUE(postResponse_, postResponse) };


      // preDns Field Functions 
      bool hasPreDns() const { return this->preDns_ != nullptr;};
      void deletePreDns() { this->preDns_ = nullptr;};
      inline const vector<EgressProxyRules::PreDns> & getPreDns() const { DARABONBA_PTR_GET_CONST(preDns_, vector<EgressProxyRules::PreDns>) };
      inline vector<EgressProxyRules::PreDns> getPreDns() { DARABONBA_PTR_GET(preDns_, vector<EgressProxyRules::PreDns>) };
      inline EgressProxyRules& setPreDns(const vector<EgressProxyRules::PreDns> & preDns) { DARABONBA_PTR_SET_VALUE(preDns_, preDns) };
      inline EgressProxyRules& setPreDns(vector<EgressProxyRules::PreDns> && preDns) { DARABONBA_PTR_SET_RVALUE(preDns_, preDns) };


      // preRequest Field Functions 
      bool hasPreRequest() const { return this->preRequest_ != nullptr;};
      void deletePreRequest() { this->preRequest_ = nullptr;};
      inline const vector<EgressProxyRules::PreRequest> & getPreRequest() const { DARABONBA_PTR_GET_CONST(preRequest_, vector<EgressProxyRules::PreRequest>) };
      inline vector<EgressProxyRules::PreRequest> getPreRequest() { DARABONBA_PTR_GET(preRequest_, vector<EgressProxyRules::PreRequest>) };
      inline EgressProxyRules& setPreRequest(const vector<EgressProxyRules::PreRequest> & preRequest) { DARABONBA_PTR_SET_VALUE(preRequest_, preRequest) };
      inline EgressProxyRules& setPreRequest(vector<EgressProxyRules::PreRequest> && preRequest) { DARABONBA_PTR_SET_RVALUE(preRequest_, preRequest) };


    protected:
      // The list of rules in the PostResponse phase (after the response is returned).
      shared_ptr<vector<EgressProxyRules::PostResponse>> postResponse_ {};
      // The list of rules for the Pre-DNS stage (before DNS resolution).
      shared_ptr<vector<EgressProxyRules::PreDns>> preDns_ {};
      // The list of rules in the PreRequest stage, which is executed before the request is forwarded.
      shared_ptr<vector<EgressProxyRules::PreRequest>> preRequest_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyRuleGroupName_ == nullptr && this->egressProxyRules_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEgressProxyRuleGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEgressProxyRuleGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEgressProxyRuleGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline CreateEgressProxyRuleGroupRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // egressProxyRuleGroupName Field Functions 
    bool hasEgressProxyRuleGroupName() const { return this->egressProxyRuleGroupName_ != nullptr;};
    void deleteEgressProxyRuleGroupName() { this->egressProxyRuleGroupName_ = nullptr;};
    inline string getEgressProxyRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupName_, "") };
    inline CreateEgressProxyRuleGroupRequest& setEgressProxyRuleGroupName(string egressProxyRuleGroupName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupName_, egressProxyRuleGroupName) };


    // egressProxyRules Field Functions 
    bool hasEgressProxyRules() const { return this->egressProxyRules_ != nullptr;};
    void deleteEgressProxyRules() { this->egressProxyRules_ = nullptr;};
    inline const CreateEgressProxyRuleGroupRequest::EgressProxyRules & getEgressProxyRules() const { DARABONBA_PTR_GET_CONST(egressProxyRules_, CreateEgressProxyRuleGroupRequest::EgressProxyRules) };
    inline CreateEgressProxyRuleGroupRequest::EgressProxyRules getEgressProxyRules() { DARABONBA_PTR_GET(egressProxyRules_, CreateEgressProxyRuleGroupRequest::EgressProxyRules) };
    inline CreateEgressProxyRuleGroupRequest& setEgressProxyRules(const CreateEgressProxyRuleGroupRequest::EgressProxyRules & egressProxyRules) { DARABONBA_PTR_SET_VALUE(egressProxyRules_, egressProxyRules) };
    inline CreateEgressProxyRuleGroupRequest& setEgressProxyRules(CreateEgressProxyRuleGroupRequest::EgressProxyRules && egressProxyRules) { DARABONBA_PTR_SET_RVALUE(egressProxyRules_, egressProxyRules) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEgressProxyRuleGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEgressProxyRuleGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEgressProxyRuleGroupRequest::Tag>) };
    inline vector<CreateEgressProxyRuleGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEgressProxyRuleGroupRequest::Tag>) };
    inline CreateEgressProxyRuleGroupRequest& setTag(const vector<CreateEgressProxyRuleGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEgressProxyRuleGroupRequest& setTag(vector<CreateEgressProxyRuleGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The description of the egress rule group. The description must be 2 to 256 characters in length and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    shared_ptr<string> description_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - **true**: sends a dry run request and does not create the rule group. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (default): sends a normal request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress IP address pool associated with the egress rule group.
    shared_ptr<string> egressProxyIpPoolId_ {};
    // The name of the egress rule group. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyRuleGroupName_ {};
    // The list of egress rules grouped by phase (PreDns, PreRequest, and PostResponse).
    shared_ptr<CreateEgressProxyRuleGroupRequest::EgressProxyRules> egressProxyRules_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<CreateEgressProxyRuleGroupRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
