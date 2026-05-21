// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_HPP_
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
  class ListMultiAccountResourceRelationshipsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ListMultiAccountResourceRelationshipsRequest() = default ;
    ListMultiAccountResourceRelationshipsRequest(const ListMultiAccountResourceRelationshipsRequest &) = default ;
    ListMultiAccountResourceRelationshipsRequest(ListMultiAccountResourceRelationshipsRequest &&) = default ;
    ListMultiAccountResourceRelationshipsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceRelationshipsRequest() = default ;
    ListMultiAccountResourceRelationshipsRequest& operator=(const ListMultiAccountResourceRelationshipsRequest &) = default ;
    ListMultiAccountResourceRelationshipsRequest& operator=(ListMultiAccountResourceRelationshipsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelatedResourceFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedResourceFilter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedResourceFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RelatedResourceFilter() = default ;
      RelatedResourceFilter(const RelatedResourceFilter &) = default ;
      RelatedResourceFilter(RelatedResourceFilter &&) = default ;
      RelatedResourceFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedResourceFilter() = default ;
      RelatedResourceFilter& operator=(const RelatedResourceFilter &) = default ;
      RelatedResourceFilter& operator=(RelatedResourceFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline RelatedResourceFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline RelatedResourceFilter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline RelatedResourceFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline RelatedResourceFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. For more information, see `Supported filter parameters`.
      shared_ptr<string> key_ {};
      // The matching method.
      shared_ptr<string> matchType_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->relatedResourceFilter_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->scope_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountResourceRelationshipsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceFilter Field Functions 
    bool hasRelatedResourceFilter() const { return this->relatedResourceFilter_ != nullptr;};
    void deleteRelatedResourceFilter() { this->relatedResourceFilter_ = nullptr;};
    inline const vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> & getRelatedResourceFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceFilter_, vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter>) };
    inline vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> getRelatedResourceFilter() { DARABONBA_PTR_GET(relatedResourceFilter_, vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter>) };
    inline ListMultiAccountResourceRelationshipsRequest& setRelatedResourceFilter(const vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> & relatedResourceFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceFilter_, relatedResourceFilter) };
    inline ListMultiAccountResourceRelationshipsRequest& setRelatedResourceFilter(vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> && relatedResourceFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceFilter_, relatedResourceFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The filter conditions for resources associated with the resource.
    shared_ptr<vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter>> relatedResourceFilter_ {};
    // The ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The type of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The search scope. Valid values:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to query the ID.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to query the ID.
    // *   ID of a folder: Resources within all members in the folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to query the ID.
    // *   ID of a member: Resources within the member are searched. You can call the [ListAccounts](https://help.aliyun.com/document_detail/160016.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
