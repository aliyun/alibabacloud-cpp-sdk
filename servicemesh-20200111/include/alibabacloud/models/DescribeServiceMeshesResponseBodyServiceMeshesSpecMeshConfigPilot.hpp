// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGPILOT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIGPILOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& obj) { 
      DARABONBA_PTR_TO_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_TO_JSON(TraceSampling, traceSampling_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& obj) { 
      DARABONBA_PTR_FROM_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_FROM_JSON(TraceSampling, traceSampling_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->http10Enabled_ == nullptr
        && return this->traceSampling_ == nullptr; };
    // http10Enabled Field Functions 
    bool hasHttp10Enabled() const { return this->http10Enabled_ != nullptr;};
    void deleteHttp10Enabled() { this->http10Enabled_ = nullptr;};
    inline bool http10Enabled() const { DARABONBA_PTR_GET_DEFAULT(http10Enabled_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& setHttp10Enabled(bool http10Enabled) { DARABONBA_PTR_SET_VALUE(http10Enabled_, http10Enabled) };


    // traceSampling Field Functions 
    bool hasTraceSampling() const { return this->traceSampling_ != nullptr;};
    void deleteTraceSampling() { this->traceSampling_ = nullptr;};
    inline float traceSampling() const { DARABONBA_PTR_GET_DEFAULT(traceSampling_, 0.0) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot& setTraceSampling(float traceSampling) { DARABONBA_PTR_SET_VALUE(traceSampling_, traceSampling) };


  protected:
    // Indicates whether the support for HTTP 1.0 is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> http10Enabled_ = nullptr;
    // The sampling rate when Managed Service for OpenTelemetry is enabled.
    std::shared_ptr<float> traceSampling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
