// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMFDSERVICEOPENRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CHECKMFDSERVICEOPENRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CheckMfdServiceOpenResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssMfd20231017
{
namespace Models
{
  class CheckMfdServiceOpenResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMfdServiceOpenResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMfdServiceOpenResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CheckMfdServiceOpenResponse() = default ;
    CheckMfdServiceOpenResponse(const CheckMfdServiceOpenResponse &) = default ;
    CheckMfdServiceOpenResponse(CheckMfdServiceOpenResponse &&) = default ;
    CheckMfdServiceOpenResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMfdServiceOpenResponse() = default ;
    CheckMfdServiceOpenResponse& operator=(const CheckMfdServiceOpenResponse &) = default ;
    CheckMfdServiceOpenResponse& operator=(CheckMfdServiceOpenResponse &&) = default ;
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
    inline CheckMfdServiceOpenResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CheckMfdServiceOpenResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CheckMfdServiceOpenResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CheckMfdServiceOpenResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CheckMfdServiceOpenResponseBody) };
    inline CheckMfdServiceOpenResponseBody getBody() { DARABONBA_PTR_GET(body_, CheckMfdServiceOpenResponseBody) };
    inline CheckMfdServiceOpenResponse& setBody(const CheckMfdServiceOpenResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CheckMfdServiceOpenResponse& setBody(CheckMfdServiceOpenResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CheckMfdServiceOpenResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssMfd20231017
#endif
