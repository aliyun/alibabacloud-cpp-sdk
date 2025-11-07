// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERSBYPATHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERSBYPATHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetSecretParametersByPathResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParametersByPathResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParametersByPathResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParametersByPathResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetSecretParametersByPathResponse() = default ;
    GetSecretParametersByPathResponse(const GetSecretParametersByPathResponse &) = default ;
    GetSecretParametersByPathResponse(GetSecretParametersByPathResponse &&) = default ;
    GetSecretParametersByPathResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParametersByPathResponse() = default ;
    GetSecretParametersByPathResponse& operator=(const GetSecretParametersByPathResponse &) = default ;
    GetSecretParametersByPathResponse& operator=(GetSecretParametersByPathResponse &&) = default ;
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
    inline GetSecretParametersByPathResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetSecretParametersByPathResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetSecretParametersByPathResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetSecretParametersByPathResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetSecretParametersByPathResponseBody) };
    inline GetSecretParametersByPathResponseBody body() { DARABONBA_PTR_GET(body_, GetSecretParametersByPathResponseBody) };
    inline GetSecretParametersByPathResponse& setBody(const GetSecretParametersByPathResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSecretParametersByPathResponse& setBody(GetSecretParametersByPathResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetSecretParametersByPathResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
