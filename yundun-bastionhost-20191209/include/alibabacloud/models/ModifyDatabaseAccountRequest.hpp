// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyDatabaseAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDatabaseAccountRequest() = default ;
    ModifyDatabaseAccountRequest(const ModifyDatabaseAccountRequest &) = default ;
    ModifyDatabaseAccountRequest(ModifyDatabaseAccountRequest &&) = default ;
    ModifyDatabaseAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseAccountRequest() = default ;
    ModifyDatabaseAccountRequest& operator=(const ModifyDatabaseAccountRequest &) = default ;
    ModifyDatabaseAccountRequest& operator=(ModifyDatabaseAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountId_ == nullptr
        && this->databaseAccountName_ == nullptr && this->databaseSchema_ == nullptr && this->instanceId_ == nullptr && this->password_ == nullptr && this->projectId_ == nullptr
        && this->regionId_ == nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string getDatabaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline ModifyDatabaseAccountRequest& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string getDatabaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline ModifyDatabaseAccountRequest& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string getDatabaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline ModifyDatabaseAccountRequest& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDatabaseAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyDatabaseAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyDatabaseAccountRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabaseAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the database account to be modified.
    // > You can call the [ListDatabaseAccounts](https://help.aliyun.com/document_detail/2758839.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> databaseAccountId_ {};
    // The new name of the database account. The name can be up to 128 characters in length.
    shared_ptr<string> databaseAccountName_ {};
    // The new database schema name. This parameter is required when the database specified by DatabaseId is a PostgreSQL or Oracle database.
    shared_ptr<string> databaseSchema_ {};
    // The instance ID of the Bastionhost instance where the database account to be modified resides.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new password of the database account.
    shared_ptr<string> password_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance where the database account to be modified resides.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
