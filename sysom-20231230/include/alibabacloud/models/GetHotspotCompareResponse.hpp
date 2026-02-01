// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetHotspotCompareResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotCompareResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotCompareResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotCompareResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetHotspotCompareResponse() = default ;
    GetHotspotCompareResponse(const GetHotspotCompareResponse &) = default ;
    GetHotspotCompareResponse(GetHotspotCompareResponse &&) = default ;
    GetHotspotCompareResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotCompareResponse() = default ;
    GetHotspotCompareResponse& operator=(const GetHotspotCompareResponse &) = default ;
    GetHotspotCompareResponse& operator=(GetHotspotCompareResponse &&) = default ;
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
    inline GetHotspotCompareResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetHotspotCompareResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetHotspotCompareResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetHotspotCompareResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetHotspotCompareResponseBody) };
    inline GetHotspotCompareResponseBody getBody() { DARABONBA_PTR_GET(body_, GetHotspotCompareResponseBody) };
    inline GetHotspotCompareResponse& setBody(const GetHotspotCompareResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetHotspotCompareResponse& setBody(GetHotspotCompareResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetHotspotCompareResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
