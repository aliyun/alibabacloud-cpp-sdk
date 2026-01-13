// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTSERVICERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTSERVICERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateRecallManagementServiceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateRecallManagementServiceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecallManagementServiceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecallManagementServiceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateRecallManagementServiceResponse() = default ;
    UpdateRecallManagementServiceResponse(const UpdateRecallManagementServiceResponse &) = default ;
    UpdateRecallManagementServiceResponse(UpdateRecallManagementServiceResponse &&) = default ;
    UpdateRecallManagementServiceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecallManagementServiceResponse() = default ;
    UpdateRecallManagementServiceResponse& operator=(const UpdateRecallManagementServiceResponse &) = default ;
    UpdateRecallManagementServiceResponse& operator=(UpdateRecallManagementServiceResponse &&) = default ;
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
    inline UpdateRecallManagementServiceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateRecallManagementServiceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateRecallManagementServiceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateRecallManagementServiceResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateRecallManagementServiceResponseBody) };
    inline UpdateRecallManagementServiceResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateRecallManagementServiceResponseBody) };
    inline UpdateRecallManagementServiceResponse& setBody(const UpdateRecallManagementServiceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateRecallManagementServiceResponse& setBody(UpdateRecallManagementServiceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateRecallManagementServiceResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
