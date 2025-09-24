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
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->dataCount_ != nullptr && this->dataSize_ != nullptr && this->dataSourceType_ != nullptr && this->dataType_ != nullptr && this->description_ != nullptr
        && this->edition_ != nullptr && this->importInfo_ != nullptr && this->labels_ != nullptr && this->mountAccessReadWriteRoleIdList_ != nullptr && this->name_ != nullptr
        && this->options_ != nullptr && this->property_ != nullptr && this->provider_ != nullptr && this->providerType_ != nullptr && this->sourceDatasetId_ != nullptr
        && this->sourceDatasetVersion_ != nullptr && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->uri_ != nullptr && this->userId_ != nullptr
        && this->versionDescription_ != nullptr && this->versionLabels_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateDatasetRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t dataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline CreateDatasetRequest& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline CreateDatasetRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDatasetRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDatasetRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateDatasetRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline string importInfo() const { DARABONBA_PTR_GET_DEFAULT(importInfo_, "") };
    inline CreateDatasetRequest& setImportInfo(string importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline CreateDatasetRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateDatasetRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // mountAccessReadWriteRoleIdList Field Functions 
    bool hasMountAccessReadWriteRoleIdList() const { return this->mountAccessReadWriteRoleIdList_ != nullptr;};
    void deleteMountAccessReadWriteRoleIdList() { this->mountAccessReadWriteRoleIdList_ = nullptr;};
    inline const vector<string> & mountAccessReadWriteRoleIdList() const { DARABONBA_PTR_GET_CONST(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline vector<string> mountAccessReadWriteRoleIdList() { DARABONBA_PTR_GET(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline CreateDatasetRequest& setMountAccessReadWriteRoleIdList(const vector<string> & mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_VALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };
    inline CreateDatasetRequest& setMountAccessReadWriteRoleIdList(vector<string> && mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_RVALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDatasetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateDatasetRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CreateDatasetRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateDatasetRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string providerType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline CreateDatasetRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string sourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline CreateDatasetRequest& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceDatasetVersion Field Functions 
    bool hasSourceDatasetVersion() const { return this->sourceDatasetVersion_ != nullptr;};
    void deleteSourceDatasetVersion() { this->sourceDatasetVersion_ = nullptr;};
    inline string sourceDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetVersion_, "") };
    inline CreateDatasetRequest& setSourceDatasetVersion(string sourceDatasetVersion) { DARABONBA_PTR_SET_VALUE(sourceDatasetVersion_, sourceDatasetVersion) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateDatasetRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateDatasetRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateDatasetRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateDatasetRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string versionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreateDatasetRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // versionLabels Field Functions 
    bool hasVersionLabels() const { return this->versionLabels_ != nullptr;};
    void deleteVersionLabels() { this->versionLabels_ = nullptr;};
    inline const vector<Label> & versionLabels() const { DARABONBA_PTR_GET_CONST(versionLabels_, vector<Label>) };
    inline vector<Label> versionLabels() { DARABONBA_PTR_GET(versionLabels_, vector<Label>) };
    inline CreateDatasetRequest& setVersionLabels(const vector<Label> & versionLabels) { DARABONBA_PTR_SET_VALUE(versionLabels_, versionLabels) };
    inline CreateDatasetRequest& setVersionLabels(vector<Label> && versionLabels) { DARABONBA_PTR_SET_RVALUE(versionLabels_, versionLabels) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace accessibility. Valid values:
    // 
    // *   PRIVATE: The workspace is accessible only to you and the administrator of the workspace. This is the default value.
    // *   PUBLIC: The workspace is accessible to all users.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The number of dataset files.
    std::shared_ptr<int64_t> dataCount_ = nullptr;
    // The size of the dataset file. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The data source type. Valid values:
    // 
    // *   OSS: Object Storage Service (OSS).
    // *   NAS: File Storage NAS (NAS).
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The type of the dataset. Default value: COMMON. Valid values:
    // 
    // *   COMMON: common
    // *   PIC: picture
    // *   TEXT: text
    // *   Video: video
    // *   AUDIO: audio
    std::shared_ptr<string> dataType_ = nullptr;
    // The description of the dataset. Descriptions are used to differentiate datasets.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // The dataset configurations to be imported to a storage, such as OSS, NAS, or Cloud Parallel File Storage (CPFS).
    // 
    // **OSS**
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "bucket": "${bucket}",//The bucket name.\\
    // "path": "${path}" // The file path.\\
    // }\\
    // 
    // 
    // **NAS**
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "path": "${path}", // The file system path.\\
    // "mountTarget": "${mount_target}" // The mount point of the file system.\\
    // }\\
    // 
    // 
    // **CPFS**
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "protocolServiceId":"${protocol_service_id}", // The file system protocol service.\\
    // "exportId": "${export_id}", // The file system export directory.\\
    // "path": "${path}", // The file system path.\\
    // }\\
    // 
    // 
    // **CPFS for Lingjun**
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "path": "${path}", // The file system path.\\
    // "mountTarget": "${mount_target}" // The mount point of the file system, CPFS for Lingjun only.\\
    // "isVpcMount": boolean, // Whether the mount point is a virtual private cloud (VPC) mount point, CPFS for Lingjun only.\\
    // }\\
    std::shared_ptr<string> importInfo_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The list of role names in the workspace that have read and write permissions on the mounted database. The names start with PAI are basic role names and the names start with role- are custom role names. If the list contains asterisks (\\*), all roles have read and write permissions.
    // 
    // *   If you set the value to ["PAI.AlgoOperator", "role-hiuwpd01ncrokkgp21"], the account of the specified role is granted the read and write permissions.
    // *   If you set the value to ["\\*"], all accounts are granted the read and write permissions.
    // *   If you set the value to [], only the creator of the dataset has the read and write permissions.
    std::shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ = nullptr;
    // The dataset name. The name must meet the following requirements:
    // 
    // *   The name must start with a letter, digit, or Chinese character.
    // *   The name can contain underscores (_) and hyphens (-).
    // *   The name must be 1 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The extended field, which is a JSON string. When you use the dataset in Deep Learning Containers (DLC), you can configure the mountPath field to specify the default mount path of the dataset.
    std::shared_ptr<string> options_ = nullptr;
    // The property of the dataset. Valid values:
    // 
    // *   FILE
    // *   DIRECTORY
    // 
    // This parameter is required.
    std::shared_ptr<string> property_ = nullptr;
    // The dataset provider. The value cannot be set to pai.
    std::shared_ptr<string> provider_ = nullptr;
    // The source type of the dataset. Valid values:
    // 
    // *   Ecs (default)
    // *   Lingjun
    std::shared_ptr<string> providerType_ = nullptr;
    // The ID of the source dataset for the labeled dataset.
    std::shared_ptr<string> sourceDatasetId_ = nullptr;
    // The version of the source dataset for the labeled dataset.
    std::shared_ptr<string> sourceDatasetVersion_ = nullptr;
    // The data source ID.
    // 
    // *   If SourceType is set to USER, the value of SourceId is a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The type of the data source. Default value: USER.
    // 
    // Valid values:
    // 
    // *   PAI_PUBLIC_DATASET: a public dataset of PAI.
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The URI of the data source.
    // 
    // *   Value format if DataSourceType is set to OSS: `oss://bucket.endpoint/object`.
    // *   Value formats if DataSourceType is set to NAS: General-purpose NAS: `nas://<nasfisid>.region/subpath/to/dir/`. CPFS 1.0: `nas://<cpfs-fsid>.region/subpath/to/dir/`. CPFS 2.0: `nas://<cpfs-fsid>.region/<protocolserviceid>/`. You can distinguish CPFS 1.0 and CPFS 2.0 file systems based on the format of the file system ID: The ID for CPFS 1.0 is in the cpfs-<8-bit ASCII characters> format. The ID for CPFS 2.0 is in the cpfs-<16-bit ASCII characters> format.
    // 
    // This parameter is required.
    std::shared_ptr<string> uri_ = nullptr;
    // The ID of the Alibaba Cloud account to which the dataset belongs. The workspace owner and administrator have permissions to create datasets for specified members in the workspace.
    std::shared_ptr<string> userId_ = nullptr;
    // The description of the dataset of the initial version.
    std::shared_ptr<string> versionDescription_ = nullptr;
    // The list of tags to be added to the dataset of the initial version.
    std::shared_ptr<vector<Label>> versionLabels_ = nullptr;
    // The ID of the workspace to which the dataset belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID. If you do not specify this parameter, the default workspace is used. If the default workspace does not exist, an error is reported.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
