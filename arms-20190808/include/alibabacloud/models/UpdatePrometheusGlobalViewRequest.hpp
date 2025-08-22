// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSGLOBALVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusGlobalViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllSubClustersSuccess, allSubClustersSuccess_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(MostRegionId, mostRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubClustersJson, subClustersJson_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllSubClustersSuccess, allSubClustersSuccess_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(MostRegionId, mostRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubClustersJson, subClustersJson_);
    };
    UpdatePrometheusGlobalViewRequest() = default ;
    UpdatePrometheusGlobalViewRequest(const UpdatePrometheusGlobalViewRequest &) = default ;
    UpdatePrometheusGlobalViewRequest(UpdatePrometheusGlobalViewRequest &&) = default ;
    UpdatePrometheusGlobalViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusGlobalViewRequest() = default ;
    UpdatePrometheusGlobalViewRequest& operator=(const UpdatePrometheusGlobalViewRequest &) = default ;
    UpdatePrometheusGlobalViewRequest& operator=(UpdatePrometheusGlobalViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allSubClustersSuccess_ != nullptr
        && this->clusterId_ != nullptr && this->groupName_ != nullptr && this->mostRegionId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->subClustersJson_ != nullptr; };
    // allSubClustersSuccess Field Functions 
    bool hasAllSubClustersSuccess() const { return this->allSubClustersSuccess_ != nullptr;};
    void deleteAllSubClustersSuccess() { this->allSubClustersSuccess_ = nullptr;};
    inline bool allSubClustersSuccess() const { DARABONBA_PTR_GET_DEFAULT(allSubClustersSuccess_, false) };
    inline UpdatePrometheusGlobalViewRequest& setAllSubClustersSuccess(bool allSubClustersSuccess) { DARABONBA_PTR_SET_VALUE(allSubClustersSuccess_, allSubClustersSuccess) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdatePrometheusGlobalViewRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdatePrometheusGlobalViewRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // mostRegionId Field Functions 
    bool hasMostRegionId() const { return this->mostRegionId_ != nullptr;};
    void deleteMostRegionId() { this->mostRegionId_ = nullptr;};
    inline string mostRegionId() const { DARABONBA_PTR_GET_DEFAULT(mostRegionId_, "") };
    inline UpdatePrometheusGlobalViewRequest& setMostRegionId(string mostRegionId) { DARABONBA_PTR_SET_VALUE(mostRegionId_, mostRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrometheusGlobalViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdatePrometheusGlobalViewRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subClustersJson Field Functions 
    bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
    void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
    inline string subClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
    inline UpdatePrometheusGlobalViewRequest& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


  protected:
    // To edit a GlobalView aggregated instance, do you require all passed child instances to be verified successfully before creating a GlobalView instance (optional, default to false):
    // - true
    // - false
    std::shared_ptr<bool> allSubClustersSuccess_ = nullptr;
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the global aggregation instance.
    std::shared_ptr<string> groupName_ = nullptr;
    // The region ID of the global aggregation instance.
    std::shared_ptr<string> mostRegionId_ = nullptr;
    // The ID of the region in which the Prometheus instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the Prometheus instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The data sources of the Prometheus instance for GlobalView.
    // 
    // This parameter is required.
    std::shared_ptr<string> subClustersJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
