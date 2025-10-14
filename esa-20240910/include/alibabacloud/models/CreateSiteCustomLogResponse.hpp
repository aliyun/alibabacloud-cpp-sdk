// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATESITECUSTOMLOGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateSiteCustomLogResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteCustomLogResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteCustomLogResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteCustomLogResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSiteCustomLogResponse() = default ;
    CreateSiteCustomLogResponse(const CreateSiteCustomLogResponse &) = default ;
    CreateSiteCustomLogResponse(CreateSiteCustomLogResponse &&) = default ;
    CreateSiteCustomLogResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteCustomLogResponse() = default ;
    CreateSiteCustomLogResponse& operator=(const CreateSiteCustomLogResponse &) = default ;
    CreateSiteCustomLogResponse& operator=(CreateSiteCustomLogResponse &&) = default ;
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
    inline CreateSiteCustomLogResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateSiteCustomLogResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateSiteCustomLogResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSiteCustomLogResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateSiteCustomLogResponseBody) };
    inline CreateSiteCustomLogResponseBody body() { DARABONBA_PTR_GET(body_, CreateSiteCustomLogResponseBody) };
    inline CreateSiteCustomLogResponse& setBody(const CreateSiteCustomLogResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSiteCustomLogResponse& setBody(CreateSiteCustomLogResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateSiteCustomLogResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
