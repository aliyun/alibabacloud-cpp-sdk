// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEMANTICJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESEMANTICJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateSemanticJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSemanticJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ReferenceFileIds, referenceFileIds_);
      DARABONBA_PTR_TO_JSON(ReferenceFileUris, referenceFileUris_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSemanticJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ReferenceFileIds, referenceFileIds_);
      DARABONBA_PTR_FROM_JSON(ReferenceFileUris, referenceFileUris_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_FROM_JSON(Source, source_);
    };
    CreateSemanticJobRequest() = default ;
    CreateSemanticJobRequest(const CreateSemanticJobRequest &) = default ;
    CreateSemanticJobRequest(CreateSemanticJobRequest &&) = default ;
    CreateSemanticJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSemanticJobRequest() = default ;
    CreateSemanticJobRequest& operator=(const CreateSemanticJobRequest &) = default ;
    CreateSemanticJobRequest& operator=(CreateSemanticJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->projectId_ == nullptr && this->referenceFileIds_ == nullptr && this->referenceFileUris_ == nullptr && this->resourceGroupId_ == nullptr && this->source_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSemanticJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateSemanticJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // referenceFileIds Field Functions 
    bool hasReferenceFileIds() const { return this->referenceFileIds_ != nullptr;};
    void deleteReferenceFileIds() { this->referenceFileIds_ = nullptr;};
    inline const vector<string> & getReferenceFileIds() const { DARABONBA_PTR_GET_CONST(referenceFileIds_, vector<string>) };
    inline vector<string> getReferenceFileIds() { DARABONBA_PTR_GET(referenceFileIds_, vector<string>) };
    inline CreateSemanticJobRequest& setReferenceFileIds(const vector<string> & referenceFileIds) { DARABONBA_PTR_SET_VALUE(referenceFileIds_, referenceFileIds) };
    inline CreateSemanticJobRequest& setReferenceFileIds(vector<string> && referenceFileIds) { DARABONBA_PTR_SET_RVALUE(referenceFileIds_, referenceFileIds) };


    // referenceFileUris Field Functions 
    bool hasReferenceFileUris() const { return this->referenceFileUris_ != nullptr;};
    void deleteReferenceFileUris() { this->referenceFileUris_ = nullptr;};
    inline const vector<string> & getReferenceFileUris() const { DARABONBA_PTR_GET_CONST(referenceFileUris_, vector<string>) };
    inline vector<string> getReferenceFileUris() { DARABONBA_PTR_GET(referenceFileUris_, vector<string>) };
    inline CreateSemanticJobRequest& setReferenceFileUris(const vector<string> & referenceFileUris) { DARABONBA_PTR_SET_VALUE(referenceFileUris_, referenceFileUris) };
    inline CreateSemanticJobRequest& setReferenceFileUris(vector<string> && referenceFileUris) { DARABONBA_PTR_SET_RVALUE(referenceFileUris_, referenceFileUris) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSemanticJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline     const Darabonba::Json & getSource() const { DARABONBA_GET(source_) };
    Darabonba::Json & getSource() { DARABONBA_GET(source_) };
    inline CreateSemanticJobRequest& setSource(const Darabonba::Json & source) { DARABONBA_SET_VALUE(source_, source) };
    inline CreateSemanticJobRequest& setSource(Darabonba::Json && source) { DARABONBA_SET_RVALUE(source_, source) };


  protected:
    // The name of the semantic task, which is also the task identifier for subsequent calls to RunSemanticJob, DeleteSemanticJob, ListSemanticJobRuns, and DownloadSemanticResults. The name must be unique within the current tenant.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the DataWorks workspace. This parameter is required unless `Source.type` is set to `singleTableFile`. The `Data.ProjectId` in the creation result can be reused for GetSemanticJobDetail, GetSemanticJobLog, and KillSemanticJob.
    shared_ptr<int64_t> projectId_ {};
    // The list of IDs of uploaded reference files. If `Source.type` is set to `singleTableFile`, this parameter and `ReferenceFileUris` are mutually exclusive, and the selected array must contain exactly one non-empty element. The ID must be obtained from `Data.FileId` returned by UploadSemanticFile, and the file only supports CSV or XLSX formats. For other `Source.type` values, you can pass multiple IDs. The service validates each ID during creation, and you can pass `ReferenceFileUris` at the same time.
    shared_ptr<vector<string>> referenceFileIds_ {};
    // The list of URIs of reference files accessible to the caller. If `Source.type` is set to `singleTableFile`, this parameter and `ReferenceFileIds` are mutually exclusive, and the selected array must contain exactly one non-empty URI. For other `Source.type` values, you can pass multiple URIs, and you can pass `ReferenceFileIds` at the same time. When using the upload path of UploadSemanticFile, pass `Data.FileId` after the PUT upload is completed, instead of the short-lived `UploadUrl`.
    shared_ptr<vector<string>> referenceFileUris_ {};
    // The identifier of the resource group used to run the semantic task. You do not need to pass this parameter when calling RunSemanticJob. The resource group saved during creation is used.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
    // The input data source configuration for the semantic task. The type field is required. The configuration specifies the data to analyze. This configuration is distinct from the semantic_model YAML generated by the task. The domain field is a string that identifies the business domain and focus area for the task, such as sales. Supported data sources include the following. 1) maxcompute: Specify the scope by using pinnedScopeInfo. Array elements include type and name. If type is project, name is the MaxCompute project name. If type is schema, project is the project name and name is the schema name. For a table-level scope, project is the project name, schema is optional, and name is the table name. 2) holo or starrocks: In addition to type, you must specify dataSourceName and dataSourceEnv, and include ProjectId at the top level of the request. You can use pinnedScopeInfo to restrict the scope to a schema or table. The name element represents the schema or table name. For a table-level scope, schema represents the database or schema to which the table belongs. 3) singleTableFile: ProjectId is not required. For file reference rules, refer to ReferenceFileIds and ReferenceFileUris. After the task runs successfully, call DownloadSemanticResults to retrieve result files such as the semantic_model YAML. The example demonstrates a MaxCompute project scope.
    // 
    // This parameter is required.
    Darabonba::Json source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
