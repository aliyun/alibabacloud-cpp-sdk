// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRENDGROUPOUTPUTTPSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ONSTRENDGROUPOUTPUTTPSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/OnsTrendGroupOutputTpsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTrendGroupOutputTpsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTrendGroupOutputTpsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTrendGroupOutputTpsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    OnsTrendGroupOutputTpsResponse() = default ;
    OnsTrendGroupOutputTpsResponse(const OnsTrendGroupOutputTpsResponse &) = default ;
    OnsTrendGroupOutputTpsResponse(OnsTrendGroupOutputTpsResponse &&) = default ;
    OnsTrendGroupOutputTpsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTrendGroupOutputTpsResponse() = default ;
    OnsTrendGroupOutputTpsResponse& operator=(const OnsTrendGroupOutputTpsResponse &) = default ;
    OnsTrendGroupOutputTpsResponse& operator=(OnsTrendGroupOutputTpsResponse &&) = default ;
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
    inline OnsTrendGroupOutputTpsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline OnsTrendGroupOutputTpsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline OnsTrendGroupOutputTpsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OnsTrendGroupOutputTpsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, OnsTrendGroupOutputTpsResponseBody) };
    inline OnsTrendGroupOutputTpsResponseBody getBody() { DARABONBA_PTR_GET(body_, OnsTrendGroupOutputTpsResponseBody) };
    inline OnsTrendGroupOutputTpsResponse& setBody(const OnsTrendGroupOutputTpsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline OnsTrendGroupOutputTpsResponse& setBody(OnsTrendGroupOutputTpsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<OnsTrendGroupOutputTpsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
