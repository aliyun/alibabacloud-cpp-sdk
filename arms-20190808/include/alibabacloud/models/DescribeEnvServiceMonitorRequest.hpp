// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVSERVICEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVSERVICEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvServiceMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvServiceMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvServiceMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    DescribeEnvServiceMonitorRequest() = default ;
    DescribeEnvServiceMonitorRequest(const DescribeEnvServiceMonitorRequest &) = default ;
    DescribeEnvServiceMonitorRequest(DescribeEnvServiceMonitorRequest &&) = default ;
    DescribeEnvServiceMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvServiceMonitorRequest() = default ;
    DescribeEnvServiceMonitorRequest& operator=(const DescribeEnvServiceMonitorRequest &) = default ;
    DescribeEnvServiceMonitorRequest& operator=(DescribeEnvServiceMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->namespace_ != nullptr && this->regionId_ != nullptr && this->serviceMonitorName_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvServiceMonitorRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeEnvServiceMonitorRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvServiceMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMonitorName Field Functions 
    bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
    void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
    inline string serviceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
    inline DescribeEnvServiceMonitorRequest& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


  protected:
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The namespace where the ServiceMonitor resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the ServiceMonitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMonitorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
