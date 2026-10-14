// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETC2PASIGNRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETC2PASIGNRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetC2paSignResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetC2paSignResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetC2paSignResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetC2paSignResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetC2paSignResultResponse() = default ;
    GetC2paSignResultResponse(const GetC2paSignResultResponse &) = default ;
    GetC2paSignResultResponse(GetC2paSignResultResponse &&) = default ;
    GetC2paSignResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetC2paSignResultResponse() = default ;
    GetC2paSignResultResponse& operator=(const GetC2paSignResultResponse &) = default ;
    GetC2paSignResultResponse& operator=(GetC2paSignResultResponse &&) = default ;
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
    inline GetC2paSignResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetC2paSignResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetC2paSignResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetC2paSignResultResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetC2paSignResultResponseBody) };
    inline GetC2paSignResultResponseBody getBody() { DARABONBA_PTR_GET(body_, GetC2paSignResultResponseBody) };
    inline GetC2paSignResultResponse& setBody(const GetC2paSignResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetC2paSignResultResponse& setBody(GetC2paSignResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetC2paSignResultResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
