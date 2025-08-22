// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACEAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACEAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTraceAppsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTraceAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTraceAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTraceAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTraceAppsRequest() = default ;
    ListTraceAppsRequest(const ListTraceAppsRequest &) = default ;
    ListTraceAppsRequest(ListTraceAppsRequest &&) = default ;
    ListTraceAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTraceAppsRequest() = default ;
    ListTraceAppsRequest& operator=(const ListTraceAppsRequest &) = default ;
    ListTraceAppsRequest& operator=(ListTraceAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->region_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListTraceAppsRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListTraceAppsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTraceAppsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTraceAppsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTraceAppsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTraceAppsRequestTags>) };
    inline vector<ListTraceAppsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListTraceAppsRequestTags>) };
    inline ListTraceAppsRequest& setTags(const vector<ListTraceAppsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTraceAppsRequest& setTags(vector<ListTraceAppsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The type of the application that is associated with the alert rule. Valid values:
    // 
    // - TRACE: Application Monitoring
    // - EBPF: Application Monitoring eBPF Edition
    std::shared_ptr<string> appType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListTraceAppsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
