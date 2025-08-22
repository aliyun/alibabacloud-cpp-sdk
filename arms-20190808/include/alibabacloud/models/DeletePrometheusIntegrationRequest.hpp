// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeletePrometheusIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePrometheusIntegrationRequest() = default ;
    DeletePrometheusIntegrationRequest(const DeletePrometheusIntegrationRequest &) = default ;
    DeletePrometheusIntegrationRequest(DeletePrometheusIntegrationRequest &&) = default ;
    DeletePrometheusIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusIntegrationRequest() = default ;
    DeletePrometheusIntegrationRequest& operator=(const DeletePrometheusIntegrationRequest &) = default ;
    DeletePrometheusIntegrationRequest& operator=(DeletePrometheusIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->instanceId_ != nullptr && this->integrationType_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeletePrometheusIntegrationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DeletePrometheusIntegrationRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline DeletePrometheusIntegrationRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePrometheusIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Prometheus instance. Only a Prometheus instance for Container Service or a Prometheus instance for ECS is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the exporter.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The type of the integration.
    // 
    // This parameter is required.
    std::shared_ptr<string> integrationType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
