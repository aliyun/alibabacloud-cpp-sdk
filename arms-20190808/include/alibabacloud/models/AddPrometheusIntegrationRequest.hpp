// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddPrometheusIntegrationRequest() = default ;
    AddPrometheusIntegrationRequest(const AddPrometheusIntegrationRequest &) = default ;
    AddPrometheusIntegrationRequest(AddPrometheusIntegrationRequest &&) = default ;
    AddPrometheusIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusIntegrationRequest() = default ;
    AddPrometheusIntegrationRequest& operator=(const AddPrometheusIntegrationRequest &) = default ;
    AddPrometheusIntegrationRequest& operator=(AddPrometheusIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->integrationType_ != nullptr && this->param_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddPrometheusIntegrationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline AddPrometheusIntegrationRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline AddPrometheusIntegrationRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPrometheusIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Prometheus instance. Only a Prometheus instance for Container Service or a Prometheus instance for ECS is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the integration.
    // 
    // This parameter is required.
    std::shared_ptr<string> integrationType_ = nullptr;
    // The configurations of the exporter. The value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> param_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
