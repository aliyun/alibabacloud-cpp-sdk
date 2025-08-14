// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMTRANSITROUTERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REVOKEINSTANCEFROMTRANSITROUTERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RevokeInstanceFromTransitRouterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class RevokeInstanceFromTransitRouterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeInstanceFromTransitRouterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeInstanceFromTransitRouterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RevokeInstanceFromTransitRouterResponse() = default ;
    RevokeInstanceFromTransitRouterResponse(const RevokeInstanceFromTransitRouterResponse &) = default ;
    RevokeInstanceFromTransitRouterResponse(RevokeInstanceFromTransitRouterResponse &&) = default ;
    RevokeInstanceFromTransitRouterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeInstanceFromTransitRouterResponse() = default ;
    RevokeInstanceFromTransitRouterResponse& operator=(const RevokeInstanceFromTransitRouterResponse &) = default ;
    RevokeInstanceFromTransitRouterResponse& operator=(RevokeInstanceFromTransitRouterResponse &&) = default ;
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
    inline RevokeInstanceFromTransitRouterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RevokeInstanceFromTransitRouterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RevokeInstanceFromTransitRouterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RevokeInstanceFromTransitRouterResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RevokeInstanceFromTransitRouterResponseBody) };
    inline RevokeInstanceFromTransitRouterResponseBody body() { DARABONBA_PTR_GET(body_, RevokeInstanceFromTransitRouterResponseBody) };
    inline RevokeInstanceFromTransitRouterResponse& setBody(const RevokeInstanceFromTransitRouterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RevokeInstanceFromTransitRouterResponse& setBody(RevokeInstanceFromTransitRouterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RevokeInstanceFromTransitRouterResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
