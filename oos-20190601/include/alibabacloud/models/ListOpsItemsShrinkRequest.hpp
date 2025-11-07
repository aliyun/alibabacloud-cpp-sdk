// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOpsItemsShrinkRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListOpsItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTagsShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    ListOpsItemsShrinkRequest() = default ;
    ListOpsItemsShrinkRequest(const ListOpsItemsShrinkRequest &) = default ;
    ListOpsItemsShrinkRequest(ListOpsItemsShrinkRequest &&) = default ;
    ListOpsItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsItemsShrinkRequest() = default ;
    ListOpsItemsShrinkRequest& operator=(const ListOpsItemsShrinkRequest &) = default ;
    ListOpsItemsShrinkRequest& operator=(ListOpsItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceTagsShrink_ == nullptr && return this->tagsShrink_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListOpsItemsShrinkRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListOpsItemsShrinkRequestFilter>) };
    inline vector<ListOpsItemsShrinkRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListOpsItemsShrinkRequestFilter>) };
    inline ListOpsItemsShrinkRequest& setFilter(const vector<ListOpsItemsShrinkRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListOpsItemsShrinkRequest& setFilter(vector<ListOpsItemsShrinkRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsItemsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsItemsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOpsItemsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceTagsShrink Field Functions 
    bool hasResourceTagsShrink() const { return this->resourceTagsShrink_ != nullptr;};
    void deleteResourceTagsShrink() { this->resourceTagsShrink_ = nullptr;};
    inline string resourceTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTagsShrink_, "") };
    inline ListOpsItemsShrinkRequest& setResourceTagsShrink(string resourceTagsShrink) { DARABONBA_PTR_SET_VALUE(resourceTagsShrink_, resourceTagsShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListOpsItemsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The filter rules for the component.
    std::shared_ptr<vector<ListOpsItemsShrinkRequestFilter>> filter_ = nullptr;
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about resource tags.
    std::shared_ptr<string> resourceTagsShrink_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
