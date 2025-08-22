// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSMONITORINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSMONITORINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusMonitoringResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusMonitoringResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusMonitoringResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(MonitoringName, monitoringName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPrometheusMonitoringResponseBodyData() = default ;
    ListPrometheusMonitoringResponseBodyData(const ListPrometheusMonitoringResponseBodyData &) = default ;
    ListPrometheusMonitoringResponseBodyData(ListPrometheusMonitoringResponseBodyData &&) = default ;
    ListPrometheusMonitoringResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusMonitoringResponseBodyData() = default ;
    ListPrometheusMonitoringResponseBodyData& operator=(const ListPrometheusMonitoringResponseBodyData &) = default ;
    ListPrometheusMonitoringResponseBodyData& operator=(ListPrometheusMonitoringResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->configYaml_ != nullptr && this->monitoringName_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPrometheusMonitoringResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListPrometheusMonitoringResponseBodyData& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // monitoringName Field Functions 
    bool hasMonitoringName() const { return this->monitoringName_ != nullptr;};
    void deleteMonitoringName() { this->monitoringName_ = nullptr;};
    inline string monitoringName() const { DARABONBA_PTR_GET_DEFAULT(monitoringName_, "") };
    inline ListPrometheusMonitoringResponseBodyData& setMonitoringName(string monitoringName) { DARABONBA_PTR_SET_VALUE(monitoringName_, monitoringName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrometheusMonitoringResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrometheusMonitoringResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The monitoring configuration. The value is a YAML string.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The name of the monitoring configuration.
    std::shared_ptr<string> monitoringName_ = nullptr;
    // The status of the monitoring configuration.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the monitoring configuration.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
