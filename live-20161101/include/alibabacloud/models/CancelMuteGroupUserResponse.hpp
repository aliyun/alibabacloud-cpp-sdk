// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CANCELMUTEGROUPUSERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CancelMuteGroupUserResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CancelMuteGroupUserResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMuteGroupUserResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMuteGroupUserResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CancelMuteGroupUserResponse() = default ;
    CancelMuteGroupUserResponse(const CancelMuteGroupUserResponse &) = default ;
    CancelMuteGroupUserResponse(CancelMuteGroupUserResponse &&) = default ;
    CancelMuteGroupUserResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMuteGroupUserResponse() = default ;
    CancelMuteGroupUserResponse& operator=(const CancelMuteGroupUserResponse &) = default ;
    CancelMuteGroupUserResponse& operator=(CancelMuteGroupUserResponse &&) = default ;
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
    inline CancelMuteGroupUserResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CancelMuteGroupUserResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CancelMuteGroupUserResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CancelMuteGroupUserResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CancelMuteGroupUserResponseBody) };
    inline CancelMuteGroupUserResponseBody getBody() { DARABONBA_PTR_GET(body_, CancelMuteGroupUserResponseBody) };
    inline CancelMuteGroupUserResponse& setBody(const CancelMuteGroupUserResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CancelMuteGroupUserResponse& setBody(CancelMuteGroupUserResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CancelMuteGroupUserResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
