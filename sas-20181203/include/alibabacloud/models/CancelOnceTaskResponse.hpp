// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELONCETASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CANCELONCETASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CancelOnceTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CancelOnceTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelOnceTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CancelOnceTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CancelOnceTaskResponse() = default ;
    CancelOnceTaskResponse(const CancelOnceTaskResponse &) = default ;
    CancelOnceTaskResponse(CancelOnceTaskResponse &&) = default ;
    CancelOnceTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelOnceTaskResponse() = default ;
    CancelOnceTaskResponse& operator=(const CancelOnceTaskResponse &) = default ;
    CancelOnceTaskResponse& operator=(CancelOnceTaskResponse &&) = default ;
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
    inline CancelOnceTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CancelOnceTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CancelOnceTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CancelOnceTaskResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CancelOnceTaskResponseBody) };
    inline CancelOnceTaskResponseBody body() { DARABONBA_PTR_GET(body_, CancelOnceTaskResponseBody) };
    inline CancelOnceTaskResponse& setBody(const CancelOnceTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CancelOnceTaskResponse& setBody(CancelOnceTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CancelOnceTaskResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
