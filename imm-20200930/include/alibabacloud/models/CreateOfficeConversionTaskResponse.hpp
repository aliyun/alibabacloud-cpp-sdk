// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateOfficeConversionTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateOfficeConversionTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeConversionTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeConversionTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateOfficeConversionTaskResponse() = default ;
    CreateOfficeConversionTaskResponse(const CreateOfficeConversionTaskResponse &) = default ;
    CreateOfficeConversionTaskResponse(CreateOfficeConversionTaskResponse &&) = default ;
    CreateOfficeConversionTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeConversionTaskResponse() = default ;
    CreateOfficeConversionTaskResponse& operator=(const CreateOfficeConversionTaskResponse &) = default ;
    CreateOfficeConversionTaskResponse& operator=(CreateOfficeConversionTaskResponse &&) = default ;
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
    inline CreateOfficeConversionTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateOfficeConversionTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateOfficeConversionTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateOfficeConversionTaskResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateOfficeConversionTaskResponseBody) };
    inline CreateOfficeConversionTaskResponseBody body() { DARABONBA_PTR_GET(body_, CreateOfficeConversionTaskResponseBody) };
    inline CreateOfficeConversionTaskResponse& setBody(const CreateOfficeConversionTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateOfficeConversionTaskResponse& setBody(CreateOfficeConversionTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateOfficeConversionTaskResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
