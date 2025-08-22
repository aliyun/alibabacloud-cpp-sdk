// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowGlobalView, showGlobalView_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowGlobalView, showGlobalView_);
    };
    ListPrometheusInstancesRequest() = default ;
    ListPrometheusInstancesRequest(const ListPrometheusInstancesRequest &) = default ;
    ListPrometheusInstancesRequest(ListPrometheusInstancesRequest &&) = default ;
    ListPrometheusInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstancesRequest() = default ;
    ListPrometheusInstancesRequest& operator=(const ListPrometheusInstancesRequest &) = default ;
    ListPrometheusInstancesRequest& operator=(ListPrometheusInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->regionId_ != nullptr && this->showGlobalView_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListPrometheusInstancesRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showGlobalView Field Functions 
    bool hasShowGlobalView() const { return this->showGlobalView_ != nullptr;};
    void deleteShowGlobalView() { this->showGlobalView_ = nullptr;};
    inline bool showGlobalView() const { DARABONBA_PTR_GET_DEFAULT(showGlobalView_, false) };
    inline ListPrometheusInstancesRequest& setShowGlobalView(bool showGlobalView) { DARABONBA_PTR_SET_VALUE(showGlobalView_, showGlobalView) };


  protected:
    // The cluster type. If you do not specify this parameter, all cluster types are queried. Valid values:
    // 
    // *   cloud-product-prometheus: Prometheus instance for cloud services
    // *   ManagedKubernetes: ACK managed cluster
    // *   satellite: Prometheus instance for ARMS OpenTelemetry
    // *   Ask: ACK Serverless cluster
    // *   remote-write-prometheus: general-purpose Prometheus instance
    // *   cloud-monitor-cmee: Hybrid Cloud Monitoring
    // *   ExternalKubernetes: external Kubernetes cluster registered in ACK
    // *   vpc-prometheus: Prometheus instance for ECS
    // *   cloud-monitor-direct: cloud service self-monitoring
    // *   Edge Kubernetes: ACK Edge cluster
    std::shared_ptr<string> clusterType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to obtain global aggregation instances. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> showGlobalView_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
