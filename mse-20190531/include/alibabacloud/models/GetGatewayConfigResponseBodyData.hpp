// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter.hpp>
#include <alibabacloud/models/GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs.hpp>
#include <alibabacloud/models/GetGatewayConfigResponseBodyDataSlsConfigDetails.hpp>
#include <alibabacloud/models/GetGatewayConfigResponseBodyDataXtraceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogHeader, accessLogHeader_);
      DARABONBA_PTR_TO_JSON(DownstreamConnectionBufferLimits, downstreamConnectionBufferLimits_);
      DARABONBA_PTR_TO_JSON(DownstreamHttp2MaxConcurrentStream, downstreamHttp2MaxConcurrentStream_);
      DARABONBA_PTR_TO_JSON(DownstreamIdleTime, downstreamIdleTime_);
      DARABONBA_PTR_TO_JSON(EnableCustomAuthConfigPush, enableCustomAuthConfigPush_);
      DARABONBA_PTR_TO_JSON(EnableGenerateRequestId, enableGenerateRequestId_);
      DARABONBA_PTR_TO_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_TO_JSON(EnableGzipHardwareAccelerate, enableGzipHardwareAccelerate_);
      DARABONBA_PTR_TO_JSON(EnableHardwareAccelerate, enableHardwareAccelerate_);
      DARABONBA_PTR_TO_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_TO_JSON(EnableHttp3, enableHttp3_);
      DARABONBA_PTR_TO_JSON(EnableK8sSourceWorkloadFilter, enableK8sSourceWorkloadFilter_);
      DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
      DARABONBA_PTR_TO_JSON(EnableSlashMerge, enableSlashMerge_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(EnableXffTrustedCidrs, enableXffTrustedCidrs_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(InitialConnectionWindowSize, initialConnectionWindowSize_);
      DARABONBA_PTR_TO_JSON(InitialStreamWindowSize, initialStreamWindowSize_);
      DARABONBA_PTR_TO_JSON(KeepaliveHeaderTimeout, keepaliveHeaderTimeout_);
      DARABONBA_PTR_TO_JSON(LiteMetrics, liteMetrics_);
      DARABONBA_PTR_TO_JSON(LogFilterConfig, logFilterConfig_);
      DARABONBA_PTR_TO_JSON(NoSupportedConfigList, noSupportedConfigList_);
      DARABONBA_PTR_TO_JSON(PathWithEscapedSlashes, pathWithEscapedSlashes_);
      DARABONBA_PTR_TO_JSON(PreserveExternalRequestID, preserveExternalRequestID_);
      DARABONBA_PTR_TO_JSON(PreserveHeaderFormat, preserveHeaderFormat_);
      DARABONBA_PTR_TO_JSON(SlsConfigDetails, slsConfigDetails_);
      DARABONBA_PTR_TO_JSON(SupportWaf, supportWaf_);
      DARABONBA_PTR_TO_JSON(UpstreamIdleTimeout, upstreamIdleTimeout_);
      DARABONBA_PTR_TO_JSON(WebsocketTermGracePeriod, websocketTermGracePeriod_);
      DARABONBA_PTR_TO_JSON(XffTrustedNum, xffTrustedNum_);
      DARABONBA_PTR_TO_JSON(XtraceDetails, xtraceDetails_);
      DARABONBA_PTR_TO_JSON(ZipAlgorithm, zipAlgorithm_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogHeader, accessLogHeader_);
      DARABONBA_PTR_FROM_JSON(DownstreamConnectionBufferLimits, downstreamConnectionBufferLimits_);
      DARABONBA_PTR_FROM_JSON(DownstreamHttp2MaxConcurrentStream, downstreamHttp2MaxConcurrentStream_);
      DARABONBA_PTR_FROM_JSON(DownstreamIdleTime, downstreamIdleTime_);
      DARABONBA_PTR_FROM_JSON(EnableCustomAuthConfigPush, enableCustomAuthConfigPush_);
      DARABONBA_PTR_FROM_JSON(EnableGenerateRequestId, enableGenerateRequestId_);
      DARABONBA_PTR_FROM_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_FROM_JSON(EnableGzipHardwareAccelerate, enableGzipHardwareAccelerate_);
      DARABONBA_PTR_FROM_JSON(EnableHardwareAccelerate, enableHardwareAccelerate_);
      DARABONBA_PTR_FROM_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_FROM_JSON(EnableHttp3, enableHttp3_);
      DARABONBA_PTR_FROM_JSON(EnableK8sSourceWorkloadFilter, enableK8sSourceWorkloadFilter_);
      DARABONBA_PTR_FROM_JSON(EnableProxyProtocol, enableProxyProtocol_);
      DARABONBA_PTR_FROM_JSON(EnableSlashMerge, enableSlashMerge_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(EnableXffTrustedCidrs, enableXffTrustedCidrs_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(InitialConnectionWindowSize, initialConnectionWindowSize_);
      DARABONBA_PTR_FROM_JSON(InitialStreamWindowSize, initialStreamWindowSize_);
      DARABONBA_PTR_FROM_JSON(KeepaliveHeaderTimeout, keepaliveHeaderTimeout_);
      DARABONBA_PTR_FROM_JSON(LiteMetrics, liteMetrics_);
      DARABONBA_PTR_FROM_JSON(LogFilterConfig, logFilterConfig_);
      DARABONBA_PTR_FROM_JSON(NoSupportedConfigList, noSupportedConfigList_);
      DARABONBA_PTR_FROM_JSON(PathWithEscapedSlashes, pathWithEscapedSlashes_);
      DARABONBA_PTR_FROM_JSON(PreserveExternalRequestID, preserveExternalRequestID_);
      DARABONBA_PTR_FROM_JSON(PreserveHeaderFormat, preserveHeaderFormat_);
      DARABONBA_PTR_FROM_JSON(SlsConfigDetails, slsConfigDetails_);
      DARABONBA_PTR_FROM_JSON(SupportWaf, supportWaf_);
      DARABONBA_PTR_FROM_JSON(UpstreamIdleTimeout, upstreamIdleTimeout_);
      DARABONBA_PTR_FROM_JSON(WebsocketTermGracePeriod, websocketTermGracePeriod_);
      DARABONBA_PTR_FROM_JSON(XffTrustedNum, xffTrustedNum_);
      DARABONBA_PTR_FROM_JSON(XtraceDetails, xtraceDetails_);
      DARABONBA_PTR_FROM_JSON(ZipAlgorithm, zipAlgorithm_);
    };
    GetGatewayConfigResponseBodyData() = default ;
    GetGatewayConfigResponseBodyData(const GetGatewayConfigResponseBodyData &) = default ;
    GetGatewayConfigResponseBodyData(GetGatewayConfigResponseBodyData &&) = default ;
    GetGatewayConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBodyData() = default ;
    GetGatewayConfigResponseBodyData& operator=(const GetGatewayConfigResponseBodyData &) = default ;
    GetGatewayConfigResponseBodyData& operator=(GetGatewayConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogHeader_ == nullptr
        && return this->downstreamConnectionBufferLimits_ == nullptr && return this->downstreamHttp2MaxConcurrentStream_ == nullptr && return this->downstreamIdleTime_ == nullptr && return this->enableCustomAuthConfigPush_ == nullptr && return this->enableGenerateRequestId_ == nullptr
        && return this->enableGzip_ == nullptr && return this->enableGzipHardwareAccelerate_ == nullptr && return this->enableHardwareAccelerate_ == nullptr && return this->enableHttp2_ == nullptr && return this->enableHttp3_ == nullptr
        && return this->enableK8sSourceWorkloadFilter_ == nullptr && return this->enableProxyProtocol_ == nullptr && return this->enableSlashMerge_ == nullptr && return this->enableWaf_ == nullptr && return this->enableXffTrustedCidrs_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->initialConnectionWindowSize_ == nullptr && return this->initialStreamWindowSize_ == nullptr && return this->keepaliveHeaderTimeout_ == nullptr && return this->liteMetrics_ == nullptr
        && return this->logFilterConfig_ == nullptr && return this->noSupportedConfigList_ == nullptr && return this->pathWithEscapedSlashes_ == nullptr && return this->preserveExternalRequestID_ == nullptr && return this->preserveHeaderFormat_ == nullptr
        && return this->slsConfigDetails_ == nullptr && return this->supportWaf_ == nullptr && return this->upstreamIdleTimeout_ == nullptr && return this->websocketTermGracePeriod_ == nullptr && return this->xffTrustedNum_ == nullptr
        && return this->xtraceDetails_ == nullptr && return this->zipAlgorithm_ == nullptr; };
    // accessLogHeader Field Functions 
    bool hasAccessLogHeader() const { return this->accessLogHeader_ != nullptr;};
    void deleteAccessLogHeader() { this->accessLogHeader_ = nullptr;};
    inline string accessLogHeader() const { DARABONBA_PTR_GET_DEFAULT(accessLogHeader_, "") };
    inline GetGatewayConfigResponseBodyData& setAccessLogHeader(string accessLogHeader) { DARABONBA_PTR_SET_VALUE(accessLogHeader_, accessLogHeader) };


    // downstreamConnectionBufferLimits Field Functions 
    bool hasDownstreamConnectionBufferLimits() const { return this->downstreamConnectionBufferLimits_ != nullptr;};
    void deleteDownstreamConnectionBufferLimits() { this->downstreamConnectionBufferLimits_ = nullptr;};
    inline int32_t downstreamConnectionBufferLimits() const { DARABONBA_PTR_GET_DEFAULT(downstreamConnectionBufferLimits_, 0) };
    inline GetGatewayConfigResponseBodyData& setDownstreamConnectionBufferLimits(int32_t downstreamConnectionBufferLimits) { DARABONBA_PTR_SET_VALUE(downstreamConnectionBufferLimits_, downstreamConnectionBufferLimits) };


    // downstreamHttp2MaxConcurrentStream Field Functions 
    bool hasDownstreamHttp2MaxConcurrentStream() const { return this->downstreamHttp2MaxConcurrentStream_ != nullptr;};
    void deleteDownstreamHttp2MaxConcurrentStream() { this->downstreamHttp2MaxConcurrentStream_ = nullptr;};
    inline int32_t downstreamHttp2MaxConcurrentStream() const { DARABONBA_PTR_GET_DEFAULT(downstreamHttp2MaxConcurrentStream_, 0) };
    inline GetGatewayConfigResponseBodyData& setDownstreamHttp2MaxConcurrentStream(int32_t downstreamHttp2MaxConcurrentStream) { DARABONBA_PTR_SET_VALUE(downstreamHttp2MaxConcurrentStream_, downstreamHttp2MaxConcurrentStream) };


    // downstreamIdleTime Field Functions 
    bool hasDownstreamIdleTime() const { return this->downstreamIdleTime_ != nullptr;};
    void deleteDownstreamIdleTime() { this->downstreamIdleTime_ = nullptr;};
    inline int32_t downstreamIdleTime() const { DARABONBA_PTR_GET_DEFAULT(downstreamIdleTime_, 0) };
    inline GetGatewayConfigResponseBodyData& setDownstreamIdleTime(int32_t downstreamIdleTime) { DARABONBA_PTR_SET_VALUE(downstreamIdleTime_, downstreamIdleTime) };


    // enableCustomAuthConfigPush Field Functions 
    bool hasEnableCustomAuthConfigPush() const { return this->enableCustomAuthConfigPush_ != nullptr;};
    void deleteEnableCustomAuthConfigPush() { this->enableCustomAuthConfigPush_ = nullptr;};
    inline string enableCustomAuthConfigPush() const { DARABONBA_PTR_GET_DEFAULT(enableCustomAuthConfigPush_, "") };
    inline GetGatewayConfigResponseBodyData& setEnableCustomAuthConfigPush(string enableCustomAuthConfigPush) { DARABONBA_PTR_SET_VALUE(enableCustomAuthConfigPush_, enableCustomAuthConfigPush) };


    // enableGenerateRequestId Field Functions 
    bool hasEnableGenerateRequestId() const { return this->enableGenerateRequestId_ != nullptr;};
    void deleteEnableGenerateRequestId() { this->enableGenerateRequestId_ = nullptr;};
    inline bool enableGenerateRequestId() const { DARABONBA_PTR_GET_DEFAULT(enableGenerateRequestId_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableGenerateRequestId(bool enableGenerateRequestId) { DARABONBA_PTR_SET_VALUE(enableGenerateRequestId_, enableGenerateRequestId) };


    // enableGzip Field Functions 
    bool hasEnableGzip() const { return this->enableGzip_ != nullptr;};
    void deleteEnableGzip() { this->enableGzip_ = nullptr;};
    inline bool enableGzip() const { DARABONBA_PTR_GET_DEFAULT(enableGzip_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableGzip(bool enableGzip) { DARABONBA_PTR_SET_VALUE(enableGzip_, enableGzip) };


    // enableGzipHardwareAccelerate Field Functions 
    bool hasEnableGzipHardwareAccelerate() const { return this->enableGzipHardwareAccelerate_ != nullptr;};
    void deleteEnableGzipHardwareAccelerate() { this->enableGzipHardwareAccelerate_ = nullptr;};
    inline bool enableGzipHardwareAccelerate() const { DARABONBA_PTR_GET_DEFAULT(enableGzipHardwareAccelerate_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableGzipHardwareAccelerate(bool enableGzipHardwareAccelerate) { DARABONBA_PTR_SET_VALUE(enableGzipHardwareAccelerate_, enableGzipHardwareAccelerate) };


    // enableHardwareAccelerate Field Functions 
    bool hasEnableHardwareAccelerate() const { return this->enableHardwareAccelerate_ != nullptr;};
    void deleteEnableHardwareAccelerate() { this->enableHardwareAccelerate_ = nullptr;};
    inline bool enableHardwareAccelerate() const { DARABONBA_PTR_GET_DEFAULT(enableHardwareAccelerate_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableHardwareAccelerate(bool enableHardwareAccelerate) { DARABONBA_PTR_SET_VALUE(enableHardwareAccelerate_, enableHardwareAccelerate) };


    // enableHttp2 Field Functions 
    bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
    void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
    inline bool enableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableHttp2(bool enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


    // enableHttp3 Field Functions 
    bool hasEnableHttp3() const { return this->enableHttp3_ != nullptr;};
    void deleteEnableHttp3() { this->enableHttp3_ = nullptr;};
    inline bool enableHttp3() const { DARABONBA_PTR_GET_DEFAULT(enableHttp3_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableHttp3(bool enableHttp3) { DARABONBA_PTR_SET_VALUE(enableHttp3_, enableHttp3) };


    // enableK8sSourceWorkloadFilter Field Functions 
    bool hasEnableK8sSourceWorkloadFilter() const { return this->enableK8sSourceWorkloadFilter_ != nullptr;};
    void deleteEnableK8sSourceWorkloadFilter() { this->enableK8sSourceWorkloadFilter_ = nullptr;};
    inline const Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter & enableK8sSourceWorkloadFilter() const { DARABONBA_PTR_GET_CONST(enableK8sSourceWorkloadFilter_, Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter) };
    inline Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter enableK8sSourceWorkloadFilter() { DARABONBA_PTR_GET(enableK8sSourceWorkloadFilter_, Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter) };
    inline GetGatewayConfigResponseBodyData& setEnableK8sSourceWorkloadFilter(const Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter & enableK8sSourceWorkloadFilter) { DARABONBA_PTR_SET_VALUE(enableK8sSourceWorkloadFilter_, enableK8sSourceWorkloadFilter) };
    inline GetGatewayConfigResponseBodyData& setEnableK8sSourceWorkloadFilter(Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter && enableK8sSourceWorkloadFilter) { DARABONBA_PTR_SET_RVALUE(enableK8sSourceWorkloadFilter_, enableK8sSourceWorkloadFilter) };


    // enableProxyProtocol Field Functions 
    bool hasEnableProxyProtocol() const { return this->enableProxyProtocol_ != nullptr;};
    void deleteEnableProxyProtocol() { this->enableProxyProtocol_ = nullptr;};
    inline bool enableProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableProxyProtocol_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableProxyProtocol(bool enableProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableProxyProtocol_, enableProxyProtocol) };


    // enableSlashMerge Field Functions 
    bool hasEnableSlashMerge() const { return this->enableSlashMerge_ != nullptr;};
    void deleteEnableSlashMerge() { this->enableSlashMerge_ = nullptr;};
    inline bool enableSlashMerge() const { DARABONBA_PTR_GET_DEFAULT(enableSlashMerge_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableSlashMerge(bool enableSlashMerge) { DARABONBA_PTR_SET_VALUE(enableSlashMerge_, enableSlashMerge) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline GetGatewayConfigResponseBodyData& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // enableXffTrustedCidrs Field Functions 
    bool hasEnableXffTrustedCidrs() const { return this->enableXffTrustedCidrs_ != nullptr;};
    void deleteEnableXffTrustedCidrs() { this->enableXffTrustedCidrs_ = nullptr;};
    inline const Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs & enableXffTrustedCidrs() const { DARABONBA_PTR_GET_CONST(enableXffTrustedCidrs_, Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs) };
    inline Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs enableXffTrustedCidrs() { DARABONBA_PTR_GET(enableXffTrustedCidrs_, Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs) };
    inline GetGatewayConfigResponseBodyData& setEnableXffTrustedCidrs(const Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs & enableXffTrustedCidrs) { DARABONBA_PTR_SET_VALUE(enableXffTrustedCidrs_, enableXffTrustedCidrs) };
    inline GetGatewayConfigResponseBodyData& setEnableXffTrustedCidrs(Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs && enableXffTrustedCidrs) { DARABONBA_PTR_SET_RVALUE(enableXffTrustedCidrs_, enableXffTrustedCidrs) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayConfigResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // initialConnectionWindowSize Field Functions 
    bool hasInitialConnectionWindowSize() const { return this->initialConnectionWindowSize_ != nullptr;};
    void deleteInitialConnectionWindowSize() { this->initialConnectionWindowSize_ = nullptr;};
    inline int32_t initialConnectionWindowSize() const { DARABONBA_PTR_GET_DEFAULT(initialConnectionWindowSize_, 0) };
    inline GetGatewayConfigResponseBodyData& setInitialConnectionWindowSize(int32_t initialConnectionWindowSize) { DARABONBA_PTR_SET_VALUE(initialConnectionWindowSize_, initialConnectionWindowSize) };


    // initialStreamWindowSize Field Functions 
    bool hasInitialStreamWindowSize() const { return this->initialStreamWindowSize_ != nullptr;};
    void deleteInitialStreamWindowSize() { this->initialStreamWindowSize_ = nullptr;};
    inline int32_t initialStreamWindowSize() const { DARABONBA_PTR_GET_DEFAULT(initialStreamWindowSize_, 0) };
    inline GetGatewayConfigResponseBodyData& setInitialStreamWindowSize(int32_t initialStreamWindowSize) { DARABONBA_PTR_SET_VALUE(initialStreamWindowSize_, initialStreamWindowSize) };


    // keepaliveHeaderTimeout Field Functions 
    bool hasKeepaliveHeaderTimeout() const { return this->keepaliveHeaderTimeout_ != nullptr;};
    void deleteKeepaliveHeaderTimeout() { this->keepaliveHeaderTimeout_ = nullptr;};
    inline int32_t keepaliveHeaderTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveHeaderTimeout_, 0) };
    inline GetGatewayConfigResponseBodyData& setKeepaliveHeaderTimeout(int32_t keepaliveHeaderTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveHeaderTimeout_, keepaliveHeaderTimeout) };


    // liteMetrics Field Functions 
    bool hasLiteMetrics() const { return this->liteMetrics_ != nullptr;};
    void deleteLiteMetrics() { this->liteMetrics_ = nullptr;};
    inline bool liteMetrics() const { DARABONBA_PTR_GET_DEFAULT(liteMetrics_, false) };
    inline GetGatewayConfigResponseBodyData& setLiteMetrics(bool liteMetrics) { DARABONBA_PTR_SET_VALUE(liteMetrics_, liteMetrics) };


    // logFilterConfig Field Functions 
    bool hasLogFilterConfig() const { return this->logFilterConfig_ != nullptr;};
    void deleteLogFilterConfig() { this->logFilterConfig_ = nullptr;};
    inline string logFilterConfig() const { DARABONBA_PTR_GET_DEFAULT(logFilterConfig_, "") };
    inline GetGatewayConfigResponseBodyData& setLogFilterConfig(string logFilterConfig) { DARABONBA_PTR_SET_VALUE(logFilterConfig_, logFilterConfig) };


    // noSupportedConfigList Field Functions 
    bool hasNoSupportedConfigList() const { return this->noSupportedConfigList_ != nullptr;};
    void deleteNoSupportedConfigList() { this->noSupportedConfigList_ = nullptr;};
    inline string noSupportedConfigList() const { DARABONBA_PTR_GET_DEFAULT(noSupportedConfigList_, "") };
    inline GetGatewayConfigResponseBodyData& setNoSupportedConfigList(string noSupportedConfigList) { DARABONBA_PTR_SET_VALUE(noSupportedConfigList_, noSupportedConfigList) };


    // pathWithEscapedSlashes Field Functions 
    bool hasPathWithEscapedSlashes() const { return this->pathWithEscapedSlashes_ != nullptr;};
    void deletePathWithEscapedSlashes() { this->pathWithEscapedSlashes_ = nullptr;};
    inline string pathWithEscapedSlashes() const { DARABONBA_PTR_GET_DEFAULT(pathWithEscapedSlashes_, "") };
    inline GetGatewayConfigResponseBodyData& setPathWithEscapedSlashes(string pathWithEscapedSlashes) { DARABONBA_PTR_SET_VALUE(pathWithEscapedSlashes_, pathWithEscapedSlashes) };


    // preserveExternalRequestID Field Functions 
    bool hasPreserveExternalRequestID() const { return this->preserveExternalRequestID_ != nullptr;};
    void deletePreserveExternalRequestID() { this->preserveExternalRequestID_ = nullptr;};
    inline bool preserveExternalRequestID() const { DARABONBA_PTR_GET_DEFAULT(preserveExternalRequestID_, false) };
    inline GetGatewayConfigResponseBodyData& setPreserveExternalRequestID(bool preserveExternalRequestID) { DARABONBA_PTR_SET_VALUE(preserveExternalRequestID_, preserveExternalRequestID) };


    // preserveHeaderFormat Field Functions 
    bool hasPreserveHeaderFormat() const { return this->preserveHeaderFormat_ != nullptr;};
    void deletePreserveHeaderFormat() { this->preserveHeaderFormat_ = nullptr;};
    inline bool preserveHeaderFormat() const { DARABONBA_PTR_GET_DEFAULT(preserveHeaderFormat_, false) };
    inline GetGatewayConfigResponseBodyData& setPreserveHeaderFormat(bool preserveHeaderFormat) { DARABONBA_PTR_SET_VALUE(preserveHeaderFormat_, preserveHeaderFormat) };


    // slsConfigDetails Field Functions 
    bool hasSlsConfigDetails() const { return this->slsConfigDetails_ != nullptr;};
    void deleteSlsConfigDetails() { this->slsConfigDetails_ = nullptr;};
    inline const Models::GetGatewayConfigResponseBodyDataSlsConfigDetails & slsConfigDetails() const { DARABONBA_PTR_GET_CONST(slsConfigDetails_, Models::GetGatewayConfigResponseBodyDataSlsConfigDetails) };
    inline Models::GetGatewayConfigResponseBodyDataSlsConfigDetails slsConfigDetails() { DARABONBA_PTR_GET(slsConfigDetails_, Models::GetGatewayConfigResponseBodyDataSlsConfigDetails) };
    inline GetGatewayConfigResponseBodyData& setSlsConfigDetails(const Models::GetGatewayConfigResponseBodyDataSlsConfigDetails & slsConfigDetails) { DARABONBA_PTR_SET_VALUE(slsConfigDetails_, slsConfigDetails) };
    inline GetGatewayConfigResponseBodyData& setSlsConfigDetails(Models::GetGatewayConfigResponseBodyDataSlsConfigDetails && slsConfigDetails) { DARABONBA_PTR_SET_RVALUE(slsConfigDetails_, slsConfigDetails) };


    // supportWaf Field Functions 
    bool hasSupportWaf() const { return this->supportWaf_ != nullptr;};
    void deleteSupportWaf() { this->supportWaf_ = nullptr;};
    inline bool supportWaf() const { DARABONBA_PTR_GET_DEFAULT(supportWaf_, false) };
    inline GetGatewayConfigResponseBodyData& setSupportWaf(bool supportWaf) { DARABONBA_PTR_SET_VALUE(supportWaf_, supportWaf) };


    // upstreamIdleTimeout Field Functions 
    bool hasUpstreamIdleTimeout() const { return this->upstreamIdleTimeout_ != nullptr;};
    void deleteUpstreamIdleTimeout() { this->upstreamIdleTimeout_ = nullptr;};
    inline int32_t upstreamIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(upstreamIdleTimeout_, 0) };
    inline GetGatewayConfigResponseBodyData& setUpstreamIdleTimeout(int32_t upstreamIdleTimeout) { DARABONBA_PTR_SET_VALUE(upstreamIdleTimeout_, upstreamIdleTimeout) };


    // websocketTermGracePeriod Field Functions 
    bool hasWebsocketTermGracePeriod() const { return this->websocketTermGracePeriod_ != nullptr;};
    void deleteWebsocketTermGracePeriod() { this->websocketTermGracePeriod_ = nullptr;};
    inline int32_t websocketTermGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(websocketTermGracePeriod_, 0) };
    inline GetGatewayConfigResponseBodyData& setWebsocketTermGracePeriod(int32_t websocketTermGracePeriod) { DARABONBA_PTR_SET_VALUE(websocketTermGracePeriod_, websocketTermGracePeriod) };


    // xffTrustedNum Field Functions 
    bool hasXffTrustedNum() const { return this->xffTrustedNum_ != nullptr;};
    void deleteXffTrustedNum() { this->xffTrustedNum_ = nullptr;};
    inline int32_t xffTrustedNum() const { DARABONBA_PTR_GET_DEFAULT(xffTrustedNum_, 0) };
    inline GetGatewayConfigResponseBodyData& setXffTrustedNum(int32_t xffTrustedNum) { DARABONBA_PTR_SET_VALUE(xffTrustedNum_, xffTrustedNum) };


    // xtraceDetails Field Functions 
    bool hasXtraceDetails() const { return this->xtraceDetails_ != nullptr;};
    void deleteXtraceDetails() { this->xtraceDetails_ = nullptr;};
    inline const Models::GetGatewayConfigResponseBodyDataXtraceDetails & xtraceDetails() const { DARABONBA_PTR_GET_CONST(xtraceDetails_, Models::GetGatewayConfigResponseBodyDataXtraceDetails) };
    inline Models::GetGatewayConfigResponseBodyDataXtraceDetails xtraceDetails() { DARABONBA_PTR_GET(xtraceDetails_, Models::GetGatewayConfigResponseBodyDataXtraceDetails) };
    inline GetGatewayConfigResponseBodyData& setXtraceDetails(const Models::GetGatewayConfigResponseBodyDataXtraceDetails & xtraceDetails) { DARABONBA_PTR_SET_VALUE(xtraceDetails_, xtraceDetails) };
    inline GetGatewayConfigResponseBodyData& setXtraceDetails(Models::GetGatewayConfigResponseBodyDataXtraceDetails && xtraceDetails) { DARABONBA_PTR_SET_RVALUE(xtraceDetails_, xtraceDetails) };


    // zipAlgorithm Field Functions 
    bool hasZipAlgorithm() const { return this->zipAlgorithm_ != nullptr;};
    void deleteZipAlgorithm() { this->zipAlgorithm_ = nullptr;};
    inline string zipAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(zipAlgorithm_, "") };
    inline GetGatewayConfigResponseBodyData& setZipAlgorithm(string zipAlgorithm) { DARABONBA_PTR_SET_VALUE(zipAlgorithm_, zipAlgorithm) };


  protected:
    std::shared_ptr<string> accessLogHeader_ = nullptr;
    std::shared_ptr<int32_t> downstreamConnectionBufferLimits_ = nullptr;
    std::shared_ptr<int32_t> downstreamHttp2MaxConcurrentStream_ = nullptr;
    std::shared_ptr<int32_t> downstreamIdleTime_ = nullptr;
    std::shared_ptr<string> enableCustomAuthConfigPush_ = nullptr;
    std::shared_ptr<bool> enableGenerateRequestId_ = nullptr;
    std::shared_ptr<bool> enableGzip_ = nullptr;
    std::shared_ptr<bool> enableGzipHardwareAccelerate_ = nullptr;
    std::shared_ptr<bool> enableHardwareAccelerate_ = nullptr;
    std::shared_ptr<bool> enableHttp2_ = nullptr;
    std::shared_ptr<bool> enableHttp3_ = nullptr;
    std::shared_ptr<Models::GetGatewayConfigResponseBodyDataEnableK8sSourceWorkloadFilter> enableK8sSourceWorkloadFilter_ = nullptr;
    std::shared_ptr<bool> enableProxyProtocol_ = nullptr;
    std::shared_ptr<bool> enableSlashMerge_ = nullptr;
    std::shared_ptr<bool> enableWaf_ = nullptr;
    std::shared_ptr<Models::GetGatewayConfigResponseBodyDataEnableXffTrustedCidrs> enableXffTrustedCidrs_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<int32_t> initialConnectionWindowSize_ = nullptr;
    std::shared_ptr<int32_t> initialStreamWindowSize_ = nullptr;
    std::shared_ptr<int32_t> keepaliveHeaderTimeout_ = nullptr;
    std::shared_ptr<bool> liteMetrics_ = nullptr;
    std::shared_ptr<string> logFilterConfig_ = nullptr;
    std::shared_ptr<string> noSupportedConfigList_ = nullptr;
    std::shared_ptr<string> pathWithEscapedSlashes_ = nullptr;
    std::shared_ptr<bool> preserveExternalRequestID_ = nullptr;
    std::shared_ptr<bool> preserveHeaderFormat_ = nullptr;
    std::shared_ptr<Models::GetGatewayConfigResponseBodyDataSlsConfigDetails> slsConfigDetails_ = nullptr;
    std::shared_ptr<bool> supportWaf_ = nullptr;
    std::shared_ptr<int32_t> upstreamIdleTimeout_ = nullptr;
    std::shared_ptr<int32_t> websocketTermGracePeriod_ = nullptr;
    std::shared_ptr<int32_t> xffTrustedNum_ = nullptr;
    std::shared_ptr<Models::GetGatewayConfigResponseBodyDataXtraceDetails> xtraceDetails_ = nullptr;
    std::shared_ptr<string> zipAlgorithm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
