// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMATERIALIZEDVIEWRECOMMENDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEMATERIALIZEDVIEWRECOMMENDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateMaterializedViewRecommendResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateMaterializedViewRecommendResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaterializedViewRecommendResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaterializedViewRecommendResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMaterializedViewRecommendResponse() = default ;
    CreateMaterializedViewRecommendResponse(const CreateMaterializedViewRecommendResponse &) = default ;
    CreateMaterializedViewRecommendResponse(CreateMaterializedViewRecommendResponse &&) = default ;
    CreateMaterializedViewRecommendResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaterializedViewRecommendResponse() = default ;
    CreateMaterializedViewRecommendResponse& operator=(const CreateMaterializedViewRecommendResponse &) = default ;
    CreateMaterializedViewRecommendResponse& operator=(CreateMaterializedViewRecommendResponse &&) = default ;
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
    inline CreateMaterializedViewRecommendResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateMaterializedViewRecommendResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateMaterializedViewRecommendResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateMaterializedViewRecommendResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateMaterializedViewRecommendResponseBody) };
    inline CreateMaterializedViewRecommendResponseBody body() { DARABONBA_PTR_GET(body_, CreateMaterializedViewRecommendResponseBody) };
    inline CreateMaterializedViewRecommendResponse& setBody(const CreateMaterializedViewRecommendResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMaterializedViewRecommendResponse& setBody(CreateMaterializedViewRecommendResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateMaterializedViewRecommendResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
