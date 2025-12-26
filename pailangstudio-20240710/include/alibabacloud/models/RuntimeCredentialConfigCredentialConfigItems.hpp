// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIMECREDENTIALCONFIGCREDENTIALCONFIGITEMS_HPP_
#define ALIBABACLOUD_MODELS_RUNTIMECREDENTIALCONFIGCREDENTIALCONFIGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RuntimeCredentialConfigCredentialConfigItemsRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class RuntimeCredentialConfigCredentialConfigItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuntimeCredentialConfigCredentialConfigItems& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RuntimeCredentialConfigCredentialConfigItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RuntimeCredentialConfigCredentialConfigItems() = default ;
    RuntimeCredentialConfigCredentialConfigItems(const RuntimeCredentialConfigCredentialConfigItems &) = default ;
    RuntimeCredentialConfigCredentialConfigItems(RuntimeCredentialConfigCredentialConfigItems &&) = default ;
    RuntimeCredentialConfigCredentialConfigItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuntimeCredentialConfigCredentialConfigItems() = default ;
    RuntimeCredentialConfigCredentialConfigItems& operator=(const RuntimeCredentialConfigCredentialConfigItems &) = default ;
    RuntimeCredentialConfigCredentialConfigItems& operator=(RuntimeCredentialConfigCredentialConfigItems &&) = default ;
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
    inline RuntimeCredentialConfigCredentialConfigItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles>) };
    inline vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles>) };
    inline RuntimeCredentialConfigCredentialConfigItems& setRoles(const vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline RuntimeCredentialConfigCredentialConfigItems& setRoles(vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RuntimeCredentialConfigCredentialConfigItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Key
    std::shared_ptr<string> key_ = nullptr;
    // 角色列表
    std::shared_ptr<vector<Models::RuntimeCredentialConfigCredentialConfigItemsRoles>> roles_ = nullptr;
    // Type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
