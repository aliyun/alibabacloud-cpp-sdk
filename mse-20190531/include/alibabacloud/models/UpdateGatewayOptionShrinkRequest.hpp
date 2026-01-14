// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYOPTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYOPTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayOptionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayOptionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayOption, gatewayOptionShrink_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayOptionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayOption, gatewayOptionShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    UpdateGatewayOptionShrinkRequest() = default ;
    UpdateGatewayOptionShrinkRequest(const UpdateGatewayOptionShrinkRequest &) = default ;
    UpdateGatewayOptionShrinkRequest(UpdateGatewayOptionShrinkRequest &&) = default ;
    UpdateGatewayOptionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayOptionShrinkRequest() = default ;
    UpdateGatewayOptionShrinkRequest& operator=(const UpdateGatewayOptionShrinkRequest &) = default ;
    UpdateGatewayOptionShrinkRequest& operator=(UpdateGatewayOptionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayOptionShrink_ == nullptr && this->gatewayUniqueId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayOptionShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayOptionShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayOptionShrink Field Functions 
    bool hasGatewayOptionShrink() const { return this->gatewayOptionShrink_ != nullptr;};
    void deleteGatewayOptionShrink() { this->gatewayOptionShrink_ = nullptr;};
    inline string getGatewayOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(gatewayOptionShrink_, "") };
    inline UpdateGatewayOptionShrinkRequest& setGatewayOptionShrink(string gatewayOptionShrink) { DARABONBA_PTR_SET_VALUE(gatewayOptionShrink_, gatewayOptionShrink) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayOptionShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The detailed configurations of the gateway.
    // 
    // *   **TraceDetails**: the sampling description of Managed Service for OpenTelemetry. Content: TraceEnabled indicates whether Managed Service for OpenTelemetry is activated. Sample indicates the sampling rate of Managed Service for OpenTelemetry.
    // *   **LogConfigDetails**: the description of Simple Log Service. Content: LogEnabled indicates whether Simple Log Service is activated. ProjectName indicates the Simple Log Service project to which logs are delivered. LogStoreName indicates the name of the Logstore.
    // *   **EnableHardwareAcceleration**: indicates whether hardware acceleration is enabled.
    // *   **DisableHttp2Alpn**: indicates whether the HTTP/2 protocol is disabled.
    // *   **EnableWaf**: indicates whether Web Application Firewall (WAF) is enabled.
    shared_ptr<string> gatewayOptionShrink_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
