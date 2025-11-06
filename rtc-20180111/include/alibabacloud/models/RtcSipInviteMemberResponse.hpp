// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPINVITEMEMBERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPINVITEMEMBERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RtcSipInviteMemberResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipInviteMemberResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipInviteMemberResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipInviteMemberResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RtcSipInviteMemberResponse() = default ;
    RtcSipInviteMemberResponse(const RtcSipInviteMemberResponse &) = default ;
    RtcSipInviteMemberResponse(RtcSipInviteMemberResponse &&) = default ;
    RtcSipInviteMemberResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipInviteMemberResponse() = default ;
    RtcSipInviteMemberResponse& operator=(const RtcSipInviteMemberResponse &) = default ;
    RtcSipInviteMemberResponse& operator=(RtcSipInviteMemberResponse &&) = default ;
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
    inline RtcSipInviteMemberResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RtcSipInviteMemberResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RtcSipInviteMemberResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RtcSipInviteMemberResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RtcSipInviteMemberResponseBody) };
    inline RtcSipInviteMemberResponseBody body() { DARABONBA_PTR_GET(body_, RtcSipInviteMemberResponseBody) };
    inline RtcSipInviteMemberResponse& setBody(const RtcSipInviteMemberResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RtcSipInviteMemberResponse& setBody(RtcSipInviteMemberResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RtcSipInviteMemberResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
