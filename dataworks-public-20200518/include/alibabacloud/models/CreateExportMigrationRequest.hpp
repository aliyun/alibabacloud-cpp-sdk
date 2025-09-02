// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPORTMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPORTMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateExportMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExportMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExportMode, exportMode_);
      DARABONBA_PTR_TO_JSON(ExportObjectStatus, exportObjectStatus_);
      DARABONBA_PTR_TO_JSON(IncrementalSince, incrementalSince_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExportMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExportMode, exportMode_);
      DARABONBA_PTR_FROM_JSON(ExportObjectStatus, exportObjectStatus_);
      DARABONBA_PTR_FROM_JSON(IncrementalSince, incrementalSince_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateExportMigrationRequest() = default ;
    CreateExportMigrationRequest(const CreateExportMigrationRequest &) = default ;
    CreateExportMigrationRequest(CreateExportMigrationRequest &&) = default ;
    CreateExportMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExportMigrationRequest() = default ;
    CreateExportMigrationRequest& operator=(const CreateExportMigrationRequest &) = default ;
    CreateExportMigrationRequest& operator=(CreateExportMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->exportMode_ != nullptr && this->exportObjectStatus_ != nullptr && this->incrementalSince_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExportMigrationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exportMode Field Functions 
    bool hasExportMode() const { return this->exportMode_ != nullptr;};
    void deleteExportMode() { this->exportMode_ = nullptr;};
    inline string exportMode() const { DARABONBA_PTR_GET_DEFAULT(exportMode_, "") };
    inline CreateExportMigrationRequest& setExportMode(string exportMode) { DARABONBA_PTR_SET_VALUE(exportMode_, exportMode) };


    // exportObjectStatus Field Functions 
    bool hasExportObjectStatus() const { return this->exportObjectStatus_ != nullptr;};
    void deleteExportObjectStatus() { this->exportObjectStatus_ = nullptr;};
    inline string exportObjectStatus() const { DARABONBA_PTR_GET_DEFAULT(exportObjectStatus_, "") };
    inline CreateExportMigrationRequest& setExportObjectStatus(string exportObjectStatus) { DARABONBA_PTR_SET_VALUE(exportObjectStatus_, exportObjectStatus) };


    // incrementalSince Field Functions 
    bool hasIncrementalSince() const { return this->incrementalSince_ != nullptr;};
    void deleteIncrementalSince() { this->incrementalSince_ = nullptr;};
    inline int64_t incrementalSince() const { DARABONBA_PTR_GET_DEFAULT(incrementalSince_, 0L) };
    inline CreateExportMigrationRequest& setIncrementalSince(int64_t incrementalSince) { DARABONBA_PTR_SET_VALUE(incrementalSince_, incrementalSince) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExportMigrationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateExportMigrationRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The description of the export task.
    std::shared_ptr<string> description_ = nullptr;
    // The export mode of the export task. Valid values:
    // 
    // *   FULL: The export task is used to export all data objects.
    // *   INCREMENTAL: The export task is used to export data objects that were modified since the specified point in time. If you set this parameter to INCREMENTAL, you must configure the IncrementalSince parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> exportMode_ = nullptr;
    // The status of the data objects that you want to export in the export task. The system exports data objects in the state that is specified by this parameter. Valid values:
    // 
    // *   SAVED
    // *   SUBMITTED
    // *   DEPLOYED
    std::shared_ptr<string> exportObjectStatus_ = nullptr;
    // The start time of the incremental export task.
    // 
    // The IncrementalSince parameter takes effect only when the ExportMode parameter is set to INCREMENTAL.
    std::shared_ptr<int64_t> incrementalSince_ = nullptr;
    // The name of the export task.
    // 
    // The name of each export task must be unique. You must ensure that no duplicate export task exists in the current workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
