// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyAccountPrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_TO_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    ModifyAccountPrivilegeRequest() = default ;
    ModifyAccountPrivilegeRequest(const ModifyAccountPrivilegeRequest &) = default ;
    ModifyAccountPrivilegeRequest(ModifyAccountPrivilegeRequest &&) = default ;
    ModifyAccountPrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegeRequest() = default ;
    ModifyAccountPrivilegeRequest& operator=(const ModifyAccountPrivilegeRequest &) = default ;
    ModifyAccountPrivilegeRequest& operator=(ModifyAccountPrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr && this->DBInstanceName_ == nullptr && this->dbName_ == nullptr && this->regionId_ == nullptr && this->securityAccountName_ == nullptr
        && this->securityAccountPassword_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPrivilegeRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline ModifyAccountPrivilegeRequest& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyAccountPrivilegeRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyAccountPrivilegeRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityAccountName Field Functions 
    bool hasSecurityAccountName() const { return this->securityAccountName_ != nullptr;};
    void deleteSecurityAccountName() { this->securityAccountName_ = nullptr;};
    inline string getSecurityAccountName() const { DARABONBA_PTR_GET_DEFAULT(securityAccountName_, "") };
    inline ModifyAccountPrivilegeRequest& setSecurityAccountName(string securityAccountName) { DARABONBA_PTR_SET_VALUE(securityAccountName_, securityAccountName) };


    // securityAccountPassword Field Functions 
    bool hasSecurityAccountPassword() const { return this->securityAccountPassword_ != nullptr;};
    void deleteSecurityAccountPassword() { this->securityAccountPassword_ = nullptr;};
    inline string getSecurityAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(securityAccountPassword_, "") };
    inline ModifyAccountPrivilegeRequest& setSecurityAccountPassword(string securityAccountPassword) { DARABONBA_PTR_SET_VALUE(securityAccountPassword_, securityAccountPassword) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    shared_ptr<string> accountPrivilege_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityAccountName_ {};
    shared_ptr<string> securityAccountPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
