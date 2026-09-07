// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEACCOUNTROLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEACCOUNTROLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateGrafanaWorkspaceAccountRoleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateGrafanaWorkspaceAccountRoleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGrafanaWorkspaceAccountRoleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGrafanaWorkspaceAccountRoleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateGrafanaWorkspaceAccountRoleResponse() = default ;
    UpdateGrafanaWorkspaceAccountRoleResponse(const UpdateGrafanaWorkspaceAccountRoleResponse &) = default ;
    UpdateGrafanaWorkspaceAccountRoleResponse(UpdateGrafanaWorkspaceAccountRoleResponse &&) = default ;
    UpdateGrafanaWorkspaceAccountRoleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGrafanaWorkspaceAccountRoleResponse() = default ;
    UpdateGrafanaWorkspaceAccountRoleResponse& operator=(const UpdateGrafanaWorkspaceAccountRoleResponse &) = default ;
    UpdateGrafanaWorkspaceAccountRoleResponse& operator=(UpdateGrafanaWorkspaceAccountRoleResponse &&) = default ;
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
    inline UpdateGrafanaWorkspaceAccountRoleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateGrafanaWorkspaceAccountRoleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateGrafanaWorkspaceAccountRoleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateGrafanaWorkspaceAccountRoleResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateGrafanaWorkspaceAccountRoleResponseBody) };
    inline UpdateGrafanaWorkspaceAccountRoleResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateGrafanaWorkspaceAccountRoleResponseBody) };
    inline UpdateGrafanaWorkspaceAccountRoleResponse& setBody(const UpdateGrafanaWorkspaceAccountRoleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateGrafanaWorkspaceAccountRoleResponse& setBody(UpdateGrafanaWorkspaceAccountRoleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateGrafanaWorkspaceAccountRoleResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
