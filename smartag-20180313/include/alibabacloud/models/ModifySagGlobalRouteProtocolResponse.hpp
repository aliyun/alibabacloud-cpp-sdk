// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAGGLOBALROUTEPROTOCOLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAGGLOBALROUTEPROTOCOLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifySagGlobalRouteProtocolResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifySagGlobalRouteProtocolResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySagGlobalRouteProtocolResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySagGlobalRouteProtocolResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifySagGlobalRouteProtocolResponse() = default ;
    ModifySagGlobalRouteProtocolResponse(const ModifySagGlobalRouteProtocolResponse &) = default ;
    ModifySagGlobalRouteProtocolResponse(ModifySagGlobalRouteProtocolResponse &&) = default ;
    ModifySagGlobalRouteProtocolResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySagGlobalRouteProtocolResponse() = default ;
    ModifySagGlobalRouteProtocolResponse& operator=(const ModifySagGlobalRouteProtocolResponse &) = default ;
    ModifySagGlobalRouteProtocolResponse& operator=(ModifySagGlobalRouteProtocolResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ModifySagGlobalRouteProtocolResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifySagGlobalRouteProtocolResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifySagGlobalRouteProtocolResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifySagGlobalRouteProtocolResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModifySagGlobalRouteProtocolResponseBody) };
    inline ModifySagGlobalRouteProtocolResponseBody getBody() { DARABONBA_PTR_GET(body_, ModifySagGlobalRouteProtocolResponseBody) };
    inline ModifySagGlobalRouteProtocolResponse& setBody(const ModifySagGlobalRouteProtocolResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifySagGlobalRouteProtocolResponse& setBody(ModifySagGlobalRouteProtocolResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ModifySagGlobalRouteProtocolResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
