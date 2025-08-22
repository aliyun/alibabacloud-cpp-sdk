// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DashboardName, dashboardName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DashboardName, dashboardName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListDashboardsRequest() = default ;
    ListDashboardsRequest(const ListDashboardsRequest &) = default ;
    ListDashboardsRequest(ListDashboardsRequest &&) = default ;
    ListDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsRequest() = default ;
    ListDashboardsRequest& operator=(const ListDashboardsRequest &) = default ;
    ListDashboardsRequest& operator=(ListDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterType_ != nullptr && this->dashboardName_ != nullptr && this->language_ != nullptr && this->product_ != nullptr && this->recreateSwitch_ != nullptr
        && this->regionId_ != nullptr && this->title_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDashboardsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListDashboardsRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dashboardName Field Functions 
    bool hasDashboardName() const { return this->dashboardName_ != nullptr;};
    void deleteDashboardName() { this->dashboardName_ = nullptr;};
    inline string dashboardName() const { DARABONBA_PTR_GET_DEFAULT(dashboardName_, "") };
    inline ListDashboardsRequest& setDashboardName(string dashboardName) { DARABONBA_PTR_SET_VALUE(dashboardName_, dashboardName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListDashboardsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListDashboardsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // recreateSwitch Field Functions 
    bool hasRecreateSwitch() const { return this->recreateSwitch_ != nullptr;};
    void deleteRecreateSwitch() { this->recreateSwitch_ = nullptr;};
    inline bool recreateSwitch() const { DARABONBA_PTR_GET_DEFAULT(recreateSwitch_, false) };
    inline ListDashboardsRequest& setRecreateSwitch(bool recreateSwitch) { DARABONBA_PTR_SET_VALUE(recreateSwitch_, recreateSwitch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDashboardsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDashboardsRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the ACK cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Valid values: ACK, ASK, cloud-product-prometheus, and Node. You can query the dashboards of a virtual cluster by specifying the cluster type. For InfluxDB, set this parameter to `cloud-product-prometheus`.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The unique names of the dashboards. You can query dashboards by specifying their names. The **dashboard title** can be changed whereas the **dashboard name** cannot. You can specify multiple names and separate them with commas (,), for example, `k8s-event,k8s-overview`. A dashboard may have multiple versions. If you want to specify a version, you can add version information after the name, for example, `k8s-event:v1,k8s-overview:latest`.
    std::shared_ptr<string> dashboardName_ = nullptr;
    // The language of the returned Grafana dashboard. Valid values: en and zh. Default value: en.
    std::shared_ptr<string> language_ = nullptr;
    // The cloud service code. This parameter is required if you set the ClusterType parameter to `cloud-product-prometheus`. The following cloud services are available: Serverless App Engine, Microservices Engine, Message Queue for Apache RocketMQ, Lindorm, Message Queue for Apache Kafka, ApsaraDB for ClickHouse, Data Lake Analytics, Message Queue for RabbitMQ, ApsaraDB for MongoDB, Time Series Database (TSDB) for InfluxDB, MSE Cloud-native Gateway, Grafana Service, SchedulerX, Global Transaction Service, Enterprise Distributed Application Service, Machine Learning Platform for AI - Elastic Algorithm Service (EAS), Application High Availability Service, and Performance Testing.
    std::shared_ptr<string> product_ = nullptr;
    // Specifies whether to create or query a virtual cluster. This parameter provides backward compatibility.
    std::shared_ptr<bool> recreateSwitch_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The dashboard title. The dashboard title can be changed. We recommend that you specify the **DashboardName** parameter.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
