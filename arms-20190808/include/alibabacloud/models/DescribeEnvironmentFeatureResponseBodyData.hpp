// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnvironmentFeatureResponseBodyDataFeature.hpp>
#include <alibabacloud/models/DescribeEnvironmentFeatureResponseBodyDataFeatureStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(FeatureStatus, featureStatus_);
      DARABONBA_PTR_TO_JSON(config, config_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(FeatureStatus, featureStatus_);
      DARABONBA_PTR_FROM_JSON(config, config_);
    };
    DescribeEnvironmentFeatureResponseBodyData() = default ;
    DescribeEnvironmentFeatureResponseBodyData(const DescribeEnvironmentFeatureResponseBodyData &) = default ;
    DescribeEnvironmentFeatureResponseBodyData(DescribeEnvironmentFeatureResponseBodyData &&) = default ;
    DescribeEnvironmentFeatureResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureResponseBodyData() = default ;
    DescribeEnvironmentFeatureResponseBodyData& operator=(const DescribeEnvironmentFeatureResponseBodyData &) = default ;
    DescribeEnvironmentFeatureResponseBodyData& operator=(DescribeEnvironmentFeatureResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feature_ != nullptr
        && this->featureStatus_ != nullptr && this->config_ != nullptr; };
    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline const Models::DescribeEnvironmentFeatureResponseBodyDataFeature & feature() const { DARABONBA_PTR_GET_CONST(feature_, Models::DescribeEnvironmentFeatureResponseBodyDataFeature) };
    inline Models::DescribeEnvironmentFeatureResponseBodyDataFeature feature() { DARABONBA_PTR_GET(feature_, Models::DescribeEnvironmentFeatureResponseBodyDataFeature) };
    inline DescribeEnvironmentFeatureResponseBodyData& setFeature(const Models::DescribeEnvironmentFeatureResponseBodyDataFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
    inline DescribeEnvironmentFeatureResponseBodyData& setFeature(Models::DescribeEnvironmentFeatureResponseBodyDataFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


    // featureStatus Field Functions 
    bool hasFeatureStatus() const { return this->featureStatus_ != nullptr;};
    void deleteFeatureStatus() { this->featureStatus_ = nullptr;};
    inline const Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus & featureStatus() const { DARABONBA_PTR_GET_CONST(featureStatus_, Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus) };
    inline Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus featureStatus() { DARABONBA_PTR_GET(featureStatus_, Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus) };
    inline DescribeEnvironmentFeatureResponseBodyData& setFeatureStatus(const Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus & featureStatus) { DARABONBA_PTR_SET_VALUE(featureStatus_, featureStatus) };
    inline DescribeEnvironmentFeatureResponseBodyData& setFeatureStatus(Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus && featureStatus) { DARABONBA_PTR_SET_RVALUE(featureStatus_, featureStatus) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeEnvironmentFeatureResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    // The installation information about the feature.
    std::shared_ptr<Models::DescribeEnvironmentFeatureResponseBodyDataFeature> feature_ = nullptr;
    // The status of the feature.
    std::shared_ptr<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatus> featureStatus_ = nullptr;
    // The feature configurations.
    std::shared_ptr<string> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
