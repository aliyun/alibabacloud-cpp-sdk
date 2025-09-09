// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSDBREQUESTRDSSUPERACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSDBREQUESTRDSSUPERACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsDBRequestRdsSuperAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsDBRequestRdsSuperAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsDBRequestRdsSuperAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    CreateDrdsDBRequestRdsSuperAccount() = default ;
    CreateDrdsDBRequestRdsSuperAccount(const CreateDrdsDBRequestRdsSuperAccount &) = default ;
    CreateDrdsDBRequestRdsSuperAccount(CreateDrdsDBRequestRdsSuperAccount &&) = default ;
    CreateDrdsDBRequestRdsSuperAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsDBRequestRdsSuperAccount() = default ;
    CreateDrdsDBRequestRdsSuperAccount& operator=(const CreateDrdsDBRequestRdsSuperAccount &) = default ;
    CreateDrdsDBRequestRdsSuperAccount& operator=(CreateDrdsDBRequestRdsSuperAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dbInstanceId_ != nullptr && this->password_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateDrdsDBRequestRdsSuperAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline CreateDrdsDBRequestRdsSuperAccount& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDrdsDBRequestRdsSuperAccount& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The account name of the super administrator that is used to connect to the ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of ApsaraDB RDS instance.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The password of the super administrator account that is used to connect to the ApsaraDB RDS instance.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
