// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetJobRequest() = default ;
    CreateDatasetJobRequest(const CreateDatasetJobRequest &) = default ;
    CreateDatasetJobRequest(CreateDatasetJobRequest &&) = default ;
    CreateDatasetJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetJobRequest() = default ;
    CreateDatasetJobRequest& operator=(const CreateDatasetJobRequest &) = default ;
    CreateDatasetJobRequest& operator=(CreateDatasetJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetVersion_ != nullptr
        && this->description_ != nullptr && this->jobAction_ != nullptr && this->jobMode_ != nullptr && this->jobSpec_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline CreateDatasetJobRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline CreateDatasetJobRequest& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // jobMode Field Functions 
    bool hasJobMode() const { return this->jobMode_ != nullptr;};
    void deleteJobMode() { this->jobMode_ = nullptr;};
    inline string jobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
    inline CreateDatasetJobRequest& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline string jobSpec() const { DARABONBA_PTR_GET_DEFAULT(jobSpec_, "") };
    inline CreateDatasetJobRequest& setJobSpec(string jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The dataset version.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The job description.
    std::shared_ptr<string> description_ = nullptr;
    // The job action.
    // 
    // Valid values:
    // 
    // *   SemanticIndex
    // *   IntelligentTag
    // *   FileMetaExport
    // 
    // This parameter is required.
    std::shared_ptr<string> jobAction_ = nullptr;
    // The job mode.
    // 
    // Valid values:
    // 
    // *   Full: full mode.
    std::shared_ptr<string> jobMode_ = nullptr;
    // The job configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobSpec_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
