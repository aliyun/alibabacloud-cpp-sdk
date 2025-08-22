// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDashboardsByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DashBoardName, dashBoardName_);
      DARABONBA_PTR_TO_JSON(DashBoardVersion, dashBoardVersion_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(OnlyQuery, onlyQuery_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DashBoardName, dashBoardName_);
      DARABONBA_PTR_FROM_JSON(DashBoardVersion, dashBoardVersion_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(OnlyQuery, onlyQuery_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListDashboardsByNameRequest() = default ;
    ListDashboardsByNameRequest(const ListDashboardsByNameRequest &) = default ;
    ListDashboardsByNameRequest(ListDashboardsByNameRequest &&) = default ;
    ListDashboardsByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsByNameRequest() = default ;
    ListDashboardsByNameRequest& operator=(const ListDashboardsByNameRequest &) = default ;
    ListDashboardsByNameRequest& operator=(ListDashboardsByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterType_ != nullptr && this->dashBoardName_ != nullptr && this->dashBoardVersion_ != nullptr && this->dataSourceType_ != nullptr && this->groupName_ != nullptr
        && this->onlyQuery_ != nullptr && this->productCode_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDashboardsByNameRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListDashboardsByNameRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dashBoardName Field Functions 
    bool hasDashBoardName() const { return this->dashBoardName_ != nullptr;};
    void deleteDashBoardName() { this->dashBoardName_ = nullptr;};
    inline string dashBoardName() const { DARABONBA_PTR_GET_DEFAULT(dashBoardName_, "") };
    inline ListDashboardsByNameRequest& setDashBoardName(string dashBoardName) { DARABONBA_PTR_SET_VALUE(dashBoardName_, dashBoardName) };


    // dashBoardVersion Field Functions 
    bool hasDashBoardVersion() const { return this->dashBoardVersion_ != nullptr;};
    void deleteDashBoardVersion() { this->dashBoardVersion_ = nullptr;};
    inline string dashBoardVersion() const { DARABONBA_PTR_GET_DEFAULT(dashBoardVersion_, "") };
    inline ListDashboardsByNameRequest& setDashBoardVersion(string dashBoardVersion) { DARABONBA_PTR_SET_VALUE(dashBoardVersion_, dashBoardVersion) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDashboardsByNameRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListDashboardsByNameRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // onlyQuery Field Functions 
    bool hasOnlyQuery() const { return this->onlyQuery_ != nullptr;};
    void deleteOnlyQuery() { this->onlyQuery_ = nullptr;};
    inline bool onlyQuery() const { DARABONBA_PTR_GET_DEFAULT(onlyQuery_, false) };
    inline ListDashboardsByNameRequest& setOnlyQuery(bool onlyQuery) { DARABONBA_PTR_SET_VALUE(onlyQuery_, onlyQuery) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDashboardsByNameRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDashboardsByNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cluster. If the ClusterType parameter is not set to `cloud-product-prometheus` or `cms-enterprise-prometheus`, you must specify the ClusterId parameter.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   vpc-prometheus
    // *   cloud-product-prometheus
    // *   cms-enterprise-prometheus
    // *   ExternalKubernetes
    // *   Ask
    // *   Kubernetes
    // *   ManagedKubernetes
    // *   remote-write-prometheus
    // *   GlobalViewV2
    std::shared_ptr<string> clusterType_ = nullptr;
    // The name of the dashboard.
    std::shared_ptr<string> dashBoardName_ = nullptr;
    // The version of the dashboard.
    std::shared_ptr<string> dashBoardVersion_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   loki
    // *   prometheus
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The name of the dashboard group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Specifies whether to display the Grafana dashboard only in the Application Real-Time Monitoring Service (ARMS) console.
    std::shared_ptr<bool> onlyQuery_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
