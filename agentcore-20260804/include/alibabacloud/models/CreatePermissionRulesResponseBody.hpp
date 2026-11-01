// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONRULESRESPONSEBODY_HPP_
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
  class CreatePermissionRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreatePermissionRulesResponseBody() = default ;
    CreatePermissionRulesResponseBody(const CreatePermissionRulesResponseBody &) = default ;
    CreatePermissionRulesResponseBody(CreatePermissionRulesResponseBody &&) = default ;
    CreatePermissionRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionRulesResponseBody() = default ;
    CreatePermissionRulesResponseBody& operator=(const CreatePermissionRulesResponseBody &) = default ;
    CreatePermissionRulesResponseBody& operator=(CreatePermissionRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(rules, rules_);
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
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(effect, effect_);
          DARABONBA_PTR_TO_JSON(enforcementMode, enforcementMode_);
          DARABONBA_PTR_TO_JSON(permissionRuleId, permissionRuleId_);
          DARABONBA_PTR_TO_JSON(principalId, principalId_);
          DARABONBA_PTR_TO_JSON(principalName, principalName_);
          DARABONBA_PTR_TO_JSON(principalType, principalType_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(sourceDetail, sourceDetail_);
          DARABONBA_PTR_TO_JSON(targetScope, targetScope_);
          DARABONBA_PTR_TO_JSON(targets, targets_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(effect, effect_);
          DARABONBA_PTR_FROM_JSON(enforcementMode, enforcementMode_);
          DARABONBA_PTR_FROM_JSON(permissionRuleId, permissionRuleId_);
          DARABONBA_PTR_FROM_JSON(principalId, principalId_);
          DARABONBA_PTR_FROM_JSON(principalName, principalName_);
          DARABONBA_PTR_FROM_JSON(principalType, principalType_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(sourceDetail, sourceDetail_);
          DARABONBA_PTR_FROM_JSON(targetScope, targetScope_);
          DARABONBA_PTR_FROM_JSON(targets, targets_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->effect_ == nullptr && this->enforcementMode_ == nullptr && this->permissionRuleId_ == nullptr && this->principalId_ == nullptr && this->principalName_ == nullptr
        && this->principalType_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->source_ == nullptr && this->sourceDetail_ == nullptr
        && this->targetScope_ == nullptr && this->targets_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Rules& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


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


        // permissionRuleId Field Functions 
        bool hasPermissionRuleId() const { return this->permissionRuleId_ != nullptr;};
        void deletePermissionRuleId() { this->permissionRuleId_ = nullptr;};
        inline string getPermissionRuleId() const { DARABONBA_PTR_GET_DEFAULT(permissionRuleId_, "") };
        inline Rules& setPermissionRuleId(string permissionRuleId) { DARABONBA_PTR_SET_VALUE(permissionRuleId_, permissionRuleId) };


        // principalId Field Functions 
        bool hasPrincipalId() const { return this->principalId_ != nullptr;};
        void deletePrincipalId() { this->principalId_ = nullptr;};
        inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
        inline Rules& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


        // principalName Field Functions 
        bool hasPrincipalName() const { return this->principalName_ != nullptr;};
        void deletePrincipalName() { this->principalName_ = nullptr;};
        inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
        inline Rules& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


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


        // sourceDetail Field Functions 
        bool hasSourceDetail() const { return this->sourceDetail_ != nullptr;};
        void deleteSourceDetail() { this->sourceDetail_ = nullptr;};
        inline string getSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(sourceDetail_, "") };
        inline Rules& setSourceDetail(string sourceDetail) { DARABONBA_PTR_SET_VALUE(sourceDetail_, sourceDetail) };


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


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Rules& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The creation time in RFC 3339 format.
        shared_ptr<string> createdAt_ {};
        // The authorization effect.
        shared_ptr<string> effect_ {};
        // The rule enforcement mode.
        shared_ptr<string> enforcementMode_ {};
        // The permission rule ID.
        shared_ptr<string> permissionRuleId_ {};
        // The principal ID.
        shared_ptr<string> principalId_ {};
        // The principal name.
        shared_ptr<string> principalName_ {};
        // The principal type.
        shared_ptr<string> principalType_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The rule source.
        shared_ptr<string> source_ {};
        // The rule source details.
        shared_ptr<string> sourceDetail_ {};
        // The target scope.
        shared_ptr<string> targetScope_ {};
        // The list of targets for the rule.
        shared_ptr<vector<string>> targets_ {};
        // The update time in RFC 3339 format.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->rules_ == nullptr; };
      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The list of created permission rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePermissionRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePermissionRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePermissionRulesResponseBody::Data) };
    inline CreatePermissionRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePermissionRulesResponseBody::Data) };
    inline CreatePermissionRulesResponseBody& setData(const CreatePermissionRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePermissionRulesResponseBody& setData(CreatePermissionRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreatePermissionRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePermissionRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePermissionRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreatePermissionRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The creation result.
    shared_ptr<CreatePermissionRulesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request processing result message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
