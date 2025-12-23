// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter.hpp>
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
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->relatedResourceFilter_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr
        && return this->scope_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountResourceRelationshipsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceFilter Field Functions 
    bool hasRelatedResourceFilter() const { return this->relatedResourceFilter_ != nullptr;};
    void deleteRelatedResourceFilter() { this->relatedResourceFilter_ = nullptr;};
    inline const vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter> & relatedResourceFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceFilter_, vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>) };
    inline vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter> relatedResourceFilter() { DARABONBA_PTR_GET(relatedResourceFilter_, vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>) };
    inline ListMultiAccountResourceRelationshipsRequest& setRelatedResourceFilter(const vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter> & relatedResourceFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceFilter_, relatedResourceFilter) };
    inline ListMultiAccountResourceRelationshipsRequest& setRelatedResourceFilter(vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter> && relatedResourceFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceFilter_, relatedResourceFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountResourceRelationshipsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The filter conditions for resources associated with the resource.
    std::shared_ptr<vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>> relatedResourceFilter_ = nullptr;
    // The ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The search scope. Valid values:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to query the ID.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to query the ID.
    // *   ID of a folder: Resources within all members in the folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to query the ID.
    // *   ID of a member: Resources within the member are searched. You can call the [ListAccounts](https://help.aliyun.com/document_detail/160016.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
