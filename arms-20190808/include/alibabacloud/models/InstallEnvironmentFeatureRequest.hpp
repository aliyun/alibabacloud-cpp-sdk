// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLENVIRONMENTFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLENVIRONMENTFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class InstallEnvironmentFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(FeatureVersion, featureVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(FeatureVersion, featureVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InstallEnvironmentFeatureRequest() = default ;
    InstallEnvironmentFeatureRequest(const InstallEnvironmentFeatureRequest &) = default ;
    InstallEnvironmentFeatureRequest(InstallEnvironmentFeatureRequest &&) = default ;
    InstallEnvironmentFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallEnvironmentFeatureRequest() = default ;
    InstallEnvironmentFeatureRequest& operator=(const InstallEnvironmentFeatureRequest &) = default ;
    InstallEnvironmentFeatureRequest& operator=(InstallEnvironmentFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->config_ != nullptr && this->environmentId_ != nullptr && this->featureName_ != nullptr && this->featureVersion_ != nullptr && this->region_ != nullptr
        && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline InstallEnvironmentFeatureRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline InstallEnvironmentFeatureRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline InstallEnvironmentFeatureRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline InstallEnvironmentFeatureRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // featureVersion Field Functions 
    bool hasFeatureVersion() const { return this->featureVersion_ != nullptr;};
    void deleteFeatureVersion() { this->featureVersion_ = nullptr;};
    inline string featureVersion() const { DARABONBA_PTR_GET_DEFAULT(featureVersion_, "") };
    inline InstallEnvironmentFeatureRequest& setFeatureVersion(string featureVersion) { DARABONBA_PTR_SET_VALUE(featureVersion_, featureVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline InstallEnvironmentFeatureRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InstallEnvironmentFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The metadata of the feature.
    std::shared_ptr<string> config_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The name of the feature.
    // 
    // Valid values:
    // 
    // *   app-agent-pilot
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   metric-agent
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> featureName_ = nullptr;
    // The version of the feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> featureVersion_ = nullptr;
    // The region ID of the feature.
    std::shared_ptr<string> region_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
