// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePrometheusMonitoringRequest() = default ;
    UpdatePrometheusMonitoringRequest(const UpdatePrometheusMonitoringRequest &) = default ;
    UpdatePrometheusMonitoringRequest(UpdatePrometheusMonitoringRequest &&) = default ;
    UpdatePrometheusMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusMonitoringRequest() = default ;
    UpdatePrometheusMonitoringRequest& operator=(const UpdatePrometheusMonitoringRequest &) = default ;
    UpdatePrometheusMonitoringRequest& operator=(UpdatePrometheusMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->configYaml_ != nullptr && this->monitoringName_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdatePrometheusMonitoringRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline UpdatePrometheusMonitoringRequest& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // monitoringName Field Functions 
    bool hasMonitoringName() const { return this->monitoringName_ != nullptr;};
    void deleteMonitoringName() { this->monitoringName_ = nullptr;};
    inline string monitoringName() const { DARABONBA_PTR_GET_DEFAULT(monitoringName_, "") };
    inline UpdatePrometheusMonitoringRequest& setMonitoringName(string monitoringName) { DARABONBA_PTR_SET_VALUE(monitoringName_, monitoringName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrometheusMonitoringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePrometheusMonitoringRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The monitoring configuration. The value is a YAML string.
    // 
    // This parameter is required.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The name of the monitoring configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitoringName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the monitoring configuration. 
    // Valid values for a Prometheus instance for Container Service: serviceMonitor, podMonitor, customJob, and probe. 
    // Valid values for a Prometheus instance for ECS: customJob and probe.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
