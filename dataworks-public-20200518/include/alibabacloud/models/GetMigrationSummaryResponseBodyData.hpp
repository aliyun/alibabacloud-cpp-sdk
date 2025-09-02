// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMigrationSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationSummaryResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMigrationSummaryResponseBodyData& obj) { 
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
    GetMigrationSummaryResponseBodyData() = default ;
    GetMigrationSummaryResponseBodyData(const GetMigrationSummaryResponseBodyData &) = default ;
    GetMigrationSummaryResponseBodyData(GetMigrationSummaryResponseBodyData &&) = default ;
    GetMigrationSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationSummaryResponseBodyData() = default ;
    GetMigrationSummaryResponseBodyData& operator=(const GetMigrationSummaryResponseBodyData &) = default ;
    GetMigrationSummaryResponseBodyData& operator=(GetMigrationSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createUser_ != nullptr
        && this->downloadUrl_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->migrationId_ != nullptr && this->name_ != nullptr
        && this->opUser_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr; };
    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetMigrationSummaryResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetMigrationSummaryResponseBodyData& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetMigrationSummaryResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetMigrationSummaryResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int64_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
    inline GetMigrationSummaryResponseBodyData& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMigrationSummaryResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opUser Field Functions 
    bool hasOpUser() const { return this->opUser_ != nullptr;};
    void deleteOpUser() { this->opUser_ = nullptr;};
    inline string opUser() const { DARABONBA_PTR_GET_DEFAULT(opUser_, "") };
    inline GetMigrationSummaryResponseBodyData& setOpUser(string opUser) { DARABONBA_PTR_SET_VALUE(opUser_, opUser) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMigrationSummaryResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMigrationSummaryResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the user who created the task.
    std::shared_ptr<string> createUser_ = nullptr;
    // The URL that is used to download the package of the export task. You can use the URL to download the package of the export task.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the task was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> migrationId_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the user who managed the task.
    std::shared_ptr<string> opUser_ = nullptr;
    // The ID of the DataWorks workspace to which the migration task belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
