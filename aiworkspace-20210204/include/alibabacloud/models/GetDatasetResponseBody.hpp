// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/DatasetVersion.hpp>
#include <alibabacloud/models/DatasetShareRelationship.hpp>
#include <alibabacloud/models/GetDatasetResponseBodySharingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(IsShared, isShared_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_TO_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedFrom, sharedFrom_);
      DARABONBA_PTR_TO_JSON(SharingConfig, sharingConfig_);
      DARABONBA_PTR_TO_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_TO_JSON(SourceDatasetVersion, sourceDatasetVersion_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TagTemplateType, tagTemplateType_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_FROM_JSON(MountAccessReadWriteRoleIdList, mountAccessReadWriteRoleIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedFrom, sharedFrom_);
      DARABONBA_PTR_FROM_JSON(SharingConfig, sharingConfig_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetId, sourceDatasetId_);
      DARABONBA_PTR_FROM_JSON(SourceDatasetVersion, sourceDatasetVersion_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TagTemplateType, tagTemplateType_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetDatasetResponseBody() = default ;
    GetDatasetResponseBody(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody(GetDatasetResponseBody &&) = default ;
    GetDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBody() = default ;
    GetDatasetResponseBody& operator=(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody& operator=(GetDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->dataSourceType_ != nullptr && this->dataType_ != nullptr && this->datasetId_ != nullptr && this->description_ != nullptr && this->edition_ != nullptr
        && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->importInfo_ != nullptr && this->isShared_ != nullptr && this->labels_ != nullptr
        && this->latestVersion_ != nullptr && this->mountAccess_ != nullptr && this->mountAccessReadWriteRoleIdList_ != nullptr && this->name_ != nullptr && this->options_ != nullptr
        && this->ownerId_ != nullptr && this->property_ != nullptr && this->provider_ != nullptr && this->providerType_ != nullptr && this->requestId_ != nullptr
        && this->sharedFrom_ != nullptr && this->sharingConfig_ != nullptr && this->sourceDatasetId_ != nullptr && this->sourceDatasetVersion_ != nullptr && this->sourceId_ != nullptr
        && this->sourceType_ != nullptr && this->tagTemplateType_ != nullptr && this->uri_ != nullptr && this->userId_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetDatasetResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetDatasetResponseBody& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDatasetResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline GetDatasetResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDatasetResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline GetDatasetResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetDatasetResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetDatasetResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline string importInfo() const { DARABONBA_PTR_GET_DEFAULT(importInfo_, "") };
    inline GetDatasetResponseBody& setImportInfo(string importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool isShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline GetDatasetResponseBody& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetDatasetResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetDatasetResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const DatasetVersion & latestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, DatasetVersion) };
    inline DatasetVersion latestVersion() { DARABONBA_PTR_GET(latestVersion_, DatasetVersion) };
    inline GetDatasetResponseBody& setLatestVersion(const DatasetVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline GetDatasetResponseBody& setLatestVersion(DatasetVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // mountAccess Field Functions 
    bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
    void deleteMountAccess() { this->mountAccess_ = nullptr;};
    inline string mountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
    inline GetDatasetResponseBody& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


    // mountAccessReadWriteRoleIdList Field Functions 
    bool hasMountAccessReadWriteRoleIdList() const { return this->mountAccessReadWriteRoleIdList_ != nullptr;};
    void deleteMountAccessReadWriteRoleIdList() { this->mountAccessReadWriteRoleIdList_ = nullptr;};
    inline const vector<string> & mountAccessReadWriteRoleIdList() const { DARABONBA_PTR_GET_CONST(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline vector<string> mountAccessReadWriteRoleIdList() { DARABONBA_PTR_GET(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline GetDatasetResponseBody& setMountAccessReadWriteRoleIdList(const vector<string> & mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_VALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };
    inline GetDatasetResponseBody& setMountAccessReadWriteRoleIdList(vector<string> && mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_RVALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDatasetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetDatasetResponseBody& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetDatasetResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline GetDatasetResponseBody& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetDatasetResponseBody& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string providerType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline GetDatasetResponseBody& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedFrom Field Functions 
    bool hasSharedFrom() const { return this->sharedFrom_ != nullptr;};
    void deleteSharedFrom() { this->sharedFrom_ = nullptr;};
    inline const DatasetShareRelationship & sharedFrom() const { DARABONBA_PTR_GET_CONST(sharedFrom_, DatasetShareRelationship) };
    inline DatasetShareRelationship sharedFrom() { DARABONBA_PTR_GET(sharedFrom_, DatasetShareRelationship) };
    inline GetDatasetResponseBody& setSharedFrom(const DatasetShareRelationship & sharedFrom) { DARABONBA_PTR_SET_VALUE(sharedFrom_, sharedFrom) };
    inline GetDatasetResponseBody& setSharedFrom(DatasetShareRelationship && sharedFrom) { DARABONBA_PTR_SET_RVALUE(sharedFrom_, sharedFrom) };


    // sharingConfig Field Functions 
    bool hasSharingConfig() const { return this->sharingConfig_ != nullptr;};
    void deleteSharingConfig() { this->sharingConfig_ = nullptr;};
    inline const GetDatasetResponseBodySharingConfig & sharingConfig() const { DARABONBA_PTR_GET_CONST(sharingConfig_, GetDatasetResponseBodySharingConfig) };
    inline GetDatasetResponseBodySharingConfig sharingConfig() { DARABONBA_PTR_GET(sharingConfig_, GetDatasetResponseBodySharingConfig) };
    inline GetDatasetResponseBody& setSharingConfig(const GetDatasetResponseBodySharingConfig & sharingConfig) { DARABONBA_PTR_SET_VALUE(sharingConfig_, sharingConfig) };
    inline GetDatasetResponseBody& setSharingConfig(GetDatasetResponseBodySharingConfig && sharingConfig) { DARABONBA_PTR_SET_RVALUE(sharingConfig_, sharingConfig) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string sourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline GetDatasetResponseBody& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceDatasetVersion Field Functions 
    bool hasSourceDatasetVersion() const { return this->sourceDatasetVersion_ != nullptr;};
    void deleteSourceDatasetVersion() { this->sourceDatasetVersion_ = nullptr;};
    inline string sourceDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetVersion_, "") };
    inline GetDatasetResponseBody& setSourceDatasetVersion(string sourceDatasetVersion) { DARABONBA_PTR_SET_VALUE(sourceDatasetVersion_, sourceDatasetVersion) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetDatasetResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetDatasetResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tagTemplateType Field Functions 
    bool hasTagTemplateType() const { return this->tagTemplateType_ != nullptr;};
    void deleteTagTemplateType() { this->tagTemplateType_ = nullptr;};
    inline string tagTemplateType() const { DARABONBA_PTR_GET_DEFAULT(tagTemplateType_, "") };
    inline GetDatasetResponseBody& setTagTemplateType(string tagTemplateType) { DARABONBA_PTR_SET_VALUE(tagTemplateType_, tagTemplateType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetDatasetResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetDatasetResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the workspace. Valid values:
    // 
    // *   PRIVATE: The workspace is visible only to you and the administrator of the workspace.
    // *   PUBLIC: The workspace is visible to all users.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   OSS: Object Storage Service (OSS)
    // *   NAS: File Storage NAS (NAS)
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The data type. Valid values:
    // 
    // *   COMMON: common
    // *   PIC: picture
    // *   TEXT: text
    // *   VIDEO: video
    // *   AUDIO: audio
    std::shared_ptr<string> dataType_ = nullptr;
    // The dataset ID.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The dataset configurations to be imported to a storage, such as OSS, NAS, or CPFS.
    // 
    // **OSS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "bucket": "${bucket}",// The bucket name\\
    // "path": "${path}" // The file path\\
    // }\\
    // 
    // 
    // **NAS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "path": "${path}", // The file system path\\
    // "mountTarget": "${mount_target}" // The mount point of the file system\\
    // }\\
    // 
    // 
    // **CPFS**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "protocolServiceId":"${protocol_service_id}", // The file system protocol service\\
    // "exportId": "${export_id}", // The file system export directory\\
    // "path": "${path}", // The file system path\\
    // }\\
    // 
    // 
    // **CPFS for Lingjun**
    // 
    // {\\
    // "region": "${region}",// The region ID\\
    // "fileSystemId": "${file_system_id}", // The file system ID\\
    // "path": "${path}", // The file system path\\
    // "mountTarget": "${mount_target}" // The mount point of the file system, CPFS for Lingjun only\\
    // "isVpcMount": boolean, // Whether the mount point is a VPC mount point, CPFS for Lingjun only\\
    // }\\
    std::shared_ptr<string> importInfo_ = nullptr;
    std::shared_ptr<bool> isShared_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The latest version of the dataset.
    std::shared_ptr<DatasetVersion> latestVersion_ = nullptr;
    // The access permission on the dataset when the dataset is mounted. Valid values:
    // 
    // *   RO: read-only permissions
    // *   RW: read and write permissions
    std::shared_ptr<string> mountAccess_ = nullptr;
    // The list of role names in the workspace that have read and write permissions on the mounted database. The names start with PAI are basic role names and the names start with role- are custom role names. If the list contains asterisks (\\*), all roles have read and write permissions.
    std::shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ = nullptr;
    // The dataset name.
    std::shared_ptr<string> name_ = nullptr;
    // The extended fields of the dataset v1 (initial version). The value is a JSON string. When you use the dataset in Deep Learning Containers (DLC), you can use the mountPath field to specify the default mount path of the dataset.
    std::shared_ptr<string> options_ = nullptr;
    // The ID of the Alibaba Could account.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The property of the dataset of the initial version v1. Valid values:
    // 
    // *   FILE
    // *   DIRECTORY
    std::shared_ptr<string> property_ = nullptr;
    // The dataset provider. If the value pai is returned, the dataset is a public dataset in PAI.
    std::shared_ptr<string> provider_ = nullptr;
    // The type of the data source for the dataset. Valid values:
    // 
    // *   Ecs (default)
    // *   Lingjun
    std::shared_ptr<string> providerType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DatasetShareRelationship> sharedFrom_ = nullptr;
    std::shared_ptr<GetDatasetResponseBodySharingConfig> sharingConfig_ = nullptr;
    // The ID of the source dataset generated from a labeling job of iTAG.
    std::shared_ptr<string> sourceDatasetId_ = nullptr;
    // The version of the source dataset generated from a labeling job of iTAG.
    std::shared_ptr<string> sourceDatasetVersion_ = nullptr;
    // The ID of the source for the dataset v1 (initial version). Valid values:
    // 
    // *   If SourceType is set to USER, the value of SourceId can be a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The type of the source for the dataset v1 (initial version). Valid values:
    // 
    // *   PAI-PUBLIC-DATASET: a public dataset of Platform for AI (PAI).
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The labeling template for the source dataset generated from a labeling job of iTAG.
    std::shared_ptr<string> tagTemplateType_ = nullptr;
    // The URI of the initial version v1.
    // 
    // *   Sample format for the OSS data source: `oss://bucket.endpoint/object`
    // *   Sample formats for the NAS data source: `nas://<nasfisid>.region/subpath/to/dir/`: General-purpose NAS. `nas://<cpfs-fsid>.region/subpath/to/dir/`: Cloud Parallel File Storage (CPFS) 1.0. `nas://<cpfs-fsid>.region/<protocolserviceid>/`: CPFS 2.0. You can distinguish CPFS 1.0 and CPFS 2.0 file systems based on the format of the file system ID. The ID for CPFS 1.0 is in the cpfs-<8-bit ASCII characters> format. The ID for CPFS 2.0 is in the cpfs-<16-bit ASCII characters> format.
    std::shared_ptr<string> uri_ = nullptr;
    // The ID of the user to which the dataset belongs.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the workspace to which the dataset belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
