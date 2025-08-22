// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPROMETHEUSGRAFANAINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDPROMETHEUSGRAFANAINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class BindPrometheusGrafanaInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindPrometheusGrafanaInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, BindPrometheusGrafanaInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    BindPrometheusGrafanaInstanceRequest() = default ;
    BindPrometheusGrafanaInstanceRequest(const BindPrometheusGrafanaInstanceRequest &) = default ;
    BindPrometheusGrafanaInstanceRequest(BindPrometheusGrafanaInstanceRequest &&) = default ;
    BindPrometheusGrafanaInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindPrometheusGrafanaInstanceRequest() = default ;
    BindPrometheusGrafanaInstanceRequest& operator=(const BindPrometheusGrafanaInstanceRequest &) = default ;
    BindPrometheusGrafanaInstanceRequest& operator=(BindPrometheusGrafanaInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->grafanaInstanceId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline BindPrometheusGrafanaInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string grafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline BindPrometheusGrafanaInstanceRequest& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindPrometheusGrafanaInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline BindPrometheusGrafanaInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the Grafana workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> grafanaInstanceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the Prometheus instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
