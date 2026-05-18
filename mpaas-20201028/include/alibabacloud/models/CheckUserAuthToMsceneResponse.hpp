// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERAUTHTOMSCENERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERAUTHTOMSCENERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CheckUserAuthToMsceneResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CheckUserAuthToMsceneResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserAuthToMsceneResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserAuthToMsceneResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CheckUserAuthToMsceneResponse() = default ;
    CheckUserAuthToMsceneResponse(const CheckUserAuthToMsceneResponse &) = default ;
    CheckUserAuthToMsceneResponse(CheckUserAuthToMsceneResponse &&) = default ;
    CheckUserAuthToMsceneResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserAuthToMsceneResponse() = default ;
    CheckUserAuthToMsceneResponse& operator=(const CheckUserAuthToMsceneResponse &) = default ;
    CheckUserAuthToMsceneResponse& operator=(CheckUserAuthToMsceneResponse &&) = default ;
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
    inline CheckUserAuthToMsceneResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CheckUserAuthToMsceneResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CheckUserAuthToMsceneResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CheckUserAuthToMsceneResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CheckUserAuthToMsceneResponseBody) };
    inline CheckUserAuthToMsceneResponseBody getBody() { DARABONBA_PTR_GET(body_, CheckUserAuthToMsceneResponseBody) };
    inline CheckUserAuthToMsceneResponse& setBody(const CheckUserAuthToMsceneResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CheckUserAuthToMsceneResponse& setBody(CheckUserAuthToMsceneResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CheckUserAuthToMsceneResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
