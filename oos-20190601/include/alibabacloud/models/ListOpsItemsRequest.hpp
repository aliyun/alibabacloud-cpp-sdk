// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOpsItemsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListOpsItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    ListOpsItemsRequest() = default ;
    ListOpsItemsRequest(const ListOpsItemsRequest &) = default ;
    ListOpsItemsRequest(ListOpsItemsRequest &&) = default ;
    ListOpsItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsItemsRequest() = default ;
    ListOpsItemsRequest& operator=(const ListOpsItemsRequest &) = default ;
    ListOpsItemsRequest& operator=(ListOpsItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceTags_ == nullptr && return this->tags_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListOpsItemsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListOpsItemsRequestFilter>) };
    inline vector<ListOpsItemsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListOpsItemsRequestFilter>) };
    inline ListOpsItemsRequest& setFilter(const vector<ListOpsItemsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListOpsItemsRequest& setFilter(vector<ListOpsItemsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOpsItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline     const Darabonba::Json & resourceTags() const { DARABONBA_GET(resourceTags_) };
    Darabonba::Json & resourceTags() { DARABONBA_GET(resourceTags_) };
    inline ListOpsItemsRequest& setResourceTags(const Darabonba::Json & resourceTags) { DARABONBA_SET_VALUE(resourceTags_, resourceTags) };
    inline ListOpsItemsRequest& setResourceTags(Darabonba::Json & resourceTags) { DARABONBA_SET_RVALUE(resourceTags_, resourceTags) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListOpsItemsRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListOpsItemsRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The filter rules for the component.
    std::shared_ptr<vector<ListOpsItemsRequestFilter>> filter_ = nullptr;
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about resource tags.
    Darabonba::Json resourceTags_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
