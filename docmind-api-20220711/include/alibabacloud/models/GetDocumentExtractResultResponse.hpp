// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTEXTRACTRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTEXTRACTRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDocumentExtractResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocumentExtractResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentExtractResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentExtractResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDocumentExtractResultResponse() = default ;
    GetDocumentExtractResultResponse(const GetDocumentExtractResultResponse &) = default ;
    GetDocumentExtractResultResponse(GetDocumentExtractResultResponse &&) = default ;
    GetDocumentExtractResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentExtractResultResponse() = default ;
    GetDocumentExtractResultResponse& operator=(const GetDocumentExtractResultResponse &) = default ;
    GetDocumentExtractResultResponse& operator=(GetDocumentExtractResultResponse &&) = default ;
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
    inline GetDocumentExtractResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDocumentExtractResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDocumentExtractResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDocumentExtractResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetDocumentExtractResultResponseBody) };
    inline GetDocumentExtractResultResponseBody body() { DARABONBA_PTR_GET(body_, GetDocumentExtractResultResponseBody) };
    inline GetDocumentExtractResultResponse& setBody(const GetDocumentExtractResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDocumentExtractResultResponse& setBody(GetDocumentExtractResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetDocumentExtractResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
