// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYATTACHMENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetPolicyAttachmentResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPolicyAttachmentResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAttachmentResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAttachmentResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetPolicyAttachmentResponse() = default ;
    GetPolicyAttachmentResponse(const GetPolicyAttachmentResponse &) = default ;
    GetPolicyAttachmentResponse(GetPolicyAttachmentResponse &&) = default ;
    GetPolicyAttachmentResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAttachmentResponse() = default ;
    GetPolicyAttachmentResponse& operator=(const GetPolicyAttachmentResponse &) = default ;
    GetPolicyAttachmentResponse& operator=(GetPolicyAttachmentResponse &&) = default ;
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
    inline GetPolicyAttachmentResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetPolicyAttachmentResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetPolicyAttachmentResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetPolicyAttachmentResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetPolicyAttachmentResponseBody) };
    inline GetPolicyAttachmentResponseBody body() { DARABONBA_PTR_GET(body_, GetPolicyAttachmentResponseBody) };
    inline GetPolicyAttachmentResponse& setBody(const GetPolicyAttachmentResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetPolicyAttachmentResponse& setBody(GetPolicyAttachmentResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetPolicyAttachmentResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
