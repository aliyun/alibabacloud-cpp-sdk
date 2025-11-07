// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETPARAMETERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETPARAMETERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteSecretParameterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteSecretParameterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretParameterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretParameterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteSecretParameterResponse() = default ;
    DeleteSecretParameterResponse(const DeleteSecretParameterResponse &) = default ;
    DeleteSecretParameterResponse(DeleteSecretParameterResponse &&) = default ;
    DeleteSecretParameterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretParameterResponse() = default ;
    DeleteSecretParameterResponse& operator=(const DeleteSecretParameterResponse &) = default ;
    DeleteSecretParameterResponse& operator=(DeleteSecretParameterResponse &&) = default ;
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
    inline DeleteSecretParameterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteSecretParameterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteSecretParameterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteSecretParameterResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteSecretParameterResponseBody) };
    inline DeleteSecretParameterResponseBody body() { DARABONBA_PTR_GET(body_, DeleteSecretParameterResponseBody) };
    inline DeleteSecretParameterResponse& setBody(const DeleteSecretParameterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteSecretParameterResponse& setBody(DeleteSecretParameterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteSecretParameterResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
