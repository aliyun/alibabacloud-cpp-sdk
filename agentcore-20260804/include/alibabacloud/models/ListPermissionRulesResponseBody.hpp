// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONRULESRESPONSEBODY_HPP_
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
  class ListPermissionRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPermissionRulesResponseBody() = default ;
    ListPermissionRulesResponseBody(const ListPermissionRulesResponseBody &) = default ;
    ListPermissionRulesResponseBody(ListPermissionRulesResponseBody &&) = default ;
    ListPermissionRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionRulesResponseBody() = default ;
    ListPermissionRulesResponseBody& operator=(const ListPermissionRulesResponseBody &) = default ;
    ListPermissionRulesResponseBody& operator=(ListPermissionRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
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
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // effect Field Functions 
      bool hasEffect() const { return this->effect_ != nullptr;};
      void deleteEffect() { this->effect_ = nullptr;};
      inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
      inline Items& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


      // enforcementMode Field Functions 
      bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
      void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
      inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
      inline Items& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


      // permissionRuleId Field Functions 
      bool hasPermissionRuleId() const { return this->permissionRuleId_ != nullptr;};
      void deletePermissionRuleId() { this->permissionRuleId_ = nullptr;};
      inline string getPermissionRuleId() const { DARABONBA_PTR_GET_DEFAULT(permissionRuleId_, "") };
      inline Items& setPermissionRuleId(string permissionRuleId) { DARABONBA_PTR_SET_VALUE(permissionRuleId_, permissionRuleId) };


      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Items& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Items& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Items& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Items& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Items& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceDetail Field Functions 
      bool hasSourceDetail() const { return this->sourceDetail_ != nullptr;};
      void deleteSourceDetail() { this->sourceDetail_ = nullptr;};
      inline string getSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(sourceDetail_, "") };
      inline Items& setSourceDetail(string sourceDetail) { DARABONBA_PTR_SET_VALUE(sourceDetail_, sourceDetail) };


      // targetScope Field Functions 
      bool hasTargetScope() const { return this->targetScope_ != nullptr;};
      void deleteTargetScope() { this->targetScope_ = nullptr;};
      inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
      inline Items& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<string> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
      inline vector<string> getTargets() { DARABONBA_PTR_GET(targets_, vector<string>) };
      inline Items& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Items& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


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
      // The list of targets to which the rule applies.
      shared_ptr<vector<string>> targets_ {};
      // The update time in RFC 3339 format.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPermissionRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPermissionRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListPermissionRulesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListPermissionRulesResponseBody::Items>) };
    inline vector<ListPermissionRulesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListPermissionRulesResponseBody::Items>) };
    inline ListPermissionRulesResponseBody& setItems(const vector<ListPermissionRulesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListPermissionRulesResponseBody& setItems(vector<ListPermissionRulesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPermissionRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPermissionRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPermissionRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPermissionRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPermissionRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPermissionRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of permission rules.
    shared_ptr<vector<ListPermissionRulesResponseBody::Items>> items_ {};
    // The maximum number of entries returned in the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The message about the request processing result.
    shared_ptr<string> message_ {};
    // The token for the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of rules that meet the conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
