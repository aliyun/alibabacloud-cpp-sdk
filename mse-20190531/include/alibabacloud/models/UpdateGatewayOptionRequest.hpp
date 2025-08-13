// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayOption, gatewayOption_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayOption, gatewayOption_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    UpdateGatewayOptionRequest() = default ;
    UpdateGatewayOptionRequest(const UpdateGatewayOptionRequest &) = default ;
    UpdateGatewayOptionRequest(UpdateGatewayOptionRequest &&) = default ;
    UpdateGatewayOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayOptionRequest() = default ;
    UpdateGatewayOptionRequest& operator=(const UpdateGatewayOptionRequest &) = default ;
    UpdateGatewayOptionRequest& operator=(UpdateGatewayOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->gatewayId_ != nullptr && this->gatewayOption_ != nullptr && this->gatewayUniqueId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayOptionRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayOptionRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayOption Field Functions 
    bool hasGatewayOption() const { return this->gatewayOption_ != nullptr;};
    void deleteGatewayOption() { this->gatewayOption_ = nullptr;};
    inline const GatewayOption & gatewayOption() const { DARABONBA_PTR_GET_CONST(gatewayOption_, GatewayOption) };
    inline GatewayOption gatewayOption() { DARABONBA_PTR_GET(gatewayOption_, GatewayOption) };
    inline UpdateGatewayOptionRequest& setGatewayOption(const GatewayOption & gatewayOption) { DARABONBA_PTR_SET_VALUE(gatewayOption_, gatewayOption) };
    inline UpdateGatewayOptionRequest& setGatewayOption(GatewayOption && gatewayOption) { DARABONBA_PTR_SET_RVALUE(gatewayOption_, gatewayOption) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayOptionRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The detailed configurations of the gateway.
    // 
    // *   **TraceDetails**: the sampling description of Managed Service for OpenTelemetry. Content: TraceEnabled indicates whether Managed Service for OpenTelemetry is activated. Sample indicates the sampling rate of Managed Service for OpenTelemetry.
    // *   **LogConfigDetails**: the description of Simple Log Service. Content: LogEnabled indicates whether Simple Log Service is activated. ProjectName indicates the Simple Log Service project to which logs are delivered. LogStoreName indicates the name of the Logstore.
    // *   **EnableHardwareAcceleration**: indicates whether hardware acceleration is enabled.
    // *   **DisableHttp2Alpn**: indicates whether the HTTP/2 protocol is disabled.
    // *   **EnableWaf**: indicates whether Web Application Firewall (WAF) is enabled.
    std::shared_ptr<GatewayOption> gatewayOption_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
