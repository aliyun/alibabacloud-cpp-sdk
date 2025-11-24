// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISERVEREIPRESOURCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISERVEREIPRESOURCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyApiServerEipResourceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ModifyApiServerEipResourceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiServerEipResourceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiServerEipResourceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyApiServerEipResourceResponse() = default ;
    ModifyApiServerEipResourceResponse(const ModifyApiServerEipResourceResponse &) = default ;
    ModifyApiServerEipResourceResponse(ModifyApiServerEipResourceResponse &&) = default ;
    ModifyApiServerEipResourceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiServerEipResourceResponse() = default ;
    ModifyApiServerEipResourceResponse& operator=(const ModifyApiServerEipResourceResponse &) = default ;
    ModifyApiServerEipResourceResponse& operator=(ModifyApiServerEipResourceResponse &&) = default ;
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
    inline ModifyApiServerEipResourceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyApiServerEipResourceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyApiServerEipResourceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyApiServerEipResourceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyApiServerEipResourceResponseBody) };
    inline ModifyApiServerEipResourceResponseBody body() { DARABONBA_PTR_GET(body_, ModifyApiServerEipResourceResponseBody) };
    inline ModifyApiServerEipResourceResponse& setBody(const ModifyApiServerEipResourceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyApiServerEipResourceResponse& setBody(ModifyApiServerEipResourceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyApiServerEipResourceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
