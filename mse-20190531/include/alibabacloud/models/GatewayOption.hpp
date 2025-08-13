// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYOPTION_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayOptionLogConfigDetails.hpp>
#include <alibabacloud/models/GatewayOptionTraceDetails.hpp>
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
    virtual bool empty() const override { this->disableHttp2Alpn_ != nullptr
        && this->enableHardwareAcceleration_ != nullptr && this->enableWaf_ != nullptr && this->logConfigDetails_ != nullptr && this->traceDetails_ != nullptr; };
    // disableHttp2Alpn Field Functions 
    bool hasDisableHttp2Alpn() const { return this->disableHttp2Alpn_ != nullptr;};
    void deleteDisableHttp2Alpn() { this->disableHttp2Alpn_ = nullptr;};
    inline bool disableHttp2Alpn() const { DARABONBA_PTR_GET_DEFAULT(disableHttp2Alpn_, false) };
    inline GatewayOption& setDisableHttp2Alpn(bool disableHttp2Alpn) { DARABONBA_PTR_SET_VALUE(disableHttp2Alpn_, disableHttp2Alpn) };


    // enableHardwareAcceleration Field Functions 
    bool hasEnableHardwareAcceleration() const { return this->enableHardwareAcceleration_ != nullptr;};
    void deleteEnableHardwareAcceleration() { this->enableHardwareAcceleration_ = nullptr;};
    inline bool enableHardwareAcceleration() const { DARABONBA_PTR_GET_DEFAULT(enableHardwareAcceleration_, false) };
    inline GatewayOption& setEnableHardwareAcceleration(bool enableHardwareAcceleration) { DARABONBA_PTR_SET_VALUE(enableHardwareAcceleration_, enableHardwareAcceleration) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool enableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline GatewayOption& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // logConfigDetails Field Functions 
    bool hasLogConfigDetails() const { return this->logConfigDetails_ != nullptr;};
    void deleteLogConfigDetails() { this->logConfigDetails_ = nullptr;};
    inline const GatewayOptionLogConfigDetails & logConfigDetails() const { DARABONBA_PTR_GET_CONST(logConfigDetails_, GatewayOptionLogConfigDetails) };
    inline GatewayOptionLogConfigDetails logConfigDetails() { DARABONBA_PTR_GET(logConfigDetails_, GatewayOptionLogConfigDetails) };
    inline GatewayOption& setLogConfigDetails(const GatewayOptionLogConfigDetails & logConfigDetails) { DARABONBA_PTR_SET_VALUE(logConfigDetails_, logConfigDetails) };
    inline GatewayOption& setLogConfigDetails(GatewayOptionLogConfigDetails && logConfigDetails) { DARABONBA_PTR_SET_RVALUE(logConfigDetails_, logConfigDetails) };


    // traceDetails Field Functions 
    bool hasTraceDetails() const { return this->traceDetails_ != nullptr;};
    void deleteTraceDetails() { this->traceDetails_ = nullptr;};
    inline const GatewayOptionTraceDetails & traceDetails() const { DARABONBA_PTR_GET_CONST(traceDetails_, GatewayOptionTraceDetails) };
    inline GatewayOptionTraceDetails traceDetails() { DARABONBA_PTR_GET(traceDetails_, GatewayOptionTraceDetails) };
    inline GatewayOption& setTraceDetails(const GatewayOptionTraceDetails & traceDetails) { DARABONBA_PTR_SET_VALUE(traceDetails_, traceDetails) };
    inline GatewayOption& setTraceDetails(GatewayOptionTraceDetails && traceDetails) { DARABONBA_PTR_SET_RVALUE(traceDetails_, traceDetails) };


  protected:
    std::shared_ptr<bool> disableHttp2Alpn_ = nullptr;
    std::shared_ptr<bool> enableHardwareAcceleration_ = nullptr;
    std::shared_ptr<bool> enableWaf_ = nullptr;
    std::shared_ptr<GatewayOptionLogConfigDetails> logConfigDetails_ = nullptr;
    std::shared_ptr<GatewayOptionTraceDetails> traceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
