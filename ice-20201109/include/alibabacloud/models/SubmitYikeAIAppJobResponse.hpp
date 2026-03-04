// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKEAIAPPJOBRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKEAIAPPJOBRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SubmitYikeAIAppJobResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitYikeAIAppJobResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeAIAppJobResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeAIAppJobResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SubmitYikeAIAppJobResponse() = default ;
    SubmitYikeAIAppJobResponse(const SubmitYikeAIAppJobResponse &) = default ;
    SubmitYikeAIAppJobResponse(SubmitYikeAIAppJobResponse &&) = default ;
    SubmitYikeAIAppJobResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeAIAppJobResponse() = default ;
    SubmitYikeAIAppJobResponse& operator=(const SubmitYikeAIAppJobResponse &) = default ;
    SubmitYikeAIAppJobResponse& operator=(SubmitYikeAIAppJobResponse &&) = default ;
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
    inline SubmitYikeAIAppJobResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SubmitYikeAIAppJobResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SubmitYikeAIAppJobResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SubmitYikeAIAppJobResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, SubmitYikeAIAppJobResponseBody) };
    inline SubmitYikeAIAppJobResponseBody getBody() { DARABONBA_PTR_GET(body_, SubmitYikeAIAppJobResponseBody) };
    inline SubmitYikeAIAppJobResponse& setBody(const SubmitYikeAIAppJobResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SubmitYikeAIAppJobResponse& setBody(SubmitYikeAIAppJobResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<SubmitYikeAIAppJobResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
