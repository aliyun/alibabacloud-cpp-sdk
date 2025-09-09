// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServicesRequestFilter.hpp>
#include <alibabacloud/models/ListServicesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllVersions, allVersions_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllVersions, allVersions_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServicesRequest() = default ;
    ListServicesRequest(const ListServicesRequest &) = default ;
    ListServicesRequest(ListServicesRequest &&) = default ;
    ListServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesRequest() = default ;
    ListServicesRequest& operator=(const ListServicesRequest &) = default ;
    ListServicesRequest& operator=(ListServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allVersions_ != nullptr
        && this->filter_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tag_ != nullptr; };
    // allVersions Field Functions 
    bool hasAllVersions() const { return this->allVersions_ != nullptr;};
    void deleteAllVersions() { this->allVersions_ = nullptr;};
    inline bool allVersions() const { DARABONBA_PTR_GET_DEFAULT(allVersions_, false) };
    inline ListServicesRequest& setAllVersions(bool allVersions) { DARABONBA_PTR_SET_VALUE(allVersions_, allVersions) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServicesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServicesRequestFilter>) };
    inline vector<ListServicesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListServicesRequestFilter>) };
    inline ListServicesRequest& setFilter(const vector<ListServicesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServicesRequest& setFilter(vector<ListServicesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServicesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServicesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServicesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServicesRequestTag>) };
    inline vector<ListServicesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListServicesRequestTag>) };
    inline ListServicesRequest& setTag(const vector<ListServicesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServicesRequest& setTag(vector<ListServicesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to return all versions of a service. Default value: false, which specifies that only the default version of a service is returned.
    std::shared_ptr<bool> allVersions_ = nullptr;
    // The filters.
    std::shared_ptr<vector<ListServicesRequestFilter>> filter_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The custom tags.
    std::shared_ptr<vector<ListServicesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
