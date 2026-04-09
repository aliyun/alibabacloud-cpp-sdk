// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRESOLVECACHERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRESOLVECACHERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RefreshResolveCacheResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class RefreshResolveCacheResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshResolveCacheResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshResolveCacheResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RefreshResolveCacheResponse() = default ;
    RefreshResolveCacheResponse(const RefreshResolveCacheResponse &) = default ;
    RefreshResolveCacheResponse(RefreshResolveCacheResponse &&) = default ;
    RefreshResolveCacheResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshResolveCacheResponse() = default ;
    RefreshResolveCacheResponse& operator=(const RefreshResolveCacheResponse &) = default ;
    RefreshResolveCacheResponse& operator=(RefreshResolveCacheResponse &&) = default ;
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
    inline RefreshResolveCacheResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RefreshResolveCacheResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RefreshResolveCacheResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RefreshResolveCacheResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, RefreshResolveCacheResponseBody) };
    inline RefreshResolveCacheResponseBody getBody() { DARABONBA_PTR_GET(body_, RefreshResolveCacheResponseBody) };
    inline RefreshResolveCacheResponse& setBody(const RefreshResolveCacheResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RefreshResolveCacheResponse& setBody(RefreshResolveCacheResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<RefreshResolveCacheResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
