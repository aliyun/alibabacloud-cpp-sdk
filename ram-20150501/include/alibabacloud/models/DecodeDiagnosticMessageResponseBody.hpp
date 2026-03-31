// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECODEDIAGNOSTICMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DECODEDIAGNOSTICMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DecodeDiagnosticMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecodeDiagnosticMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DecodedDiagnosticMessage, decodedDiagnosticMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DecodeDiagnosticMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DecodedDiagnosticMessage, decodedDiagnosticMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DecodeDiagnosticMessageResponseBody() = default ;
    DecodeDiagnosticMessageResponseBody(const DecodeDiagnosticMessageResponseBody &) = default ;
    DecodeDiagnosticMessageResponseBody(DecodeDiagnosticMessageResponseBody &&) = default ;
    DecodeDiagnosticMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecodeDiagnosticMessageResponseBody() = default ;
    DecodeDiagnosticMessageResponseBody& operator=(const DecodeDiagnosticMessageResponseBody &) = default ;
    DecodeDiagnosticMessageResponseBody& operator=(DecodeDiagnosticMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DecodedDiagnosticMessage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DecodedDiagnosticMessage& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthConditions, authConditions_);
        DARABONBA_PTR_TO_JSON(AuthPrincipal, authPrincipal_);
        DARABONBA_PTR_TO_JSON(AuthResource, authResource_);
        DARABONBA_PTR_TO_JSON(ExplicitDeny, explicitDeny_);
        DARABONBA_PTR_TO_JSON(MatchedPolicies, matchedPolicies_);
        DARABONBA_PTR_TO_JSON(NoPermissionPolicyType, noPermissionPolicyType_);
      };
      friend void from_json(const Darabonba::Json& j, DecodedDiagnosticMessage& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthConditions, authConditions_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipal, authPrincipal_);
        DARABONBA_PTR_FROM_JSON(AuthResource, authResource_);
        DARABONBA_PTR_FROM_JSON(ExplicitDeny, explicitDeny_);
        DARABONBA_PTR_FROM_JSON(MatchedPolicies, matchedPolicies_);
        DARABONBA_PTR_FROM_JSON(NoPermissionPolicyType, noPermissionPolicyType_);
      };
      DecodedDiagnosticMessage() = default ;
      DecodedDiagnosticMessage(const DecodedDiagnosticMessage &) = default ;
      DecodedDiagnosticMessage(DecodedDiagnosticMessage &&) = default ;
      DecodedDiagnosticMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DecodedDiagnosticMessage() = default ;
      DecodedDiagnosticMessage& operator=(const DecodedDiagnosticMessage &) = default ;
      DecodedDiagnosticMessage& operator=(DecodedDiagnosticMessage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchedPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchedPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(AttachedEntityType, attachedEntityType_);
          DARABONBA_PTR_TO_JSON(AttachedScope, attachedScope_);
          DARABONBA_PTR_TO_JSON(Effect, effect_);
          DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
        };
        friend void from_json(const Darabonba::Json& j, MatchedPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachedEntityType, attachedEntityType_);
          DARABONBA_PTR_FROM_JSON(AttachedScope, attachedScope_);
          DARABONBA_PTR_FROM_JSON(Effect, effect_);
          DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
        };
        MatchedPolicies() = default ;
        MatchedPolicies(const MatchedPolicies &) = default ;
        MatchedPolicies(MatchedPolicies &&) = default ;
        MatchedPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchedPolicies() = default ;
        MatchedPolicies& operator=(const MatchedPolicies &) = default ;
        MatchedPolicies& operator=(MatchedPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachedEntityType_ == nullptr
        && this->attachedScope_ == nullptr && this->effect_ == nullptr && this->policyIdentifier_ == nullptr && this->policyType_ == nullptr && this->policyVersion_ == nullptr; };
        // attachedEntityType Field Functions 
        bool hasAttachedEntityType() const { return this->attachedEntityType_ != nullptr;};
        void deleteAttachedEntityType() { this->attachedEntityType_ = nullptr;};
        inline string getAttachedEntityType() const { DARABONBA_PTR_GET_DEFAULT(attachedEntityType_, "") };
        inline MatchedPolicies& setAttachedEntityType(string attachedEntityType) { DARABONBA_PTR_SET_VALUE(attachedEntityType_, attachedEntityType) };


        // attachedScope Field Functions 
        bool hasAttachedScope() const { return this->attachedScope_ != nullptr;};
        void deleteAttachedScope() { this->attachedScope_ = nullptr;};
        inline string getAttachedScope() const { DARABONBA_PTR_GET_DEFAULT(attachedScope_, "") };
        inline MatchedPolicies& setAttachedScope(string attachedScope) { DARABONBA_PTR_SET_VALUE(attachedScope_, attachedScope) };


        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline MatchedPolicies& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // policyIdentifier Field Functions 
        bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
        void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
        inline string getPolicyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
        inline MatchedPolicies& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline MatchedPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // policyVersion Field Functions 
        bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
        void deletePolicyVersion() { this->policyVersion_ = nullptr;};
        inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
        inline MatchedPolicies& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


      protected:
        // The type of the entity to which the policy is attached.
        // 
        // Valid values:
        // 
        // *   RamUser: RAM user
        // *   RamRole: RAM role
        // *   ResourceDirectoryTarget: entity in a resource directory
        // *   RamGroup: RAM user group
        shared_ptr<string> attachedEntityType_ {};
        // The authorization scope of the policy.
        // 
        // Valid values:
        // 
        // *   Account: Alibaba Cloud account
        // *   Folder: folder in the resource directory
        // *   ResourceGroup: resource group
        shared_ptr<string> attachedScope_ {};
        // The effect of the policy.
        // 
        // Valid values:
        // 
        // *   Deny
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   Allow
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> effect_ {};
        // The identifier of the policy.
        // 
        // *   Control policy: the ID of the control policy
        // *   RAM policy: the name of the policy
        shared_ptr<string> policyIdentifier_ {};
        // The type of the policy.
        // 
        // Valid values:
        // *   Custom: custom policy
        // *   System: system policy
        shared_ptr<string> policyType_ {};
        // The version number of the policy.
        // 
        // > Only custom policies have version numbers.
        shared_ptr<string> policyVersion_ {};
      };

      class AuthPrincipal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthPrincipal& obj) { 
          DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
          DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
          DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        };
        friend void from_json(const Darabonba::Json& j, AuthPrincipal& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
          DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
          DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        };
        AuthPrincipal() = default ;
        AuthPrincipal(const AuthPrincipal &) = default ;
        AuthPrincipal(AuthPrincipal &&) = default ;
        AuthPrincipal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthPrincipal() = default ;
        AuthPrincipal& operator=(const AuthPrincipal &) = default ;
        AuthPrincipal& operator=(AuthPrincipal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authPrincipalDisplayName_ == nullptr
        && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr; };
        // authPrincipalDisplayName Field Functions 
        bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
        void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
        inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
        inline AuthPrincipal& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


        // authPrincipalOwnerId Field Functions 
        bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
        void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
        inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
        inline AuthPrincipal& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


        // authPrincipalType Field Functions 
        bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
        void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
        inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
        inline AuthPrincipal& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      protected:
        // The identity.
        // 
        // *   If the operator is a RAM user, the ID of the user is displayed.
        // *   If the operator is a RAM role, the name and session name of the role are displayed. Example: RoleName:RoleSessionName.
        // *   If the operator is an SSO federated identity, the type and name of the identity provider (IdP) are displayed. Example: saml-provider/AzureAD.
        shared_ptr<string> authPrincipalDisplayName_ {};
        // The ID of the Alibaba Cloud account to which the identity belongs.
        shared_ptr<string> authPrincipalOwnerId_ {};
        // The identity type that is used for authentication in the request.
        // 
        // Valid values:
        // 
        // *   SubUser: RAM user
        // *   AssumedRoleUser: RAM role
        // *   Federated: SSO federated identity
        shared_ptr<string> authPrincipalType_ {};
      };

      class AuthConditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthConditions& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_TO_JSON(ConditionValues, conditionValues_);
        };
        friend void from_json(const Darabonba::Json& j, AuthConditions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
          DARABONBA_PTR_FROM_JSON(ConditionValues, conditionValues_);
        };
        AuthConditions() = default ;
        AuthConditions(const AuthConditions &) = default ;
        AuthConditions(AuthConditions &&) = default ;
        AuthConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthConditions() = default ;
        AuthConditions& operator=(const AuthConditions &) = default ;
        AuthConditions& operator=(AuthConditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditionKey_ == nullptr
        && this->conditionValues_ == nullptr; };
        // conditionKey Field Functions 
        bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
        void deleteConditionKey() { this->conditionKey_ = nullptr;};
        inline string getConditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
        inline AuthConditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


        // conditionValues Field Functions 
        bool hasConditionValues() const { return this->conditionValues_ != nullptr;};
        void deleteConditionValues() { this->conditionValues_ = nullptr;};
        inline const vector<string> & getConditionValues() const { DARABONBA_PTR_GET_CONST(conditionValues_, vector<string>) };
        inline vector<string> getConditionValues() { DARABONBA_PTR_GET(conditionValues_, vector<string>) };
        inline AuthConditions& setConditionValues(const vector<string> & conditionValues) { DARABONBA_PTR_SET_VALUE(conditionValues_, conditionValues) };
        inline AuthConditions& setConditionValues(vector<string> && conditionValues) { DARABONBA_PTR_SET_RVALUE(conditionValues_, conditionValues) };


      protected:
        // The key of the condition.
        shared_ptr<string> conditionKey_ {};
        // The values that correspond to the key.
        shared_ptr<vector<string>> conditionValues_ {};
      };

      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authConditions_ == nullptr && this->authPrincipal_ == nullptr && this->authResource_ == nullptr && this->explicitDeny_ == nullptr && this->matchedPolicies_ == nullptr
        && this->noPermissionPolicyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline DecodedDiagnosticMessage& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authConditions Field Functions 
      bool hasAuthConditions() const { return this->authConditions_ != nullptr;};
      void deleteAuthConditions() { this->authConditions_ = nullptr;};
      inline const vector<DecodedDiagnosticMessage::AuthConditions> & getAuthConditions() const { DARABONBA_PTR_GET_CONST(authConditions_, vector<DecodedDiagnosticMessage::AuthConditions>) };
      inline vector<DecodedDiagnosticMessage::AuthConditions> getAuthConditions() { DARABONBA_PTR_GET(authConditions_, vector<DecodedDiagnosticMessage::AuthConditions>) };
      inline DecodedDiagnosticMessage& setAuthConditions(const vector<DecodedDiagnosticMessage::AuthConditions> & authConditions) { DARABONBA_PTR_SET_VALUE(authConditions_, authConditions) };
      inline DecodedDiagnosticMessage& setAuthConditions(vector<DecodedDiagnosticMessage::AuthConditions> && authConditions) { DARABONBA_PTR_SET_RVALUE(authConditions_, authConditions) };


      // authPrincipal Field Functions 
      bool hasAuthPrincipal() const { return this->authPrincipal_ != nullptr;};
      void deleteAuthPrincipal() { this->authPrincipal_ = nullptr;};
      inline const DecodedDiagnosticMessage::AuthPrincipal & getAuthPrincipal() const { DARABONBA_PTR_GET_CONST(authPrincipal_, DecodedDiagnosticMessage::AuthPrincipal) };
      inline DecodedDiagnosticMessage::AuthPrincipal getAuthPrincipal() { DARABONBA_PTR_GET(authPrincipal_, DecodedDiagnosticMessage::AuthPrincipal) };
      inline DecodedDiagnosticMessage& setAuthPrincipal(const DecodedDiagnosticMessage::AuthPrincipal & authPrincipal) { DARABONBA_PTR_SET_VALUE(authPrincipal_, authPrincipal) };
      inline DecodedDiagnosticMessage& setAuthPrincipal(DecodedDiagnosticMessage::AuthPrincipal && authPrincipal) { DARABONBA_PTR_SET_RVALUE(authPrincipal_, authPrincipal) };


      // authResource Field Functions 
      bool hasAuthResource() const { return this->authResource_ != nullptr;};
      void deleteAuthResource() { this->authResource_ = nullptr;};
      inline string getAuthResource() const { DARABONBA_PTR_GET_DEFAULT(authResource_, "") };
      inline DecodedDiagnosticMessage& setAuthResource(string authResource) { DARABONBA_PTR_SET_VALUE(authResource_, authResource) };


      // explicitDeny Field Functions 
      bool hasExplicitDeny() const { return this->explicitDeny_ != nullptr;};
      void deleteExplicitDeny() { this->explicitDeny_ = nullptr;};
      inline bool getExplicitDeny() const { DARABONBA_PTR_GET_DEFAULT(explicitDeny_, false) };
      inline DecodedDiagnosticMessage& setExplicitDeny(bool explicitDeny) { DARABONBA_PTR_SET_VALUE(explicitDeny_, explicitDeny) };


      // matchedPolicies Field Functions 
      bool hasMatchedPolicies() const { return this->matchedPolicies_ != nullptr;};
      void deleteMatchedPolicies() { this->matchedPolicies_ = nullptr;};
      inline const vector<DecodedDiagnosticMessage::MatchedPolicies> & getMatchedPolicies() const { DARABONBA_PTR_GET_CONST(matchedPolicies_, vector<DecodedDiagnosticMessage::MatchedPolicies>) };
      inline vector<DecodedDiagnosticMessage::MatchedPolicies> getMatchedPolicies() { DARABONBA_PTR_GET(matchedPolicies_, vector<DecodedDiagnosticMessage::MatchedPolicies>) };
      inline DecodedDiagnosticMessage& setMatchedPolicies(const vector<DecodedDiagnosticMessage::MatchedPolicies> & matchedPolicies) { DARABONBA_PTR_SET_VALUE(matchedPolicies_, matchedPolicies) };
      inline DecodedDiagnosticMessage& setMatchedPolicies(vector<DecodedDiagnosticMessage::MatchedPolicies> && matchedPolicies) { DARABONBA_PTR_SET_RVALUE(matchedPolicies_, matchedPolicies) };


      // noPermissionPolicyType Field Functions 
      bool hasNoPermissionPolicyType() const { return this->noPermissionPolicyType_ != nullptr;};
      void deleteNoPermissionPolicyType() { this->noPermissionPolicyType_ = nullptr;};
      inline string getNoPermissionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionPolicyType_, "") };
      inline DecodedDiagnosticMessage& setNoPermissionPolicyType(string noPermissionPolicyType) { DARABONBA_PTR_SET_VALUE(noPermissionPolicyType_, noPermissionPolicyType) };


    protected:
      // The operation that is used for authentication in the request.
      shared_ptr<string> authAction_ {};
      // The conditions that are used for authentication in the request.
      shared_ptr<vector<DecodedDiagnosticMessage::AuthConditions>> authConditions_ {};
      // The operator that is used for authentication in the request.
      shared_ptr<DecodedDiagnosticMessage::AuthPrincipal> authPrincipal_ {};
      // The resource that is used for authentication in the request.
      shared_ptr<string> authResource_ {};
      // Indicates whether the access denied error is caused by an explicit deny.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> explicitDeny_ {};
      // The policies that are matched.
      shared_ptr<vector<DecodedDiagnosticMessage::MatchedPolicies>> matchedPolicies_ {};
      // The type of the policy that causes the access denied error.
      // 
      // Valid values:
      // 
      // *   AssumeRolePolicy: role-specific trust policy
      // *   ControlPolicy: control policy
      // *   AccountLevelIdentityBasedPolicy: identity-based policy at the account level
      // *   ResourceGroupLevelIdentityBasedPolicy: identity-based policy at the resource group level
      // *   SessionPolicy: session policy
      shared_ptr<string> noPermissionPolicyType_ {};
    };

    virtual bool empty() const override { return this->decodedDiagnosticMessage_ == nullptr
        && this->requestId_ == nullptr; };
    // decodedDiagnosticMessage Field Functions 
    bool hasDecodedDiagnosticMessage() const { return this->decodedDiagnosticMessage_ != nullptr;};
    void deleteDecodedDiagnosticMessage() { this->decodedDiagnosticMessage_ = nullptr;};
    inline const DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage & getDecodedDiagnosticMessage() const { DARABONBA_PTR_GET_CONST(decodedDiagnosticMessage_, DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage) };
    inline DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage getDecodedDiagnosticMessage() { DARABONBA_PTR_GET(decodedDiagnosticMessage_, DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage) };
    inline DecodeDiagnosticMessageResponseBody& setDecodedDiagnosticMessage(const DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage & decodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(decodedDiagnosticMessage_, decodedDiagnosticMessage) };
    inline DecodeDiagnosticMessageResponseBody& setDecodedDiagnosticMessage(DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage && decodedDiagnosticMessage) { DARABONBA_PTR_SET_RVALUE(decodedDiagnosticMessage_, decodedDiagnosticMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DecodeDiagnosticMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The decoded diagnostic information.
    shared_ptr<DecodeDiagnosticMessageResponseBody::DecodedDiagnosticMessage> decodedDiagnosticMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
