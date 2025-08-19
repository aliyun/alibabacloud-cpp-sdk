// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCONTROLPLANELOGENABLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CHECKCONTROLPLANELOGENABLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CheckControlPlaneLogEnableResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckControlPlaneLogEnableResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckControlPlaneLogEnableResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CheckControlPlaneLogEnableResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CheckControlPlaneLogEnableResponse() = default ;
    CheckControlPlaneLogEnableResponse(const CheckControlPlaneLogEnableResponse &) = default ;
    CheckControlPlaneLogEnableResponse(CheckControlPlaneLogEnableResponse &&) = default ;
    CheckControlPlaneLogEnableResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckControlPlaneLogEnableResponse() = default ;
    CheckControlPlaneLogEnableResponse& operator=(const CheckControlPlaneLogEnableResponse &) = default ;
    CheckControlPlaneLogEnableResponse& operator=(CheckControlPlaneLogEnableResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CheckControlPlaneLogEnableResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CheckControlPlaneLogEnableResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CheckControlPlaneLogEnableResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CheckControlPlaneLogEnableResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CheckControlPlaneLogEnableResponseBody) };
    inline CheckControlPlaneLogEnableResponseBody body() { DARABONBA_PTR_GET(body_, CheckControlPlaneLogEnableResponseBody) };
    inline CheckControlPlaneLogEnableResponse& setBody(const CheckControlPlaneLogEnableResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CheckControlPlaneLogEnableResponse& setBody(CheckControlPlaneLogEnableResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CheckControlPlaneLogEnableResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
