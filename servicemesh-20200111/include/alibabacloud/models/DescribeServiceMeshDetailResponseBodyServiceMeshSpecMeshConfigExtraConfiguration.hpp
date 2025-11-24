// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGEXTRACONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogExtraConf, accessLogExtraConf_);
      DARABONBA_PTR_TO_JSON(AdaptiveXdsConfiguration, adaptiveXdsConfiguration_);
      DARABONBA_PTR_TO_JSON(AutoDiagnosis, autoDiagnosis_);
      DARABONBA_PTR_TO_JSON(CRAggregationConfiguration, CRAggregationConfiguration_);
      DARABONBA_PTR_TO_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_TO_JSON(DiscoverySelectors, discoverySelectors_);
      DARABONBA_PTR_TO_JSON(IstioCRHistory, istioCRHistory_);
      DARABONBA_PTR_TO_JSON(IstiodExtraConfiguration, istiodExtraConfiguration_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(MultiBuffer, multiBuffer_);
      DARABONBA_PTR_TO_JSON(NFDConfiguration, NFDConfiguration_);
      DARABONBA_PTR_TO_JSON(OPAScopeInjection, OPAScopeInjection_);
      DARABONBA_PTR_TO_JSON(Playground, playground_);
      DARABONBA_PTR_TO_JSON(SidecarProxyInitResourceLimit, sidecarProxyInitResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyInitResourceRequest, sidecarProxyInitResourceRequest_);
      DARABONBA_PTR_TO_JSON(TerminationDrainDuration, terminationDrainDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogExtraConf, accessLogExtraConf_);
      DARABONBA_PTR_FROM_JSON(AdaptiveXdsConfiguration, adaptiveXdsConfiguration_);
      DARABONBA_PTR_FROM_JSON(AutoDiagnosis, autoDiagnosis_);
      DARABONBA_PTR_FROM_JSON(CRAggregationConfiguration, CRAggregationConfiguration_);
      DARABONBA_PTR_FROM_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_FROM_JSON(DiscoverySelectors, discoverySelectors_);
      DARABONBA_PTR_FROM_JSON(IstioCRHistory, istioCRHistory_);
      DARABONBA_PTR_FROM_JSON(IstiodExtraConfiguration, istiodExtraConfiguration_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(MultiBuffer, multiBuffer_);
      DARABONBA_PTR_FROM_JSON(NFDConfiguration, NFDConfiguration_);
      DARABONBA_PTR_FROM_JSON(OPAScopeInjection, OPAScopeInjection_);
      DARABONBA_PTR_FROM_JSON(Playground, playground_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyInitResourceLimit, sidecarProxyInitResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyInitResourceRequest, sidecarProxyInitResourceRequest_);
      DARABONBA_PTR_FROM_JSON(TerminationDrainDuration, terminationDrainDuration_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogExtraConf_ == nullptr
        && return this->adaptiveXdsConfiguration_ == nullptr && return this->autoDiagnosis_ == nullptr && return this->CRAggregationConfiguration_ == nullptr && return this->CRAggregationEnabled_ == nullptr && return this->discoverySelectors_ == nullptr
        && return this->istioCRHistory_ == nullptr && return this->istiodExtraConfiguration_ == nullptr && return this->lifecycle_ == nullptr && return this->multiBuffer_ == nullptr && return this->NFDConfiguration_ == nullptr
        && return this->OPAScopeInjection_ == nullptr && return this->playground_ == nullptr && return this->sidecarProxyInitResourceLimit_ == nullptr && return this->sidecarProxyInitResourceRequest_ == nullptr && return this->terminationDrainDuration_ == nullptr; };
    // accessLogExtraConf Field Functions 
    bool hasAccessLogExtraConf() const { return this->accessLogExtraConf_ != nullptr;};
    void deleteAccessLogExtraConf() { this->accessLogExtraConf_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf & accessLogExtraConf() const { DARABONBA_PTR_GET_CONST(accessLogExtraConf_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf accessLogExtraConf() { DARABONBA_PTR_GET(accessLogExtraConf_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAccessLogExtraConf(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf & accessLogExtraConf) { DARABONBA_PTR_SET_VALUE(accessLogExtraConf_, accessLogExtraConf) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAccessLogExtraConf(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf && accessLogExtraConf) { DARABONBA_PTR_SET_RVALUE(accessLogExtraConf_, accessLogExtraConf) };


    // adaptiveXdsConfiguration Field Functions 
    bool hasAdaptiveXdsConfiguration() const { return this->adaptiveXdsConfiguration_ != nullptr;};
    void deleteAdaptiveXdsConfiguration() { this->adaptiveXdsConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration & adaptiveXdsConfiguration() const { DARABONBA_PTR_GET_CONST(adaptiveXdsConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration adaptiveXdsConfiguration() { DARABONBA_PTR_GET(adaptiveXdsConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAdaptiveXdsConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration & adaptiveXdsConfiguration) { DARABONBA_PTR_SET_VALUE(adaptiveXdsConfiguration_, adaptiveXdsConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAdaptiveXdsConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration && adaptiveXdsConfiguration) { DARABONBA_PTR_SET_RVALUE(adaptiveXdsConfiguration_, adaptiveXdsConfiguration) };


    // autoDiagnosis Field Functions 
    bool hasAutoDiagnosis() const { return this->autoDiagnosis_ != nullptr;};
    void deleteAutoDiagnosis() { this->autoDiagnosis_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis & autoDiagnosis() const { DARABONBA_PTR_GET_CONST(autoDiagnosis_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis autoDiagnosis() { DARABONBA_PTR_GET(autoDiagnosis_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAutoDiagnosis(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis & autoDiagnosis) { DARABONBA_PTR_SET_VALUE(autoDiagnosis_, autoDiagnosis) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setAutoDiagnosis(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis && autoDiagnosis) { DARABONBA_PTR_SET_RVALUE(autoDiagnosis_, autoDiagnosis) };


    // CRAggregationConfiguration Field Functions 
    bool hasCRAggregationConfiguration() const { return this->CRAggregationConfiguration_ != nullptr;};
    void deleteCRAggregationConfiguration() { this->CRAggregationConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration & CRAggregationConfiguration() const { DARABONBA_PTR_GET_CONST(CRAggregationConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration CRAggregationConfiguration() { DARABONBA_PTR_GET(CRAggregationConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setCRAggregationConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration & CRAggregationConfiguration) { DARABONBA_PTR_SET_VALUE(CRAggregationConfiguration_, CRAggregationConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setCRAggregationConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration && CRAggregationConfiguration) { DARABONBA_PTR_SET_RVALUE(CRAggregationConfiguration_, CRAggregationConfiguration) };


    // CRAggregationEnabled Field Functions 
    bool hasCRAggregationEnabled() const { return this->CRAggregationEnabled_ != nullptr;};
    void deleteCRAggregationEnabled() { this->CRAggregationEnabled_ = nullptr;};
    inline bool CRAggregationEnabled() const { DARABONBA_PTR_GET_DEFAULT(CRAggregationEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setCRAggregationEnabled(bool CRAggregationEnabled) { DARABONBA_PTR_SET_VALUE(CRAggregationEnabled_, CRAggregationEnabled) };


    // discoverySelectors Field Functions 
    bool hasDiscoverySelectors() const { return this->discoverySelectors_ != nullptr;};
    void deleteDiscoverySelectors() { this->discoverySelectors_ = nullptr;};
    inline const vector<Darabonba::Json> & discoverySelectors() const { DARABONBA_PTR_GET_CONST(discoverySelectors_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> discoverySelectors() { DARABONBA_PTR_GET(discoverySelectors_, vector<Darabonba::Json>) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setDiscoverySelectors(const vector<Darabonba::Json> & discoverySelectors) { DARABONBA_PTR_SET_VALUE(discoverySelectors_, discoverySelectors) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setDiscoverySelectors(vector<Darabonba::Json> && discoverySelectors) { DARABONBA_PTR_SET_RVALUE(discoverySelectors_, discoverySelectors) };


    // istioCRHistory Field Functions 
    bool hasIstioCRHistory() const { return this->istioCRHistory_ != nullptr;};
    void deleteIstioCRHistory() { this->istioCRHistory_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory & istioCRHistory() const { DARABONBA_PTR_GET_CONST(istioCRHistory_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory istioCRHistory() { DARABONBA_PTR_GET(istioCRHistory_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setIstioCRHistory(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory & istioCRHistory) { DARABONBA_PTR_SET_VALUE(istioCRHistory_, istioCRHistory) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setIstioCRHistory(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory && istioCRHistory) { DARABONBA_PTR_SET_RVALUE(istioCRHistory_, istioCRHistory) };


    // istiodExtraConfiguration Field Functions 
    bool hasIstiodExtraConfiguration() const { return this->istiodExtraConfiguration_ != nullptr;};
    void deleteIstiodExtraConfiguration() { this->istiodExtraConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration & istiodExtraConfiguration() const { DARABONBA_PTR_GET_CONST(istiodExtraConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration istiodExtraConfiguration() { DARABONBA_PTR_GET(istiodExtraConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setIstiodExtraConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration & istiodExtraConfiguration) { DARABONBA_PTR_SET_VALUE(istiodExtraConfiguration_, istiodExtraConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setIstiodExtraConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration && istiodExtraConfiguration) { DARABONBA_PTR_SET_RVALUE(istiodExtraConfiguration_, istiodExtraConfiguration) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle & lifecycle() const { DARABONBA_PTR_GET_CONST(lifecycle_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle lifecycle() { DARABONBA_PTR_GET(lifecycle_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setLifecycle(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle & lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setLifecycle(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle && lifecycle) { DARABONBA_PTR_SET_RVALUE(lifecycle_, lifecycle) };


    // multiBuffer Field Functions 
    bool hasMultiBuffer() const { return this->multiBuffer_ != nullptr;};
    void deleteMultiBuffer() { this->multiBuffer_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer & multiBuffer() const { DARABONBA_PTR_GET_CONST(multiBuffer_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer multiBuffer() { DARABONBA_PTR_GET(multiBuffer_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setMultiBuffer(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer & multiBuffer) { DARABONBA_PTR_SET_VALUE(multiBuffer_, multiBuffer) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setMultiBuffer(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer && multiBuffer) { DARABONBA_PTR_SET_RVALUE(multiBuffer_, multiBuffer) };


    // NFDConfiguration Field Functions 
    bool hasNFDConfiguration() const { return this->NFDConfiguration_ != nullptr;};
    void deleteNFDConfiguration() { this->NFDConfiguration_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration & NFDConfiguration() const { DARABONBA_PTR_GET_CONST(NFDConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration NFDConfiguration() { DARABONBA_PTR_GET(NFDConfiguration_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setNFDConfiguration(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration & NFDConfiguration) { DARABONBA_PTR_SET_VALUE(NFDConfiguration_, NFDConfiguration) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setNFDConfiguration(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration && NFDConfiguration) { DARABONBA_PTR_SET_RVALUE(NFDConfiguration_, NFDConfiguration) };


    // OPAScopeInjection Field Functions 
    bool hasOPAScopeInjection() const { return this->OPAScopeInjection_ != nullptr;};
    void deleteOPAScopeInjection() { this->OPAScopeInjection_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection & OPAScopeInjection() const { DARABONBA_PTR_GET_CONST(OPAScopeInjection_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection OPAScopeInjection() { DARABONBA_PTR_GET(OPAScopeInjection_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setOPAScopeInjection(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection & OPAScopeInjection) { DARABONBA_PTR_SET_VALUE(OPAScopeInjection_, OPAScopeInjection) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setOPAScopeInjection(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection && OPAScopeInjection) { DARABONBA_PTR_SET_RVALUE(OPAScopeInjection_, OPAScopeInjection) };


    // playground Field Functions 
    bool hasPlayground() const { return this->playground_ != nullptr;};
    void deletePlayground() { this->playground_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground & playground() const { DARABONBA_PTR_GET_CONST(playground_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground playground() { DARABONBA_PTR_GET(playground_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setPlayground(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground & playground) { DARABONBA_PTR_SET_VALUE(playground_, playground) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setPlayground(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground && playground) { DARABONBA_PTR_SET_RVALUE(playground_, playground) };


    // sidecarProxyInitResourceLimit Field Functions 
    bool hasSidecarProxyInitResourceLimit() const { return this->sidecarProxyInitResourceLimit_ != nullptr;};
    void deleteSidecarProxyInitResourceLimit() { this->sidecarProxyInitResourceLimit_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit & sidecarProxyInitResourceLimit() const { DARABONBA_PTR_GET_CONST(sidecarProxyInitResourceLimit_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit sidecarProxyInitResourceLimit() { DARABONBA_PTR_GET(sidecarProxyInitResourceLimit_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setSidecarProxyInitResourceLimit(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit & sidecarProxyInitResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyInitResourceLimit_, sidecarProxyInitResourceLimit) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setSidecarProxyInitResourceLimit(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit && sidecarProxyInitResourceLimit) { DARABONBA_PTR_SET_RVALUE(sidecarProxyInitResourceLimit_, sidecarProxyInitResourceLimit) };


    // sidecarProxyInitResourceRequest Field Functions 
    bool hasSidecarProxyInitResourceRequest() const { return this->sidecarProxyInitResourceRequest_ != nullptr;};
    void deleteSidecarProxyInitResourceRequest() { this->sidecarProxyInitResourceRequest_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest & sidecarProxyInitResourceRequest() const { DARABONBA_PTR_GET_CONST(sidecarProxyInitResourceRequest_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest sidecarProxyInitResourceRequest() { DARABONBA_PTR_GET(sidecarProxyInitResourceRequest_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setSidecarProxyInitResourceRequest(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest & sidecarProxyInitResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyInitResourceRequest_, sidecarProxyInitResourceRequest) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setSidecarProxyInitResourceRequest(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest && sidecarProxyInitResourceRequest) { DARABONBA_PTR_SET_RVALUE(sidecarProxyInitResourceRequest_, sidecarProxyInitResourceRequest) };


    // terminationDrainDuration Field Functions 
    bool hasTerminationDrainDuration() const { return this->terminationDrainDuration_ != nullptr;};
    void deleteTerminationDrainDuration() { this->terminationDrainDuration_ = nullptr;};
    inline string terminationDrainDuration() const { DARABONBA_PTR_GET_DEFAULT(terminationDrainDuration_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration& setTerminationDrainDuration(string terminationDrainDuration) { DARABONBA_PTR_SET_VALUE(terminationDrainDuration_, terminationDrainDuration) };


  protected:
    // The configurations of additional features for access log collection.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAccessLogExtraConf> accessLogExtraConf_ = nullptr;
    // The configurations of adaptive xDS optimization.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAdaptiveXdsConfiguration> adaptiveXdsConfiguration_ = nullptr;
    // The configurations of automatic diagnostics for the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationAutoDiagnosis> autoDiagnosis_ = nullptr;
    // Access to Istio resources by using the Kubernetes API on the data plane.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationCRAggregationConfiguration> CRAggregationConfiguration_ = nullptr;
    // Indicates whether the Kubernetes API of clusters on the data plane can be used to access Istio resources. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> CRAggregationEnabled_ = nullptr;
    // The label selectors used to specify the namespaces of the clusters on the data plane. The control plane discovers and processes only application services in the specified namespaces.
    std::shared_ptr<vector<Darabonba::Json>> discoverySelectors_ = nullptr;
    // The configurations of the rollback feature for Istio resources.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory> istioCRHistory_ = nullptr;
    // Additional configurations for Istiod.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstiodExtraConfiguration> istiodExtraConfiguration_ = nullptr;
    // The lifecycle of Istio Proxy.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle> lifecycle_ = nullptr;
    // The information about Transport Layer Security (TLS) acceleration based on MultiBuffer.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer> multiBuffer_ = nullptr;
    // The configurations of Node Feature Discovery (NFD).
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationNFDConfiguration> NFDConfiguration_ = nullptr;
    // The configurations of the feature of controlling the OPA injection scope.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationOPAScopeInjection> OPAScopeInjection_ = nullptr;
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationPlayground> playground_ = nullptr;
    // The resource limits on the istio-init container.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit> sidecarProxyInitResourceLimit_ = nullptr;
    // The resources that are required by the istio-init container.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest> sidecarProxyInitResourceRequest_ = nullptr;
    // The maximum period of time that Istio Proxy waits for a request to end.
    std::shared_ptr<string> terminationDrainDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
