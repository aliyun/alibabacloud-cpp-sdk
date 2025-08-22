// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTimingSyntheticTasksRequestSearch.hpp>
#include <vector>
#include <alibabacloud/models/ListTimingSyntheticTasksRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTimingSyntheticTasksRequest() = default ;
    ListTimingSyntheticTasksRequest(const ListTimingSyntheticTasksRequest &) = default ;
    ListTimingSyntheticTasksRequest(ListTimingSyntheticTasksRequest &&) = default ;
    ListTimingSyntheticTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksRequest() = default ;
    ListTimingSyntheticTasksRequest& operator=(const ListTimingSyntheticTasksRequest &) = default ;
    ListTimingSyntheticTasksRequest& operator=(ListTimingSyntheticTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->search_ != nullptr && this->tags_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTimingSyntheticTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTimingSyntheticTasksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const ListTimingSyntheticTasksRequestSearch & search() const { DARABONBA_PTR_GET_CONST(search_, ListTimingSyntheticTasksRequestSearch) };
    inline ListTimingSyntheticTasksRequestSearch search() { DARABONBA_PTR_GET(search_, ListTimingSyntheticTasksRequestSearch) };
    inline ListTimingSyntheticTasksRequest& setSearch(const ListTimingSyntheticTasksRequestSearch & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline ListTimingSyntheticTasksRequest& setSearch(ListTimingSyntheticTasksRequestSearch && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTimingSyntheticTasksRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTimingSyntheticTasksRequestTags>) };
    inline vector<ListTimingSyntheticTasksRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListTimingSyntheticTasksRequestTags>) };
    inline ListTimingSyntheticTasksRequest& setTags(const vector<ListTimingSyntheticTasksRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTimingSyntheticTasksRequest& setTags(vector<ListTimingSyntheticTasksRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The search keyword.
    std::shared_ptr<ListTimingSyntheticTasksRequestSearch> search_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListTimingSyntheticTasksRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
