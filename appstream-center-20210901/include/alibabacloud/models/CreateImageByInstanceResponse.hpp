// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBYINSTANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateImageByInstanceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateImageByInstanceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageByInstanceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageByInstanceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateImageByInstanceResponse() = default ;
    CreateImageByInstanceResponse(const CreateImageByInstanceResponse &) = default ;
    CreateImageByInstanceResponse(CreateImageByInstanceResponse &&) = default ;
    CreateImageByInstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageByInstanceResponse() = default ;
    CreateImageByInstanceResponse& operator=(const CreateImageByInstanceResponse &) = default ;
    CreateImageByInstanceResponse& operator=(CreateImageByInstanceResponse &&) = default ;
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
    inline CreateImageByInstanceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateImageByInstanceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateImageByInstanceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateImageByInstanceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateImageByInstanceResponseBody) };
    inline CreateImageByInstanceResponseBody body() { DARABONBA_PTR_GET(body_, CreateImageByInstanceResponseBody) };
    inline CreateImageByInstanceResponse& setBody(const CreateImageByInstanceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateImageByInstanceResponse& setBody(CreateImageByInstanceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateImageByInstanceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
