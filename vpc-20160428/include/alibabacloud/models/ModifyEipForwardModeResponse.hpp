// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEIPFORWARDMODERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEIPFORWARDMODERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyEipForwardModeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyEipForwardModeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEipForwardModeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEipForwardModeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyEipForwardModeResponse() = default ;
    ModifyEipForwardModeResponse(const ModifyEipForwardModeResponse &) = default ;
    ModifyEipForwardModeResponse(ModifyEipForwardModeResponse &&) = default ;
    ModifyEipForwardModeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEipForwardModeResponse() = default ;
    ModifyEipForwardModeResponse& operator=(const ModifyEipForwardModeResponse &) = default ;
    ModifyEipForwardModeResponse& operator=(ModifyEipForwardModeResponse &&) = default ;
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
    inline ModifyEipForwardModeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyEipForwardModeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyEipForwardModeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyEipForwardModeResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModifyEipForwardModeResponseBody) };
    inline ModifyEipForwardModeResponseBody getBody() { DARABONBA_PTR_GET(body_, ModifyEipForwardModeResponseBody) };
    inline ModifyEipForwardModeResponse& setBody(const ModifyEipForwardModeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyEipForwardModeResponse& setBody(ModifyEipForwardModeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ModifyEipForwardModeResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
