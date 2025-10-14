// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREALISTICPORTRAITRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEREALISTICPORTRAITRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateRealisticPortraitResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateRealisticPortraitResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRealisticPortraitResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRealisticPortraitResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateRealisticPortraitResponse() = default ;
    CreateRealisticPortraitResponse(const CreateRealisticPortraitResponse &) = default ;
    CreateRealisticPortraitResponse(CreateRealisticPortraitResponse &&) = default ;
    CreateRealisticPortraitResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRealisticPortraitResponse() = default ;
    CreateRealisticPortraitResponse& operator=(const CreateRealisticPortraitResponse &) = default ;
    CreateRealisticPortraitResponse& operator=(CreateRealisticPortraitResponse &&) = default ;
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
    inline CreateRealisticPortraitResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateRealisticPortraitResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateRealisticPortraitResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateRealisticPortraitResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateRealisticPortraitResponseBody) };
    inline CreateRealisticPortraitResponseBody body() { DARABONBA_PTR_GET(body_, CreateRealisticPortraitResponseBody) };
    inline CreateRealisticPortraitResponse& setBody(const CreateRealisticPortraitResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateRealisticPortraitResponse& setBody(CreateRealisticPortraitResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateRealisticPortraitResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
