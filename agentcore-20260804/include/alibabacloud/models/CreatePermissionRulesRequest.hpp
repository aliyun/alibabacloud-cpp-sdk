// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreatePermissionRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreatePermissionRulesRequest() = default ;
    CreatePermissionRulesRequest(const CreatePermissionRulesRequest &) = default ;
    CreatePermissionRulesRequest(CreatePermissionRulesRequest &&) = default ;
    CreatePermissionRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionRulesRequest() = default ;
    CreatePermissionRulesRequest& operator=(const CreatePermissionRulesRequest &) = default ;
    CreatePermissionRulesRequest& operator=(CreatePermissionRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(rules, rules_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(effect, effect_);
          DARABONBA_PTR_TO_JSON(enforcementMode, enforcementMode_);
          DARABONBA_PTR_TO_JSON(principalId, principalId_);
          DARABONBA_PTR_TO_JSON(principalType, principalType_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(targetScope, targetScope_);
          DARABONBA_PTR_TO_JSON(targets, targets_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(effect, effect_);
          DARABONBA_PTR_FROM_JSON(enforcementMode, enforcementMode_);
          DARABONBA_PTR_FROM_JSON(principalId, principalId_);
          DARABONBA_PTR_FROM_JSON(principalType, principalType_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(targetScope, targetScope_);
          DARABONBA_PTR_FROM_JSON(targets, targets_);
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
        virtual bool empty() const override { return this->effect_ == nullptr
        && this->enforcementMode_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->source_ == nullptr && this->targetScope_ == nullptr && this->targets_ == nullptr; };
        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline Rules& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // enforcementMode Field Functions 
        bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
        void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
        inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
        inline Rules& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline Rules& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline Rules& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Rules& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Rules& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Rules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // targetScope Field Functions 
        bool hasTargetScope() const { return this->targetScope_ != nullptr;};
        void deleteTargetScope() { this->targetScope_ = nullptr;};
        inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
        inline Rules& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


        // targets Field Functions 
        bool hasTargets() const { return this->targets_ != nullptr;};
        void deleteTargets() { this->targets_ = nullptr;};
        inline const vector<string> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
        inline vector<string> getTargets() { DARABONBA_PTR_GET(targets_, vector<string>) };
        inline Rules& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
        inline Rules& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      protected:
        // The authorization effect.
        // 
        // This parameter is required.
        shared_ptr<string> effect_ {};
        // The rule enforcement mode.
        // 
        // This parameter is required.
        shared_ptr<string> enforcementMode_ {};
        // The principal ID.
        // 
        // This parameter is required.
        shared_ptr<string> principalId_ {};
        // The principal type.
        // 
        // This parameter is required.
        shared_ptr<string> principalType_ {};
        // The resource ID.
        // 
        // This parameter is required.
        shared_ptr<string> resourceId_ {};
        // The resource type.
        // 
        // This parameter is required.
        shared_ptr<string> resourceType_ {};
        // The rule source.
        // 
        // This parameter is required.
        shared_ptr<string> source_ {};
        // The target scope.
        // 
        // This parameter is required.
        shared_ptr<string> targetScope_ {};
        // The list of targets for the rule.
        shared_ptr<vector<string>> targets_ {};
      };

      virtual bool empty() const override { return this->rules_ == nullptr; };
      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Body::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Body::Rules>) };
      inline vector<Body::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Body::Rules>) };
      inline Body& setRules(const vector<Body::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Body& setRules(vector<Body::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The list of permission rules to create.
      // 
      // This parameter is required.
      shared_ptr<vector<Body::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreatePermissionRulesRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreatePermissionRulesRequest::Body) };
    inline CreatePermissionRulesRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreatePermissionRulesRequest::Body) };
    inline CreatePermissionRulesRequest& setBody(const CreatePermissionRulesRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePermissionRulesRequest& setBody(CreatePermissionRulesRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePermissionRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The request body for creating permission rules.
    shared_ptr<CreatePermissionRulesRequest::Body> body_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
