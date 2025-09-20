// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGCHAIN_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGCHAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CredentialConfigChain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfigChain& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfigChain& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    CredentialConfigChain() = default ;
    CredentialConfigChain(const CredentialConfigChain &) = default ;
    CredentialConfigChain(CredentialConfigChain &&) = default ;
    CredentialConfigChain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfigChain() = default ;
    CredentialConfigChain& operator=(const CredentialConfigChain &) = default ;
    CredentialConfigChain& operator=(CredentialConfigChain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assumeRoleFor_ != nullptr
        && this->role_ != nullptr && this->roleType_ != nullptr; };
    // assumeRoleFor Field Functions 
    bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
    void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
    inline string assumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
    inline CredentialConfigChain& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CredentialConfigChain& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline CredentialConfigChain& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    std::shared_ptr<string> assumeRoleFor_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
