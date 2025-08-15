// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEBATCHTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEBATCHTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ExecuteBatchTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ExecuteBatchTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteBatchTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteBatchTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ExecuteBatchTaskResponse() = default ;
    ExecuteBatchTaskResponse(const ExecuteBatchTaskResponse &) = default ;
    ExecuteBatchTaskResponse(ExecuteBatchTaskResponse &&) = default ;
    ExecuteBatchTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteBatchTaskResponse() = default ;
    ExecuteBatchTaskResponse& operator=(const ExecuteBatchTaskResponse &) = default ;
    ExecuteBatchTaskResponse& operator=(ExecuteBatchTaskResponse &&) = default ;
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
    inline ExecuteBatchTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ExecuteBatchTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ExecuteBatchTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ExecuteBatchTaskResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ExecuteBatchTaskResponseBody) };
    inline ExecuteBatchTaskResponseBody body() { DARABONBA_PTR_GET(body_, ExecuteBatchTaskResponseBody) };
    inline ExecuteBatchTaskResponse& setBody(const ExecuteBatchTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ExecuteBatchTaskResponse& setBody(ExecuteBatchTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ExecuteBatchTaskResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
