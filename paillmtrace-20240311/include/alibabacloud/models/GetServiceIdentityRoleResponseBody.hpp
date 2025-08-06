// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEIDENTITYROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEIDENTITYROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class GetServiceIdentityRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceIdentityRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleDetail, roleDetail_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceIdentityRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleDetail, roleDetail_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetServiceIdentityRoleResponseBody() = default ;
    GetServiceIdentityRoleResponseBody(const GetServiceIdentityRoleResponseBody &) = default ;
    GetServiceIdentityRoleResponseBody(GetServiceIdentityRoleResponseBody &&) = default ;
    GetServiceIdentityRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceIdentityRoleResponseBody() = default ;
    GetServiceIdentityRoleResponseBody& operator=(const GetServiceIdentityRoleResponseBody &) = default ;
    GetServiceIdentityRoleResponseBody& operator=(GetServiceIdentityRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->roleDetail_ != nullptr && this->roleName_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetServiceIdentityRoleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceIdentityRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceIdentityRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleDetail Field Functions 
    bool hasRoleDetail() const { return this->roleDetail_ != nullptr;};
    void deleteRoleDetail() { this->roleDetail_ = nullptr;};
    inline string roleDetail() const { DARABONBA_PTR_GET_DEFAULT(roleDetail_, "") };
    inline GetServiceIdentityRoleResponseBody& setRoleDetail(string roleDetail) { DARABONBA_PTR_SET_VALUE(roleDetail_, roleDetail) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetServiceIdentityRoleResponseBody& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The internal error code. This parameter is returned only when an error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The error message. This parameter is returned only when an error occurs.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The role details.
    std::shared_ptr<string> roleDetail_ = nullptr;
    // The name of the service-linked role. Default value: AliyunServiceRoleForPaiLLMTrace.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
