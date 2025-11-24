// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECMESHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraConfiguration, extraConfiguration_);
      DARABONBA_PTR_TO_JSON(Mtls, mtls_);
      DARABONBA_PTR_TO_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(Pilot, pilot_);
      DARABONBA_PTR_TO_JSON(SidecarInjector, sidecarInjector_);
      DARABONBA_PTR_TO_JSON(StrictMtls, strictMtls_);
      DARABONBA_PTR_TO_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraConfiguration, extraConfiguration_);
      DARABONBA_PTR_FROM_JSON(Mtls, mtls_);
      DARABONBA_PTR_FROM_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(Pilot, pilot_);
      DARABONBA_PTR_FROM_JSON(SidecarInjector, sidecarInjector_);
      DARABONBA_PTR_FROM_JSON(StrictMtls, strictMtls_);
      DARABONBA_PTR_FROM_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraConfiguration_ == nullptr
        && return this->mtls_ == nullptr && return this->outboundTrafficPolicy_ == nullptr && return this->pilot_ == nullptr && return this->sidecarInjector_ == nullptr && return this->strictMtls_ == nullptr
        && return this->telemetry_ == nullptr && return this->tracing_ == nullptr; };
    // extraConfiguration Field Functions 
    bool hasExtraConfiguration() const { return this->extraConfiguration_ != nullptr;};
    void deleteExtraConfiguration() { this->extraConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration & extraConfiguration() const { DARABONBA_PTR_GET_CONST(extraConfiguration_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration extraConfiguration() { DARABONBA_PTR_GET(extraConfiguration_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setExtraConfiguration(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration & extraConfiguration) { DARABONBA_PTR_SET_VALUE(extraConfiguration_, extraConfiguration) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setExtraConfiguration(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration && extraConfiguration) { DARABONBA_PTR_SET_RVALUE(extraConfiguration_, extraConfiguration) };


    // mtls Field Functions 
    bool hasMtls() const { return this->mtls_ != nullptr;};
    void deleteMtls() { this->mtls_ = nullptr;};
    inline bool mtls() const { DARABONBA_PTR_GET_DEFAULT(mtls_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setMtls(bool mtls) { DARABONBA_PTR_SET_VALUE(mtls_, mtls) };


    // outboundTrafficPolicy Field Functions 
    bool hasOutboundTrafficPolicy() const { return this->outboundTrafficPolicy_ != nullptr;};
    void deleteOutboundTrafficPolicy() { this->outboundTrafficPolicy_ = nullptr;};
    inline string outboundTrafficPolicy() const { DARABONBA_PTR_GET_DEFAULT(outboundTrafficPolicy_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setOutboundTrafficPolicy(string outboundTrafficPolicy) { DARABONBA_PTR_SET_VALUE(outboundTrafficPolicy_, outboundTrafficPolicy) };


    // pilot Field Functions 
    bool hasPilot() const { return this->pilot_ != nullptr;};
    void deletePilot() { this->pilot_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot & pilot() const { DARABONBA_PTR_GET_CONST(pilot_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot pilot() { DARABONBA_PTR_GET(pilot_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setPilot(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot & pilot) { DARABONBA_PTR_SET_VALUE(pilot_, pilot) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setPilot(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot && pilot) { DARABONBA_PTR_SET_RVALUE(pilot_, pilot) };


    // sidecarInjector Field Functions 
    bool hasSidecarInjector() const { return this->sidecarInjector_ != nullptr;};
    void deleteSidecarInjector() { this->sidecarInjector_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector & sidecarInjector() const { DARABONBA_PTR_GET_CONST(sidecarInjector_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector sidecarInjector() { DARABONBA_PTR_GET(sidecarInjector_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setSidecarInjector(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector & sidecarInjector) { DARABONBA_PTR_SET_VALUE(sidecarInjector_, sidecarInjector) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setSidecarInjector(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector && sidecarInjector) { DARABONBA_PTR_SET_RVALUE(sidecarInjector_, sidecarInjector) };


    // strictMtls Field Functions 
    bool hasStrictMtls() const { return this->strictMtls_ != nullptr;};
    void deleteStrictMtls() { this->strictMtls_ = nullptr;};
    inline bool strictMtls() const { DARABONBA_PTR_GET_DEFAULT(strictMtls_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setStrictMtls(bool strictMtls) { DARABONBA_PTR_SET_VALUE(strictMtls_, strictMtls) };


    // telemetry Field Functions 
    bool hasTelemetry() const { return this->telemetry_ != nullptr;};
    void deleteTelemetry() { this->telemetry_ = nullptr;};
    inline bool telemetry() const { DARABONBA_PTR_GET_DEFAULT(telemetry_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setTelemetry(bool telemetry) { DARABONBA_PTR_SET_VALUE(telemetry_, telemetry) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline bool tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


  protected:
    // The extended configurations of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigExtraConfiguration> extraConfiguration_ = nullptr;
    // Indicates whether nearby access is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> mtls_ = nullptr;
    // The outbound traffic policy. Valid values:
    // 
    // *   `ALLOW_ANY`: Outbound traffic to an external service is allowed.
    // *   `REGISTRY_ONLY`: Outbound traffic is allowed to only external services that are defined in the service registry of the ASM instance.
    std::shared_ptr<string> outboundTrafficPolicy_ = nullptr;
    // The configurations of the control plane.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot> pilot_ = nullptr;
    // The configurations of sidecar proxy injection.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector> sidecarInjector_ = nullptr;
    // Indicates whether mutual Transport Layer Security (mTLS) is strictly enforced.
    std::shared_ptr<bool> strictMtls_ = nullptr;
    // Indicates whether Prometheus monitoring is enabled. We recommend that you use Managed Service for Prometheus. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> telemetry_ = nullptr;
    // Indicates whether the tracing feature is enabled. This feature can be enabled only after Managed Service for OpenTelemetry is activated. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> tracing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
