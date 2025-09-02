// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATAMIGRATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATAMIGRATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMigrationsResponseBodyDataMigrations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyDataMigrations& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyDataMigrations& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
    };
    ListMigrationsResponseBodyDataMigrations() = default ;
    ListMigrationsResponseBodyDataMigrations(const ListMigrationsResponseBodyDataMigrations &) = default ;
    ListMigrationsResponseBodyDataMigrations(ListMigrationsResponseBodyDataMigrations &&) = default ;
    ListMigrationsResponseBodyDataMigrations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyDataMigrations() = default ;
    ListMigrationsResponseBodyDataMigrations& operator=(const ListMigrationsResponseBodyDataMigrations &) = default ;
    ListMigrationsResponseBodyDataMigrations& operator=(ListMigrationsResponseBodyDataMigrations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->createUserName_ != nullptr && this->description_ != nullptr && this->downloadUrl_ != nullptr && this->id_ != nullptr
        && this->message_ != nullptr && this->migrationType_ != nullptr && this->name_ != nullptr && this->packageType_ != nullptr && this->projectId_ != nullptr
        && this->status_ != nullptr && this->tenantId_ != nullptr && this->updateTime_ != nullptr && this->updateUser_ != nullptr && this->updateUserName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListMigrationsResponseBodyDataMigrations& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMigrationsResponseBodyDataMigrations& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListMigrationsResponseBodyDataMigrations& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListMigrationsResponseBodyDataMigrations& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListMigrationsResponseBodyDataMigrations& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    // updateUserName Field Functions 
    bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
    void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
    inline string updateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
    inline ListMigrationsResponseBodyDataMigrations& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


  protected:
    // The time when the migration task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who created the migration task.
    std::shared_ptr<string> createUser_ = nullptr;
    // The name of the user who created the migration task.
    std::shared_ptr<string> createUserName_ = nullptr;
    // The description of the export task.
    std::shared_ptr<string> description_ = nullptr;
    // The URL that is used to download the package of the export task. You can use the URL to download the package of the export task.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The type of the migration task. Valid values:
    // 
    // *   IMPORT
    // *   EXPORT
    std::shared_ptr<string> migrationType_ = nullptr;
    // The name of the migration task.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the import or export package. Valid values:
    // 
    // *   DWMA (standard format)
    // *   DATAWORKS_MODEL (standard format)
    // *   DATAWORKS_V2 (Apsara Stack DataWorks V3.6.1 to V3.11)
    // *   DATAWORKS_V3 (Apsara Stack DataWorks V3.12 and later)
    // 
    // The DWMA and DATAWORKS_MODEL types are interchangeable.
    std::shared_ptr<string> packageType_ = nullptr;
    // The ID of the DataWorks workspace to which the task belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the migration task. Valid values:
    // 
    // *   INIT: The migration task is in the initial state.
    // *   EDITING: The migration task is being edited.
    // *   RUNNING: The migration task is running.
    // *   FAILURE: The migration task fails to run.
    // *   SUCCESS: The migration task is successfully run.
    std::shared_ptr<string> status_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The time when the migration task was last updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the user who last updated the migration task.
    std::shared_ptr<string> updateUser_ = nullptr;
    // The name of the user who last updated the migration task.
    std::shared_ptr<string> updateUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
