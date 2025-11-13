// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_STARTBACK2BACKCALLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/StartBack2BackCallResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartBack2BackCallResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBack2BackCallResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, StartBack2BackCallResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    StartBack2BackCallResponse() = default ;
    StartBack2BackCallResponse(const StartBack2BackCallResponse &) = default ;
    StartBack2BackCallResponse(StartBack2BackCallResponse &&) = default ;
    StartBack2BackCallResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBack2BackCallResponse() = default ;
    StartBack2BackCallResponse& operator=(const StartBack2BackCallResponse &) = default ;
    StartBack2BackCallResponse& operator=(StartBack2BackCallResponse &&) = default ;
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
    inline StartBack2BackCallResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline StartBack2BackCallResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline StartBack2BackCallResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const StartBack2BackCallResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, StartBack2BackCallResponseBody) };
    inline StartBack2BackCallResponseBody body() { DARABONBA_PTR_GET(body_, StartBack2BackCallResponseBody) };
    inline StartBack2BackCallResponse& setBody(const StartBack2BackCallResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline StartBack2BackCallResponse& setBody(StartBack2BackCallResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<StartBack2BackCallResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
