// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESERVERSCOPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESERVERSCOPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListResourceServerScopesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceServerScopesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeType, resourceServerScopeType_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceServerScopesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeName, resourceServerScopeName_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeType, resourceServerScopeType_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
    };
    ListResourceServerScopesRequest() = default ;
    ListResourceServerScopesRequest(const ListResourceServerScopesRequest &) = default ;
    ListResourceServerScopesRequest(ListResourceServerScopesRequest &&) = default ;
    ListResourceServerScopesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceServerScopesRequest() = default ;
    ListResourceServerScopesRequest& operator=(const ListResourceServerScopesRequest &) = default ;
    ListResourceServerScopesRequest& operator=(ListResourceServerScopesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationType_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr
        && this->resourceServerScopeIds_ == nullptr && this->resourceServerScopeName_ == nullptr && this->resourceServerScopeType_ == nullptr && this->resourceServerScopeValue_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListResourceServerScopesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline ListResourceServerScopesRequest& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListResourceServerScopesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceServerScopesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceServerScopesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListResourceServerScopesRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // resourceServerScopeIds Field Functions 
    bool hasResourceServerScopeIds() const { return this->resourceServerScopeIds_ != nullptr;};
    void deleteResourceServerScopeIds() { this->resourceServerScopeIds_ = nullptr;};
    inline const vector<string> & getResourceServerScopeIds() const { DARABONBA_PTR_GET_CONST(resourceServerScopeIds_, vector<string>) };
    inline vector<string> getResourceServerScopeIds() { DARABONBA_PTR_GET(resourceServerScopeIds_, vector<string>) };
    inline ListResourceServerScopesRequest& setResourceServerScopeIds(const vector<string> & resourceServerScopeIds) { DARABONBA_PTR_SET_VALUE(resourceServerScopeIds_, resourceServerScopeIds) };
    inline ListResourceServerScopesRequest& setResourceServerScopeIds(vector<string> && resourceServerScopeIds) { DARABONBA_PTR_SET_RVALUE(resourceServerScopeIds_, resourceServerScopeIds) };


    // resourceServerScopeName Field Functions 
    bool hasResourceServerScopeName() const { return this->resourceServerScopeName_ != nullptr;};
    void deleteResourceServerScopeName() { this->resourceServerScopeName_ = nullptr;};
    inline string getResourceServerScopeName() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeName_, "") };
    inline ListResourceServerScopesRequest& setResourceServerScopeName(string resourceServerScopeName) { DARABONBA_PTR_SET_VALUE(resourceServerScopeName_, resourceServerScopeName) };


    // resourceServerScopeType Field Functions 
    bool hasResourceServerScopeType() const { return this->resourceServerScopeType_ != nullptr;};
    void deleteResourceServerScopeType() { this->resourceServerScopeType_ = nullptr;};
    inline string getResourceServerScopeType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeType_, "") };
    inline ListResourceServerScopesRequest& setResourceServerScopeType(string resourceServerScopeType) { DARABONBA_PTR_SET_VALUE(resourceServerScopeType_, resourceServerScopeType) };


    // resourceServerScopeValue Field Functions 
    bool hasResourceServerScopeValue() const { return this->resourceServerScopeValue_ != nullptr;};
    void deleteResourceServerScopeValue() { this->resourceServerScopeValue_ = nullptr;};
    inline string getResourceServerScopeValue() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeValue_, "") };
    inline ListResourceServerScopesRequest& setResourceServerScopeValue(string resourceServerScopeValue) { DARABONBA_PTR_SET_VALUE(resourceServerScopeValue_, resourceServerScopeValue) };


  protected:
    // Application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // Authorization type.
    shared_ptr<string> authorizationType_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Number of rows per page in paginated queries.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next page query. Set this to the NextToken value returned by the previous API call. Leave empty for the first query.
    shared_ptr<string> nextToken_ {};
    // Token for the previous page query. Set this to the PreviousToken value returned by the previous API call.
    shared_ptr<string> previousToken_ {};
    // List of Scope permission IDs.
    shared_ptr<vector<string>> resourceServerScopeIds_ {};
    // Scope permission name.
    shared_ptr<string> resourceServerScopeName_ {};
    // Scope permission type.
    shared_ptr<string> resourceServerScopeType_ {};
    // Scope permission value.
    shared_ptr<string> resourceServerScopeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
