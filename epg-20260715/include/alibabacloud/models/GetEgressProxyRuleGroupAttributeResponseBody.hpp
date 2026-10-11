// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYRULEGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYRULEGROUPATTRIBUTERESPONSEBODY_HPP_
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
  class GetEgressProxyRuleGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyRuleGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
      DARABONBA_PTR_TO_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyRuleGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRules, egressProxyRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetEgressProxyRuleGroupAttributeResponseBody() = default ;
    GetEgressProxyRuleGroupAttributeResponseBody(const GetEgressProxyRuleGroupAttributeResponseBody &) = default ;
    GetEgressProxyRuleGroupAttributeResponseBody(GetEgressProxyRuleGroupAttributeResponseBody &&) = default ;
    GetEgressProxyRuleGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyRuleGroupAttributeResponseBody() = default ;
    GetEgressProxyRuleGroupAttributeResponseBody& operator=(const GetEgressProxyRuleGroupAttributeResponseBody &) = default ;
    GetEgressProxyRuleGroupAttributeResponseBody& operator=(GetEgressProxyRuleGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreRequest& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
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
          shared_ptr<string> conditionKey_ {};
          shared_ptr<string> conditionOperator_ {};
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->egressProxyRuleId_ == nullptr && this->egressProxyRuleName_ == nullptr
        && this->priority_ == nullptr; };
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


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PreRequest& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PreRequest& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


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
        shared_ptr<string> action_ {};
        shared_ptr<vector<PreRequest::Conditions>> conditions_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> egressProxyRuleId_ {};
        shared_ptr<string> egressProxyRuleName_ {};
        shared_ptr<int32_t> priority_ {};
      };

      class PreDns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreDns& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PreDns& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
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
          shared_ptr<string> conditionKey_ {};
          shared_ptr<string> conditionOperator_ {};
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->egressProxyRuleId_ == nullptr && this->egressProxyRuleName_ == nullptr
        && this->priority_ == nullptr; };
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


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PreDns& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreDns& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PreDns& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


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
        shared_ptr<string> action_ {};
        shared_ptr<vector<PreDns::Conditions>> conditions_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> egressProxyRuleId_ {};
        shared_ptr<string> egressProxyRuleName_ {};
        shared_ptr<int32_t> priority_ {};
      };

      class PostResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PostResponse& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleId, egressProxyRuleId_);
          DARABONBA_PTR_TO_JSON(EgressProxyRuleName, egressProxyRuleName_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, PostResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressProxyRuleId, egressProxyRuleId_);
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
          shared_ptr<string> conditionKey_ {};
          shared_ptr<string> conditionOperator_ {};
          shared_ptr<vector<string>> conditionValues_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->conditions_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->egressProxyRuleId_ == nullptr && this->egressProxyRuleName_ == nullptr
        && this->priority_ == nullptr; };
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


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PostResponse& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PostResponse& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressProxyRuleId Field Functions 
        bool hasEgressProxyRuleId() const { return this->egressProxyRuleId_ != nullptr;};
        void deleteEgressProxyRuleId() { this->egressProxyRuleId_ = nullptr;};
        inline string getEgressProxyRuleId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleId_, "") };
        inline PostResponse& setEgressProxyRuleId(string egressProxyRuleId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleId_, egressProxyRuleId) };


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
        shared_ptr<string> action_ {};
        shared_ptr<vector<PostResponse::Conditions>> conditions_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> egressProxyRuleId_ {};
        shared_ptr<string> egressProxyRuleName_ {};
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
      shared_ptr<vector<EgressProxyRules::PostResponse>> postResponse_ {};
      shared_ptr<vector<EgressProxyRules::PreDns>> preDns_ {};
      shared_ptr<vector<EgressProxyRules::PreRequest>> preRequest_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyRuleGroupId_ == nullptr && this->egressProxyRuleGroupName_ == nullptr && this->egressProxyRules_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


    // egressProxyRuleGroupName Field Functions 
    bool hasEgressProxyRuleGroupName() const { return this->egressProxyRuleGroupName_ != nullptr;};
    void deleteEgressProxyRuleGroupName() { this->egressProxyRuleGroupName_ = nullptr;};
    inline string getEgressProxyRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupName_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setEgressProxyRuleGroupName(string egressProxyRuleGroupName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupName_, egressProxyRuleGroupName) };


    // egressProxyRules Field Functions 
    bool hasEgressProxyRules() const { return this->egressProxyRules_ != nullptr;};
    void deleteEgressProxyRules() { this->egressProxyRules_ = nullptr;};
    inline const GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules & getEgressProxyRules() const { DARABONBA_PTR_GET_CONST(egressProxyRules_, GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules) };
    inline GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules getEgressProxyRules() { DARABONBA_PTR_GET(egressProxyRules_, GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules) };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setEgressProxyRules(const GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules & egressProxyRules) { DARABONBA_PTR_SET_VALUE(egressProxyRules_, egressProxyRules) };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setEgressProxyRules(GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules && egressProxyRules) { DARABONBA_PTR_SET_RVALUE(egressProxyRules_, egressProxyRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags>) };
    inline vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags>) };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setTags(const vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEgressProxyRuleGroupAttributeResponseBody& setTags(vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> egressProxyIpPoolId_ {};
    shared_ptr<string> egressProxyRuleGroupId_ {};
    shared_ptr<string> egressProxyRuleGroupName_ {};
    shared_ptr<GetEgressProxyRuleGroupAttributeResponseBody::EgressProxyRules> egressProxyRules_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetEgressProxyRuleGroupAttributeResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
