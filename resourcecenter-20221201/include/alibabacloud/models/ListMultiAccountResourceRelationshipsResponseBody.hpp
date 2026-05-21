// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelationships, resourceRelationships_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationships, resourceRelationships_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ListMultiAccountResourceRelationshipsResponseBody() = default ;
    ListMultiAccountResourceRelationshipsResponseBody(const ListMultiAccountResourceRelationshipsResponseBody &) = default ;
    ListMultiAccountResourceRelationshipsResponseBody(ListMultiAccountResourceRelationshipsResponseBody &&) = default ;
    ListMultiAccountResourceRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceRelationshipsResponseBody() = default ;
    ListMultiAccountResourceRelationshipsResponseBody& operator=(const ListMultiAccountResourceRelationshipsResponseBody &) = default ;
    ListMultiAccountResourceRelationshipsResponseBody& operator=(ListMultiAccountResourceRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceRelationships : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceRelationships& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RelatedResourceId, relatedResourceId_);
        DARABONBA_PTR_TO_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
        DARABONBA_PTR_TO_JSON(RelatedResourceType, relatedResourceType_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceRelationships& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceId, relatedResourceId_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceType, relatedResourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceRelationships() = default ;
      ResourceRelationships(const ResourceRelationships &) = default ;
      ResourceRelationships(ResourceRelationships &&) = default ;
      ResourceRelationships(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceRelationships() = default ;
      ResourceRelationships& operator=(const ResourceRelationships &) = default ;
      ResourceRelationships& operator=(ResourceRelationships &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->regionId_ == nullptr && this->relatedResourceId_ == nullptr && this->relatedResourceRegionId_ == nullptr && this->relatedResourceType_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline ResourceRelationships& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ResourceRelationships& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // relatedResourceId Field Functions 
      bool hasRelatedResourceId() const { return this->relatedResourceId_ != nullptr;};
      void deleteRelatedResourceId() { this->relatedResourceId_ = nullptr;};
      inline string getRelatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceId_, "") };
      inline ResourceRelationships& setRelatedResourceId(string relatedResourceId) { DARABONBA_PTR_SET_VALUE(relatedResourceId_, relatedResourceId) };


      // relatedResourceRegionId Field Functions 
      bool hasRelatedResourceRegionId() const { return this->relatedResourceRegionId_ != nullptr;};
      void deleteRelatedResourceRegionId() { this->relatedResourceRegionId_ = nullptr;};
      inline string getRelatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceRegionId_, "") };
      inline ResourceRelationships& setRelatedResourceRegionId(string relatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(relatedResourceRegionId_, relatedResourceRegionId) };


      // relatedResourceType Field Functions 
      bool hasRelatedResourceType() const { return this->relatedResourceType_ != nullptr;};
      void deleteRelatedResourceType() { this->relatedResourceType_ = nullptr;};
      inline string getRelatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceType_, "") };
      inline ResourceRelationships& setRelatedResourceType(string relatedResourceType) { DARABONBA_PTR_SET_VALUE(relatedResourceType_, relatedResourceType) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceRelationships& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceRelationships& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the management account or member.
      shared_ptr<string> accountId_ {};
      // The region ID of the resource.
      shared_ptr<string> regionId_ {};
      // The ID of the associated resource.
      shared_ptr<string> relatedResourceId_ {};
      // The region ID of the associated resource.
      shared_ptr<string> relatedResourceRegionId_ {};
      // The type of the associated resource.
      shared_ptr<string> relatedResourceType_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceRelationships_ == nullptr && this->scope_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelationships Field Functions 
    bool hasResourceRelationships() const { return this->resourceRelationships_ != nullptr;};
    void deleteResourceRelationships() { this->resourceRelationships_ = nullptr;};
    inline const vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships> & getResourceRelationships() const { DARABONBA_PTR_GET_CONST(resourceRelationships_, vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships>) };
    inline vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships> getResourceRelationships() { DARABONBA_PTR_GET(resourceRelationships_, vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships>) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setResourceRelationships(const vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships> & resourceRelationships) { DARABONBA_PTR_SET_VALUE(resourceRelationships_, resourceRelationships) };
    inline ListMultiAccountResourceRelationshipsResponseBody& setResourceRelationships(vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships> && resourceRelationships) { DARABONBA_PTR_SET_RVALUE(resourceRelationships_, resourceRelationships) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource relationships.
    shared_ptr<vector<ListMultiAccountResourceRelationshipsResponseBody::ResourceRelationships>> resourceRelationships_ {};
    // The search scope. Valid values:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched.
    // *   ID of a folder: Resources within all members in the folder are searched.
    // *   ID of a member: Resources within the member are searched.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
