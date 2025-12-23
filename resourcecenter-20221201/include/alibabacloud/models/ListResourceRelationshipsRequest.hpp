// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceRelationshipsRequestRelatedResourceFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceRelationshipsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourceRelationshipsRequest() = default ;
    ListResourceRelationshipsRequest(const ListResourceRelationshipsRequest &) = default ;
    ListResourceRelationshipsRequest(ListResourceRelationshipsRequest &&) = default ;
    ListResourceRelationshipsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRelationshipsRequest() = default ;
    ListResourceRelationshipsRequest& operator=(const ListResourceRelationshipsRequest &) = default ;
    ListResourceRelationshipsRequest& operator=(ListResourceRelationshipsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->relatedResourceFilter_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceRelationshipsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceRelationshipsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceRelationshipsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceFilter Field Functions 
    bool hasRelatedResourceFilter() const { return this->relatedResourceFilter_ != nullptr;};
    void deleteRelatedResourceFilter() { this->relatedResourceFilter_ = nullptr;};
    inline const vector<ListResourceRelationshipsRequestRelatedResourceFilter> & relatedResourceFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceFilter_, vector<ListResourceRelationshipsRequestRelatedResourceFilter>) };
    inline vector<ListResourceRelationshipsRequestRelatedResourceFilter> relatedResourceFilter() { DARABONBA_PTR_GET(relatedResourceFilter_, vector<ListResourceRelationshipsRequestRelatedResourceFilter>) };
    inline ListResourceRelationshipsRequest& setRelatedResourceFilter(const vector<ListResourceRelationshipsRequestRelatedResourceFilter> & relatedResourceFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceFilter_, relatedResourceFilter) };
    inline ListResourceRelationshipsRequest& setRelatedResourceFilter(vector<ListResourceRelationshipsRequestRelatedResourceFilter> && relatedResourceFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceFilter_, relatedResourceFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceRelationshipsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceRelationshipsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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
    std::shared_ptr<vector<ListResourceRelationshipsRequestRelatedResourceFilter>> relatedResourceFilter_ = nullptr;
    // The ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
