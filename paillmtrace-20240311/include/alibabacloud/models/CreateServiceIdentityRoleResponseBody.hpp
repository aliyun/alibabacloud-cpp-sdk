// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEIDENTITYROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEIDENTITYROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class CreateServiceIdentityRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceIdentityRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleDetails, roleDetails_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceIdentityRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleDetails, roleDetails_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateServiceIdentityRoleResponseBody() = default ;
    CreateServiceIdentityRoleResponseBody(const CreateServiceIdentityRoleResponseBody &) = default ;
    CreateServiceIdentityRoleResponseBody(CreateServiceIdentityRoleResponseBody &&) = default ;
    CreateServiceIdentityRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceIdentityRoleResponseBody() = default ;
    CreateServiceIdentityRoleResponseBody& operator=(const CreateServiceIdentityRoleResponseBody &) = default ;
    CreateServiceIdentityRoleResponseBody& operator=(CreateServiceIdentityRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->roleDetails_ != nullptr && this->roleName_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateServiceIdentityRoleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateServiceIdentityRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceIdentityRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleDetails Field Functions 
    bool hasRoleDetails() const { return this->roleDetails_ != nullptr;};
    void deleteRoleDetails() { this->roleDetails_ = nullptr;};
    inline string roleDetails() const { DARABONBA_PTR_GET_DEFAULT(roleDetails_, "") };
    inline CreateServiceIdentityRoleResponseBody& setRoleDetails(string roleDetails) { DARABONBA_PTR_SET_VALUE(roleDetails_, roleDetails) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateServiceIdentityRoleResponseBody& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The error code returned if the request fails.
    std::shared_ptr<string> code_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The role details.
    std::shared_ptr<string> roleDetails_ = nullptr;
    // The name of the service-linked role. Default value: AliyunServiceRoleForPaiLLMTrace.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
