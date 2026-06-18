// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTLCOMMISSIONDETAILFILELISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETINTLCOMMISSIONDETAILFILELISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetIntlCommissionDetailFileListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetIntlCommissionDetailFileListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntlCommissionDetailFileListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntlCommissionDetailFileListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetIntlCommissionDetailFileListResponse() = default ;
    GetIntlCommissionDetailFileListResponse(const GetIntlCommissionDetailFileListResponse &) = default ;
    GetIntlCommissionDetailFileListResponse(GetIntlCommissionDetailFileListResponse &&) = default ;
    GetIntlCommissionDetailFileListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntlCommissionDetailFileListResponse() = default ;
    GetIntlCommissionDetailFileListResponse& operator=(const GetIntlCommissionDetailFileListResponse &) = default ;
    GetIntlCommissionDetailFileListResponse& operator=(GetIntlCommissionDetailFileListResponse &&) = default ;
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
    inline GetIntlCommissionDetailFileListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetIntlCommissionDetailFileListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetIntlCommissionDetailFileListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetIntlCommissionDetailFileListResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetIntlCommissionDetailFileListResponseBody) };
    inline GetIntlCommissionDetailFileListResponseBody getBody() { DARABONBA_PTR_GET(body_, GetIntlCommissionDetailFileListResponseBody) };
    inline GetIntlCommissionDetailFileListResponse& setBody(const GetIntlCommissionDetailFileListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetIntlCommissionDetailFileListResponse& setBody(GetIntlCommissionDetailFileListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetIntlCommissionDetailFileListResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
