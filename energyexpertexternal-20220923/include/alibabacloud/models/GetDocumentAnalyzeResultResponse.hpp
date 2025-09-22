// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDocumentAnalyzeResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocumentAnalyzeResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDocumentAnalyzeResultResponse() = default ;
    GetDocumentAnalyzeResultResponse(const GetDocumentAnalyzeResultResponse &) = default ;
    GetDocumentAnalyzeResultResponse(GetDocumentAnalyzeResultResponse &&) = default ;
    GetDocumentAnalyzeResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultResponse() = default ;
    GetDocumentAnalyzeResultResponse& operator=(const GetDocumentAnalyzeResultResponse &) = default ;
    GetDocumentAnalyzeResultResponse& operator=(GetDocumentAnalyzeResultResponse &&) = default ;
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
    inline GetDocumentAnalyzeResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDocumentAnalyzeResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDocumentAnalyzeResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDocumentAnalyzeResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetDocumentAnalyzeResultResponseBody) };
    inline GetDocumentAnalyzeResultResponseBody body() { DARABONBA_PTR_GET(body_, GetDocumentAnalyzeResultResponseBody) };
    inline GetDocumentAnalyzeResultResponse& setBody(const GetDocumentAnalyzeResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDocumentAnalyzeResultResponse& setBody(GetDocumentAnalyzeResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetDocumentAnalyzeResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
