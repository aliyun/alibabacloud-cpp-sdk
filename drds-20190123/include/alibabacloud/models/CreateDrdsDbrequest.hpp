// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRDSDBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRDSDBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDrdsDBRequestInstDbName.hpp>
#include <alibabacloud/models/CreateDrdsDBRequestRdsSuperAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateDrdsDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDrdsDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbInstanceIsCreating, dbInstanceIsCreating_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(Encode, encode_);
      DARABONBA_PTR_TO_JSON(InstDbName, instDbName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RdsInstance, rdsInstance_);
      DARABONBA_PTR_TO_JSON(RdsSuperAccount, rdsSuperAccount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDrdsDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbInstanceIsCreating, dbInstanceIsCreating_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Encode, encode_);
      DARABONBA_PTR_FROM_JSON(InstDbName, instDbName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RdsInstance, rdsInstance_);
      DARABONBA_PTR_FROM_JSON(RdsSuperAccount, rdsSuperAccount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDrdsDBRequest() = default ;
    CreateDrdsDBRequest(const CreateDrdsDBRequest &) = default ;
    CreateDrdsDBRequest(CreateDrdsDBRequest &&) = default ;
    CreateDrdsDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDrdsDBRequest() = default ;
    CreateDrdsDBRequest& operator=(const CreateDrdsDBRequest &) = default ;
    CreateDrdsDBRequest& operator=(CreateDrdsDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dbInstType_ != nullptr && this->dbInstanceIsCreating_ != nullptr && this->dbName_ != nullptr && this->drdsInstanceId_ != nullptr && this->encode_ != nullptr
        && this->instDbName_ != nullptr && this->password_ != nullptr && this->rdsInstance_ != nullptr && this->rdsSuperAccount_ != nullptr && this->type_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateDrdsDBRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline CreateDrdsDBRequest& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbInstanceIsCreating Field Functions 
    bool hasDbInstanceIsCreating() const { return this->dbInstanceIsCreating_ != nullptr;};
    void deleteDbInstanceIsCreating() { this->dbInstanceIsCreating_ = nullptr;};
    inline bool dbInstanceIsCreating() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceIsCreating_, false) };
    inline CreateDrdsDBRequest& setDbInstanceIsCreating(bool dbInstanceIsCreating) { DARABONBA_PTR_SET_VALUE(dbInstanceIsCreating_, dbInstanceIsCreating) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDrdsDBRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline CreateDrdsDBRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // encode Field Functions 
    bool hasEncode() const { return this->encode_ != nullptr;};
    void deleteEncode() { this->encode_ = nullptr;};
    inline string encode() const { DARABONBA_PTR_GET_DEFAULT(encode_, "") };
    inline CreateDrdsDBRequest& setEncode(string encode) { DARABONBA_PTR_SET_VALUE(encode_, encode) };


    // instDbName Field Functions 
    bool hasInstDbName() const { return this->instDbName_ != nullptr;};
    void deleteInstDbName() { this->instDbName_ = nullptr;};
    inline const vector<CreateDrdsDBRequestInstDbName> & instDbName() const { DARABONBA_PTR_GET_CONST(instDbName_, vector<CreateDrdsDBRequestInstDbName>) };
    inline vector<CreateDrdsDBRequestInstDbName> instDbName() { DARABONBA_PTR_GET(instDbName_, vector<CreateDrdsDBRequestInstDbName>) };
    inline CreateDrdsDBRequest& setInstDbName(const vector<CreateDrdsDBRequestInstDbName> & instDbName) { DARABONBA_PTR_SET_VALUE(instDbName_, instDbName) };
    inline CreateDrdsDBRequest& setInstDbName(vector<CreateDrdsDBRequestInstDbName> && instDbName) { DARABONBA_PTR_SET_RVALUE(instDbName_, instDbName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDrdsDBRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // rdsInstance Field Functions 
    bool hasRdsInstance() const { return this->rdsInstance_ != nullptr;};
    void deleteRdsInstance() { this->rdsInstance_ = nullptr;};
    inline const vector<string> & rdsInstance() const { DARABONBA_PTR_GET_CONST(rdsInstance_, vector<string>) };
    inline vector<string> rdsInstance() { DARABONBA_PTR_GET(rdsInstance_, vector<string>) };
    inline CreateDrdsDBRequest& setRdsInstance(const vector<string> & rdsInstance) { DARABONBA_PTR_SET_VALUE(rdsInstance_, rdsInstance) };
    inline CreateDrdsDBRequest& setRdsInstance(vector<string> && rdsInstance) { DARABONBA_PTR_SET_RVALUE(rdsInstance_, rdsInstance) };


    // rdsSuperAccount Field Functions 
    bool hasRdsSuperAccount() const { return this->rdsSuperAccount_ != nullptr;};
    void deleteRdsSuperAccount() { this->rdsSuperAccount_ = nullptr;};
    inline const vector<CreateDrdsDBRequestRdsSuperAccount> & rdsSuperAccount() const { DARABONBA_PTR_GET_CONST(rdsSuperAccount_, vector<CreateDrdsDBRequestRdsSuperAccount>) };
    inline vector<CreateDrdsDBRequestRdsSuperAccount> rdsSuperAccount() { DARABONBA_PTR_GET(rdsSuperAccount_, vector<CreateDrdsDBRequestRdsSuperAccount>) };
    inline CreateDrdsDBRequest& setRdsSuperAccount(const vector<CreateDrdsDBRequestRdsSuperAccount> & rdsSuperAccount) { DARABONBA_PTR_SET_VALUE(rdsSuperAccount_, rdsSuperAccount) };
    inline CreateDrdsDBRequest& setRdsSuperAccount(vector<CreateDrdsDBRequestRdsSuperAccount> && rdsSuperAccount) { DARABONBA_PTR_SET_RVALUE(rdsSuperAccount_, rdsSuperAccount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDrdsDBRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the account that has permissions to access all databases on the ApsaraDB RDS for MySQL instance.
    // 
    // This parameter is required only when the Type parameter is set to VERTICAL.
    std::shared_ptr<string> accountName_ = nullptr;
    // The type of the storage instances that are used by the PolarDB-X 1.0 database. Set the value to RDS.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // Specifies whether the required ApsaraDB RDS for MySQL instance is being created.
    std::shared_ptr<bool> dbInstanceIsCreating_ = nullptr;
    // The name of the PolarDB-X 1.0 database you want to create.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance on which you want to create the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The encoding method that is used by the database.
    std::shared_ptr<string> encode_ = nullptr;
    std::shared_ptr<vector<CreateDrdsDBRequestInstDbName>> instDbName_ = nullptr;
    // The password that is used to log on to the database.
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<vector<string>> rdsInstance_ = nullptr;
    std::shared_ptr<vector<CreateDrdsDBRequestRdsSuperAccount>> rdsSuperAccount_ = nullptr;
    // The partitioning mode of the database. Valid values:
    // 
    // *   **HORIZONTAL**: The database is horizontally partitioned (sharded).
    // *   **VERTICAL**: The database is vertically partitioned.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
