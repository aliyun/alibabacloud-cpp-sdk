// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateInstanceAclResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceAclResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceAclResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceAclResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateInstanceAclResponse() = default ;
    CreateInstanceAclResponse(const CreateInstanceAclResponse &) = default ;
    CreateInstanceAclResponse(CreateInstanceAclResponse &&) = default ;
    CreateInstanceAclResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceAclResponse() = default ;
    CreateInstanceAclResponse& operator=(const CreateInstanceAclResponse &) = default ;
    CreateInstanceAclResponse& operator=(CreateInstanceAclResponse &&) = default ;
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
    inline CreateInstanceAclResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateInstanceAclResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateInstanceAclResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateInstanceAclResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateInstanceAclResponseBody) };
    inline CreateInstanceAclResponseBody body() { DARABONBA_PTR_GET(body_, CreateInstanceAclResponseBody) };
    inline CreateInstanceAclResponse& setBody(const CreateInstanceAclResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateInstanceAclResponse& setBody(CreateInstanceAclResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateInstanceAclResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
