// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_TO_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    CreateAccountRequest() = default ;
    CreateAccountRequest(const CreateAccountRequest &) = default ;
    CreateAccountRequest(CreateAccountRequest &&) = default ;
    CreateAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountRequest() = default ;
    CreateAccountRequest& operator=(const CreateAccountRequest &) = default ;
    CreateAccountRequest& operator=(CreateAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && this->accountName_ == nullptr && this->accountPassword_ == nullptr && this->accountPrivilege_ == nullptr && this->DBInstanceName_ == nullptr && this->DBName_ == nullptr
        && this->regionId_ == nullptr && this->securityAccountName_ == nullptr && this->securityAccountPassword_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string getAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline CreateAccountRequest& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateAccountRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string getAccountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline CreateAccountRequest& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateAccountRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateAccountRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityAccountName Field Functions 
    bool hasSecurityAccountName() const { return this->securityAccountName_ != nullptr;};
    void deleteSecurityAccountName() { this->securityAccountName_ = nullptr;};
    inline string getSecurityAccountName() const { DARABONBA_PTR_GET_DEFAULT(securityAccountName_, "") };
    inline CreateAccountRequest& setSecurityAccountName(string securityAccountName) { DARABONBA_PTR_SET_VALUE(securityAccountName_, securityAccountName) };


    // securityAccountPassword Field Functions 
    bool hasSecurityAccountPassword() const { return this->securityAccountPassword_ != nullptr;};
    void deleteSecurityAccountPassword() { this->securityAccountPassword_ = nullptr;};
    inline string getSecurityAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(securityAccountPassword_, "") };
    inline CreateAccountRequest& setSecurityAccountPassword(string securityAccountPassword) { DARABONBA_PTR_SET_VALUE(securityAccountPassword_, securityAccountPassword) };


  protected:
    shared_ptr<string> accountDescription_ {};
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    shared_ptr<string> accountPrivilege_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> DBName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> securityAccountName_ {};
    shared_ptr<string> securityAccountPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
