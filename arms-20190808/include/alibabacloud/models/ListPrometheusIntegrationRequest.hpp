// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListPrometheusIntegrationRequest() = default ;
    ListPrometheusIntegrationRequest(const ListPrometheusIntegrationRequest &) = default ;
    ListPrometheusIntegrationRequest(ListPrometheusIntegrationRequest &&) = default ;
    ListPrometheusIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusIntegrationRequest() = default ;
    ListPrometheusIntegrationRequest& operator=(const ListPrometheusIntegrationRequest &) = default ;
    ListPrometheusIntegrationRequest& operator=(ListPrometheusIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->integrationType_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusIntegrationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListPrometheusIntegrationRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Prometheus instance. Only aliyun-cs and ecs instances are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The integration type. Valid values: kafka, mysql, redis, snmp, emr, nubela, and tidb.
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
