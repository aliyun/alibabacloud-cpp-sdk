// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEANSWERSAMPLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEANSWERSAMPLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteAnswerSampleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DeleteAnswerSampleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAnswerSampleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAnswerSampleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteAnswerSampleResponse() = default ;
    DeleteAnswerSampleResponse(const DeleteAnswerSampleResponse &) = default ;
    DeleteAnswerSampleResponse(DeleteAnswerSampleResponse &&) = default ;
    DeleteAnswerSampleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAnswerSampleResponse() = default ;
    DeleteAnswerSampleResponse& operator=(const DeleteAnswerSampleResponse &) = default ;
    DeleteAnswerSampleResponse& operator=(DeleteAnswerSampleResponse &&) = default ;
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
    inline DeleteAnswerSampleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteAnswerSampleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteAnswerSampleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteAnswerSampleResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteAnswerSampleResponseBody) };
    inline DeleteAnswerSampleResponseBody body() { DARABONBA_PTR_GET(body_, DeleteAnswerSampleResponseBody) };
    inline DeleteAnswerSampleResponse& setBody(const DeleteAnswerSampleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteAnswerSampleResponse& setBody(DeleteAnswerSampleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteAnswerSampleResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
