// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateApplicationAccessPointResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateApplicationAccessPointResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationAccessPointResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationAccessPointResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateApplicationAccessPointResponse() = default ;
    CreateApplicationAccessPointResponse(const CreateApplicationAccessPointResponse &) = default ;
    CreateApplicationAccessPointResponse(CreateApplicationAccessPointResponse &&) = default ;
    CreateApplicationAccessPointResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationAccessPointResponse() = default ;
    CreateApplicationAccessPointResponse& operator=(const CreateApplicationAccessPointResponse &) = default ;
    CreateApplicationAccessPointResponse& operator=(CreateApplicationAccessPointResponse &&) = default ;
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
    inline CreateApplicationAccessPointResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateApplicationAccessPointResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateApplicationAccessPointResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateApplicationAccessPointResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateApplicationAccessPointResponseBody) };
    inline CreateApplicationAccessPointResponseBody body() { DARABONBA_PTR_GET(body_, CreateApplicationAccessPointResponseBody) };
    inline CreateApplicationAccessPointResponse& setBody(const CreateApplicationAccessPointResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateApplicationAccessPointResponse& setBody(CreateApplicationAccessPointResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateApplicationAccessPointResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
