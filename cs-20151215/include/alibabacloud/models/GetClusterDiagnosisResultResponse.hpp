// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetClusterDiagnosisResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetClusterDiagnosisResultResponse() = default ;
    GetClusterDiagnosisResultResponse(const GetClusterDiagnosisResultResponse &) = default ;
    GetClusterDiagnosisResultResponse(GetClusterDiagnosisResultResponse &&) = default ;
    GetClusterDiagnosisResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisResultResponse() = default ;
    GetClusterDiagnosisResultResponse& operator=(const GetClusterDiagnosisResultResponse &) = default ;
    GetClusterDiagnosisResultResponse& operator=(GetClusterDiagnosisResultResponse &&) = default ;
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
    inline GetClusterDiagnosisResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetClusterDiagnosisResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetClusterDiagnosisResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetClusterDiagnosisResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetClusterDiagnosisResultResponseBody) };
    inline GetClusterDiagnosisResultResponseBody body() { DARABONBA_PTR_GET(body_, GetClusterDiagnosisResultResponseBody) };
    inline GetClusterDiagnosisResultResponse& setBody(const GetClusterDiagnosisResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetClusterDiagnosisResultResponse& setBody(GetClusterDiagnosisResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetClusterDiagnosisResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
