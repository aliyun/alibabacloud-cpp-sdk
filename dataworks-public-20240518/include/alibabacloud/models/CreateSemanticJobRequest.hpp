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
    // The semantic job name, which also serves as the job identifier for subsequent calls to RunSemanticJob, DeleteSemanticJob, ListSemanticJobRuns, and DownloadSemanticResults. The name must be unique within the current tenant.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID. This parameter is required for all Source.type values except singleTableFile. The Data.ProjectId in the creation result can be reused for GetSemanticJobDetail, GetSemanticJobLog, and KillSemanticJob.
    shared_ptr<int64_t> projectId_ {};
    // The list of uploaded reference file IDs. When Source.type=singleTableFile, use either this parameter or ReferenceFileUris, and the selected array must contain exactly one non-empty element. The ID must come from Data.FileId returned by UploadSemanticFile, and only CSV or XLSX files are supported. For other Source.type values, you can pass multiple IDs. The service validates each ID during creation, and you can also pass ReferenceFileUris at the same time.
    shared_ptr<vector<string>> referenceFileIds_ {};
    // The list of reference file URIs accessible by the caller. When Source.type=singleTableFile, use either this parameter or ReferenceFileIds, and the selected array must contain exactly one non-empty URI. For other Source.type values, you can pass multiple URIs and also pass ReferenceFileIds at the same time. When using the upload path from UploadSemanticFile, pass Data.FileId after the PUT upload is complete instead of the short-lived UploadUrl.
    shared_ptr<vector<string>> referenceFileUris_ {};
    // The ID of the resource group used to run the semantic job. RunSemanticJob does not accept this parameter and instead uses the resource group saved during creation.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
    // The input datasource config for the semantic node. The type field is required. This parameter specifies the data to be analyzed and is not the semantic_model YAML output. The domain field is a character string that serves as the identity of the business domain and focus of the node, such as sales. Supported types: 1) maxcompute: Use pinnedScopeInfo to specify the scope. Array elements contain type and name. When type=project, name is the MaxCompute project name. When type=schema, project is the project name and name is the schema name. For table-level scope, project is the project name, schema is optional, and name is the table name. 2) holo or starrocks: In addition to type, you must specify dataSourceName and dataSourceEnv, and pass ProjectId at the top level of the request. You can use pinnedScopeInfo to limit the scope to schemas or tables. The name element is the schema or table name, and the schema element for table-level scope is the database or schema. 3) singleTableFile: ProjectId is not required. For file reference rules, see ReferenceFileIds and ReferenceFileUris. After the node runs successfully, use DownloadSemanticResults to retrieve the semantic_model YAML and other result files. The example shows a MaxCompute project-level scope.
    // 
    // This parameter is required.
    Darabonba::Json source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
