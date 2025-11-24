// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLog, accessLog_);
      DARABONBA_PTR_TO_JSON(Audit, audit_);
      DARABONBA_PTR_TO_JSON(ControlPlaneLogInfo, controlPlaneLogInfo_);
      DARABONBA_PTR_TO_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EnableLocalityLB, enableLocalityLB_);
      DARABONBA_PTR_TO_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_TO_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(ExtraConfiguration, extraConfiguration_);
      DARABONBA_PTR_TO_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_TO_JSON(K8sNewAPIsSupport, k8sNewAPIsSupport_);
      DARABONBA_PTR_TO_JSON(Kiali, kiali_);
      DARABONBA_PTR_TO_JSON(LocalityLB, localityLB_);
      DARABONBA_PTR_TO_JSON(MSE, MSE_);
      DARABONBA_PTR_TO_JSON(OPA, OPA_);
      DARABONBA_PTR_TO_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(Pilot, pilot_);
      DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(ProtocolSupport, protocolSupport_);
      DARABONBA_PTR_TO_JSON(Proxy, proxy_);
      DARABONBA_PTR_TO_JSON(SidecarInjector, sidecarInjector_);
      DARABONBA_PTR_TO_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
      DARABONBA_PTR_TO_JSON(WebAssemblyFilterDeployment, webAssemblyFilterDeployment_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLog, accessLog_);
      DARABONBA_PTR_FROM_JSON(Audit, audit_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneLogInfo, controlPlaneLogInfo_);
      DARABONBA_PTR_FROM_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EnableLocalityLB, enableLocalityLB_);
      DARABONBA_PTR_FROM_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_FROM_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExtraConfiguration, extraConfiguration_);
      DARABONBA_PTR_FROM_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_FROM_JSON(K8sNewAPIsSupport, k8sNewAPIsSupport_);
      DARABONBA_PTR_FROM_JSON(Kiali, kiali_);
      DARABONBA_PTR_FROM_JSON(LocalityLB, localityLB_);
      DARABONBA_PTR_FROM_JSON(MSE, MSE_);
      DARABONBA_PTR_FROM_JSON(OPA, OPA_);
      DARABONBA_PTR_FROM_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(Pilot, pilot_);
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(ProtocolSupport, protocolSupport_);
      DARABONBA_PTR_FROM_JSON(Proxy, proxy_);
      DARABONBA_PTR_FROM_JSON(SidecarInjector, sidecarInjector_);
      DARABONBA_PTR_FROM_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
      DARABONBA_PTR_FROM_JSON(WebAssemblyFilterDeployment, webAssemblyFilterDeployment_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLog_ == nullptr
        && return this->audit_ == nullptr && return this->controlPlaneLogInfo_ == nullptr && return this->customizedZipkin_ == nullptr && return this->edition_ == nullptr && return this->enableLocalityLB_ == nullptr
        && return this->excludeIPRanges_ == nullptr && return this->excludeInboundPorts_ == nullptr && return this->excludeOutboundPorts_ == nullptr && return this->extraConfiguration_ == nullptr && return this->includeIPRanges_ == nullptr
        && return this->k8sNewAPIsSupport_ == nullptr && return this->kiali_ == nullptr && return this->localityLB_ == nullptr && return this->MSE_ == nullptr && return this->OPA_ == nullptr
        && return this->outboundTrafficPolicy_ == nullptr && return this->pilot_ == nullptr && return this->prometheus_ == nullptr && return this->protocolSupport_ == nullptr && return this->proxy_ == nullptr
        && return this->sidecarInjector_ == nullptr && return this->telemetry_ == nullptr && return this->tracing_ == nullptr && return this->webAssemblyFilterDeployment_ == nullptr; };
    // accessLog Field Functions 
    bool hasAccessLog() const { return this->accessLog_ != nullptr;};
    void deleteAccessLog() { this->accessLog_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog & accessLog() const { DARABONBA_PTR_GET_CONST(accessLog_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog accessLog() { DARABONBA_PTR_GET(accessLog_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setAccessLog(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog & accessLog) { DARABONBA_PTR_SET_VALUE(accessLog_, accessLog) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setAccessLog(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog && accessLog) { DARABONBA_PTR_SET_RVALUE(accessLog_, accessLog) };


    // audit Field Functions 
    bool hasAudit() const { return this->audit_ != nullptr;};
    void deleteAudit() { this->audit_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit & audit() const { DARABONBA_PTR_GET_CONST(audit_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit audit() { DARABONBA_PTR_GET(audit_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setAudit(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit & audit) { DARABONBA_PTR_SET_VALUE(audit_, audit) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setAudit(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit && audit) { DARABONBA_PTR_SET_RVALUE(audit_, audit) };


    // controlPlaneLogInfo Field Functions 
    bool hasControlPlaneLogInfo() const { return this->controlPlaneLogInfo_ != nullptr;};
    void deleteControlPlaneLogInfo() { this->controlPlaneLogInfo_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo & controlPlaneLogInfo() const { DARABONBA_PTR_GET_CONST(controlPlaneLogInfo_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo controlPlaneLogInfo() { DARABONBA_PTR_GET(controlPlaneLogInfo_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setControlPlaneLogInfo(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo & controlPlaneLogInfo) { DARABONBA_PTR_SET_VALUE(controlPlaneLogInfo_, controlPlaneLogInfo) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setControlPlaneLogInfo(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo && controlPlaneLogInfo) { DARABONBA_PTR_SET_RVALUE(controlPlaneLogInfo_, controlPlaneLogInfo) };


    // customizedZipkin Field Functions 
    bool hasCustomizedZipkin() const { return this->customizedZipkin_ != nullptr;};
    void deleteCustomizedZipkin() { this->customizedZipkin_ = nullptr;};
    inline bool customizedZipkin() const { DARABONBA_PTR_GET_DEFAULT(customizedZipkin_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setCustomizedZipkin(bool customizedZipkin) { DARABONBA_PTR_SET_VALUE(customizedZipkin_, customizedZipkin) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition & edition() const { DARABONBA_PTR_GET_CONST(edition_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition edition() { DARABONBA_PTR_GET(edition_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setEdition(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition & edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setEdition(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition && edition) { DARABONBA_PTR_SET_RVALUE(edition_, edition) };


    // enableLocalityLB Field Functions 
    bool hasEnableLocalityLB() const { return this->enableLocalityLB_ != nullptr;};
    void deleteEnableLocalityLB() { this->enableLocalityLB_ = nullptr;};
    inline bool enableLocalityLB() const { DARABONBA_PTR_GET_DEFAULT(enableLocalityLB_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setEnableLocalityLB(bool enableLocalityLB) { DARABONBA_PTR_SET_VALUE(enableLocalityLB_, enableLocalityLB) };


    // excludeIPRanges Field Functions 
    bool hasExcludeIPRanges() const { return this->excludeIPRanges_ != nullptr;};
    void deleteExcludeIPRanges() { this->excludeIPRanges_ = nullptr;};
    inline string excludeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(excludeIPRanges_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setExcludeIPRanges(string excludeIPRanges) { DARABONBA_PTR_SET_VALUE(excludeIPRanges_, excludeIPRanges) };


    // excludeInboundPorts Field Functions 
    bool hasExcludeInboundPorts() const { return this->excludeInboundPorts_ != nullptr;};
    void deleteExcludeInboundPorts() { this->excludeInboundPorts_ = nullptr;};
    inline string excludeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeInboundPorts_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setExcludeInboundPorts(string excludeInboundPorts) { DARABONBA_PTR_SET_VALUE(excludeInboundPorts_, excludeInboundPorts) };


    // excludeOutboundPorts Field Functions 
    bool hasExcludeOutboundPorts() const { return this->excludeOutboundPorts_ != nullptr;};
    void deleteExcludeOutboundPorts() { this->excludeOutboundPorts_ = nullptr;};
    inline string excludeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundPorts_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setExcludeOutboundPorts(string excludeOutboundPorts) { DARABONBA_PTR_SET_VALUE(excludeOutboundPorts_, excludeOutboundPorts) };


    // extraConfiguration Field Functions 
    bool hasExtraConfiguration() const { return this->extraConfiguration_ != nullptr;};
    void deleteExtraConfiguration() { this->extraConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration & extraConfiguration() const { DARABONBA_PTR_GET_CONST(extraConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration extraConfiguration() { DARABONBA_PTR_GET(extraConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setExtraConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration & extraConfiguration) { DARABONBA_PTR_SET_VALUE(extraConfiguration_, extraConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setExtraConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration && extraConfiguration) { DARABONBA_PTR_SET_RVALUE(extraConfiguration_, extraConfiguration) };


    // includeIPRanges Field Functions 
    bool hasIncludeIPRanges() const { return this->includeIPRanges_ != nullptr;};
    void deleteIncludeIPRanges() { this->includeIPRanges_ = nullptr;};
    inline string includeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(includeIPRanges_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setIncludeIPRanges(string includeIPRanges) { DARABONBA_PTR_SET_VALUE(includeIPRanges_, includeIPRanges) };


    // k8sNewAPIsSupport Field Functions 
    bool hasK8sNewAPIsSupport() const { return this->k8sNewAPIsSupport_ != nullptr;};
    void deleteK8sNewAPIsSupport() { this->k8sNewAPIsSupport_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport & k8sNewAPIsSupport() const { DARABONBA_PTR_GET_CONST(k8sNewAPIsSupport_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport k8sNewAPIsSupport() { DARABONBA_PTR_GET(k8sNewAPIsSupport_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setK8sNewAPIsSupport(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport & k8sNewAPIsSupport) { DARABONBA_PTR_SET_VALUE(k8sNewAPIsSupport_, k8sNewAPIsSupport) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setK8sNewAPIsSupport(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport && k8sNewAPIsSupport) { DARABONBA_PTR_SET_RVALUE(k8sNewAPIsSupport_, k8sNewAPIsSupport) };


    // kiali Field Functions 
    bool hasKiali() const { return this->kiali_ != nullptr;};
    void deleteKiali() { this->kiali_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali & kiali() const { DARABONBA_PTR_GET_CONST(kiali_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali kiali() { DARABONBA_PTR_GET(kiali_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setKiali(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali & kiali) { DARABONBA_PTR_SET_VALUE(kiali_, kiali) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setKiali(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali && kiali) { DARABONBA_PTR_SET_RVALUE(kiali_, kiali) };


    // localityLB Field Functions 
    bool hasLocalityLB() const { return this->localityLB_ != nullptr;};
    void deleteLocalityLB() { this->localityLB_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB & localityLB() const { DARABONBA_PTR_GET_CONST(localityLB_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB localityLB() { DARABONBA_PTR_GET(localityLB_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setLocalityLB(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB & localityLB) { DARABONBA_PTR_SET_VALUE(localityLB_, localityLB) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setLocalityLB(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB && localityLB) { DARABONBA_PTR_SET_RVALUE(localityLB_, localityLB) };


    // MSE Field Functions 
    bool hasMSE() const { return this->MSE_ != nullptr;};
    void deleteMSE() { this->MSE_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE & MSE() const { DARABONBA_PTR_GET_CONST(MSE_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE MSE() { DARABONBA_PTR_GET(MSE_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setMSE(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE & MSE) { DARABONBA_PTR_SET_VALUE(MSE_, MSE) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setMSE(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE && MSE) { DARABONBA_PTR_SET_RVALUE(MSE_, MSE) };


    // OPA Field Functions 
    bool hasOPA() const { return this->OPA_ != nullptr;};
    void deleteOPA() { this->OPA_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA & OPA() const { DARABONBA_PTR_GET_CONST(OPA_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA OPA() { DARABONBA_PTR_GET(OPA_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setOPA(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA & OPA) { DARABONBA_PTR_SET_VALUE(OPA_, OPA) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setOPA(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA && OPA) { DARABONBA_PTR_SET_RVALUE(OPA_, OPA) };


    // outboundTrafficPolicy Field Functions 
    bool hasOutboundTrafficPolicy() const { return this->outboundTrafficPolicy_ != nullptr;};
    void deleteOutboundTrafficPolicy() { this->outboundTrafficPolicy_ = nullptr;};
    inline string outboundTrafficPolicy() const { DARABONBA_PTR_GET_DEFAULT(outboundTrafficPolicy_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setOutboundTrafficPolicy(string outboundTrafficPolicy) { DARABONBA_PTR_SET_VALUE(outboundTrafficPolicy_, outboundTrafficPolicy) };


    // pilot Field Functions 
    bool hasPilot() const { return this->pilot_ != nullptr;};
    void deletePilot() { this->pilot_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot & pilot() const { DARABONBA_PTR_GET_CONST(pilot_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot pilot() { DARABONBA_PTR_GET(pilot_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setPilot(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot & pilot) { DARABONBA_PTR_SET_VALUE(pilot_, pilot) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setPilot(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot && pilot) { DARABONBA_PTR_SET_RVALUE(pilot_, pilot) };


    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus & prometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus prometheus() { DARABONBA_PTR_GET(prometheus_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setPrometheus(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setPrometheus(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


    // protocolSupport Field Functions 
    bool hasProtocolSupport() const { return this->protocolSupport_ != nullptr;};
    void deleteProtocolSupport() { this->protocolSupport_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport & protocolSupport() const { DARABONBA_PTR_GET_CONST(protocolSupport_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport protocolSupport() { DARABONBA_PTR_GET(protocolSupport_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setProtocolSupport(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport & protocolSupport) { DARABONBA_PTR_SET_VALUE(protocolSupport_, protocolSupport) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setProtocolSupport(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport && protocolSupport) { DARABONBA_PTR_SET_RVALUE(protocolSupport_, protocolSupport) };


    // proxy Field Functions 
    bool hasProxy() const { return this->proxy_ != nullptr;};
    void deleteProxy() { this->proxy_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy & proxy() const { DARABONBA_PTR_GET_CONST(proxy_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy proxy() { DARABONBA_PTR_GET(proxy_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setProxy(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy & proxy) { DARABONBA_PTR_SET_VALUE(proxy_, proxy) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setProxy(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy && proxy) { DARABONBA_PTR_SET_RVALUE(proxy_, proxy) };


    // sidecarInjector Field Functions 
    bool hasSidecarInjector() const { return this->sidecarInjector_ != nullptr;};
    void deleteSidecarInjector() { this->sidecarInjector_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector & sidecarInjector() const { DARABONBA_PTR_GET_CONST(sidecarInjector_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector sidecarInjector() { DARABONBA_PTR_GET(sidecarInjector_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setSidecarInjector(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector & sidecarInjector) { DARABONBA_PTR_SET_VALUE(sidecarInjector_, sidecarInjector) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setSidecarInjector(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector && sidecarInjector) { DARABONBA_PTR_SET_RVALUE(sidecarInjector_, sidecarInjector) };


    // telemetry Field Functions 
    bool hasTelemetry() const { return this->telemetry_ != nullptr;};
    void deleteTelemetry() { this->telemetry_ = nullptr;};
    inline bool telemetry() const { DARABONBA_PTR_GET_DEFAULT(telemetry_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setTelemetry(bool telemetry) { DARABONBA_PTR_SET_VALUE(telemetry_, telemetry) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline bool tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


    // webAssemblyFilterDeployment Field Functions 
    bool hasWebAssemblyFilterDeployment() const { return this->webAssemblyFilterDeployment_ != nullptr;};
    void deleteWebAssemblyFilterDeployment() { this->webAssemblyFilterDeployment_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment & webAssemblyFilterDeployment() const { DARABONBA_PTR_GET_CONST(webAssemblyFilterDeployment_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment webAssemblyFilterDeployment() { DARABONBA_PTR_GET(webAssemblyFilterDeployment_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setWebAssemblyFilterDeployment(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment & webAssemblyFilterDeployment) { DARABONBA_PTR_SET_VALUE(webAssemblyFilterDeployment_, webAssemblyFilterDeployment) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig& setWebAssemblyFilterDeployment(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment && webAssemblyFilterDeployment) { DARABONBA_PTR_SET_RVALUE(webAssemblyFilterDeployment_, webAssemblyFilterDeployment) };


  protected:
    // The configurations of access log collection.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog> accessLog_ = nullptr;
    // The information about mesh audit.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit> audit_ = nullptr;
    // The configurations of control-plane log collection.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo> controlPlaneLogInfo_ = nullptr;
    // Indicates whether a custom Zipkin system is used. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> customizedZipkin_ = nullptr;
    // The information about the edition.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition> edition_ = nullptr;
    // Indicates whether the feature that routes traffic to the nearest instance is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableLocalityLB_ = nullptr;
    // The IP ranges in CIDR form to be excluded from redirection to sidecar proxies in the ASM instance.
    std::shared_ptr<string> excludeIPRanges_ = nullptr;
    // The inbound ports to be excluded from redirection to sidecar proxies in the ASM instance.
    std::shared_ptr<string> excludeInboundPorts_ = nullptr;
    // The outbound ports to be excluded from redirection to sidecar proxies in the ASM instance.
    std::shared_ptr<string> excludeOutboundPorts_ = nullptr;
    // The configurations of additional features for the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration> extraConfiguration_ = nullptr;
    // The IP ranges in CIDR form to redirect to the sidecar proxies in the ASM instance.
    std::shared_ptr<string> includeIPRanges_ = nullptr;
    // The information about the Kubernetes API.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport> k8sNewAPIsSupport_ = nullptr;
    // The configurations of mesh topology.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali> kiali_ = nullptr;
    // The configurations of cross-region load balancing.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB> localityLB_ = nullptr;
    // The configurations of Microservices Engine (MSE).
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE> MSE_ = nullptr;
    // The information about the Open Policy Agent (OPA) plug-in.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA> OPA_ = nullptr;
    // The outbound traffic policy. Valid values:
    // 
    // *   `ALLOW_ANY`: Outbound traffic to all external services is allowed.
    // *   `REGISTRY_ONLY`: Outbound traffic is allowed to only external services that are defined in the service registry of the ASM instance.
    std::shared_ptr<string> outboundTrafficPolicy_ = nullptr;
    // The Pilot configurations.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot> pilot_ = nullptr;
    // The configurations of Prometheus monitoring.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus> prometheus_ = nullptr;
    // The configurations of protocol support.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport> protocolSupport_ = nullptr;
    // The proxy configurations.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy> proxy_ = nullptr;
    // The configurations of the sidecar injector.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector> sidecarInjector_ = nullptr;
    // Indicates whether Prometheus monitoring is enabled. We recommend that you use [Managed Service for Prometheus](https://arms.console.aliyun.com/). Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> telemetry_ = nullptr;
    // Indicates whether tracing analysis is enabled. This feature can be enabled only after [Managed Service for OpenTelemetry](https://tracing-analysis.console.aliyun.com/) is activated. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> tracing_ = nullptr;
    // The configurations of WebAssembly Filter.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment> webAssemblyFilterDeployment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
