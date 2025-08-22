// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTENVIRONMENTFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTENVIRONMENTFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class RestartEnvironmentFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RestartEnvironmentFeatureRequest() = default ;
    RestartEnvironmentFeatureRequest(const RestartEnvironmentFeatureRequest &) = default ;
    RestartEnvironmentFeatureRequest(RestartEnvironmentFeatureRequest &&) = default ;
    RestartEnvironmentFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartEnvironmentFeatureRequest() = default ;
    RestartEnvironmentFeatureRequest& operator=(const RestartEnvironmentFeatureRequest &) = default ;
    RestartEnvironmentFeatureRequest& operator=(RestartEnvironmentFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->featureName_ != nullptr && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline RestartEnvironmentFeatureRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline RestartEnvironmentFeatureRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestartEnvironmentFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The feature name. Valid values: app-agent-pilot, metric-agent, ebpf-agent, and service-check.
    // 
    // This parameter is required.
    std::shared_ptr<string> featureName_ = nullptr;
    // The region ID. Default value: cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
