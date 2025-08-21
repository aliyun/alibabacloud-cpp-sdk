// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYOPTIMIZETAGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYOPTIMIZETAGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateQueryOptimizeTagResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateQueryOptimizeTagResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryOptimizeTagResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryOptimizeTagResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateQueryOptimizeTagResponse() = default ;
    CreateQueryOptimizeTagResponse(const CreateQueryOptimizeTagResponse &) = default ;
    CreateQueryOptimizeTagResponse(CreateQueryOptimizeTagResponse &&) = default ;
    CreateQueryOptimizeTagResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryOptimizeTagResponse() = default ;
    CreateQueryOptimizeTagResponse& operator=(const CreateQueryOptimizeTagResponse &) = default ;
    CreateQueryOptimizeTagResponse& operator=(CreateQueryOptimizeTagResponse &&) = default ;
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
    inline CreateQueryOptimizeTagResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateQueryOptimizeTagResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateQueryOptimizeTagResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateQueryOptimizeTagResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateQueryOptimizeTagResponseBody) };
    inline CreateQueryOptimizeTagResponseBody body() { DARABONBA_PTR_GET(body_, CreateQueryOptimizeTagResponseBody) };
    inline CreateQueryOptimizeTagResponse& setBody(const CreateQueryOptimizeTagResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateQueryOptimizeTagResponse& setBody(CreateQueryOptimizeTagResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateQueryOptimizeTagResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
