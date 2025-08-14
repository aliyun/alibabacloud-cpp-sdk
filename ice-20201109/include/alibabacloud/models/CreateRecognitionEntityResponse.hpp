// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECOGNITIONENTITYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATERECOGNITIONENTITYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateRecognitionEntityResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateRecognitionEntityResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecognitionEntityResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecognitionEntityResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateRecognitionEntityResponse() = default ;
    CreateRecognitionEntityResponse(const CreateRecognitionEntityResponse &) = default ;
    CreateRecognitionEntityResponse(CreateRecognitionEntityResponse &&) = default ;
    CreateRecognitionEntityResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecognitionEntityResponse() = default ;
    CreateRecognitionEntityResponse& operator=(const CreateRecognitionEntityResponse &) = default ;
    CreateRecognitionEntityResponse& operator=(CreateRecognitionEntityResponse &&) = default ;
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
    inline CreateRecognitionEntityResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateRecognitionEntityResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateRecognitionEntityResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateRecognitionEntityResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateRecognitionEntityResponseBody) };
    inline CreateRecognitionEntityResponseBody body() { DARABONBA_PTR_GET(body_, CreateRecognitionEntityResponseBody) };
    inline CreateRecognitionEntityResponse& setBody(const CreateRecognitionEntityResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateRecognitionEntityResponse& setBody(CreateRecognitionEntityResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateRecognitionEntityResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
