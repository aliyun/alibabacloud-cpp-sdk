// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIREWALLV2ROUTEPOLICYSWITCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIREWALLV2ROUTEPOLICYSWITCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyFirewallV2RoutePolicySwitchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyFirewallV2RoutePolicySwitchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFirewallV2RoutePolicySwitchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFirewallV2RoutePolicySwitchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyFirewallV2RoutePolicySwitchResponse() = default ;
    ModifyFirewallV2RoutePolicySwitchResponse(const ModifyFirewallV2RoutePolicySwitchResponse &) = default ;
    ModifyFirewallV2RoutePolicySwitchResponse(ModifyFirewallV2RoutePolicySwitchResponse &&) = default ;
    ModifyFirewallV2RoutePolicySwitchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFirewallV2RoutePolicySwitchResponse() = default ;
    ModifyFirewallV2RoutePolicySwitchResponse& operator=(const ModifyFirewallV2RoutePolicySwitchResponse &) = default ;
    ModifyFirewallV2RoutePolicySwitchResponse& operator=(ModifyFirewallV2RoutePolicySwitchResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ModifyFirewallV2RoutePolicySwitchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyFirewallV2RoutePolicySwitchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyFirewallV2RoutePolicySwitchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyFirewallV2RoutePolicySwitchResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyFirewallV2RoutePolicySwitchResponseBody) };
    inline ModifyFirewallV2RoutePolicySwitchResponseBody body() { DARABONBA_PTR_GET(body_, ModifyFirewallV2RoutePolicySwitchResponseBody) };
    inline ModifyFirewallV2RoutePolicySwitchResponse& setBody(const ModifyFirewallV2RoutePolicySwitchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyFirewallV2RoutePolicySwitchResponse& setBody(ModifyFirewallV2RoutePolicySwitchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyFirewallV2RoutePolicySwitchResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
