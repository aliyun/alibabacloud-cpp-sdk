// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRETCODEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRETCODEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRetcodeAppsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListRetcodeAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRetcodeAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListRetcodeAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListRetcodeAppsRequest() = default ;
    ListRetcodeAppsRequest(const ListRetcodeAppsRequest &) = default ;
    ListRetcodeAppsRequest(ListRetcodeAppsRequest &&) = default ;
    ListRetcodeAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRetcodeAppsRequest() = default ;
    ListRetcodeAppsRequest& operator=(const ListRetcodeAppsRequest &) = default ;
    ListRetcodeAppsRequest& operator=(ListRetcodeAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRetcodeAppsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListRetcodeAppsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListRetcodeAppsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListRetcodeAppsRequestTags>) };
    inline vector<ListRetcodeAppsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListRetcodeAppsRequestTags>) };
    inline ListRetcodeAppsRequest& setTags(const vector<ListRetcodeAppsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListRetcodeAppsRequest& setTags(vector<ListRetcodeAppsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags that you want to add to the task.
    std::shared_ptr<vector<ListRetcodeAppsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
