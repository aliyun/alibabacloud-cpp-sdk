// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRUNSUMMARIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetWorkItemRunSummariesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetWorkItemRunSummariesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemRunSummariesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemRunSummariesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetWorkItemRunSummariesResponse() = default ;
    GetWorkItemRunSummariesResponse(const GetWorkItemRunSummariesResponse &) = default ;
    GetWorkItemRunSummariesResponse(GetWorkItemRunSummariesResponse &&) = default ;
    GetWorkItemRunSummariesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemRunSummariesResponse() = default ;
    GetWorkItemRunSummariesResponse& operator=(const GetWorkItemRunSummariesResponse &) = default ;
    GetWorkItemRunSummariesResponse& operator=(GetWorkItemRunSummariesResponse &&) = default ;
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
    inline GetWorkItemRunSummariesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetWorkItemRunSummariesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetWorkItemRunSummariesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetWorkItemRunSummariesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetWorkItemRunSummariesResponseBody) };
    inline GetWorkItemRunSummariesResponseBody getBody() { DARABONBA_PTR_GET(body_, GetWorkItemRunSummariesResponseBody) };
    inline GetWorkItemRunSummariesResponse& setBody(const GetWorkItemRunSummariesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetWorkItemRunSummariesResponse& setBody(GetWorkItemRunSummariesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetWorkItemRunSummariesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
