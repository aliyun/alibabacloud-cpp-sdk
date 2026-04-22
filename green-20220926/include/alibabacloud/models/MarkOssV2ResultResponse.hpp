// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKOSSV2RESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MARKOSSV2RESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/MarkOssV2ResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class MarkOssV2ResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkOssV2ResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, MarkOssV2ResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    MarkOssV2ResultResponse() = default ;
    MarkOssV2ResultResponse(const MarkOssV2ResultResponse &) = default ;
    MarkOssV2ResultResponse(MarkOssV2ResultResponse &&) = default ;
    MarkOssV2ResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkOssV2ResultResponse() = default ;
    MarkOssV2ResultResponse& operator=(const MarkOssV2ResultResponse &) = default ;
    MarkOssV2ResultResponse& operator=(MarkOssV2ResultResponse &&) = default ;
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
    inline MarkOssV2ResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline MarkOssV2ResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline MarkOssV2ResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MarkOssV2ResultResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, MarkOssV2ResultResponseBody) };
    inline MarkOssV2ResultResponseBody getBody() { DARABONBA_PTR_GET(body_, MarkOssV2ResultResponseBody) };
    inline MarkOssV2ResultResponse& setBody(const MarkOssV2ResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline MarkOssV2ResultResponse& setBody(MarkOssV2ResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<MarkOssV2ResultResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
