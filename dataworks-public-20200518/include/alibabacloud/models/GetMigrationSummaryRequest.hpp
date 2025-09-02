// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMigrationSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetMigrationSummaryRequest() = default ;
    GetMigrationSummaryRequest(const GetMigrationSummaryRequest &) = default ;
    GetMigrationSummaryRequest(GetMigrationSummaryRequest &&) = default ;
    GetMigrationSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationSummaryRequest() = default ;
    GetMigrationSummaryRequest& operator=(const GetMigrationSummaryRequest &) = default ;
    GetMigrationSummaryRequest& operator=(GetMigrationSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->migrationId_ != nullptr
        && this->projectId_ != nullptr; };
    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int64_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
    inline GetMigrationSummaryRequest& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMigrationSummaryRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The migration task ID.
    // 
    // You can call the [CreateImportMigration](https://help.aliyun.com/document_detail/2780280.html) operation to obtain the ID of the import task and call the [CreateExportMigration](https://help.aliyun.com/document_detail/2780281.html) operation to obtain the ID of the export task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> migrationId_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
