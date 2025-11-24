// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPILOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigSource, configSource_);
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_TO_JSON(TraceSampling, traceSampling_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigSource, configSource_);
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_FROM_JSON(TraceSampling, traceSampling_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configSource_ == nullptr
        && return this->feature_ == nullptr && return this->http10Enabled_ == nullptr && return this->traceSampling_ == nullptr; };
    // configSource Field Functions 
    bool hasConfigSource() const { return this->configSource_ != nullptr;};
    void deleteConfigSource() { this->configSource_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource & configSource() const { DARABONBA_PTR_GET_CONST(configSource_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource configSource() { DARABONBA_PTR_GET(configSource_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setConfigSource(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource & configSource) { DARABONBA_PTR_SET_VALUE(configSource_, configSource) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setConfigSource(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource && configSource) { DARABONBA_PTR_SET_RVALUE(configSource_, configSource) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature & feature() const { DARABONBA_PTR_GET_CONST(feature_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature feature() { DARABONBA_PTR_GET(feature_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setFeature(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setFeature(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


    // http10Enabled Field Functions 
    bool hasHttp10Enabled() const { return this->http10Enabled_ != nullptr;};
    void deleteHttp10Enabled() { this->http10Enabled_ = nullptr;};
    inline bool http10Enabled() const { DARABONBA_PTR_GET_DEFAULT(http10Enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setHttp10Enabled(bool http10Enabled) { DARABONBA_PTR_SET_VALUE(http10Enabled_, http10Enabled) };


    // traceSampling Field Functions 
    bool hasTraceSampling() const { return this->traceSampling_ != nullptr;};
    void deleteTraceSampling() { this->traceSampling_ = nullptr;};
    inline float traceSampling() const { DARABONBA_PTR_GET_DEFAULT(traceSampling_, 0.0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot& setTraceSampling(float traceSampling) { DARABONBA_PTR_SET_VALUE(traceSampling_, traceSampling) };


  protected:
    // The configurations of communication between external services and services in the mesh.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource> configSource_ = nullptr;
    // The configurations of Pilot features.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature> feature_ = nullptr;
    // Indicates whether HTTP/1.0 is supported. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> http10Enabled_ = nullptr;
    // The sampling percentage of tracing analysis.
    std::shared_ptr<float> traceSampling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
