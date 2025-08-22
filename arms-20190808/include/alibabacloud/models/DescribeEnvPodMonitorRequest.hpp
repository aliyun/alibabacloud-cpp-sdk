// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVPODMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVPODMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvPodMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvPodMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PodMonitorName, podMonitorName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvPodMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PodMonitorName, podMonitorName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEnvPodMonitorRequest() = default ;
    DescribeEnvPodMonitorRequest(const DescribeEnvPodMonitorRequest &) = default ;
    DescribeEnvPodMonitorRequest(DescribeEnvPodMonitorRequest &&) = default ;
    DescribeEnvPodMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvPodMonitorRequest() = default ;
    DescribeEnvPodMonitorRequest& operator=(const DescribeEnvPodMonitorRequest &) = default ;
    DescribeEnvPodMonitorRequest& operator=(DescribeEnvPodMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->namespace_ != nullptr && this->podMonitorName_ != nullptr && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvPodMonitorRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeEnvPodMonitorRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // podMonitorName Field Functions 
    bool hasPodMonitorName() const { return this->podMonitorName_ != nullptr;};
    void deletePodMonitorName() { this->podMonitorName_ = nullptr;};
    inline string podMonitorName() const { DARABONBA_PTR_GET_DEFAULT(podMonitorName_, "") };
    inline DescribeEnvPodMonitorRequest& setPodMonitorName(string podMonitorName) { DARABONBA_PTR_SET_VALUE(podMonitorName_, podMonitorName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvPodMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The namespace where the PodMonitor resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the PodMonitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> podMonitorName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
