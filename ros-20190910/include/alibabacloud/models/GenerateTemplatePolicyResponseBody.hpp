// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplatePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplatePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyFunctions, policyFunctions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplatePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyFunctions, policyFunctions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateTemplatePolicyResponseBody() = default ;
    GenerateTemplatePolicyResponseBody(const GenerateTemplatePolicyResponseBody &) = default ;
    GenerateTemplatePolicyResponseBody(GenerateTemplatePolicyResponseBody &&) = default ;
    GenerateTemplatePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplatePolicyResponseBody() = default ;
    GenerateTemplatePolicyResponseBody& operator=(const GenerateTemplatePolicyResponseBody &) = default ;
    GenerateTemplatePolicyResponseBody& operator=(GenerateTemplatePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyFunctions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyFunctions& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionPolicyFunctions, actionPolicyFunctions_);
        DARABONBA_PTR_TO_JSON(RequirementLevel, requirementLevel_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyFunctions& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionPolicyFunctions, actionPolicyFunctions_);
        DARABONBA_PTR_FROM_JSON(RequirementLevel, requirementLevel_);
      };
      PolicyFunctions() = default ;
      PolicyFunctions(const PolicyFunctions &) = default ;
      PolicyFunctions(PolicyFunctions &&) = default ;
      PolicyFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyFunctions() = default ;
      PolicyFunctions& operator=(const PolicyFunctions &) = default ;
      PolicyFunctions& operator=(PolicyFunctions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ActionPolicyFunctions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActionPolicyFunctions& obj) { 
          DARABONBA_PTR_TO_JSON(Functions, functions_);
          DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ActionPolicyFunctions& obj) { 
          DARABONBA_PTR_FROM_JSON(Functions, functions_);
          DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        ActionPolicyFunctions() = default ;
        ActionPolicyFunctions(const ActionPolicyFunctions &) = default ;
        ActionPolicyFunctions(ActionPolicyFunctions &&) = default ;
        ActionPolicyFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActionPolicyFunctions() = default ;
        ActionPolicyFunctions& operator=(const ActionPolicyFunctions &) = default ;
        ActionPolicyFunctions& operator=(ActionPolicyFunctions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Functions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Functions& obj) { 
            DARABONBA_PTR_TO_JSON(Function, function_);
            DARABONBA_PTR_TO_JSON(OperationType, operationType_);
            DARABONBA_PTR_TO_JSON(RelatedProperties, relatedProperties_);
            DARABONBA_PTR_TO_JSON(RequirementLevel, requirementLevel_);
          };
          friend void from_json(const Darabonba::Json& j, Functions& obj) { 
            DARABONBA_PTR_FROM_JSON(Function, function_);
            DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
            DARABONBA_PTR_FROM_JSON(RelatedProperties, relatedProperties_);
            DARABONBA_PTR_FROM_JSON(RequirementLevel, requirementLevel_);
          };
          Functions() = default ;
          Functions(const Functions &) = default ;
          Functions(Functions &&) = default ;
          Functions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Functions() = default ;
          Functions& operator=(const Functions &) = default ;
          Functions& operator=(Functions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->function_ == nullptr
        && this->operationType_ == nullptr && this->relatedProperties_ == nullptr && this->requirementLevel_ == nullptr; };
          // function Field Functions 
          bool hasFunction() const { return this->function_ != nullptr;};
          void deleteFunction() { this->function_ = nullptr;};
          inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
          inline Functions& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


          // operationType Field Functions 
          bool hasOperationType() const { return this->operationType_ != nullptr;};
          void deleteOperationType() { this->operationType_ = nullptr;};
          inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
          inline Functions& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


          // relatedProperties Field Functions 
          bool hasRelatedProperties() const { return this->relatedProperties_ != nullptr;};
          void deleteRelatedProperties() { this->relatedProperties_ = nullptr;};
          inline const vector<string> & getRelatedProperties() const { DARABONBA_PTR_GET_CONST(relatedProperties_, vector<string>) };
          inline vector<string> getRelatedProperties() { DARABONBA_PTR_GET(relatedProperties_, vector<string>) };
          inline Functions& setRelatedProperties(const vector<string> & relatedProperties) { DARABONBA_PTR_SET_VALUE(relatedProperties_, relatedProperties) };
          inline Functions& setRelatedProperties(vector<string> && relatedProperties) { DARABONBA_PTR_SET_RVALUE(relatedProperties_, relatedProperties) };


          // requirementLevel Field Functions 
          bool hasRequirementLevel() const { return this->requirementLevel_ != nullptr;};
          void deleteRequirementLevel() { this->requirementLevel_ = nullptr;};
          inline string getRequirementLevel() const { DARABONBA_PTR_GET_DEFAULT(requirementLevel_, "") };
          inline Functions& setRequirementLevel(string requirementLevel) { DARABONBA_PTR_SET_VALUE(requirementLevel_, requirementLevel) };


        protected:
          shared_ptr<string> function_ {};
          shared_ptr<string> operationType_ {};
          shared_ptr<vector<string>> relatedProperties_ {};
          shared_ptr<string> requirementLevel_ {};
        };

        virtual bool empty() const override { return this->functions_ == nullptr
        && this->logicalResourceId_ == nullptr && this->resourceType_ == nullptr; };
        // functions Field Functions 
        bool hasFunctions() const { return this->functions_ != nullptr;};
        void deleteFunctions() { this->functions_ = nullptr;};
        inline const vector<ActionPolicyFunctions::Functions> & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, vector<ActionPolicyFunctions::Functions>) };
        inline vector<ActionPolicyFunctions::Functions> getFunctions() { DARABONBA_PTR_GET(functions_, vector<ActionPolicyFunctions::Functions>) };
        inline ActionPolicyFunctions& setFunctions(const vector<ActionPolicyFunctions::Functions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
        inline ActionPolicyFunctions& setFunctions(vector<ActionPolicyFunctions::Functions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


        // logicalResourceId Field Functions 
        bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
        void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
        inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
        inline ActionPolicyFunctions& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ActionPolicyFunctions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<vector<ActionPolicyFunctions::Functions>> functions_ {};
        shared_ptr<string> logicalResourceId_ {};
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionPolicyFunctions_ == nullptr && this->requirementLevel_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline PolicyFunctions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionPolicyFunctions Field Functions 
      bool hasActionPolicyFunctions() const { return this->actionPolicyFunctions_ != nullptr;};
      void deleteActionPolicyFunctions() { this->actionPolicyFunctions_ = nullptr;};
      inline const vector<PolicyFunctions::ActionPolicyFunctions> & getActionPolicyFunctions() const { DARABONBA_PTR_GET_CONST(actionPolicyFunctions_, vector<PolicyFunctions::ActionPolicyFunctions>) };
      inline vector<PolicyFunctions::ActionPolicyFunctions> getActionPolicyFunctions() { DARABONBA_PTR_GET(actionPolicyFunctions_, vector<PolicyFunctions::ActionPolicyFunctions>) };
      inline PolicyFunctions& setActionPolicyFunctions(const vector<PolicyFunctions::ActionPolicyFunctions> & actionPolicyFunctions) { DARABONBA_PTR_SET_VALUE(actionPolicyFunctions_, actionPolicyFunctions) };
      inline PolicyFunctions& setActionPolicyFunctions(vector<PolicyFunctions::ActionPolicyFunctions> && actionPolicyFunctions) { DARABONBA_PTR_SET_RVALUE(actionPolicyFunctions_, actionPolicyFunctions) };


      // requirementLevel Field Functions 
      bool hasRequirementLevel() const { return this->requirementLevel_ != nullptr;};
      void deleteRequirementLevel() { this->requirementLevel_ = nullptr;};
      inline string getRequirementLevel() const { DARABONBA_PTR_GET_DEFAULT(requirementLevel_, "") };
      inline PolicyFunctions& setRequirementLevel(string requirementLevel) { DARABONBA_PTR_SET_VALUE(requirementLevel_, requirementLevel) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<vector<PolicyFunctions::ActionPolicyFunctions>> actionPolicyFunctions_ {};
      shared_ptr<string> requirementLevel_ {};
    };

    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(Statement, statement_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(Statement, statement_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statement : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statement& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_ANY_TO_JSON(Condition, condition_);
          DARABONBA_PTR_TO_JSON(Effect, effect_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
        };
        friend void from_json(const Darabonba::Json& j, Statement& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_ANY_FROM_JSON(Condition, condition_);
          DARABONBA_PTR_FROM_JSON(Effect, effect_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
        };
        Statement() = default ;
        Statement(const Statement &) = default ;
        Statement(Statement &&) = default ;
        Statement(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statement() = default ;
        Statement& operator=(const Statement &) = default ;
        Statement& operator=(Statement &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->condition_ == nullptr && this->effect_ == nullptr && this->resource_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline const vector<string> & getAction() const { DARABONBA_PTR_GET_CONST(action_, vector<string>) };
        inline vector<string> getAction() { DARABONBA_PTR_GET(action_, vector<string>) };
        inline Statement& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
        inline Statement& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline         const Darabonba::Json & getCondition() const { DARABONBA_GET(condition_) };
        Darabonba::Json & getCondition() { DARABONBA_GET(condition_) };
        inline Statement& setCondition(const Darabonba::Json & condition) { DARABONBA_SET_VALUE(condition_, condition) };
        inline Statement& setCondition(Darabonba::Json && condition) { DARABONBA_SET_RVALUE(condition_, condition) };


        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline Statement& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline Statement& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      protected:
        // The operations that are performed on the specified resource.
        shared_ptr<vector<string>> action_ {};
        // The condition that is required for the policy to take effect.
        Darabonba::Json condition_ {};
        // The effect of the statement. Valid values:
        // 
        // *   Allow
        // *   Deny
        shared_ptr<string> effect_ {};
        // The objects that the statement covers. An asterisk (\\*) indicates all resources.
        shared_ptr<string> resource_ {};
      };

      virtual bool empty() const override { return this->statement_ == nullptr
        && this->version_ == nullptr; };
      // statement Field Functions 
      bool hasStatement() const { return this->statement_ != nullptr;};
      void deleteStatement() { this->statement_ = nullptr;};
      inline const vector<Policy::Statement> & getStatement() const { DARABONBA_PTR_GET_CONST(statement_, vector<Policy::Statement>) };
      inline vector<Policy::Statement> getStatement() { DARABONBA_PTR_GET(statement_, vector<Policy::Statement>) };
      inline Policy& setStatement(const vector<Policy::Statement> & statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };
      inline Policy& setStatement(vector<Policy::Statement> && statement) { DARABONBA_PTR_SET_RVALUE(statement_, statement) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Policy& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The statements that are contained in the policy.
      shared_ptr<vector<Policy::Statement>> statement_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->policyFunctions_ == nullptr && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GenerateTemplatePolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GenerateTemplatePolicyResponseBody::Policy) };
    inline GenerateTemplatePolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GenerateTemplatePolicyResponseBody::Policy) };
    inline GenerateTemplatePolicyResponseBody& setPolicy(const GenerateTemplatePolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GenerateTemplatePolicyResponseBody& setPolicy(GenerateTemplatePolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // policyFunctions Field Functions 
    bool hasPolicyFunctions() const { return this->policyFunctions_ != nullptr;};
    void deletePolicyFunctions() { this->policyFunctions_ = nullptr;};
    inline const vector<GenerateTemplatePolicyResponseBody::PolicyFunctions> & getPolicyFunctions() const { DARABONBA_PTR_GET_CONST(policyFunctions_, vector<GenerateTemplatePolicyResponseBody::PolicyFunctions>) };
    inline vector<GenerateTemplatePolicyResponseBody::PolicyFunctions> getPolicyFunctions() { DARABONBA_PTR_GET(policyFunctions_, vector<GenerateTemplatePolicyResponseBody::PolicyFunctions>) };
    inline GenerateTemplatePolicyResponseBody& setPolicyFunctions(const vector<GenerateTemplatePolicyResponseBody::PolicyFunctions> & policyFunctions) { DARABONBA_PTR_SET_VALUE(policyFunctions_, policyFunctions) };
    inline GenerateTemplatePolicyResponseBody& setPolicyFunctions(vector<GenerateTemplatePolicyResponseBody::PolicyFunctions> && policyFunctions) { DARABONBA_PTR_SET_RVALUE(policyFunctions_, policyFunctions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTemplatePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the policy.
    shared_ptr<GenerateTemplatePolicyResponseBody::Policy> policy_ {};
    shared_ptr<vector<GenerateTemplatePolicyResponseBody::PolicyFunctions>> policyFunctions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
