// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSMONITORINGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSMONITORINGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusMonitoringStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusMonitoringStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusMonitoringStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePrometheusMonitoringStatusRequest() = default ;
    UpdatePrometheusMonitoringStatusRequest(const UpdatePrometheusMonitoringStatusRequest &) = default ;
    UpdatePrometheusMonitoringStatusRequest(UpdatePrometheusMonitoringStatusRequest &&) = default ;
    UpdatePrometheusMonitoringStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusMonitoringStatusRequest() = default ;
    UpdatePrometheusMonitoringStatusRequest& operator=(const UpdatePrometheusMonitoringStatusRequest &) = default ;
    UpdatePrometheusMonitoringStatusRequest& operator=(UpdatePrometheusMonitoringStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->monitoringName_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdatePrometheusMonitoringStatusRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // monitoringName Field Functions 
    bool hasMonitoringName() const { return this->monitoringName_ != nullptr;};
    void deleteMonitoringName() { this->monitoringName_ = nullptr;};
    inline string monitoringName() const { DARABONBA_PTR_GET_DEFAULT(monitoringName_, "") };
    inline UpdatePrometheusMonitoringStatusRequest& setMonitoringName(string monitoringName) { DARABONBA_PTR_SET_VALUE(monitoringName_, monitoringName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrometheusMonitoringStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrometheusMonitoringStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePrometheusMonitoringStatusRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the monitoring configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitoringName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the monitoring configuration. Valid values: run and stop. The status of Probe cannot be modified.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the monitoring configuration. 
    // Valid values for a Prometheus instance for Container Service: serviceMonitor, podMonitor, and customJob. 
    // Valid value for a Prometheus instance for ECS: customJob. 
    // The status of probe cannot be modified.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
