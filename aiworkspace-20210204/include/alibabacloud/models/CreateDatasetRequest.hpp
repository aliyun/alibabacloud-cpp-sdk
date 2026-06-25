// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
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
        && this->description_ == nullptr && this->edition_ == nullptr && this->importInfo_ == nullptr && this->labels_ == nullptr && this->mountAccessReadWriteRoleIdList_ == nullptr
        && this->name_ == nullptr && this->options_ == nullptr && this->property_ == nullptr && this->provider_ == nullptr && this->providerType_ == nullptr
        && this->sourceDatasetId_ == nullptr && this->sourceDatasetVersion_ == nullptr && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->uri_ == nullptr
        && this->userId_ == nullptr && this->versionDescription_ == nullptr && this->versionLabels_ == nullptr && this->workspaceId_ == nullptr; };
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
    // The visibility of the dataset in the workspace. Valid values:
    // 
    // - PRIVATE (default): The dataset is visible only to its owner and administrators in the workspace.
    // 
    // - PUBLIC: The dataset is visible to all users in the workspace.
    // 
    // - ROLE_PUBLIC: The dataset is visible to users with specific workspace roles. The list of roles is specified in the `AccessibleRoleIdList` parameter. The dataset owner and administrators always retain visibility.
    shared_ptr<string> accessibility_ {};
    // This parameter takes effect only when `Accessibility` is set to `ROLE_PUBLIC`. This parameter specifies a list of workspace role IDs that can view this dataset. Role IDs that start with `PAI.` are built-in roles, and role IDs that start with `role-` are custom roles.
    shared_ptr<vector<string>> accessibleRoleIdList_ {};
    // The number of files in the dataset.
    shared_ptr<int64_t> dataCount_ {};
    // The size of the dataset files, in bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The type of the data source. Valid values:
    // 
    // - OSS: Object Storage Service (OSS).
    // 
    // - NAS: general-purpose Apsara File Storage NAS.
    // 
    // - EXTREMENAS: Extreme NAS.
    // 
    // - CPFS: general-purpose Cloud Parallel File Storage (CPFS).
    // 
    // - BMCPFS: AI Computing Edition of CPFS.
    // 
    // - MAXCOMPUTE: MaxCompute.
    // 
    // - URL: a public HTTP or HTTPS URL.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    // The data type of the dataset. The default value is `COMMON`. Valid values:
    // 
    // - COMMON: common
    // 
    // - PIC: image
    // 
    // - TEXT: text
    // 
    // - VIDEO: video
    // 
    // - AUDIO: audio
    shared_ptr<string> dataType_ {};
    // A custom description to distinguish the dataset from other datasets.
    shared_ptr<string> description_ {};
    // The edition of the dataset. The default value is BASIC. Valid values:
    // 
    // - BASIC: Basic. Does not support dataset file metadata management.
    // 
    // - ADVANCED: Advanced. Supported only for OSS datasets. Each version supports metadata management for up to 1 million files.
    // 
    // - LOGICAL: Logical. Supported only for OSS datasets. Each version supports metadata management for up to 3 million files.
    shared_ptr<string> edition_ {};
    // The storage import configuration of the dataset. `OSS`, `NAS`, and `CPFS` are supported.
    // 
    // <details>
    // 
    // <summary>
    // 
    // OSS
    // 
    // </summary>
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "bucket": "${bucket}",// The bucket name.\\
    // "path": "${path}" // The file path.\\
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // NAS
    // 
    // </summary>
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "path": "${path}", // The file system path.\\
    // "mountTarget": "${mount_target}" // The mount target of the file system.\\
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // CPFS
    // 
    // </summary>
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "protocolServiceId":"${protocol_service_id}", // The protocol service of the file system.\\
    // "exportId": "${export_id}", // The exported directory of the file system.\\
    // "path": "${path}", // The file system path.\\
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // CPFS (AI Computing Edition)
    // 
    // </summary>
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "path": "${path}", // The file system path.\\
    // "mountTarget": "${mount_target}", // The mount target of the file system. This parameter is specific to the AI Computing Edition.\\
    // "isVpcMount": boolean, // Specifies whether the mount target is in a VPC. This parameter is specific to the AI Computing Edition.\\
    // }
    // 
    // </details>
    shared_ptr<string> importInfo_ {};
    // A list of labels.
    shared_ptr<vector<Label>> labels_ {};
    // A list of workspace role IDs that are granted read and write permissions when the dataset is mounted. Role IDs that start with `PAI.` are built-in roles, and role IDs that start with `role-` are custom roles. If the list contains an asterisk (\\*), all roles are granted read and write permissions.
    // 
    // - Accounts with specified roles: `["PAI.AlgoOperator", "role-hiuwpd01ncrokkgp21"]`
    // 
    // - All accounts: `["*"]`
    // 
    // - Dataset creator only: `[]`
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The name of the dataset. The name must meet the following requirements:
    // 
    // - Starts with a lowercase letter, an uppercase letter, a number, or a Chinese character.
    // 
    // - Can contain underscores (_) and hyphens (-).
    // 
    // - Must be 1 to 127 characters long.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The extended fields, which are a JSON string.
    // When a Data Lake Compute (DLC) job uses the dataset, you can configure the `mountPath` field to specify the default mount path of the dataset.
    shared_ptr<string> options_ {};
    // The property of the dataset. Valid values:
    // 
    // - FILE: A file.
    // 
    // - DIRECTORY: A directory.
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The provider of the dataset. You cannot set this parameter to `pai`.
    shared_ptr<string> provider_ {};
    // The type of the data source provider. Valid values:
    // 
    // - Ecs (default)
    // 
    // - Lingjun
    shared_ptr<string> providerType_ {};
    // The ID of the source dataset for a labeled dataset.
    shared_ptr<string> sourceDatasetId_ {};
    // The version of the source dataset for a labeled dataset.
    shared_ptr<string> sourceDatasetVersion_ {};
    // The ID of the data source.
    // 
    // - If `SourceType` is `USER`, you can specify a custom value for `SourceId`.
    // 
    // - If `SourceType` is `ITAG`, this parameter specifies the iTAG task ID from which the dataset was generated.
    // 
    // - If `SourceType` is `PAI_PUBLIC_DATASET`, the dataset is from a public PAI dataset, and this parameter is empty by default.
    shared_ptr<string> sourceId_ {};
    // The source of the data. The default value is USER.
    shared_ptr<string> sourceType_ {};
    // The URI of the data. The URI format varies based on the `DataSourceType` value.
    // 
    // - For an `OSS` data source: `oss://bucket.endpoint/object`
    // 
    // - For a `NAS` data source:
    //   For general-purpose `NAS`: `nas://<nasfisid>.region/subpath/to/dir/`.
    //   For `CPFS` 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`.
    //   For `CPFS` 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`.
    //   `CPFS` 1.0 and `CPFS` 2.0 are distinguished by the format of the file system ID (fsid). The fsid for `CPFS` 1.0 is in the `cpfs-<8-character ASCII string>` format. The fsid for `CPFS` 2.0 is in the `cpfs-<16-character ASCII string>` format.
    // 
    // This parameter is required.
    shared_ptr<string> uri_ {};
    // The Alibaba Cloud account ID of the dataset owner. Workspace owners and administrators can create datasets for specified members of a workspace.
    shared_ptr<string> userId_ {};
    // The description of the initial version of the dataset.
    shared_ptr<string> versionDescription_ {};
    // A list of labels for the initial version.
    shared_ptr<vector<Label>> versionLabels_ {};
    // The ID of the workspace to which the dataset belongs. For more information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // If this parameter is not specified, the default workspace is used. If the default workspace does not exist, an error is returned.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
