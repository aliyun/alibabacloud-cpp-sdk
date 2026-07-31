// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEMANTICJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESEMANTICJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateSemanticJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSemanticJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ReferenceFileIds, referenceFileIdsShrink_);
      DARABONBA_PTR_TO_JSON(ReferenceFileUris, referenceFileUrisShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Source, sourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSemanticJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ReferenceFileIds, referenceFileIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ReferenceFileUris, referenceFileUrisShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Source, sourceShrink_);
    };
    CreateSemanticJobShrinkRequest() = default ;
    CreateSemanticJobShrinkRequest(const CreateSemanticJobShrinkRequest &) = default ;
    CreateSemanticJobShrinkRequest(CreateSemanticJobShrinkRequest &&) = default ;
    CreateSemanticJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSemanticJobShrinkRequest() = default ;
    CreateSemanticJobShrinkRequest& operator=(const CreateSemanticJobShrinkRequest &) = default ;
    CreateSemanticJobShrinkRequest& operator=(CreateSemanticJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->projectId_ == nullptr && this->referenceFileIdsShrink_ == nullptr && this->referenceFileUrisShrink_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceShrink_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSemanticJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateSemanticJobShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // referenceFileIdsShrink Field Functions 
    bool hasReferenceFileIdsShrink() const { return this->referenceFileIdsShrink_ != nullptr;};
    void deleteReferenceFileIdsShrink() { this->referenceFileIdsShrink_ = nullptr;};
    inline string getReferenceFileIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceFileIdsShrink_, "") };
    inline CreateSemanticJobShrinkRequest& setReferenceFileIdsShrink(string referenceFileIdsShrink) { DARABONBA_PTR_SET_VALUE(referenceFileIdsShrink_, referenceFileIdsShrink) };


    // referenceFileUrisShrink Field Functions 
    bool hasReferenceFileUrisShrink() const { return this->referenceFileUrisShrink_ != nullptr;};
    void deleteReferenceFileUrisShrink() { this->referenceFileUrisShrink_ = nullptr;};
    inline string getReferenceFileUrisShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceFileUrisShrink_, "") };
    inline CreateSemanticJobShrinkRequest& setReferenceFileUrisShrink(string referenceFileUrisShrink) { DARABONBA_PTR_SET_VALUE(referenceFileUrisShrink_, referenceFileUrisShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSemanticJobShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceShrink Field Functions 
    bool hasSourceShrink() const { return this->sourceShrink_ != nullptr;};
    void deleteSourceShrink() { this->sourceShrink_ = nullptr;};
    inline string getSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceShrink_, "") };
    inline CreateSemanticJobShrinkRequest& setSourceShrink(string sourceShrink) { DARABONBA_PTR_SET_VALUE(sourceShrink_, sourceShrink) };


  protected:
    // The semantic task name, which also serves as the task identifier for subsequent calls to RunSemanticJob, DeleteSemanticJob, ListSemanticJobRuns, and DownloadSemanticResults. The name must be unique within the current tenant.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID. This parameter is required for all Source.type values except singleTableFile. The Data.ProjectId in the response can be reused for GetSemanticJobDetail, GetSemanticJobLog, and KillSemanticJob.
    shared_ptr<int64_t> projectId_ {};
    // The list of uploaded reference file IDs. When Source.type=singleTableFile, use either this parameter or ReferenceFileUris, and the selected array must contain exactly one non-empty element. The ID must come from Data.FileId returned by UploadSemanticFile, and only CSV or XLSX files are supported. For other Source.type values, you can pass multiple IDs. The service validates each ID during creation, and you can also pass ReferenceFileUris at the same time.
    shared_ptr<string> referenceFileIdsShrink_ {};
    // The list of reference file URIs accessible by the caller. When Source.type=singleTableFile, use either this parameter or ReferenceFileIds, and the selected array must contain exactly one non-empty URI. For other Source.type values, you can pass multiple URIs, and you can also pass ReferenceFileIds at the same time. When using the upload path from UploadSemanticFile, pass Data.FileId after the PUT upload is complete instead of the short-lived UploadUrl.
    shared_ptr<string> referenceFileUrisShrink_ {};
    // The ID of the resource group used to run the semantic task. RunSemanticJob does not accept this parameter and instead uses the resource group saved during creation.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
    // The input datasource config for the semantic node. The type field is required and specifies the data to be analyzed. This is not the semantic_model YAML produced by the node. The domain field is a character string that identifies the business domain and focus of the node, such as sales. Supported types: 1) maxcompute: Use pinnedScopeInfo to specify the scope. Array elements contain type and name. When type=project, name is the MaxCompute project name. When type=schema, project is the project name and name is the schema name. For table-level scope, project is the project name, schema is optional, and name is the table name. 2) holo or starrocks: In addition to type, provide dataSourceName and dataSourceEnv, and pass ProjectId at the top level of the request. Use pinnedScopeInfo to limit the scope to schemas or tables. The name element is the schema or table name. For table-level scope, schema is the database or schema that contains the table. 3) singleTableFile: ProjectId is not required. Refer to ReferenceFileIds and ReferenceFileUris for file reference rules. After the node runs successfully, call DownloadSemanticResults to obtain the semantic_model YAML and other result files. The example shows a MaxCompute project-level scope. Active pinnedScopeInfo elements define the scope boundaries.
    // 
    // This parameter is required.
    shared_ptr<string> sourceShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
