// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKEYSTORESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKEYSTORESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateKeystoresResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKeystoresResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKeystoresResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKeystoresResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateKeystoresResponse() = default ;
    UpdateKeystoresResponse(const UpdateKeystoresResponse &) = default ;
    UpdateKeystoresResponse(UpdateKeystoresResponse &&) = default ;
    UpdateKeystoresResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKeystoresResponse() = default ;
    UpdateKeystoresResponse& operator=(const UpdateKeystoresResponse &) = default ;
    UpdateKeystoresResponse& operator=(UpdateKeystoresResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline UpdateKeystoresResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateKeystoresResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateKeystoresResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateKeystoresResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateKeystoresResponseBody) };
    inline UpdateKeystoresResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateKeystoresResponseBody) };
    inline UpdateKeystoresResponse& setBody(const UpdateKeystoresResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateKeystoresResponse& setBody(UpdateKeystoresResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateKeystoresResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
