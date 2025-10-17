// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGITEM_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CredentialConfigItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfigItem& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfigItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CredentialConfigItem() = default ;
    CredentialConfigItem(const CredentialConfigItem &) = default ;
    CredentialConfigItem(CredentialConfigItem &&) = default ;
    CredentialConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfigItem() = default ;
    CredentialConfigItem& operator=(const CredentialConfigItem &) = default ;
    CredentialConfigItem& operator=(CredentialConfigItem &&) = default ;
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
    inline CredentialConfigItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CredentialRole> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CredentialRole>) };
    inline vector<CredentialRole> roles() { DARABONBA_PTR_GET(roles_, vector<CredentialRole>) };
    inline CredentialConfigItem& setRoles(const vector<CredentialRole> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CredentialConfigItem& setRoles(vector<CredentialRole> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CredentialConfigItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<vector<CredentialRole>> roles_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
