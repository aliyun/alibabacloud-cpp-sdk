// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCUSTOMSOURCEANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCUSTOMSOURCEANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportCustomSourceAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCustomSourceAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCustomSourceAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportCustomSourceAnalysisTaskRequest() = default ;
    ExportCustomSourceAnalysisTaskRequest(const ExportCustomSourceAnalysisTaskRequest &) = default ;
    ExportCustomSourceAnalysisTaskRequest(ExportCustomSourceAnalysisTaskRequest &&) = default ;
    ExportCustomSourceAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCustomSourceAnalysisTaskRequest() = default ;
    ExportCustomSourceAnalysisTaskRequest& operator=(const ExportCustomSourceAnalysisTaskRequest &) = default ;
    ExportCustomSourceAnalysisTaskRequest& operator=(ExportCustomSourceAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportType_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportCustomSourceAnalysisTaskRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExportCustomSourceAnalysisTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportCustomSourceAnalysisTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> exportType_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
