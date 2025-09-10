// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateQuotaApplicationResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateQuotaApplicationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaApplicationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaApplicationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateQuotaApplicationResponse() = default ;
    CreateQuotaApplicationResponse(const CreateQuotaApplicationResponse &) = default ;
    CreateQuotaApplicationResponse(CreateQuotaApplicationResponse &&) = default ;
    CreateQuotaApplicationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaApplicationResponse() = default ;
    CreateQuotaApplicationResponse& operator=(const CreateQuotaApplicationResponse &) = default ;
    CreateQuotaApplicationResponse& operator=(CreateQuotaApplicationResponse &&) = default ;
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
    inline CreateQuotaApplicationResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateQuotaApplicationResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateQuotaApplicationResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateQuotaApplicationResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateQuotaApplicationResponseBody) };
    inline CreateQuotaApplicationResponseBody body() { DARABONBA_PTR_GET(body_, CreateQuotaApplicationResponseBody) };
    inline CreateQuotaApplicationResponse& setBody(const CreateQuotaApplicationResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateQuotaApplicationResponse& setBody(CreateQuotaApplicationResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateQuotaApplicationResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
