// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvServiceMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEnvServiceMonitorResponseBodyData() = default ;
    DescribeEnvServiceMonitorResponseBodyData(const DescribeEnvServiceMonitorResponseBodyData &) = default ;
    DescribeEnvServiceMonitorResponseBodyData(DescribeEnvServiceMonitorResponseBodyData &&) = default ;
    DescribeEnvServiceMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvServiceMonitorResponseBodyData() = default ;
    DescribeEnvServiceMonitorResponseBodyData& operator=(const DescribeEnvServiceMonitorResponseBodyData &) = default ;
    DescribeEnvServiceMonitorResponseBodyData& operator=(DescribeEnvServiceMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configYaml_ != nullptr
        && this->environmentId_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->serviceMonitorName_ != nullptr && this->status_ != nullptr; };
    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMonitorName Field Functions 
    bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
    void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
    inline string serviceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnvServiceMonitorResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The YAML configuration file of the ServiceMonitor.
    std::shared_ptr<string> configYaml_ = nullptr;
    // The ID of the environment instance.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the ServiceMonitor.
    std::shared_ptr<string> serviceMonitorName_ = nullptr;
    // The status. Valid values:
    // 
    // *   run
    // *   stop
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
