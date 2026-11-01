// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListPermissionRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(principalId, principalId_);
      DARABONBA_PTR_TO_JSON(principalName, principalName_);
      DARABONBA_PTR_TO_JSON(principalType, principalType_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(principalId, principalId_);
      DARABONBA_PTR_FROM_JSON(principalName, principalName_);
      DARABONBA_PTR_FROM_JSON(principalType, principalType_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    ListPermissionRulesRequest() = default ;
    ListPermissionRulesRequest(const ListPermissionRulesRequest &) = default ;
    ListPermissionRulesRequest(ListPermissionRulesRequest &&) = default ;
    ListPermissionRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionRulesRequest() = default ;
    ListPermissionRulesRequest& operator=(const ListPermissionRulesRequest &) = default ;
    ListPermissionRulesRequest& operator=(ListPermissionRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->principalId_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->source_ == nullptr && this->target_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPermissionRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPermissionRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline ListPermissionRulesRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline ListPermissionRulesRequest& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListPermissionRulesRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListPermissionRulesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPermissionRulesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPermissionRulesRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListPermissionRulesRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The principal ID.
    shared_ptr<string> principalId_ {};
    // The principal name.
    shared_ptr<string> principalName_ {};
    // The principal type.
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
    shared_ptr<string> source_ {};
    // The rule target.
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
