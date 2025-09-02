// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMPORTMIGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMPORTMIGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateImportMigrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImportMigrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalculateEngineMap, calculateEngineMap_);
      DARABONBA_PTR_TO_JSON(CommitRule, commitRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageFile, packageFile_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupMap, resourceGroupMap_);
      DARABONBA_PTR_TO_JSON(WorkspaceMap, workspaceMap_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImportMigrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalculateEngineMap, calculateEngineMap_);
      DARABONBA_PTR_FROM_JSON(CommitRule, commitRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageFile, packageFile_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupMap, resourceGroupMap_);
      DARABONBA_PTR_FROM_JSON(WorkspaceMap, workspaceMap_);
    };
    CreateImportMigrationRequest() = default ;
    CreateImportMigrationRequest(const CreateImportMigrationRequest &) = default ;
    CreateImportMigrationRequest(CreateImportMigrationRequest &&) = default ;
    CreateImportMigrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImportMigrationRequest() = default ;
    CreateImportMigrationRequest& operator=(const CreateImportMigrationRequest &) = default ;
    CreateImportMigrationRequest& operator=(CreateImportMigrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calculateEngineMap_ != nullptr
        && this->commitRule_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->packageFile_ != nullptr && this->packageType_ != nullptr
        && this->projectId_ != nullptr && this->resourceGroupMap_ != nullptr && this->workspaceMap_ != nullptr; };
    // calculateEngineMap Field Functions 
    bool hasCalculateEngineMap() const { return this->calculateEngineMap_ != nullptr;};
    void deleteCalculateEngineMap() { this->calculateEngineMap_ = nullptr;};
    inline string calculateEngineMap() const { DARABONBA_PTR_GET_DEFAULT(calculateEngineMap_, "") };
    inline CreateImportMigrationRequest& setCalculateEngineMap(string calculateEngineMap) { DARABONBA_PTR_SET_VALUE(calculateEngineMap_, calculateEngineMap) };


    // commitRule Field Functions 
    bool hasCommitRule() const { return this->commitRule_ != nullptr;};
    void deleteCommitRule() { this->commitRule_ = nullptr;};
    inline string commitRule() const { DARABONBA_PTR_GET_DEFAULT(commitRule_, "") };
    inline CreateImportMigrationRequest& setCommitRule(string commitRule) { DARABONBA_PTR_SET_VALUE(commitRule_, commitRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImportMigrationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImportMigrationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageFile Field Functions 
    bool hasPackageFile() const { return this->packageFile_ != nullptr;};
    void deletePackageFile() { this->packageFile_ = nullptr;};
    inline string packageFile() const { DARABONBA_PTR_GET_DEFAULT(packageFile_, "") };
    inline CreateImportMigrationRequest& setPackageFile(string packageFile) { DARABONBA_PTR_SET_VALUE(packageFile_, packageFile) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateImportMigrationRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateImportMigrationRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceGroupMap Field Functions 
    bool hasResourceGroupMap() const { return this->resourceGroupMap_ != nullptr;};
    void deleteResourceGroupMap() { this->resourceGroupMap_ = nullptr;};
    inline string resourceGroupMap() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupMap_, "") };
    inline CreateImportMigrationRequest& setResourceGroupMap(string resourceGroupMap) { DARABONBA_PTR_SET_VALUE(resourceGroupMap_, resourceGroupMap) };


    // workspaceMap Field Functions 
    bool hasWorkspaceMap() const { return this->workspaceMap_ != nullptr;};
    void deleteWorkspaceMap() { this->workspaceMap_ = nullptr;};
    inline string workspaceMap() const { DARABONBA_PTR_GET_DEFAULT(workspaceMap_, "") };
    inline CreateImportMigrationRequest& setWorkspaceMap(string workspaceMap) { DARABONBA_PTR_SET_VALUE(workspaceMap_, workspaceMap) };


  protected:
    // The mapping between the source compute engine instance and the destination compute engine instance. The following types of compute engine instances are supported: MaxCompute, E-MapReduce (EMR), Hadoop CDH, and Hologres.
    std::shared_ptr<string> calculateEngineMap_ = nullptr;
    // The rule configured for automatically committing and deploying the import task. The rule contains the following parameters:
    // 
    // *   resourceAutoCommit: specifies whether resources are automatically committed. The value true indicates yes and the value false indicates no.
    // *   resourceAutoDeploy: specifies whether resources are automatically deployed. The value true indicates yes and the value false indicates no.
    // *   functionAutoCommit: specifies whether the function is automatically committed. The value true indicates yes and the value false indicates no.
    // *   functionAutoDeploy: specifies whether the function is automatically deployed. The value true indicates yes and the value false indicates no.
    // *   tableAutoCommitToDev: specifies whether the table is automatically committed to the development environment. The value true indicates yes and the value false indicates no.
    // *   tableAutoCommitToProd: specifies whether the table is automatically committed to the production environment. The value true indicates yes and the value false indicates no.
    // *   ignoreLock: specifies whether the lock is automatically ignored when an import task is locked. The value true indicates yes and the value false indicates no. If you set this parameter to true for an import task, you can forcefully update the task even if the task is locked.
    // *   fileAutoCommit: specifies whether the file is automatically committed. The value true indicates yes and the value false indicates no.
    // *   fileAutoDeploy: specifies whether the file is automatically deployed. The value true indicates yes and the value false indicates no.
    std::shared_ptr<string> commitRule_ = nullptr;
    // The description of the import package.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the import task. The name must be unique within the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the import package. **The import package must be uploaded. Example of the upload method:**
    // 
    // ```java
    //         Config config = new Config();
    //         config.setAccessKeyId(accessId);
    //         config.setAccessKeySecret(accessKey);
    //         config.setEndpoint(popEndpoint);
    //         config.setRegionId(regionId);
    // 
    //         Client client = new Client(config);
    // 
    //         CreateImportMigrationAdvanceRequest request = new CreateImportMigrationAdvanceRequest();
    //         request.setName("test_migration_api_" + System.currentTimeMillis());
    //         request.setProjectId(123456L); 
    //         request.setPackageType("DATAWORKS_MODEL");
    //         request.setPackageFileObject(new FileInputStream("/home/admin/Downloads/test.zip"));
    // 
    //         RuntimeOptions runtime = new RuntimeOptions();
    //         CreateImportMigrationResponse response = client.createImportMigrationAdvance(request, runtime);
    // ```
    // 
    // This parameter is required.
    std::shared_ptr<string> packageFile_ = nullptr;
    // The type of the import package. Valid values:
    // 
    // *   DATAWORKS_MODEL (standard format)
    // *   DATAWORKS_V2 (Apsara Stack DataWorks V3.6.1 to V3.11)
    // *   DATAWORKS_V3 (Apsara Stack DataWorks V3.12 and later)
    // 
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the Workspace page to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The mapping between the resource group for scheduling and the resource group for Data Integration. The keys and values in the mapping are the identifiers of the resource groups. Specify the mapping in the following format:
    // 
    // ```json
    // {
    //     "SCHEDULER_RESOURCE_GROUP": {
    //         "xxx": "yyy"
    //     },
    //     "DI_RESOURCE_GROUP": {
    //         "ccc": "dfdd"
    //     }
    // }
    // ```
    std::shared_ptr<string> resourceGroupMap_ = nullptr;
    // The mapping between the prefixes for the names of the source and destination workspaces. When the system performs the import operation, the prefix for the name of the source workspace in the import package is replaced based on the mapping.
    std::shared_ptr<string> workspaceMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
