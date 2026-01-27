// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UnbindUserDesktopResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class UnbindUserDesktopResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindUserDesktopResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindUserDesktopResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UnbindUserDesktopResponse() = default ;
    UnbindUserDesktopResponse(const UnbindUserDesktopResponse &) = default ;
    UnbindUserDesktopResponse(UnbindUserDesktopResponse &&) = default ;
    UnbindUserDesktopResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindUserDesktopResponse() = default ;
    UnbindUserDesktopResponse& operator=(const UnbindUserDesktopResponse &) = default ;
    UnbindUserDesktopResponse& operator=(UnbindUserDesktopResponse &&) = default ;
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
    inline UnbindUserDesktopResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UnbindUserDesktopResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UnbindUserDesktopResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UnbindUserDesktopResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UnbindUserDesktopResponseBody) };
    inline UnbindUserDesktopResponseBody getBody() { DARABONBA_PTR_GET(body_, UnbindUserDesktopResponseBody) };
    inline UnbindUserDesktopResponse& setBody(const UnbindUserDesktopResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UnbindUserDesktopResponse& setBody(UnbindUserDesktopResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UnbindUserDesktopResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
