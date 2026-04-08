// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMigrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMigrationsResponseBody() = default ;
    ListMigrationsResponseBody(const ListMigrationsResponseBody &) = default ;
    ListMigrationsResponseBody(ListMigrationsResponseBody &&) = default ;
    ListMigrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBody() = default ;
    ListMigrationsResponseBody& operator=(const ListMigrationsResponseBody &) = default ;
    ListMigrationsResponseBody& operator=(ListMigrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Migrations, migrations_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Migrations, migrations_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Migrations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Migrations& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Migrations& obj) { 
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
        Migrations() = default ;
        Migrations(const Migrations &) = default ;
        Migrations(Migrations &&) = default ;
        Migrations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Migrations() = default ;
        Migrations& operator=(const Migrations &) = default ;
        Migrations& operator=(Migrations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->id_ == nullptr
        && this->message_ == nullptr && this->migrationType_ == nullptr && this->name_ == nullptr && this->packageType_ == nullptr && this->projectId_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->updateTime_ == nullptr && this->updateUser_ == nullptr && this->updateUserName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Migrations& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Migrations& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // createUserName Field Functions 
        bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
        void deleteCreateUserName() { this->createUserName_ = nullptr;};
        inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
        inline Migrations& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Migrations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Migrations& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Migrations& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Migrations& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // migrationType Field Functions 
        bool hasMigrationType() const { return this->migrationType_ != nullptr;};
        void deleteMigrationType() { this->migrationType_ = nullptr;};
        inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
        inline Migrations& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Migrations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline Migrations& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Migrations& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Migrations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Migrations& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Migrations& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateUser Field Functions 
        bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
        void deleteUpdateUser() { this->updateUser_ = nullptr;};
        inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
        inline Migrations& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


        // updateUserName Field Functions 
        bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
        void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
        inline string getUpdateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
        inline Migrations& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


      protected:
        // The time when the migration task was created.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the user who created the migration task.
        shared_ptr<string> createUser_ {};
        // The name of the user who created the migration task.
        shared_ptr<string> createUserName_ {};
        // The description of the export task.
        shared_ptr<string> description_ {};
        // The URL that is used to download the package of the export task. You can use the URL to download the package of the export task.
        shared_ptr<string> downloadUrl_ {};
        // The primary key ID.
        shared_ptr<int64_t> id_ {};
        // The error message returned.
        shared_ptr<string> message_ {};
        // The type of the migration task. Valid values:
        // 
        // *   IMPORT
        // *   EXPORT
        shared_ptr<string> migrationType_ {};
        // The name of the migration task.
        shared_ptr<string> name_ {};
        // The type of the import or export package. Valid values:
        // 
        // *   DWMA (standard format)
        // *   DATAWORKS_MODEL (standard format)
        // *   DATAWORKS_V2 (Apsara Stack DataWorks V3.6.1 to V3.11)
        // *   DATAWORKS_V3 (Apsara Stack DataWorks V3.12 and later)
        // 
        // The DWMA and DATAWORKS_MODEL types are interchangeable.
        shared_ptr<string> packageType_ {};
        // The ID of the DataWorks workspace to which the task belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the migration task. Valid values:
        // 
        // *   INIT: The migration task is in the initial state.
        // *   EDITING: The migration task is being edited.
        // *   RUNNING: The migration task is running.
        // *   FAILURE: The migration task fails to run.
        // *   SUCCESS: The migration task is successfully run.
        shared_ptr<string> status_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
        // The time when the migration task was last updated.
        shared_ptr<int64_t> updateTime_ {};
        // The ID of the user who last updated the migration task.
        shared_ptr<string> updateUser_ {};
        // The name of the user who last updated the migration task.
        shared_ptr<string> updateUserName_ {};
      };

      virtual bool empty() const override { return this->migrations_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // migrations Field Functions 
      bool hasMigrations() const { return this->migrations_ != nullptr;};
      void deleteMigrations() { this->migrations_ = nullptr;};
      inline const vector<Data::Migrations> & getMigrations() const { DARABONBA_PTR_GET_CONST(migrations_, vector<Data::Migrations>) };
      inline vector<Data::Migrations> getMigrations() { DARABONBA_PTR_GET(migrations_, vector<Data::Migrations>) };
      inline Data& setMigrations(const vector<Data::Migrations> & migrations) { DARABONBA_PTR_SET_VALUE(migrations_, migrations) };
      inline Data& setMigrations(vector<Data::Migrations> && migrations) { DARABONBA_PTR_SET_RVALUE(migrations_, migrations) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of migration tasks.
      shared_ptr<vector<Data::Migrations>> migrations_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 50.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMigrationsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMigrationsResponseBody::Data) };
    inline ListMigrationsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMigrationsResponseBody::Data) };
    inline ListMigrationsResponseBody& setData(const ListMigrationsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMigrationsResponseBody& setData(ListMigrationsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMigrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMigrationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<ListMigrationsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
