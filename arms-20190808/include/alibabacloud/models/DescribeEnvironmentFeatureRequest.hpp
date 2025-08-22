// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEnvironmentFeatureRequest() = default ;
    DescribeEnvironmentFeatureRequest(const DescribeEnvironmentFeatureRequest &) = default ;
    DescribeEnvironmentFeatureRequest(DescribeEnvironmentFeatureRequest &&) = default ;
    DescribeEnvironmentFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureRequest() = default ;
    DescribeEnvironmentFeatureRequest& operator=(const DescribeEnvironmentFeatureRequest &) = default ;
    DescribeEnvironmentFeatureRequest& operator=(DescribeEnvironmentFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->environmentId_ != nullptr && this->featureName_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline DescribeEnvironmentFeatureRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeEnvironmentFeatureRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline DescribeEnvironmentFeatureRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnvironmentFeatureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language. Valid values: en and zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The name of the feature.
    // 
    // Valid values:
    // 
    // *   app-agent-pilot: App Pilot agent
    // *   arms-cmonitor: ARMS CMonitor agent
    // *   metric-agent: Prometheus agent
    // 
    // This parameter is required.
    std::shared_ptr<string> featureName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
