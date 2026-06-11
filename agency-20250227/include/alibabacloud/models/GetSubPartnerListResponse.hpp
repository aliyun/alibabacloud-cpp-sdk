// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBPARTNERLISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSUBPARTNERLISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetSubPartnerListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetSubPartnerListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubPartnerListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubPartnerListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetSubPartnerListResponse() = default ;
    GetSubPartnerListResponse(const GetSubPartnerListResponse &) = default ;
    GetSubPartnerListResponse(GetSubPartnerListResponse &&) = default ;
    GetSubPartnerListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubPartnerListResponse() = default ;
    GetSubPartnerListResponse& operator=(const GetSubPartnerListResponse &) = default ;
    GetSubPartnerListResponse& operator=(GetSubPartnerListResponse &&) = default ;
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
    inline GetSubPartnerListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetSubPartnerListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetSubPartnerListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetSubPartnerListResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetSubPartnerListResponseBody) };
    inline GetSubPartnerListResponseBody getBody() { DARABONBA_PTR_GET(body_, GetSubPartnerListResponseBody) };
    inline GetSubPartnerListResponse& setBody(const GetSubPartnerListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSubPartnerListResponse& setBody(GetSubPartnerListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetSubPartnerListResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
