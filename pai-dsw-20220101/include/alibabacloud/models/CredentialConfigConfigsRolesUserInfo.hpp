// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGSROLESUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGSROLESUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CredentialConfigConfigsRolesUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfigConfigsRolesUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfigConfigsRolesUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CredentialConfigConfigsRolesUserInfo() = default ;
    CredentialConfigConfigsRolesUserInfo(const CredentialConfigConfigsRolesUserInfo &) = default ;
    CredentialConfigConfigsRolesUserInfo(CredentialConfigConfigsRolesUserInfo &&) = default ;
    CredentialConfigConfigsRolesUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfigConfigsRolesUserInfo() = default ;
    CredentialConfigConfigsRolesUserInfo& operator=(const CredentialConfigConfigsRolesUserInfo &) = default ;
    CredentialConfigConfigsRolesUserInfo& operator=(CredentialConfigConfigsRolesUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->id_ == nullptr && return this->securityToken_ == nullptr && return this->type_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline CredentialConfigConfigsRolesUserInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CredentialConfigConfigsRolesUserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CredentialConfigConfigsRolesUserInfo& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CredentialConfigConfigsRolesUserInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
