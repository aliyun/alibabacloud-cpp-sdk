// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateDatabaseAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountName, databaseAccountName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateDatabaseAccountRequest() = default ;
    CreateDatabaseAccountRequest(const CreateDatabaseAccountRequest &) = default ;
    CreateDatabaseAccountRequest(CreateDatabaseAccountRequest &&) = default ;
    CreateDatabaseAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseAccountRequest() = default ;
    CreateDatabaseAccountRequest& operator=(const CreateDatabaseAccountRequest &) = default ;
    CreateDatabaseAccountRequest& operator=(CreateDatabaseAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountName_ == nullptr
        && this->databaseId_ == nullptr && this->databaseSchema_ == nullptr && this->instanceId_ == nullptr && this->loginAttribute_ == nullptr && this->password_ == nullptr
        && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // databaseAccountName Field Functions 
    bool hasDatabaseAccountName() const { return this->databaseAccountName_ != nullptr;};
    void deleteDatabaseAccountName() { this->databaseAccountName_ = nullptr;};
    inline string getDatabaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountName_, "") };
    inline CreateDatabaseAccountRequest& setDatabaseAccountName(string databaseAccountName) { DARABONBA_PTR_SET_VALUE(databaseAccountName_, databaseAccountName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline CreateDatabaseAccountRequest& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string getDatabaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline CreateDatabaseAccountRequest& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDatabaseAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginAttribute Field Functions 
    bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
    void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
    inline string getLoginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
    inline CreateDatabaseAccountRequest& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDatabaseAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDatabaseAccountRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDatabaseAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account to create. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> databaseAccountName_ {};
    // The instance ID of the database for which you want to create an account.
    // > You can invoke the [ListDatabaseAccounts](https://help.aliyun.com/document_detail/2758839.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> databaseId_ {};
    // The database name. This parameter is required when the database that corresponds to DatabaseId is PostgreSQL or Oracle.
    shared_ptr<string> databaseSchema_ {};
    // The ID of the bastion host instance for which you want to create a database account.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The logon property. This parameter is required for Oracle databases. Valid values:
    // - SERVICENAME
    // - SID
    shared_ptr<string> loginAttribute_ {};
    // The password of the database account to create.
    shared_ptr<string> password_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host for which you want to create a database account.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
