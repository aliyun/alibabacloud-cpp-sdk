// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGatewayConfigResponseBody() = default ;
    GetGatewayConfigResponseBody(const GetGatewayConfigResponseBody &) = default ;
    GetGatewayConfigResponseBody(GetGatewayConfigResponseBody &&) = default ;
    GetGatewayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBody() = default ;
    GetGatewayConfigResponseBody& operator=(const GetGatewayConfigResponseBody &) = default ;
    GetGatewayConfigResponseBody& operator=(GetGatewayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class XtraceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const XtraceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_TO_JSON(TraceOn, traceOn_);
          DARABONBA_PTR_TO_JSON(TraceType, traceType_);
        };
        friend void from_json(const Darabonba::Json& j, XtraceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
          DARABONBA_PTR_FROM_JSON(TraceOn, traceOn_);
          DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
        };
        XtraceDetails() = default ;
        XtraceDetails(const XtraceDetails &) = default ;
        XtraceDetails(XtraceDetails &&) = default ;
        XtraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~XtraceDetails() = default ;
        XtraceDetails& operator=(const XtraceDetails &) = default ;
        XtraceDetails& operator=(XtraceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->sample_ == nullptr
        && this->serviceId_ == nullptr && this->servicePort_ == nullptr && this->traceOn_ == nullptr && this->traceType_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline XtraceDetails& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline XtraceDetails& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline XtraceDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline XtraceDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline XtraceDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline int32_t getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0) };
        inline XtraceDetails& setSample(int32_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
        inline XtraceDetails& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // servicePort Field Functions 
        bool hasServicePort() const { return this->servicePort_ != nullptr;};
        void deleteServicePort() { this->servicePort_ = nullptr;};
        inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
        inline XtraceDetails& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


        // traceOn Field Functions 
        bool hasTraceOn() const { return this->traceOn_ != nullptr;};
        void deleteTraceOn() { this->traceOn_ = nullptr;};
        inline bool getTraceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
        inline XtraceDetails& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


        // traceType Field Functions 
        bool hasTraceType() const { return this->traceType_ != nullptr;};
        void deleteTraceType() { this->traceType_ = nullptr;};
        inline string getTraceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
        inline XtraceDetails& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


      protected:
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> sample_ {};
        shared_ptr<int64_t> serviceId_ {};
        shared_ptr<string> servicePort_ {};
        shared_ptr<bool> traceOn_ {};
        shared_ptr<string> traceType_ {};
      };

      class SlsConfigDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsConfigDetails& obj) { 
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LogOn, logOn_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(NginxCompatible, nginxCompatible_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, SlsConfigDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LogOn, logOn_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(NginxCompatible, nginxCompatible_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        };
        SlsConfigDetails() = default ;
        SlsConfigDetails(const SlsConfigDetails &) = default ;
        SlsConfigDetails(SlsConfigDetails &&) = default ;
        SlsConfigDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsConfigDetails() = default ;
        SlsConfigDetails& operator=(const SlsConfigDetails &) = default ;
        SlsConfigDetails& operator=(SlsConfigDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->logOn_ == nullptr
        && this->logStoreName_ == nullptr && this->nginxCompatible_ == nullptr && this->projectName_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline SlsConfigDetails& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline SlsConfigDetails& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline SlsConfigDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline SlsConfigDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SlsConfigDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // logOn Field Functions 
        bool hasLogOn() const { return this->logOn_ != nullptr;};
        void deleteLogOn() { this->logOn_ = nullptr;};
        inline bool getLogOn() const { DARABONBA_PTR_GET_DEFAULT(logOn_, false) };
        inline SlsConfigDetails& setLogOn(bool logOn) { DARABONBA_PTR_SET_VALUE(logOn_, logOn) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline SlsConfigDetails& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // nginxCompatible Field Functions 
        bool hasNginxCompatible() const { return this->nginxCompatible_ != nullptr;};
        void deleteNginxCompatible() { this->nginxCompatible_ = nullptr;};
        inline bool getNginxCompatible() const { DARABONBA_PTR_GET_DEFAULT(nginxCompatible_, false) };
        inline SlsConfigDetails& setNginxCompatible(bool nginxCompatible) { DARABONBA_PTR_SET_VALUE(nginxCompatible_, nginxCompatible) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline SlsConfigDetails& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<bool> logOn_ {};
        shared_ptr<string> logStoreName_ {};
        shared_ptr<bool> nginxCompatible_ {};
        shared_ptr<string> projectName_ {};
      };

      class EnableXffTrustedCidrs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnableXffTrustedCidrs& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(IpListContent, ipListContent_);
        };
        friend void from_json(const Darabonba::Json& j, EnableXffTrustedCidrs& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(IpListContent, ipListContent_);
        };
        EnableXffTrustedCidrs() = default ;
        EnableXffTrustedCidrs(const EnableXffTrustedCidrs &) = default ;
        EnableXffTrustedCidrs(EnableXffTrustedCidrs &&) = default ;
        EnableXffTrustedCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnableXffTrustedCidrs() = default ;
        EnableXffTrustedCidrs& operator=(const EnableXffTrustedCidrs &) = default ;
        EnableXffTrustedCidrs& operator=(EnableXffTrustedCidrs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->ipListContent_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline EnableXffTrustedCidrs& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // ipListContent Field Functions 
        bool hasIpListContent() const { return this->ipListContent_ != nullptr;};
        void deleteIpListContent() { this->ipListContent_ = nullptr;};
        inline string getIpListContent() const { DARABONBA_PTR_GET_DEFAULT(ipListContent_, "") };
        inline EnableXffTrustedCidrs& setIpListContent(string ipListContent) { DARABONBA_PTR_SET_VALUE(ipListContent_, ipListContent) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<string> ipListContent_ {};
      };

      class EnableK8sSourceWorkloadFilter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnableK8sSourceWorkloadFilter& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(FilterOpt, filterOpt_);
          DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
          DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
        };
        friend void from_json(const Darabonba::Json& j, EnableK8sSourceWorkloadFilter& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(FilterOpt, filterOpt_);
          DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
          DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
        };
        EnableK8sSourceWorkloadFilter() = default ;
        EnableK8sSourceWorkloadFilter(const EnableK8sSourceWorkloadFilter &) = default ;
        EnableK8sSourceWorkloadFilter(EnableK8sSourceWorkloadFilter &&) = default ;
        EnableK8sSourceWorkloadFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnableK8sSourceWorkloadFilter() = default ;
        EnableK8sSourceWorkloadFilter& operator=(const EnableK8sSourceWorkloadFilter &) = default ;
        EnableK8sSourceWorkloadFilter& operator=(EnableK8sSourceWorkloadFilter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->filterOpt_ == nullptr && this->labelKey_ == nullptr && this->labelValue_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline EnableK8sSourceWorkloadFilter& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // filterOpt Field Functions 
        bool hasFilterOpt() const { return this->filterOpt_ != nullptr;};
        void deleteFilterOpt() { this->filterOpt_ = nullptr;};
        inline string getFilterOpt() const { DARABONBA_PTR_GET_DEFAULT(filterOpt_, "") };
        inline EnableK8sSourceWorkloadFilter& setFilterOpt(string filterOpt) { DARABONBA_PTR_SET_VALUE(filterOpt_, filterOpt) };


        // labelKey Field Functions 
        bool hasLabelKey() const { return this->labelKey_ != nullptr;};
        void deleteLabelKey() { this->labelKey_ = nullptr;};
        inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
        inline EnableK8sSourceWorkloadFilter& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


        // labelValue Field Functions 
        bool hasLabelValue() const { return this->labelValue_ != nullptr;};
        void deleteLabelValue() { this->labelValue_ = nullptr;};
        inline string getLabelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
        inline EnableK8sSourceWorkloadFilter& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<string> filterOpt_ {};
        shared_ptr<string> labelKey_ {};
        shared_ptr<string> labelValue_ {};
      };

      virtual bool empty() const override { return this->accessLogHeader_ == nullptr
        && this->downstreamConnectionBufferLimits_ == nullptr && this->downstreamHttp2MaxConcurrentStream_ == nullptr && this->downstreamIdleTime_ == nullptr && this->enableCustomAuthConfigPush_ == nullptr && this->enableGenerateRequestId_ == nullptr
        && this->enableGzip_ == nullptr && this->enableGzipHardwareAccelerate_ == nullptr && this->enableHardwareAccelerate_ == nullptr && this->enableHttp2_ == nullptr && this->enableHttp3_ == nullptr
        && this->enableK8sSourceWorkloadFilter_ == nullptr && this->enableProxyProtocol_ == nullptr && this->enableSlashMerge_ == nullptr && this->enableWaf_ == nullptr && this->enableXffTrustedCidrs_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->initialConnectionWindowSize_ == nullptr && this->initialStreamWindowSize_ == nullptr && this->keepaliveHeaderTimeout_ == nullptr && this->liteMetrics_ == nullptr
        && this->logFilterConfig_ == nullptr && this->noSupportedConfigList_ == nullptr && this->pathWithEscapedSlashes_ == nullptr && this->preserveExternalRequestID_ == nullptr && this->preserveHeaderFormat_ == nullptr
        && this->slsConfigDetails_ == nullptr && this->supportWaf_ == nullptr && this->upstreamIdleTimeout_ == nullptr && this->websocketTermGracePeriod_ == nullptr && this->xffTrustedNum_ == nullptr
        && this->xtraceDetails_ == nullptr && this->zipAlgorithm_ == nullptr; };
      // accessLogHeader Field Functions 
      bool hasAccessLogHeader() const { return this->accessLogHeader_ != nullptr;};
      void deleteAccessLogHeader() { this->accessLogHeader_ = nullptr;};
      inline string getAccessLogHeader() const { DARABONBA_PTR_GET_DEFAULT(accessLogHeader_, "") };
      inline Data& setAccessLogHeader(string accessLogHeader) { DARABONBA_PTR_SET_VALUE(accessLogHeader_, accessLogHeader) };


      // downstreamConnectionBufferLimits Field Functions 
      bool hasDownstreamConnectionBufferLimits() const { return this->downstreamConnectionBufferLimits_ != nullptr;};
      void deleteDownstreamConnectionBufferLimits() { this->downstreamConnectionBufferLimits_ = nullptr;};
      inline int32_t getDownstreamConnectionBufferLimits() const { DARABONBA_PTR_GET_DEFAULT(downstreamConnectionBufferLimits_, 0) };
      inline Data& setDownstreamConnectionBufferLimits(int32_t downstreamConnectionBufferLimits) { DARABONBA_PTR_SET_VALUE(downstreamConnectionBufferLimits_, downstreamConnectionBufferLimits) };


      // downstreamHttp2MaxConcurrentStream Field Functions 
      bool hasDownstreamHttp2MaxConcurrentStream() const { return this->downstreamHttp2MaxConcurrentStream_ != nullptr;};
      void deleteDownstreamHttp2MaxConcurrentStream() { this->downstreamHttp2MaxConcurrentStream_ = nullptr;};
      inline int32_t getDownstreamHttp2MaxConcurrentStream() const { DARABONBA_PTR_GET_DEFAULT(downstreamHttp2MaxConcurrentStream_, 0) };
      inline Data& setDownstreamHttp2MaxConcurrentStream(int32_t downstreamHttp2MaxConcurrentStream) { DARABONBA_PTR_SET_VALUE(downstreamHttp2MaxConcurrentStream_, downstreamHttp2MaxConcurrentStream) };


      // downstreamIdleTime Field Functions 
      bool hasDownstreamIdleTime() const { return this->downstreamIdleTime_ != nullptr;};
      void deleteDownstreamIdleTime() { this->downstreamIdleTime_ = nullptr;};
      inline int32_t getDownstreamIdleTime() const { DARABONBA_PTR_GET_DEFAULT(downstreamIdleTime_, 0) };
      inline Data& setDownstreamIdleTime(int32_t downstreamIdleTime) { DARABONBA_PTR_SET_VALUE(downstreamIdleTime_, downstreamIdleTime) };


      // enableCustomAuthConfigPush Field Functions 
      bool hasEnableCustomAuthConfigPush() const { return this->enableCustomAuthConfigPush_ != nullptr;};
      void deleteEnableCustomAuthConfigPush() { this->enableCustomAuthConfigPush_ = nullptr;};
      inline string getEnableCustomAuthConfigPush() const { DARABONBA_PTR_GET_DEFAULT(enableCustomAuthConfigPush_, "") };
      inline Data& setEnableCustomAuthConfigPush(string enableCustomAuthConfigPush) { DARABONBA_PTR_SET_VALUE(enableCustomAuthConfigPush_, enableCustomAuthConfigPush) };


      // enableGenerateRequestId Field Functions 
      bool hasEnableGenerateRequestId() const { return this->enableGenerateRequestId_ != nullptr;};
      void deleteEnableGenerateRequestId() { this->enableGenerateRequestId_ = nullptr;};
      inline bool getEnableGenerateRequestId() const { DARABONBA_PTR_GET_DEFAULT(enableGenerateRequestId_, false) };
      inline Data& setEnableGenerateRequestId(bool enableGenerateRequestId) { DARABONBA_PTR_SET_VALUE(enableGenerateRequestId_, enableGenerateRequestId) };


      // enableGzip Field Functions 
      bool hasEnableGzip() const { return this->enableGzip_ != nullptr;};
      void deleteEnableGzip() { this->enableGzip_ = nullptr;};
      inline bool getEnableGzip() const { DARABONBA_PTR_GET_DEFAULT(enableGzip_, false) };
      inline Data& setEnableGzip(bool enableGzip) { DARABONBA_PTR_SET_VALUE(enableGzip_, enableGzip) };


      // enableGzipHardwareAccelerate Field Functions 
      bool hasEnableGzipHardwareAccelerate() const { return this->enableGzipHardwareAccelerate_ != nullptr;};
      void deleteEnableGzipHardwareAccelerate() { this->enableGzipHardwareAccelerate_ = nullptr;};
      inline bool getEnableGzipHardwareAccelerate() const { DARABONBA_PTR_GET_DEFAULT(enableGzipHardwareAccelerate_, false) };
      inline Data& setEnableGzipHardwareAccelerate(bool enableGzipHardwareAccelerate) { DARABONBA_PTR_SET_VALUE(enableGzipHardwareAccelerate_, enableGzipHardwareAccelerate) };


      // enableHardwareAccelerate Field Functions 
      bool hasEnableHardwareAccelerate() const { return this->enableHardwareAccelerate_ != nullptr;};
      void deleteEnableHardwareAccelerate() { this->enableHardwareAccelerate_ = nullptr;};
      inline bool getEnableHardwareAccelerate() const { DARABONBA_PTR_GET_DEFAULT(enableHardwareAccelerate_, false) };
      inline Data& setEnableHardwareAccelerate(bool enableHardwareAccelerate) { DARABONBA_PTR_SET_VALUE(enableHardwareAccelerate_, enableHardwareAccelerate) };


      // enableHttp2 Field Functions 
      bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
      void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
      inline bool getEnableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, false) };
      inline Data& setEnableHttp2(bool enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


      // enableHttp3 Field Functions 
      bool hasEnableHttp3() const { return this->enableHttp3_ != nullptr;};
      void deleteEnableHttp3() { this->enableHttp3_ = nullptr;};
      inline bool getEnableHttp3() const { DARABONBA_PTR_GET_DEFAULT(enableHttp3_, false) };
      inline Data& setEnableHttp3(bool enableHttp3) { DARABONBA_PTR_SET_VALUE(enableHttp3_, enableHttp3) };


      // enableK8sSourceWorkloadFilter Field Functions 
      bool hasEnableK8sSourceWorkloadFilter() const { return this->enableK8sSourceWorkloadFilter_ != nullptr;};
      void deleteEnableK8sSourceWorkloadFilter() { this->enableK8sSourceWorkloadFilter_ = nullptr;};
      inline const Data::EnableK8sSourceWorkloadFilter & getEnableK8sSourceWorkloadFilter() const { DARABONBA_PTR_GET_CONST(enableK8sSourceWorkloadFilter_, Data::EnableK8sSourceWorkloadFilter) };
      inline Data::EnableK8sSourceWorkloadFilter getEnableK8sSourceWorkloadFilter() { DARABONBA_PTR_GET(enableK8sSourceWorkloadFilter_, Data::EnableK8sSourceWorkloadFilter) };
      inline Data& setEnableK8sSourceWorkloadFilter(const Data::EnableK8sSourceWorkloadFilter & enableK8sSourceWorkloadFilter) { DARABONBA_PTR_SET_VALUE(enableK8sSourceWorkloadFilter_, enableK8sSourceWorkloadFilter) };
      inline Data& setEnableK8sSourceWorkloadFilter(Data::EnableK8sSourceWorkloadFilter && enableK8sSourceWorkloadFilter) { DARABONBA_PTR_SET_RVALUE(enableK8sSourceWorkloadFilter_, enableK8sSourceWorkloadFilter) };


      // enableProxyProtocol Field Functions 
      bool hasEnableProxyProtocol() const { return this->enableProxyProtocol_ != nullptr;};
      void deleteEnableProxyProtocol() { this->enableProxyProtocol_ = nullptr;};
      inline bool getEnableProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableProxyProtocol_, false) };
      inline Data& setEnableProxyProtocol(bool enableProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableProxyProtocol_, enableProxyProtocol) };


      // enableSlashMerge Field Functions 
      bool hasEnableSlashMerge() const { return this->enableSlashMerge_ != nullptr;};
      void deleteEnableSlashMerge() { this->enableSlashMerge_ = nullptr;};
      inline bool getEnableSlashMerge() const { DARABONBA_PTR_GET_DEFAULT(enableSlashMerge_, false) };
      inline Data& setEnableSlashMerge(bool enableSlashMerge) { DARABONBA_PTR_SET_VALUE(enableSlashMerge_, enableSlashMerge) };


      // enableWaf Field Functions 
      bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
      void deleteEnableWaf() { this->enableWaf_ = nullptr;};
      inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
      inline Data& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


      // enableXffTrustedCidrs Field Functions 
      bool hasEnableXffTrustedCidrs() const { return this->enableXffTrustedCidrs_ != nullptr;};
      void deleteEnableXffTrustedCidrs() { this->enableXffTrustedCidrs_ = nullptr;};
      inline const Data::EnableXffTrustedCidrs & getEnableXffTrustedCidrs() const { DARABONBA_PTR_GET_CONST(enableXffTrustedCidrs_, Data::EnableXffTrustedCidrs) };
      inline Data::EnableXffTrustedCidrs getEnableXffTrustedCidrs() { DARABONBA_PTR_GET(enableXffTrustedCidrs_, Data::EnableXffTrustedCidrs) };
      inline Data& setEnableXffTrustedCidrs(const Data::EnableXffTrustedCidrs & enableXffTrustedCidrs) { DARABONBA_PTR_SET_VALUE(enableXffTrustedCidrs_, enableXffTrustedCidrs) };
      inline Data& setEnableXffTrustedCidrs(Data::EnableXffTrustedCidrs && enableXffTrustedCidrs) { DARABONBA_PTR_SET_RVALUE(enableXffTrustedCidrs_, enableXffTrustedCidrs) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // initialConnectionWindowSize Field Functions 
      bool hasInitialConnectionWindowSize() const { return this->initialConnectionWindowSize_ != nullptr;};
      void deleteInitialConnectionWindowSize() { this->initialConnectionWindowSize_ = nullptr;};
      inline int32_t getInitialConnectionWindowSize() const { DARABONBA_PTR_GET_DEFAULT(initialConnectionWindowSize_, 0) };
      inline Data& setInitialConnectionWindowSize(int32_t initialConnectionWindowSize) { DARABONBA_PTR_SET_VALUE(initialConnectionWindowSize_, initialConnectionWindowSize) };


      // initialStreamWindowSize Field Functions 
      bool hasInitialStreamWindowSize() const { return this->initialStreamWindowSize_ != nullptr;};
      void deleteInitialStreamWindowSize() { this->initialStreamWindowSize_ = nullptr;};
      inline int32_t getInitialStreamWindowSize() const { DARABONBA_PTR_GET_DEFAULT(initialStreamWindowSize_, 0) };
      inline Data& setInitialStreamWindowSize(int32_t initialStreamWindowSize) { DARABONBA_PTR_SET_VALUE(initialStreamWindowSize_, initialStreamWindowSize) };


      // keepaliveHeaderTimeout Field Functions 
      bool hasKeepaliveHeaderTimeout() const { return this->keepaliveHeaderTimeout_ != nullptr;};
      void deleteKeepaliveHeaderTimeout() { this->keepaliveHeaderTimeout_ = nullptr;};
      inline int32_t getKeepaliveHeaderTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveHeaderTimeout_, 0) };
      inline Data& setKeepaliveHeaderTimeout(int32_t keepaliveHeaderTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveHeaderTimeout_, keepaliveHeaderTimeout) };


      // liteMetrics Field Functions 
      bool hasLiteMetrics() const { return this->liteMetrics_ != nullptr;};
      void deleteLiteMetrics() { this->liteMetrics_ = nullptr;};
      inline bool getLiteMetrics() const { DARABONBA_PTR_GET_DEFAULT(liteMetrics_, false) };
      inline Data& setLiteMetrics(bool liteMetrics) { DARABONBA_PTR_SET_VALUE(liteMetrics_, liteMetrics) };


      // logFilterConfig Field Functions 
      bool hasLogFilterConfig() const { return this->logFilterConfig_ != nullptr;};
      void deleteLogFilterConfig() { this->logFilterConfig_ = nullptr;};
      inline string getLogFilterConfig() const { DARABONBA_PTR_GET_DEFAULT(logFilterConfig_, "") };
      inline Data& setLogFilterConfig(string logFilterConfig) { DARABONBA_PTR_SET_VALUE(logFilterConfig_, logFilterConfig) };


      // noSupportedConfigList Field Functions 
      bool hasNoSupportedConfigList() const { return this->noSupportedConfigList_ != nullptr;};
      void deleteNoSupportedConfigList() { this->noSupportedConfigList_ = nullptr;};
      inline string getNoSupportedConfigList() const { DARABONBA_PTR_GET_DEFAULT(noSupportedConfigList_, "") };
      inline Data& setNoSupportedConfigList(string noSupportedConfigList) { DARABONBA_PTR_SET_VALUE(noSupportedConfigList_, noSupportedConfigList) };


      // pathWithEscapedSlashes Field Functions 
      bool hasPathWithEscapedSlashes() const { return this->pathWithEscapedSlashes_ != nullptr;};
      void deletePathWithEscapedSlashes() { this->pathWithEscapedSlashes_ = nullptr;};
      inline string getPathWithEscapedSlashes() const { DARABONBA_PTR_GET_DEFAULT(pathWithEscapedSlashes_, "") };
      inline Data& setPathWithEscapedSlashes(string pathWithEscapedSlashes) { DARABONBA_PTR_SET_VALUE(pathWithEscapedSlashes_, pathWithEscapedSlashes) };


      // preserveExternalRequestID Field Functions 
      bool hasPreserveExternalRequestID() const { return this->preserveExternalRequestID_ != nullptr;};
      void deletePreserveExternalRequestID() { this->preserveExternalRequestID_ = nullptr;};
      inline bool getPreserveExternalRequestID() const { DARABONBA_PTR_GET_DEFAULT(preserveExternalRequestID_, false) };
      inline Data& setPreserveExternalRequestID(bool preserveExternalRequestID) { DARABONBA_PTR_SET_VALUE(preserveExternalRequestID_, preserveExternalRequestID) };


      // preserveHeaderFormat Field Functions 
      bool hasPreserveHeaderFormat() const { return this->preserveHeaderFormat_ != nullptr;};
      void deletePreserveHeaderFormat() { this->preserveHeaderFormat_ = nullptr;};
      inline bool getPreserveHeaderFormat() const { DARABONBA_PTR_GET_DEFAULT(preserveHeaderFormat_, false) };
      inline Data& setPreserveHeaderFormat(bool preserveHeaderFormat) { DARABONBA_PTR_SET_VALUE(preserveHeaderFormat_, preserveHeaderFormat) };


      // slsConfigDetails Field Functions 
      bool hasSlsConfigDetails() const { return this->slsConfigDetails_ != nullptr;};
      void deleteSlsConfigDetails() { this->slsConfigDetails_ = nullptr;};
      inline const Data::SlsConfigDetails & getSlsConfigDetails() const { DARABONBA_PTR_GET_CONST(slsConfigDetails_, Data::SlsConfigDetails) };
      inline Data::SlsConfigDetails getSlsConfigDetails() { DARABONBA_PTR_GET(slsConfigDetails_, Data::SlsConfigDetails) };
      inline Data& setSlsConfigDetails(const Data::SlsConfigDetails & slsConfigDetails) { DARABONBA_PTR_SET_VALUE(slsConfigDetails_, slsConfigDetails) };
      inline Data& setSlsConfigDetails(Data::SlsConfigDetails && slsConfigDetails) { DARABONBA_PTR_SET_RVALUE(slsConfigDetails_, slsConfigDetails) };


      // supportWaf Field Functions 
      bool hasSupportWaf() const { return this->supportWaf_ != nullptr;};
      void deleteSupportWaf() { this->supportWaf_ = nullptr;};
      inline bool getSupportWaf() const { DARABONBA_PTR_GET_DEFAULT(supportWaf_, false) };
      inline Data& setSupportWaf(bool supportWaf) { DARABONBA_PTR_SET_VALUE(supportWaf_, supportWaf) };


      // upstreamIdleTimeout Field Functions 
      bool hasUpstreamIdleTimeout() const { return this->upstreamIdleTimeout_ != nullptr;};
      void deleteUpstreamIdleTimeout() { this->upstreamIdleTimeout_ = nullptr;};
      inline int32_t getUpstreamIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(upstreamIdleTimeout_, 0) };
      inline Data& setUpstreamIdleTimeout(int32_t upstreamIdleTimeout) { DARABONBA_PTR_SET_VALUE(upstreamIdleTimeout_, upstreamIdleTimeout) };


      // websocketTermGracePeriod Field Functions 
      bool hasWebsocketTermGracePeriod() const { return this->websocketTermGracePeriod_ != nullptr;};
      void deleteWebsocketTermGracePeriod() { this->websocketTermGracePeriod_ = nullptr;};
      inline int32_t getWebsocketTermGracePeriod() const { DARABONBA_PTR_GET_DEFAULT(websocketTermGracePeriod_, 0) };
      inline Data& setWebsocketTermGracePeriod(int32_t websocketTermGracePeriod) { DARABONBA_PTR_SET_VALUE(websocketTermGracePeriod_, websocketTermGracePeriod) };


      // xffTrustedNum Field Functions 
      bool hasXffTrustedNum() const { return this->xffTrustedNum_ != nullptr;};
      void deleteXffTrustedNum() { this->xffTrustedNum_ = nullptr;};
      inline int32_t getXffTrustedNum() const { DARABONBA_PTR_GET_DEFAULT(xffTrustedNum_, 0) };
      inline Data& setXffTrustedNum(int32_t xffTrustedNum) { DARABONBA_PTR_SET_VALUE(xffTrustedNum_, xffTrustedNum) };


      // xtraceDetails Field Functions 
      bool hasXtraceDetails() const { return this->xtraceDetails_ != nullptr;};
      void deleteXtraceDetails() { this->xtraceDetails_ = nullptr;};
      inline const Data::XtraceDetails & getXtraceDetails() const { DARABONBA_PTR_GET_CONST(xtraceDetails_, Data::XtraceDetails) };
      inline Data::XtraceDetails getXtraceDetails() { DARABONBA_PTR_GET(xtraceDetails_, Data::XtraceDetails) };
      inline Data& setXtraceDetails(const Data::XtraceDetails & xtraceDetails) { DARABONBA_PTR_SET_VALUE(xtraceDetails_, xtraceDetails) };
      inline Data& setXtraceDetails(Data::XtraceDetails && xtraceDetails) { DARABONBA_PTR_SET_RVALUE(xtraceDetails_, xtraceDetails) };


      // zipAlgorithm Field Functions 
      bool hasZipAlgorithm() const { return this->zipAlgorithm_ != nullptr;};
      void deleteZipAlgorithm() { this->zipAlgorithm_ = nullptr;};
      inline string getZipAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(zipAlgorithm_, "") };
      inline Data& setZipAlgorithm(string zipAlgorithm) { DARABONBA_PTR_SET_VALUE(zipAlgorithm_, zipAlgorithm) };


    protected:
      shared_ptr<string> accessLogHeader_ {};
      shared_ptr<int32_t> downstreamConnectionBufferLimits_ {};
      shared_ptr<int32_t> downstreamHttp2MaxConcurrentStream_ {};
      shared_ptr<int32_t> downstreamIdleTime_ {};
      shared_ptr<string> enableCustomAuthConfigPush_ {};
      shared_ptr<bool> enableGenerateRequestId_ {};
      shared_ptr<bool> enableGzip_ {};
      shared_ptr<bool> enableGzipHardwareAccelerate_ {};
      shared_ptr<bool> enableHardwareAccelerate_ {};
      shared_ptr<bool> enableHttp2_ {};
      shared_ptr<bool> enableHttp3_ {};
      shared_ptr<Data::EnableK8sSourceWorkloadFilter> enableK8sSourceWorkloadFilter_ {};
      shared_ptr<bool> enableProxyProtocol_ {};
      shared_ptr<bool> enableSlashMerge_ {};
      shared_ptr<bool> enableWaf_ {};
      shared_ptr<Data::EnableXffTrustedCidrs> enableXffTrustedCidrs_ {};
      shared_ptr<string> gatewayUniqueId_ {};
      shared_ptr<int32_t> initialConnectionWindowSize_ {};
      shared_ptr<int32_t> initialStreamWindowSize_ {};
      shared_ptr<int32_t> keepaliveHeaderTimeout_ {};
      shared_ptr<bool> liteMetrics_ {};
      shared_ptr<string> logFilterConfig_ {};
      shared_ptr<string> noSupportedConfigList_ {};
      shared_ptr<string> pathWithEscapedSlashes_ {};
      shared_ptr<bool> preserveExternalRequestID_ {};
      shared_ptr<bool> preserveHeaderFormat_ {};
      shared_ptr<Data::SlsConfigDetails> slsConfigDetails_ {};
      shared_ptr<bool> supportWaf_ {};
      shared_ptr<int32_t> upstreamIdleTimeout_ {};
      shared_ptr<int32_t> websocketTermGracePeriod_ {};
      shared_ptr<int32_t> xffTrustedNum_ {};
      shared_ptr<Data::XtraceDetails> xtraceDetails_ {};
      shared_ptr<string> zipAlgorithm_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayConfigResponseBody::Data) };
    inline GetGatewayConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayConfigResponseBody::Data) };
    inline GetGatewayConfigResponseBody& setData(const GetGatewayConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayConfigResponseBody& setData(GetGatewayConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetGatewayConfigResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetGatewayConfigResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetGatewayConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGatewayConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGatewayConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetGatewayConfigResponseBody::Data> data_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
