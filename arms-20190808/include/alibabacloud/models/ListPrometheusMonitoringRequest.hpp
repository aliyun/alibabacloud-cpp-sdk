// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPrometheusMonitoringRequest() = default ;
    ListPrometheusMonitoringRequest(const ListPrometheusMonitoringRequest &) = default ;
    ListPrometheusMonitoringRequest(ListPrometheusMonitoringRequest &&) = default ;
    ListPrometheusMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusMonitoringRequest() = default ;
    ListPrometheusMonitoringRequest& operator=(const ListPrometheusMonitoringRequest &) = default ;
    ListPrometheusMonitoringRequest& operator=(ListPrometheusMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusMonitoringRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusMonitoringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrometheusMonitoringRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID. Default value: `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the monitoring configuration. Valid values for a Prometheus instance for Container Service: ServiceMonitor, PodMonitor, CustomJob, and Probe. Valid values for a Prometheus instance for ECS: CustomJob and Probe.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
