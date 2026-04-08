// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMigrationSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMigrationSummaryResponseBody() = default ;
    GetMigrationSummaryResponseBody(const GetMigrationSummaryResponseBody &) = default ;
    GetMigrationSummaryResponseBody(GetMigrationSummaryResponseBody &&) = default ;
    GetMigrationSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationSummaryResponseBody() = default ;
    GetMigrationSummaryResponseBody& operator=(const GetMigrationSummaryResponseBody &) = default ;
    GetMigrationSummaryResponseBody& operator=(GetMigrationSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MigrationId, migrationId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OpUser, opUser_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MigrationId, migrationId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OpUser, opUser_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->createUser_ == nullptr
        && this->downloadUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->migrationId_ == nullptr && this->name_ == nullptr
        && this->opUser_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Data& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // migrationId Field Functions 
      bool hasMigrationId() const { return this->migrationId_ != nullptr;};
      void deleteMigrationId() { this->migrationId_ = nullptr;};
      inline int64_t getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
      inline Data& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // opUser Field Functions 
      bool hasOpUser() const { return this->opUser_ != nullptr;};
      void deleteOpUser() { this->opUser_ = nullptr;};
      inline string getOpUser() const { DARABONBA_PTR_GET_DEFAULT(opUser_, "") };
      inline Data& setOpUser(string opUser) { DARABONBA_PTR_SET_VALUE(opUser_, opUser) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the user who created the task.
      shared_ptr<string> createUser_ {};
      // The URL that is used to download the package of the export task. You can use the URL to download the package of the export task.
      shared_ptr<string> downloadUrl_ {};
      // The time when the task was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the task was modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The task ID.
      shared_ptr<int64_t> migrationId_ {};
      // The task name.
      shared_ptr<string> name_ {};
      // The ID of the user who managed the task.
      shared_ptr<string> opUser_ {};
      // The ID of the DataWorks workspace to which the migration task belongs.
      shared_ptr<int64_t> projectId_ {};
      // The status of the migration task. Valid values:
      // 
      // *   INIT
      // *   EDITING
      // *   IMPORTING
      // *   IMPORT_ERROR
      // *   IMPORT_SUCCESS
      // *   EXPORTING
      // *   EXPORT_ERROR
      // *   EXPORT_SUCCESS
      // *   REVOKED
      // *   PARTIAL_SUCCESS
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMigrationSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMigrationSummaryResponseBody::Data) };
    inline GetMigrationSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMigrationSummaryResponseBody::Data) };
    inline GetMigrationSummaryResponseBody& setData(const GetMigrationSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMigrationSummaryResponseBody& setData(GetMigrationSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMigrationSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMigrationSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the migration task.
    shared_ptr<GetMigrationSummaryResponseBody::Data> data_ {};
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
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
