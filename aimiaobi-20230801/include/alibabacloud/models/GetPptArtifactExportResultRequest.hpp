// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPPTARTIFACTEXPORTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPPTARTIFACTEXPORTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPptArtifactExportResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPptArtifactExportResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPptArtifactExportResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetPptArtifactExportResultRequest() = default ;
    GetPptArtifactExportResultRequest(const GetPptArtifactExportResultRequest &) = default ;
    GetPptArtifactExportResultRequest(GetPptArtifactExportResultRequest &&) = default ;
    GetPptArtifactExportResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPptArtifactExportResultRequest() = default ;
    GetPptArtifactExportResultRequest& operator=(const GetPptArtifactExportResultRequest &) = default ;
    GetPptArtifactExportResultRequest& operator=(GetPptArtifactExportResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline GetPptArtifactExportResultRequest& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetPptArtifactExportResultRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> exportTaskId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
