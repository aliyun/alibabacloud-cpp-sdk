// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateTempFileUploadUrlResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateTempFileUploadUrlResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTempFileUploadUrlResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTempFileUploadUrlResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateTempFileUploadUrlResponse() = default ;
    CreateTempFileUploadUrlResponse(const CreateTempFileUploadUrlResponse &) = default ;
    CreateTempFileUploadUrlResponse(CreateTempFileUploadUrlResponse &&) = default ;
    CreateTempFileUploadUrlResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTempFileUploadUrlResponse() = default ;
    CreateTempFileUploadUrlResponse& operator=(const CreateTempFileUploadUrlResponse &) = default ;
    CreateTempFileUploadUrlResponse& operator=(CreateTempFileUploadUrlResponse &&) = default ;
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
    inline CreateTempFileUploadUrlResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateTempFileUploadUrlResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateTempFileUploadUrlResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateTempFileUploadUrlResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateTempFileUploadUrlResponseBody) };
    inline CreateTempFileUploadUrlResponseBody body() { DARABONBA_PTR_GET(body_, CreateTempFileUploadUrlResponseBody) };
    inline CreateTempFileUploadUrlResponse& setBody(const CreateTempFileUploadUrlResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateTempFileUploadUrlResponse& setBody(CreateTempFileUploadUrlResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateTempFileUploadUrlResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
