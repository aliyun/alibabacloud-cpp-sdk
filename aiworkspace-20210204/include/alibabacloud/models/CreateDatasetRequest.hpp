// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/UserMetricsEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_TO_JSON(SourceDatasetVersion, sourceDatasetVersion_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(VersionLabels, versionLabels_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetVersion, sourceDatasetVersion_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(VersionLabels, versionLabels_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->accessibleRoleIdList_ == nullptr && this->dataCount_ == nullptr && this->dataSize_ == nullptr && this->dataSourceType_ == nullptr && this->dataType_ == nullptr
        && this->datasetTaskRamRole_ == nullptr && this->description_ == nullptr && this->edition_ == nullptr && this->importInfo_ == nullptr && this->labels_ == nullptr
        && this->mountAccessReadWriteRoleIdList_ == nullptr && this->name_ == nullptr && this->options_ == nullptr && this->property_ == nullptr && this->provider_ == nullptr
        && this->providerType_ == nullptr && this->sourceDatasetId_ == nullptr && this->sourceDatasetVersion_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr
        && this->uri_ == nullptr && this->userId_ == nullptr && this->userMetricsEndpoints_ == nullptr && this->versionDescription_ == nullptr && this->versionLabels_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateDatasetRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accessibleRoleIdList Field Functions 
    bool hasAccessibleRoleIdList() const { return this->accessibleRoleIdList_ != nullptr;};
    void deleteAccessibleRoleIdList() { this->accessibleRoleIdList_ = nullptr;};
    inline const vector<string> & getAccessibleRoleIdList() const { DARABONBA_PTR_GET_CONST(accessibleRoleIdList_, vector<string>) };
    inline vector<string> getAccessibleRoleIdList() { DARABONBA_PTR_GET(accessibleRoleIdList_, vector<string>) };
    inline CreateDatasetRequest& setAccessibleRoleIdList(const vector<string> & accessibleRoleIdList) { DARABONBA_PTR_SET_VALUE(accessibleRoleIdList_, accessibleRoleIdList) };
    inline CreateDatasetRequest& setAccessibleRoleIdList(vector<string> && accessibleRoleIdList) { DARABONBA_PTR_SET_RVALUE(accessibleRoleIdList_, accessibleRoleIdList) };


    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline CreateDatasetRequest& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline CreateDatasetRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDatasetRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDatasetRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // datasetTaskRamRole Field Functions 
    bool hasDatasetTaskRamRole() const { return this->datasetTaskRamRole_ != nullptr;};
    void deleteDatasetTaskRamRole() { this->datasetTaskRamRole_ = nullptr;};
    inline string getDatasetTaskRamRole() const { DARABONBA_PTR_GET_DEFAULT(datasetTaskRamRole_, "") };
    inline CreateDatasetRequest& setDatasetTaskRamRole(string datasetTaskRamRole) { DARABONBA_PTR_SET_VALUE(datasetTaskRamRole_, datasetTaskRamRole) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateDatasetRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline string getImportInfo() const { DARABONBA_PTR_GET_DEFAULT(importInfo_, "") };
    inline CreateDatasetRequest& setImportInfo(string importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateDatasetRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateDatasetRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // mountAccessReadWriteRoleIdList Field Functions 
    bool hasMountAccessReadWriteRoleIdList() const { return this->mountAccessReadWriteRoleIdList_ != nullptr;};
    void deleteMountAccessReadWriteRoleIdList() { this->mountAccessReadWriteRoleIdList_ = nullptr;};
    inline const vector<string> & getMountAccessReadWriteRoleIdList() const { DARABONBA_PTR_GET_CONST(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline vector<string> getMountAccessReadWriteRoleIdList() { DARABONBA_PTR_GET(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline CreateDatasetRequest& setMountAccessReadWriteRoleIdList(const vector<string> & mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_VALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };
    inline CreateDatasetRequest& setMountAccessReadWriteRoleIdList(vector<string> && mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_RVALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDatasetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateDatasetRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CreateDatasetRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateDatasetRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline CreateDatasetRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string getSourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline CreateDatasetRequest& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceDatasetVersion Field Functions 
    bool hasSourceDatasetVersion() const { return this->sourceDatasetVersion_ != nullptr;};
    void deleteSourceDatasetVersion() { this->sourceDatasetVersion_ = nullptr;};
    inline string getSourceDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetVersion_, "") };
    inline CreateDatasetRequest& setSourceDatasetVersion(string sourceDatasetVersion) { DARABONBA_PTR_SET_VALUE(sourceDatasetVersion_, sourceDatasetVersion) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateDatasetRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateDatasetRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateDatasetRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateDatasetRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userMetricsEndpoints Field Functions 
    bool hasUserMetricsEndpoints() const { return this->userMetricsEndpoints_ != nullptr;};
    void deleteUserMetricsEndpoints() { this->userMetricsEndpoints_ = nullptr;};
    inline const vector<UserMetricsEndpoint> & getUserMetricsEndpoints() const { DARABONBA_PTR_GET_CONST(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline vector<UserMetricsEndpoint> getUserMetricsEndpoints() { DARABONBA_PTR_GET(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline CreateDatasetRequest& setUserMetricsEndpoints(const vector<UserMetricsEndpoint> & userMetricsEndpoints) { DARABONBA_PTR_SET_VALUE(userMetricsEndpoints_, userMetricsEndpoints) };
    inline CreateDatasetRequest& setUserMetricsEndpoints(vector<UserMetricsEndpoint> && userMetricsEndpoints) { DARABONBA_PTR_SET_RVALUE(userMetricsEndpoints_, userMetricsEndpoints) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreateDatasetRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionLabels Field Functions 
    bool hasVersionLabels() const { return this->versionLabels_ != nullptr;};
    void deleteVersionLabels() { this->versionLabels_ = nullptr;};
    inline const vector<Label> & getVersionLabels() const { DARABONBA_PTR_GET_CONST(versionLabels_, vector<Label>) };
    inline vector<Label> getVersionLabels() { DARABONBA_PTR_GET(versionLabels_, vector<Label>) };
    inline CreateDatasetRequest& setVersionLabels(const vector<Label> & versionLabels) { DARABONBA_PTR_SET_VALUE(versionLabels_, versionLabels) };
    inline CreateDatasetRequest& setVersionLabels(vector<Label> && versionLabels) { DARABONBA_PTR_SET_RVALUE(versionLabels_, versionLabels) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the workspace. Valid values:
    // - PRIVATE (default): visible only to yourself and administrators within the workspace.
    // - PUBLIC: visible to all users in the workspace.
    // - ROLE_PUBLIC: visible to specified workspace roles. For the role list, refer to AccessibleRoleIdList. Under this condition, the dataset owner and administrators always have visibility.
    shared_ptr<string> accessibility_ {};
    // Takes effect when Accessibility is set to ROLE_PUBLIC. The list of workspace role names that can view the dataset. IDs starting with PAI are basic role IDs, and IDs starting with role- are custom role IDs.
    shared_ptr<vector<string>> accessibleRoleIdList_ {};
    // The number of files in the dataset.
    shared_ptr<int64_t> dataCount_ {};
    // The size of space occupied by the dataset files. Unit: bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The data source type. Valid values:
    // - OSS: Alibaba Cloud Object Storage Service (OSS).
    // - NAS: Alibaba Cloud Apsara File Storage NAS General Purpose.
    // - EXTREMENAS: Alibaba Cloud Apsara File Storage NAS Extreme.
    // - CPFS: Alibaba Cloud Cloud Parallel File Storage (CPFS) General Purpose.
    // - BMCPFS: Alibaba Cloud Cloud Parallel File Storage (CPFS) AI Edition. 
    // - MAXCOMPUTE: Alibaba Cloud MaxCompute.
    // - URL: public HTTP/HTTPS URL.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // The data type of the dataset. Default value: COMMON. Valid values:
    // - COMMON: common.
    // - PIC: image.
    // - TEXT: text.
    // - VIDEO: video.
    // - AUDIO: audio.
    shared_ptr<string> dataType_ {};
    // DatasetTaskRamRole
    shared_ptr<string> datasetTaskRamRole_ {};
    // The custom description of the dataset to distinguish it from other datasets.
    shared_ptr<string> description_ {};
    // The dataset type. Default value: BASIC. Valid values:
    // 
    // - BASIC: basic. Does not support dataset file metadata management.
    // - ADVANCED: advanced. Only supported for OSS type. Each version supports up to 1 million file metadata entries.
    // - LOGICAL: logical. Only supported for OSS type. Each version supports up to 3 million file metadata entries.
    shared_ptr<string> edition_ {};
    // The storage import configuration of the dataset. OSS, NAS, and CPFS are supported.
    // 
    // <details>
    // <summary>OSS</summary>
    // {<BR>
    // "region": "${region}",//Region ID<BR>
    // "bucket": "${bucket}",//Bucket name<BR>
    // "path": "${path}" //File path<BR>
    // }<BR>
    // </details>
    // 
    // <details>
    // <summary>NAS</summary>
    // {<BR>
    // "region": "${region}",//Region ID<BR>
    // "fileSystemId": "${file_system_id}", //File system ID<BR>
    // "path": "${path}", //File system path<BR>
    // "mountTarget": "${mount_target}" //File system mount target<BR>
    // }<BR>
    // </details>
    // 
    // <details>
    // <summary>CPFS</summary>
    // {<BR>
    // "region": "${region}",//Region ID<BR>
    // "fileSystemId": "${file_system_id}", //File system ID<BR>
    // "protocolServiceId":"${protocol_service_id}", //File system protocol service<BR>
    // "exportId": "${export_id}", //File system export directory<BR>
    // "path": "${path}", //File system path<BR>
    // }<BR>
    // </details>
    // 
    // <details>
    // <summary>AI Edition CPFS</summary>
    // {<BR>
    // "region": "${region}",//Region ID<BR>
    // "fileSystemId": "${file_system_id}", //File system ID<BR>
    // "path": "${path}", //File system path<BR>
    // "mountTarget": "${mount_target}" //File system mount target, specific to AI Edition<BR>
    // "isVpcMount": boolean, //Whether it is a VPC mount target, specific to AI Edition<BR>
    // }<BR>
    // </details>
    shared_ptr<string> importInfo_ {};
    // The list of labels.
    shared_ptr<vector<Label>> labels_ {};
    // The list of workspace role names that have read and write permissions when the dataset is mounted. IDs starting with PAI are basic role IDs, and IDs starting with role- are custom role IDs. If the list contains "*", all roles have read and write permissions.
    // - Specified roles: ["PAI.AlgoOperator", "role-hiuwpd01ncrokkgp21"]
    // - All accounts: ["*"]
    // - Dataset creator only: []
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The name of the dataset. Naming rules:
    // - Must start with a lowercase letter, uppercase letter, digit, or Chinese character.
    // - Can contain underscores (_) or hyphens (-).
    // - Must be 1 to 127 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The extended field in JsonString format.
    // When DLC uses the dataset, you can specify the default mount path of the dataset by configuring the mountPath field.
    shared_ptr<string> options_ {};
    // The property of the dataset. Valid values:
    // - FILE: file.
    // - DIRECTORY: folder.
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The dataset provider. Cannot be set to pai.
    shared_ptr<string> provider_ {};
    // The data source provider type of the dataset. Valid values:
    // - Ecs (default)
    // - Lingjun
    shared_ptr<string> providerType_ {};
    // The source dataset ID of the annotation dataset.
    shared_ptr<string> sourceDatasetId_ {};
    // The source dataset version of the annotation dataset.
    shared_ptr<string> sourceDatasetVersion_ {};
    // The data source ID.
    // - If SourceType is USER, SourceId can be customized.
    // - If SourceType is ITAG, which indicates a dataset generated from iTAG annotation results, SourceId is the iTAG task ID.
    // - If SourceType is PAI_PUBLIC_DATASET, which indicates a dataset created from a PAI public dataset, SourceId is empty by default.
    shared_ptr<string> sourceId_ {};
    // The data source type. Default value: USER.
    shared_ptr<string> sourceType_ {};
    // Examples of Uri configurations:
    // - If the data source type is OSS: `oss://bucket.endpoint/object`
    // - If the data source type is NAS:
    // General Purpose NAS format: `nas://<nasfisid>.region/subpath/to/dir/`;
    // CPFS 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`;
    // CPFS 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`.
    // CPFS 1.0 and CPFS 2.0 are distinguished by the fsid format: CPFS 1.0 format is cpfs-<8 ASCII characters>; CPFS 2.0 format is cpfs-<16 ASCII characters>.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
    // The Alibaba Cloud account ID of the dataset owner. Workspace owners and administrators have permissions to create datasets for specified workspace members.
    shared_ptr<string> userId_ {};
    // UserMetricsEndpoints
    shared_ptr<vector<UserMetricsEndpoint>> userMetricsEndpoints_ {};
    // The description of the initial version of the dataset.
    shared_ptr<string> versionDescription_ {};
    // The list of labels for the initial version.
    shared_ptr<vector<Label>> versionLabels_ {};
    // The ID of the workspace where the dataset resides. For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // If this parameter is not specified, the default workspace is used. If the default workspace does not exist, an error is returned.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
