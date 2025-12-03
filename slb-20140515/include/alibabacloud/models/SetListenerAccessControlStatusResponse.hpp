// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLISTENERACCESSCONTROLSTATUSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SETLISTENERACCESSCONTROLSTATUSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SetListenerAccessControlStatusResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetListenerAccessControlStatusResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetListenerAccessControlStatusResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SetListenerAccessControlStatusResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SetListenerAccessControlStatusResponse() = default ;
    SetListenerAccessControlStatusResponse(const SetListenerAccessControlStatusResponse &) = default ;
    SetListenerAccessControlStatusResponse(SetListenerAccessControlStatusResponse &&) = default ;
    SetListenerAccessControlStatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetListenerAccessControlStatusResponse() = default ;
    SetListenerAccessControlStatusResponse& operator=(const SetListenerAccessControlStatusResponse &) = default ;
    SetListenerAccessControlStatusResponse& operator=(SetListenerAccessControlStatusResponse &&) = default ;
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
    inline SetListenerAccessControlStatusResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SetListenerAccessControlStatusResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SetListenerAccessControlStatusResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SetListenerAccessControlStatusResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SetListenerAccessControlStatusResponseBody) };
    inline SetListenerAccessControlStatusResponseBody body() { DARABONBA_PTR_GET(body_, SetListenerAccessControlStatusResponseBody) };
    inline SetListenerAccessControlStatusResponse& setBody(const SetListenerAccessControlStatusResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SetListenerAccessControlStatusResponse& setBody(SetListenerAccessControlStatusResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SetListenerAccessControlStatusResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
