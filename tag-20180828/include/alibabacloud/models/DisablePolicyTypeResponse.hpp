// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEPOLICYTYPERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DISABLEPOLICYTYPERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DisablePolicyTypeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class DisablePolicyTypeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisablePolicyTypeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DisablePolicyTypeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DisablePolicyTypeResponse() = default ;
    DisablePolicyTypeResponse(const DisablePolicyTypeResponse &) = default ;
    DisablePolicyTypeResponse(DisablePolicyTypeResponse &&) = default ;
    DisablePolicyTypeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisablePolicyTypeResponse() = default ;
    DisablePolicyTypeResponse& operator=(const DisablePolicyTypeResponse &) = default ;
    DisablePolicyTypeResponse& operator=(DisablePolicyTypeResponse &&) = default ;
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
    inline DisablePolicyTypeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DisablePolicyTypeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DisablePolicyTypeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DisablePolicyTypeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DisablePolicyTypeResponseBody) };
    inline DisablePolicyTypeResponseBody body() { DARABONBA_PTR_GET(body_, DisablePolicyTypeResponseBody) };
    inline DisablePolicyTypeResponse& setBody(const DisablePolicyTypeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DisablePolicyTypeResponse& setBody(DisablePolicyTypeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DisablePolicyTypeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
