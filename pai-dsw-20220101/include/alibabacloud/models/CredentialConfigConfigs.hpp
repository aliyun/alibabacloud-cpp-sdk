// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialConfigConfigsRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CredentialConfigConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfigConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfigConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CredentialConfigConfigs() = default ;
    CredentialConfigConfigs(const CredentialConfigConfigs &) = default ;
    CredentialConfigConfigs(CredentialConfigConfigs &&) = default ;
    CredentialConfigConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfigConfigs() = default ;
    CredentialConfigConfigs& operator=(const CredentialConfigConfigs &) = default ;
    CredentialConfigConfigs& operator=(CredentialConfigConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->roles_ != nullptr && this->type_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CredentialConfigConfigs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::CredentialConfigConfigsRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::CredentialConfigConfigsRoles>) };
    inline vector<Models::CredentialConfigConfigsRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::CredentialConfigConfigsRoles>) };
    inline CredentialConfigConfigs& setRoles(const vector<Models::CredentialConfigConfigsRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CredentialConfigConfigs& setRoles(vector<Models::CredentialConfigConfigsRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CredentialConfigConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<vector<Models::CredentialConfigConfigsRoles>> roles_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
