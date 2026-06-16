// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESERVERSCOPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESERVERSCOPESRESPONSEBODY_HPP_
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
  class ListResourceServerScopesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceServerScopesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopes, resourceServerScopes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceServerScopesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopes, resourceServerScopes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceServerScopesResponseBody() = default ;
    ListResourceServerScopesResponseBody(const ListResourceServerScopesResponseBody &) = default ;
    ListResourceServerScopesResponseBody(ListResourceServerScopesResponseBody &&) = default ;
    ListResourceServerScopesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceServerScopesResponseBody() = default ;
    ListResourceServerScopesResponseBody& operator=(const ListResourceServerScopesResponseBody &) = default ;
    ListResourceServerScopesResponseBody& operator=(ListResourceServerScopesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceServerScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceServerScopes& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeType, resourceServerScopeType_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceServerScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeId, resourceServerScopeId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeName, resourceServerScopeName_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeType, resourceServerScopeType_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
      };
      ResourceServerScopes() = default ;
      ResourceServerScopes(const ResourceServerScopes &) = default ;
      ResourceServerScopes(ResourceServerScopes &&) = default ;
      ResourceServerScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceServerScopes() = default ;
      ResourceServerScopes& operator=(const ResourceServerScopes &) = default ;
      ResourceServerScopes& operator=(ResourceServerScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationType_ == nullptr && this->instanceId_ == nullptr && this->resourceServerScopeId_ == nullptr && this->resourceServerScopeName_ == nullptr && this->resourceServerScopeType_ == nullptr
        && this->resourceServerScopeValue_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ResourceServerScopes& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // authorizationType Field Functions 
      bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
      void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
      inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
      inline ResourceServerScopes& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceServerScopes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceServerScopeId Field Functions 
      bool hasResourceServerScopeId() const { return this->resourceServerScopeId_ != nullptr;};
      void deleteResourceServerScopeId() { this->resourceServerScopeId_ = nullptr;};
      inline string getResourceServerScopeId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeId_, "") };
      inline ResourceServerScopes& setResourceServerScopeId(string resourceServerScopeId) { DARABONBA_PTR_SET_VALUE(resourceServerScopeId_, resourceServerScopeId) };


      // resourceServerScopeName Field Functions 
      bool hasResourceServerScopeName() const { return this->resourceServerScopeName_ != nullptr;};
      void deleteResourceServerScopeName() { this->resourceServerScopeName_ = nullptr;};
      inline string getResourceServerScopeName() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeName_, "") };
      inline ResourceServerScopes& setResourceServerScopeName(string resourceServerScopeName) { DARABONBA_PTR_SET_VALUE(resourceServerScopeName_, resourceServerScopeName) };


      // resourceServerScopeType Field Functions 
      bool hasResourceServerScopeType() const { return this->resourceServerScopeType_ != nullptr;};
      void deleteResourceServerScopeType() { this->resourceServerScopeType_ = nullptr;};
      inline string getResourceServerScopeType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeType_, "") };
      inline ResourceServerScopes& setResourceServerScopeType(string resourceServerScopeType) { DARABONBA_PTR_SET_VALUE(resourceServerScopeType_, resourceServerScopeType) };


      // resourceServerScopeValue Field Functions 
      bool hasResourceServerScopeValue() const { return this->resourceServerScopeValue_ != nullptr;};
      void deleteResourceServerScopeValue() { this->resourceServerScopeValue_ = nullptr;};
      inline string getResourceServerScopeValue() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeValue_, "") };
      inline ResourceServerScopes& setResourceServerScopeValue(string resourceServerScopeValue) { DARABONBA_PTR_SET_VALUE(resourceServerScopeValue_, resourceServerScopeValue) };


    protected:
      // Application ID.
      shared_ptr<string> applicationId_ {};
      // Authorization type.
      shared_ptr<string> authorizationType_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Scope permission ID.
      shared_ptr<string> resourceServerScopeId_ {};
      // Scope permission name.
      shared_ptr<string> resourceServerScopeName_ {};
      // Scope permission type.
      shared_ptr<string> resourceServerScopeType_ {};
      // Scope permission value.
      shared_ptr<string> resourceServerScopeValue_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->resourceServerScopes_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceServerScopesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceServerScopesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListResourceServerScopesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceServerScopesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceServerScopes Field Functions 
    bool hasResourceServerScopes() const { return this->resourceServerScopes_ != nullptr;};
    void deleteResourceServerScopes() { this->resourceServerScopes_ = nullptr;};
    inline const vector<ListResourceServerScopesResponseBody::ResourceServerScopes> & getResourceServerScopes() const { DARABONBA_PTR_GET_CONST(resourceServerScopes_, vector<ListResourceServerScopesResponseBody::ResourceServerScopes>) };
    inline vector<ListResourceServerScopesResponseBody::ResourceServerScopes> getResourceServerScopes() { DARABONBA_PTR_GET(resourceServerScopes_, vector<ListResourceServerScopesResponseBody::ResourceServerScopes>) };
    inline ListResourceServerScopesResponseBody& setResourceServerScopes(const vector<ListResourceServerScopesResponseBody::ResourceServerScopes> & resourceServerScopes) { DARABONBA_PTR_SET_VALUE(resourceServerScopes_, resourceServerScopes) };
    inline ListResourceServerScopesResponseBody& setResourceServerScopes(vector<ListResourceServerScopesResponseBody::ResourceServerScopes> && resourceServerScopes) { DARABONBA_PTR_SET_RVALUE(resourceServerScopes_, resourceServerScopes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceServerScopesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of rows per page in paginated queries.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next page query.
    shared_ptr<string> nextToken_ {};
    // Token for the previous page query.
    shared_ptr<string> previousToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of Scope permissions under the ResourceServer.
    shared_ptr<vector<ListResourceServerScopesResponseBody::ResourceServerScopes>> resourceServerScopes_ {};
    // Total number of items in the list.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
