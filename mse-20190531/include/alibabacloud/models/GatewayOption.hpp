// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYOPTION_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayOption& obj) { 
      DARABONBA_PTR_TO_JSON(DisableHttp2Alpn, disableHttp2Alpn_);
      DARABONBA_PTR_TO_JSON(EnableHardwareAcceleration, enableHardwareAcceleration_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(LogConfigDetails, logConfigDetails_);
      DARABONBA_PTR_TO_JSON(TraceDetails, traceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayOption& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableHttp2Alpn, disableHttp2Alpn_);
      DARABONBA_PTR_FROM_JSON(EnableHardwareAcceleration, enableHardwareAcceleration_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(LogConfigDetails, logConfigDetails_);
      DARABONBA_PTR_FROM_JSON(TraceDetails, traceDetails_);
    };
    GatewayOption() = default ;
    GatewayOption(const GatewayOption &) = default ;
    GatewayOption(GatewayOption &&) = default ;
    GatewayOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayOption() = default ;
    GatewayOption& operator=(const GatewayOption &) = default ;
    GatewayOption& operator=(GatewayOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Sample, sample_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(TraceEnabled, traceEnabled_);
        DARABONBA_PTR_TO_JSON(TraceType, traceType_);
      };
      friend void from_json(const Darabonba::Json& j, TraceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Sample, sample_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(TraceEnabled, traceEnabled_);
        DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
      };
      TraceDetails() = default ;
      TraceDetails(const TraceDetails &) = default ;
      TraceDetails(TraceDetails &&) = default ;
      TraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceDetails() = default ;
      TraceDetails& operator=(const TraceDetails &) = default ;
      TraceDetails& operator=(TraceDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sample_ == nullptr
        && this->serviceId_ == nullptr && this->servicePort_ == nullptr && this->traceEnabled_ == nullptr && this->traceType_ == nullptr; };
      // sample Field Functions 
      bool hasSample() const { return this->sample_ != nullptr;};
      void deleteSample() { this->sample_ = nullptr;};
      inline int64_t getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0L) };
      inline TraceDetails& setSample(int64_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
      inline TraceDetails& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline string getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
      inline TraceDetails& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // traceEnabled Field Functions 
      bool hasTraceEnabled() const { return this->traceEnabled_ != nullptr;};
      void deleteTraceEnabled() { this->traceEnabled_ = nullptr;};
      inline bool getTraceEnabled() const { DARABONBA_PTR_GET_DEFAULT(traceEnabled_, false) };
      inline TraceDetails& setTraceEnabled(bool traceEnabled) { DARABONBA_PTR_SET_VALUE(traceEnabled_, traceEnabled) };


      // traceType Field Functions 
      bool hasTraceType() const { return this->traceType_ != nullptr;};
      void deleteTraceType() { this->traceType_ = nullptr;};
      inline string getTraceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
      inline TraceDetails& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


    protected:
      shared_ptr<int64_t> sample_ {};
      shared_ptr<int64_t> serviceId_ {};
      shared_ptr<string> servicePort_ {};
      // This parameter is required.
      shared_ptr<bool> traceEnabled_ {};
      shared_ptr<string> traceType_ {};
    };

    class LogConfigDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogConfigDetails& obj) { 
        DARABONBA_PTR_TO_JSON(LogEnabled, logEnabled_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, LogConfigDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(LogEnabled, logEnabled_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      LogConfigDetails() = default ;
      LogConfigDetails(const LogConfigDetails &) = default ;
      LogConfigDetails(LogConfigDetails &&) = default ;
      LogConfigDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogConfigDetails() = default ;
      LogConfigDetails& operator=(const LogConfigDetails &) = default ;
      LogConfigDetails& operator=(LogConfigDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logEnabled_ == nullptr
        && this->logStoreName_ == nullptr && this->projectName_ == nullptr; };
      // logEnabled Field Functions 
      bool hasLogEnabled() const { return this->logEnabled_ != nullptr;};
      void deleteLogEnabled() { this->logEnabled_ = nullptr;};
      inline bool getLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(logEnabled_, false) };
      inline LogConfigDetails& setLogEnabled(bool logEnabled) { DARABONBA_PTR_SET_VALUE(logEnabled_, logEnabled) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline LogConfigDetails& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline LogConfigDetails& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      // This parameter is required.
      shared_ptr<bool> logEnabled_ {};
      shared_ptr<string> logStoreName_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->disableHttp2Alpn_ == nullptr
        && this->enableHardwareAcceleration_ == nullptr && this->enableWaf_ == nullptr && this->logConfigDetails_ == nullptr && this->traceDetails_ == nullptr; };
    // disableHttp2Alpn Field Functions 
    bool hasDisableHttp2Alpn() const { return this->disableHttp2Alpn_ != nullptr;};
    void deleteDisableHttp2Alpn() { this->disableHttp2Alpn_ = nullptr;};
    inline bool getDisableHttp2Alpn() const { DARABONBA_PTR_GET_DEFAULT(disableHttp2Alpn_, false) };
    inline GatewayOption& setDisableHttp2Alpn(bool disableHttp2Alpn) { DARABONBA_PTR_SET_VALUE(disableHttp2Alpn_, disableHttp2Alpn) };


    // enableHardwareAcceleration Field Functions 
    bool hasEnableHardwareAcceleration() const { return this->enableHardwareAcceleration_ != nullptr;};
    void deleteEnableHardwareAcceleration() { this->enableHardwareAcceleration_ = nullptr;};
    inline bool getEnableHardwareAcceleration() const { DARABONBA_PTR_GET_DEFAULT(enableHardwareAcceleration_, false) };
    inline GatewayOption& setEnableHardwareAcceleration(bool enableHardwareAcceleration) { DARABONBA_PTR_SET_VALUE(enableHardwareAcceleration_, enableHardwareAcceleration) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline GatewayOption& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // logConfigDetails Field Functions 
    bool hasLogConfigDetails() const { return this->logConfigDetails_ != nullptr;};
    void deleteLogConfigDetails() { this->logConfigDetails_ = nullptr;};
    inline const GatewayOption::LogConfigDetails & getLogConfigDetails() const { DARABONBA_PTR_GET_CONST(logConfigDetails_, GatewayOption::LogConfigDetails) };
    inline GatewayOption::LogConfigDetails getLogConfigDetails() { DARABONBA_PTR_GET(logConfigDetails_, GatewayOption::LogConfigDetails) };
    inline GatewayOption& setLogConfigDetails(const GatewayOption::LogConfigDetails & logConfigDetails) { DARABONBA_PTR_SET_VALUE(logConfigDetails_, logConfigDetails) };
    inline GatewayOption& setLogConfigDetails(GatewayOption::LogConfigDetails && logConfigDetails) { DARABONBA_PTR_SET_RVALUE(logConfigDetails_, logConfigDetails) };


    // traceDetails Field Functions 
    bool hasTraceDetails() const { return this->traceDetails_ != nullptr;};
    void deleteTraceDetails() { this->traceDetails_ = nullptr;};
    inline const GatewayOption::TraceDetails & getTraceDetails() const { DARABONBA_PTR_GET_CONST(traceDetails_, GatewayOption::TraceDetails) };
    inline GatewayOption::TraceDetails getTraceDetails() { DARABONBA_PTR_GET(traceDetails_, GatewayOption::TraceDetails) };
    inline GatewayOption& setTraceDetails(const GatewayOption::TraceDetails & traceDetails) { DARABONBA_PTR_SET_VALUE(traceDetails_, traceDetails) };
    inline GatewayOption& setTraceDetails(GatewayOption::TraceDetails && traceDetails) { DARABONBA_PTR_SET_RVALUE(traceDetails_, traceDetails) };


  protected:
    shared_ptr<bool> disableHttp2Alpn_ {};
    shared_ptr<bool> enableHardwareAcceleration_ {};
    shared_ptr<bool> enableWaf_ {};
    shared_ptr<GatewayOption::LogConfigDetails> logConfigDetails_ {};
    shared_ptr<GatewayOption::TraceDetails> traceDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
