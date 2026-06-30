// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEPROJECTEXPORTJOBRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEPROJECTEXPORTJOBRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetYikeProjectExportJobResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeProjectExportJobResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeProjectExportJobResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeProjectExportJobResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetYikeProjectExportJobResponse() = default ;
    GetYikeProjectExportJobResponse(const GetYikeProjectExportJobResponse &) = default ;
    GetYikeProjectExportJobResponse(GetYikeProjectExportJobResponse &&) = default ;
    GetYikeProjectExportJobResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeProjectExportJobResponse() = default ;
    GetYikeProjectExportJobResponse& operator=(const GetYikeProjectExportJobResponse &) = default ;
    GetYikeProjectExportJobResponse& operator=(GetYikeProjectExportJobResponse &&) = default ;
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
    inline GetYikeProjectExportJobResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetYikeProjectExportJobResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetYikeProjectExportJobResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetYikeProjectExportJobResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetYikeProjectExportJobResponseBody) };
    inline GetYikeProjectExportJobResponseBody getBody() { DARABONBA_PTR_GET(body_, GetYikeProjectExportJobResponseBody) };
    inline GetYikeProjectExportJobResponse& setBody(const GetYikeProjectExportJobResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetYikeProjectExportJobResponse& setBody(GetYikeProjectExportJobResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetYikeProjectExportJobResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
