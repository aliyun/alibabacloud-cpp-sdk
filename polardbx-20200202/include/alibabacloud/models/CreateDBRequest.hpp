// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(Charset, charset_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DbDescription, dbDescription_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_TO_JSON(SecurityAccountPassword, securityAccountPassword_);
      DARABONBA_PTR_TO_JSON(StoragePoolName, storagePoolName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(Charset, charset_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DbDescription, dbDescription_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountPassword, securityAccountPassword_);
      DARABONBA_PTR_FROM_JSON(StoragePoolName, storagePoolName_);
    };
    CreateDBRequest() = default ;
    CreateDBRequest(const CreateDBRequest &) = default ;
    CreateDBRequest(CreateDBRequest &&) = default ;
    CreateDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBRequest() = default ;
    CreateDBRequest& operator=(const CreateDBRequest &) = default ;
    CreateDBRequest& operator=(CreateDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilege_ == nullptr && this->charset_ == nullptr && this->DBInstanceName_ == nullptr && this->dbDescription_ == nullptr && this->dbName_ == nullptr
        && this->mode_ == nullptr && this->regionId_ == nullptr && this->securityAccountName_ == nullptr && this->securityAccountPassword_ == nullptr && this->storagePoolName_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateDBRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline CreateDBRequest& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline CreateDBRequest& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateDBRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dbDescription Field Functions 
    bool hasDbDescription() const { return this->dbDescription_ != nullptr;};
    void deleteDbDescription() { this->dbDescription_ = nullptr;};
    inline string getDbDescription() const { DARABONBA_PTR_GET_DEFAULT(dbDescription_, "") };
    inline CreateDBRequest& setDbDescription(string dbDescription) { DARABONBA_PTR_SET_VALUE(dbDescription_, dbDescription) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDBRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateDBRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityAccountName Field Functions 
    bool hasSecurityAccountName() const { return this->securityAccountName_ != nullptr;};
    void deleteSecurityAccountName() { this->securityAccountName_ = nullptr;};
    inline string getSecurityAccountName() const { DARABONBA_PTR_GET_DEFAULT(securityAccountName_, "") };
    inline CreateDBRequest& setSecurityAccountName(string securityAccountName) { DARABONBA_PTR_SET_VALUE(securityAccountName_, securityAccountName) };


    // securityAccountPassword Field Functions 
    bool hasSecurityAccountPassword() const { return this->securityAccountPassword_ != nullptr;};
    void deleteSecurityAccountPassword() { this->securityAccountPassword_ = nullptr;};
    inline string getSecurityAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(securityAccountPassword_, "") };
    inline CreateDBRequest& setSecurityAccountPassword(string securityAccountPassword) { DARABONBA_PTR_SET_VALUE(securityAccountPassword_, securityAccountPassword) };


    // storagePoolName Field Functions 
    bool hasStoragePoolName() const { return this->storagePoolName_ != nullptr;};
    void deleteStoragePoolName() { this->storagePoolName_ = nullptr;};
    inline string getStoragePoolName() const { DARABONBA_PTR_GET_DEFAULT(storagePoolName_, "") };
    inline CreateDBRequest& setStoragePoolName(string storagePoolName) { DARABONBA_PTR_SET_VALUE(storagePoolName_, storagePoolName) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    shared_ptr<string> accountPrivilege_ {};
    // This parameter is required.
    shared_ptr<string> charset_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> dbDescription_ {};
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<string> mode_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityAccountName_ {};
    shared_ptr<string> securityAccountPassword_ {};
    shared_ptr<string> storagePoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
