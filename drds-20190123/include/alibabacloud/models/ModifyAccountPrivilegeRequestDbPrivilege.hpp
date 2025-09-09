// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUESTDBPRIVILEGE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUESTDBPRIVILEGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyAccountPrivilegeRequestDbPrivilege : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegeRequestDbPrivilege& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegeRequestDbPrivilege& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
    };
    ModifyAccountPrivilegeRequestDbPrivilege() = default ;
    ModifyAccountPrivilegeRequestDbPrivilege(const ModifyAccountPrivilegeRequestDbPrivilege &) = default ;
    ModifyAccountPrivilegeRequestDbPrivilege(ModifyAccountPrivilegeRequestDbPrivilege &&) = default ;
    ModifyAccountPrivilegeRequestDbPrivilege(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegeRequestDbPrivilege() = default ;
    ModifyAccountPrivilegeRequestDbPrivilege& operator=(const ModifyAccountPrivilegeRequestDbPrivilege &) = default ;
    ModifyAccountPrivilegeRequestDbPrivilege& operator=(ModifyAccountPrivilegeRequestDbPrivilege &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->privilege_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyAccountPrivilegeRequestDbPrivilege& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline ModifyAccountPrivilegeRequestDbPrivilege& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


  protected:
    // The name of the database that you want to manage by using the account to modify.
    std::shared_ptr<string> dbName_ = nullptr;
    // The permissions that you want to grant to the account.
    std::shared_ptr<string> privilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
