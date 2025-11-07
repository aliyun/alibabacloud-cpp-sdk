// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModelTypeDetermineResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModelTypeDetermineResponse() = default ;
    ModelTypeDetermineResponse(const ModelTypeDetermineResponse &) = default ;
    ModelTypeDetermineResponse(ModelTypeDetermineResponse &&) = default ;
    ModelTypeDetermineResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineResponse() = default ;
    ModelTypeDetermineResponse& operator=(const ModelTypeDetermineResponse &) = default ;
    ModelTypeDetermineResponse& operator=(ModelTypeDetermineResponse &&) = default ;
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
    inline ModelTypeDetermineResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModelTypeDetermineResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModelTypeDetermineResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModelTypeDetermineResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModelTypeDetermineResponseBody) };
    inline ModelTypeDetermineResponseBody body() { DARABONBA_PTR_GET(body_, ModelTypeDetermineResponseBody) };
    inline ModelTypeDetermineResponse& setBody(const ModelTypeDetermineResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModelTypeDetermineResponse& setBody(ModelTypeDetermineResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModelTypeDetermineResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
