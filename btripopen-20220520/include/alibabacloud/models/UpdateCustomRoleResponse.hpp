// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateCustomRoleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateCustomRoleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateCustomRoleResponse() = default ;
    UpdateCustomRoleResponse(const UpdateCustomRoleResponse &) = default ;
    UpdateCustomRoleResponse(UpdateCustomRoleResponse &&) = default ;
    UpdateCustomRoleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoleResponse() = default ;
    UpdateCustomRoleResponse& operator=(const UpdateCustomRoleResponse &) = default ;
    UpdateCustomRoleResponse& operator=(UpdateCustomRoleResponse &&) = default ;
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
    inline UpdateCustomRoleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateCustomRoleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateCustomRoleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateCustomRoleResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateCustomRoleResponseBody) };
    inline UpdateCustomRoleResponseBody body() { DARABONBA_PTR_GET(body_, UpdateCustomRoleResponseBody) };
    inline UpdateCustomRoleResponse& setBody(const UpdateCustomRoleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateCustomRoleResponse& setBody(UpdateCustomRoleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateCustomRoleResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
