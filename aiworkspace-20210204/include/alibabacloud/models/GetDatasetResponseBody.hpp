// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetShareRelationship.hpp>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/DatasetVersion.hpp>
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
    class SharingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SharedTo, sharedTo_);
      };
      friend void from_json(const Darabonba::Json& j, SharingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SharedTo, sharedTo_);
      };
      SharingConfig() = default ;
      SharingConfig(const SharingConfig &) = default ;
      SharingConfig(SharingConfig &&) = default ;
      SharingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharingConfig() = default ;
      SharingConfig& operator=(const SharingConfig &) = default ;
      SharingConfig& operator=(SharingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sharedTo_ == nullptr; };
      // sharedTo Field Functions 
      bool hasSharedTo() const { return this->sharedTo_ != nullptr;};
      void deleteSharedTo() { this->sharedTo_ = nullptr;};
      inline const vector<DatasetShareRelationship> & getSharedTo() const { DARABONBA_PTR_GET_CONST(sharedTo_, vector<DatasetShareRelationship>) };
      inline vector<DatasetShareRelationship> getSharedTo() { DARABONBA_PTR_GET(sharedTo_, vector<DatasetShareRelationship>) };
      inline SharingConfig& setSharedTo(const vector<DatasetShareRelationship> & sharedTo) { DARABONBA_PTR_SET_VALUE(sharedTo_, sharedTo) };
      inline SharingConfig& setSharedTo(vector<DatasetShareRelationship> && sharedTo) { DARABONBA_PTR_SET_RVALUE(sharedTo_, sharedTo) };


    protected:
      shared_ptr<vector<DatasetShareRelationship>> sharedTo_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->dataSourceType_ == nullptr && this->dataType_ == nullptr && this->datasetId_ == nullptr && this->description_ == nullptr && this->edition_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->importInfo_ == nullptr && this->isShared_ == nullptr && this->labels_ == nullptr
        && this->latestVersion_ == nullptr && this->mountAccess_ == nullptr && this->mountAccessReadWriteRoleIdList_ == nullptr && this->name_ == nullptr && this->options_ == nullptr
        && this->ownerId_ == nullptr && this->property_ == nullptr && this->provider_ == nullptr && this->providerType_ == nullptr && this->requestId_ == nullptr
        && this->sharedFrom_ == nullptr && this->sharingConfig_ == nullptr && this->sourceDatasetId_ == nullptr && this->sourceDatasetVersion_ == nullptr && this->sourceId_ == nullptr
        && this->sourceType_ == nullptr && this->tagTemplateType_ == nullptr && this->uri_ == nullptr && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetDatasetResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetDatasetResponseBody& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDatasetResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline GetDatasetResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDatasetResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline GetDatasetResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetDatasetResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetDatasetResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline string getImportInfo() const { DARABONBA_PTR_GET_DEFAULT(importInfo_, "") };
    inline GetDatasetResponseBody& setImportInfo(string importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline GetDatasetResponseBody& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetDatasetResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetDatasetResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const DatasetVersion & getLatestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, DatasetVersion) };
    inline DatasetVersion getLatestVersion() { DARABONBA_PTR_GET(latestVersion_, DatasetVersion) };
    inline GetDatasetResponseBody& setLatestVersion(const DatasetVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline GetDatasetResponseBody& setLatestVersion(DatasetVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // mountAccess Field Functions 
    bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
    void deleteMountAccess() { this->mountAccess_ = nullptr;};
    inline string getMountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
    inline GetDatasetResponseBody& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


    // mountAccessReadWriteRoleIdList Field Functions 
    bool hasMountAccessReadWriteRoleIdList() const { return this->mountAccessReadWriteRoleIdList_ != nullptr;};
    void deleteMountAccessReadWriteRoleIdList() { this->mountAccessReadWriteRoleIdList_ = nullptr;};
    inline const vector<string> & getMountAccessReadWriteRoleIdList() const { DARABONBA_PTR_GET_CONST(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline vector<string> getMountAccessReadWriteRoleIdList() { DARABONBA_PTR_GET(mountAccessReadWriteRoleIdList_, vector<string>) };
    inline GetDatasetResponseBody& setMountAccessReadWriteRoleIdList(const vector<string> & mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_VALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };
    inline GetDatasetResponseBody& setMountAccessReadWriteRoleIdList(vector<string> && mountAccessReadWriteRoleIdList) { DARABONBA_PTR_SET_RVALUE(mountAccessReadWriteRoleIdList_, mountAccessReadWriteRoleIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDatasetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetDatasetResponseBody& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetDatasetResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline GetDatasetResponseBody& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetDatasetResponseBody& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline GetDatasetResponseBody& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedFrom Field Functions 
    bool hasSharedFrom() const { return this->sharedFrom_ != nullptr;};
    void deleteSharedFrom() { this->sharedFrom_ = nullptr;};
    inline const DatasetShareRelationship & getSharedFrom() const { DARABONBA_PTR_GET_CONST(sharedFrom_, DatasetShareRelationship) };
    inline DatasetShareRelationship getSharedFrom() { DARABONBA_PTR_GET(sharedFrom_, DatasetShareRelationship) };
    inline GetDatasetResponseBody& setSharedFrom(const DatasetShareRelationship & sharedFrom) { DARABONBA_PTR_SET_VALUE(sharedFrom_, sharedFrom) };
    inline GetDatasetResponseBody& setSharedFrom(DatasetShareRelationship && sharedFrom) { DARABONBA_PTR_SET_RVALUE(sharedFrom_, sharedFrom) };


    // sharingConfig Field Functions 
    bool hasSharingConfig() const { return this->sharingConfig_ != nullptr;};
    void deleteSharingConfig() { this->sharingConfig_ = nullptr;};
    inline const GetDatasetResponseBody::SharingConfig & getSharingConfig() const { DARABONBA_PTR_GET_CONST(sharingConfig_, GetDatasetResponseBody::SharingConfig) };
    inline GetDatasetResponseBody::SharingConfig getSharingConfig() { DARABONBA_PTR_GET(sharingConfig_, GetDatasetResponseBody::SharingConfig) };
    inline GetDatasetResponseBody& setSharingConfig(const GetDatasetResponseBody::SharingConfig & sharingConfig) { DARABONBA_PTR_SET_VALUE(sharingConfig_, sharingConfig) };
    inline GetDatasetResponseBody& setSharingConfig(GetDatasetResponseBody::SharingConfig && sharingConfig) { DARABONBA_PTR_SET_RVALUE(sharingConfig_, sharingConfig) };


    // sourceDatasetId Field Functions 
    bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
    void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
    inline string getSourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
    inline GetDatasetResponseBody& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    // sourceDatasetVersion Field Functions 
    bool hasSourceDatasetVersion() const { return this->sourceDatasetVersion_ != nullptr;};
    void deleteSourceDatasetVersion() { this->sourceDatasetVersion_ = nullptr;};
    inline string getSourceDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetVersion_, "") };
    inline GetDatasetResponseBody& setSourceDatasetVersion(string sourceDatasetVersion) { DARABONBA_PTR_SET_VALUE(sourceDatasetVersion_, sourceDatasetVersion) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetDatasetResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetDatasetResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tagTemplateType Field Functions 
    bool hasTagTemplateType() const { return this->tagTemplateType_ != nullptr;};
    void deleteTagTemplateType() { this->tagTemplateType_ = nullptr;};
    inline string getTagTemplateType() const { DARABONBA_PTR_GET_DEFAULT(tagTemplateType_, "") };
    inline GetDatasetResponseBody& setTagTemplateType(string tagTemplateType) { DARABONBA_PTR_SET_VALUE(tagTemplateType_, tagTemplateType) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetDatasetResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetDatasetResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the workspace. Valid values:
    // 
    // *   PRIVATE: The workspace is visible only to you and the administrator of the workspace.
    // *   PUBLIC: The workspace is visible to all users.
    shared_ptr<string> accessibility_ {};
    // The type of the data source. Valid values:
    // 
    // *   OSS: Object Storage Service (OSS)
    // *   NAS: File Storage NAS (NAS)
    shared_ptr<string> dataSourceType_ {};
    // The data type. Valid values:
    // 
    // *   COMMON: common
    // *   PIC: picture
    // *   TEXT: text
    // *   VIDEO: video
    // *   AUDIO: audio
    shared_ptr<string> dataType_ {};
    // The dataset ID.
    shared_ptr<string> datasetId_ {};
    // The description.
    shared_ptr<string> description_ {};
    shared_ptr<string> edition_ {};
    // The creation time.
    shared_ptr<string> gmtCreateTime_ {};
    // The update time.
    shared_ptr<string> gmtModifiedTime_ {};
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
    shared_ptr<string> importInfo_ {};
    shared_ptr<bool> isShared_ {};
    // The tags.
    shared_ptr<vector<Label>> labels_ {};
    // The latest version of the dataset.
    shared_ptr<DatasetVersion> latestVersion_ {};
    // The access permission on the dataset when the dataset is mounted. Valid values:
    // 
    // *   RO: read-only permissions
    // *   RW: read and write permissions
    shared_ptr<string> mountAccess_ {};
    // The list of role names in the workspace that have read and write permissions on the mounted database. The names start with PAI are basic role names and the names start with role- are custom role names. If the list contains asterisks (\\*), all roles have read and write permissions.
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The dataset name.
    shared_ptr<string> name_ {};
    // The extended fields of the dataset v1 (initial version). The value is a JSON string. When you use the dataset in Deep Learning Containers (DLC), you can use the mountPath field to specify the default mount path of the dataset.
    shared_ptr<string> options_ {};
    // The ID of the Alibaba Could account.
    shared_ptr<string> ownerId_ {};
    // The property of the dataset of the initial version v1. Valid values:
    // 
    // *   FILE
    // *   DIRECTORY
    shared_ptr<string> property_ {};
    // The dataset provider. If the value pai is returned, the dataset is a public dataset in PAI.
    shared_ptr<string> provider_ {};
    // The type of the data source for the dataset. Valid values:
    // 
    // *   Ecs (default)
    // *   Lingjun
    shared_ptr<string> providerType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DatasetShareRelationship> sharedFrom_ {};
    shared_ptr<GetDatasetResponseBody::SharingConfig> sharingConfig_ {};
    // The ID of the source dataset generated from a labeling job of iTAG.
    shared_ptr<string> sourceDatasetId_ {};
    // The version of the source dataset generated from a labeling job of iTAG.
    shared_ptr<string> sourceDatasetVersion_ {};
    // The ID of the source for the dataset v1 (initial version). Valid values:
    // 
    // *   If SourceType is set to USER, the value of SourceId can be a custom string.
    // *   If SourceType is set to ITAG, the value of SourceId is the ID of the labeling job of iTAG.
    // *   If SourceType is set to PAI_PUBLIC_DATASET, SourceId is empty by default.
    shared_ptr<string> sourceId_ {};
    // The type of the source for the dataset v1 (initial version). Valid values:
    // 
    // *   PAI-PUBLIC-DATASET: a public dataset of Platform for AI (PAI).
    // *   ITAG: a dataset generated from a labeling job of iTAG.
    // *   USER: a dataset registered by a user.
    shared_ptr<string> sourceType_ {};
    // The labeling template for the source dataset generated from a labeling job of iTAG.
    shared_ptr<string> tagTemplateType_ {};
    // The URI of the initial version v1.
    // 
    // *   Sample format for the OSS data source: `oss://bucket.endpoint/object`
    // *   Sample formats for the NAS data source: `nas://<nasfisid>.region/subpath/to/dir/`: General-purpose NAS. `nas://<cpfs-fsid>.region/subpath/to/dir/`: Cloud Parallel File Storage (CPFS) 1.0. `nas://<cpfs-fsid>.region/<protocolserviceid>/`: CPFS 2.0. You can distinguish CPFS 1.0 and CPFS 2.0 file systems based on the format of the file system ID. The ID for CPFS 1.0 is in the cpfs-<8-bit ASCII characters> format. The ID for CPFS 2.0 is in the cpfs-<16-bit ASCII characters> format.
    shared_ptr<string> uri_ {};
    // The ID of the user to which the dataset belongs.
    shared_ptr<string> userId_ {};
    // The ID of the workspace to which the dataset belongs.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
