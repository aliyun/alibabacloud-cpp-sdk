// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIASRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIASRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BatchGetMediasResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class BatchGetMediasResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediasResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediasResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BatchGetMediasResponse() = default ;
    BatchGetMediasResponse(const BatchGetMediasResponse &) = default ;
    BatchGetMediasResponse(BatchGetMediasResponse &&) = default ;
    BatchGetMediasResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediasResponse() = default ;
    BatchGetMediasResponse& operator=(const BatchGetMediasResponse &) = default ;
    BatchGetMediasResponse& operator=(BatchGetMediasResponse &&) = default ;
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
    inline BatchGetMediasResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline BatchGetMediasResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline BatchGetMediasResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchGetMediasResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, BatchGetMediasResponseBody) };
    inline BatchGetMediasResponseBody getBody() { DARABONBA_PTR_GET(body_, BatchGetMediasResponseBody) };
    inline BatchGetMediasResponse& setBody(const BatchGetMediasResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchGetMediasResponse& setBody(BatchGetMediasResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<BatchGetMediasResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
