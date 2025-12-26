// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTCREDENTIALCONFIGCREDENTIALCONFIGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTCREDENTIALCONFIGCREDENTIALCONFIGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeploymentCredentialConfigCredentialConfigItemsRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentCredentialConfigCredentialConfigItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentCredentialConfigCredentialConfigItems& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentCredentialConfigCredentialConfigItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeploymentCredentialConfigCredentialConfigItems() = default ;
    DeploymentCredentialConfigCredentialConfigItems(const DeploymentCredentialConfigCredentialConfigItems &) = default ;
    DeploymentCredentialConfigCredentialConfigItems(DeploymentCredentialConfigCredentialConfigItems &&) = default ;
    DeploymentCredentialConfigCredentialConfigItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentCredentialConfigCredentialConfigItems() = default ;
    DeploymentCredentialConfigCredentialConfigItems& operator=(const DeploymentCredentialConfigCredentialConfigItems &) = default ;
    DeploymentCredentialConfigCredentialConfigItems& operator=(DeploymentCredentialConfigCredentialConfigItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->roles_ == nullptr && return this->type_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DeploymentCredentialConfigCredentialConfigItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles>) };
    inline vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles>) };
    inline DeploymentCredentialConfigCredentialConfigItems& setRoles(const vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline DeploymentCredentialConfigCredentialConfigItems& setRoles(vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeploymentCredentialConfigCredentialConfigItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Key
    std::shared_ptr<string> key_ = nullptr;
    // 角色列表
    std::shared_ptr<vector<Models::DeploymentCredentialConfigCredentialConfigItemsRoles>> roles_ = nullptr;
    // Type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
