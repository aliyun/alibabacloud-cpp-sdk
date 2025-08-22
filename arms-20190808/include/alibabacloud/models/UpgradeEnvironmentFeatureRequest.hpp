// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENVIRONMENTFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENVIRONMENTFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpgradeEnvironmentFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(FeatureVersion, featureVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(FeatureVersion, featureVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpgradeEnvironmentFeatureRequest() = default ;
    UpgradeEnvironmentFeatureRequest(const UpgradeEnvironmentFeatureRequest &) = default ;
    UpgradeEnvironmentFeatureRequest(UpgradeEnvironmentFeatureRequest &&) = default ;
    UpgradeEnvironmentFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEnvironmentFeatureRequest() = default ;
    UpgradeEnvironmentFeatureRequest& operator=(const UpgradeEnvironmentFeatureRequest &) = default ;
    UpgradeEnvironmentFeatureRequest& operator=(UpgradeEnvironmentFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->environmentId_ != nullptr && this->featureName_ != nullptr && this->featureVersion_ != nullptr && this->regionId_ != nullptr && this->values_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline UpgradeEnvironmentFeatureRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpgradeEnvironmentFeatureRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline UpgradeEnvironmentFeatureRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // featureVersion Field Functions 
    bool hasFeatureVersion() const { return this->featureVersion_ != nullptr;};
    void deleteFeatureVersion() { this->featureVersion_ = nullptr;};
    inline string featureVersion() const { DARABONBA_PTR_GET_DEFAULT(featureVersion_, "") };
    inline UpgradeEnvironmentFeatureRequest& setFeatureVersion(string featureVersion) { DARABONBA_PTR_SET_VALUE(featureVersion_, featureVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeEnvironmentFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline UpgradeEnvironmentFeatureRequest& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The feature name. Valid values: app-agent-pilot, metric-agent, ebpf-agent, and service-check.
    // 
    // This parameter is required.
    std::shared_ptr<string> featureName_ = nullptr;
    // The version of the feature.
    std::shared_ptr<string> featureVersion_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to enable service discovery. For PodAnnotation, set the value to run or mini. For PodMonitor and ServiceMonitor, set the value to true or false.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
