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
      DARABONBA_PTR_TO_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
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
      DARABONBA_PTR_FROM_JSON(AccessibleRoleIdList, accessibleRoleIdList_);
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
      // A list of relationships indicating to whom the dataset is shared.
      shared_ptr<vector<DatasetShareRelationship>> sharedTo_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->accessibleRoleIdList_ == nullptr && this->dataSourceType_ == nullptr && this->dataType_ == nullptr && this->datasetId_ == nullptr && this->description_ == nullptr
        && this->edition_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->importInfo_ == nullptr && this->isShared_ == nullptr
        && this->labels_ == nullptr && this->latestVersion_ == nullptr && this->mountAccess_ == nullptr && this->mountAccessReadWriteRoleIdList_ == nullptr && this->name_ == nullptr
        && this->options_ == nullptr && this->ownerId_ == nullptr && this->property_ == nullptr && this->provider_ == nullptr && this->providerType_ == nullptr
        && this->requestId_ == nullptr && this->sharedFrom_ == nullptr && this->sharingConfig_ == nullptr && this->sourceDatasetId_ == nullptr && this->sourceDatasetVersion_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->tagTemplateType_ == nullptr && this->uri_ == nullptr && this->userId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetDatasetResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // accessibleRoleIdList Field Functions 
    bool hasAccessibleRoleIdList() const { return this->accessibleRoleIdList_ != nullptr;};
    void deleteAccessibleRoleIdList() { this->accessibleRoleIdList_ = nullptr;};
    inline const vector<string> & getAccessibleRoleIdList() const { DARABONBA_PTR_GET_CONST(accessibleRoleIdList_, vector<string>) };
    inline vector<string> getAccessibleRoleIdList() { DARABONBA_PTR_GET(accessibleRoleIdList_, vector<string>) };
    inline GetDatasetResponseBody& setAccessibleRoleIdList(const vector<string> & accessibleRoleIdList) { DARABONBA_PTR_SET_VALUE(accessibleRoleIdList_, accessibleRoleIdList) };
    inline GetDatasetResponseBody& setAccessibleRoleIdList(vector<string> && accessibleRoleIdList) { DARABONBA_PTR_SET_RVALUE(accessibleRoleIdList_, accessibleRoleIdList) };


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
    // The visibility of the dataset in the workspace. Valid values:
    // 
    // - `PRIVATE`: The dataset is visible only to its owner and workspace administrators.
    // 
    // - `PUBLIC`: The dataset is visible to all members in the workspace.
    // 
    // - `ROLE_PUBLIC`: The dataset is visible to specific workspace roles. For the list of roles, see the `AccessibleRoleIdList` parameter. The dataset owner and workspace administrators can always view the dataset.
    shared_ptr<string> accessibility_ {};
    // A list of workspace role IDs that can view the dataset. This parameter takes effect only when `Accessibility` is set to `ROLE_PUBLIC`. A role ID that starts with `PAI` is a basic role ID. A role ID that starts with `role-` is a custom role ID.
    shared_ptr<vector<string>> accessibleRoleIdList_ {};
    // The data source type. Valid values:
    // 
    // - `OSS`: Object Storage Service (OSS).
    // 
    // - `NAS`: Apsara File Storage NAS.
    shared_ptr<string> dataSourceType_ {};
    // The data type of the dataset. Valid values:
    // 
    // - `COMMON`: General data
    // 
    // - `PIC`: images
    // 
    // - `TEXT`: text
    // 
    // - `VIDEO`: videos
    // 
    // - `AUDIO`: audio
    shared_ptr<string> dataType_ {};
    // The dataset ID.
    shared_ptr<string> datasetId_ {};
    // The description of the dataset.
    shared_ptr<string> description_ {};
    // The edition of the dataset. Valid values:
    // 
    // - `BASIC`: The basic edition, which does not support file metadata management.
    // 
    // - `ADVANCED`: The advanced edition, which is supported only for OSS datasets and allows you to manage metadata for up to 1 million files per version.
    shared_ptr<string> edition_ {};
    // The time when the dataset was created.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the dataset was last updated.
    shared_ptr<string> gmtModifiedTime_ {};
    // The storage import configuration of the dataset. Storage services such as OSS, NAS, and CPFS are supported.
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
    // "path": "${path}" // The path to the file or folder.\\
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
    // "path": "${path}", // The path in the file system.\\
    // "mountTarget": "${mount_target}" // The file system mount target.\\
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
    // "protocolServiceId":"${protocol_service_id}", // The protocol service ID.\\
    // "exportId": "${export_id}", // The export directory ID.\\
    // "path": "${path}", // The path in the file system.\\
    // }
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // CPFS for Intelligent Computing
    // 
    // </summary>
    // 
    // {\\
    // "region": "${region}",// The region ID.\\
    // "fileSystemId": "${file_system_id}", // The file system ID.\\
    // "path": "${path}", // The path in the file system.\\
    // "mountTarget": "${mount_target}" // The file system mount target. This parameter is specific to CPFS for Intelligent Computing.\\
    // "isVpcMount": boolean, // Specifies whether the mount target is a VPC mount target. Specific to CPFS for Intelligent Computing.\\
    // }
    // 
    // </details>
    shared_ptr<string> importInfo_ {};
    // Indicates whether the dataset is a shared dataset.
    shared_ptr<bool> isShared_ {};
    // The labels attached to the dataset.
    shared_ptr<vector<Label>> labels_ {};
    // The latest version of the dataset.
    shared_ptr<DatasetVersion> latestVersion_ {};
    // The mount permissions for the dataset. Valid values:
    // 
    // - `RO`: read-only mount
    // 
    // - `RW`: read and write mount
    shared_ptr<string> mountAccess_ {};
    // A list of workspace role IDs granted read/write permissions for the dataset. A role ID that starts with `PAI` is a basic role ID. A role ID that starts with `role-` is a custom role ID. If the list contains `*`, all roles have read and write permissions.
    shared_ptr<vector<string>> mountAccessReadWriteRoleIdList_ {};
    // The dataset name.
    shared_ptr<string> name_ {};
    // Extended properties for the initial dataset version (v1), in JSON string format. For example, when using the dataset in a DLC job, you can set the `mountPath` field to specify the default mount path.
    shared_ptr<string> options_ {};
    // The owner ID.
    shared_ptr<string> ownerId_ {};
    // The property of the initial dataset version (v1). Valid values:
    // 
    // - `FILE`: The dataset is a file.
    // 
    // - `DIRECTORY`: The dataset is a folder.
    shared_ptr<string> property_ {};
    // The provider of the dataset. If the value is `pai`, the dataset is a PAI public dataset.
    shared_ptr<string> provider_ {};
    // The type of the data source provider. Valid values:
    // 
    // - `ECS` (default)
    // 
    // - `Lingjun`
    shared_ptr<string> providerType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source from which the dataset was shared. This parameter is returned only if `IsShared` is `true`.
    shared_ptr<DatasetShareRelationship> sharedFrom_ {};
    // The sharing configuration for the dataset.
    shared_ptr<GetDatasetResponseBody::SharingConfig> sharingConfig_ {};
    // The ID of the source dataset for the iTAG annotation set.
    shared_ptr<string> sourceDatasetId_ {};
    // The version of the source dataset for the annotation set.
    shared_ptr<string> sourceDatasetVersion_ {};
    // The ID of the data source for the initial version (v1). The meaning of this parameter varies based on the `SourceType` value.
    // 
    // - If `SourceType` is `USER`, you can specify a custom value for `SourceId`.
    // 
    // - If `SourceType` is `ITAG`, the dataset is generated from an iTAG annotation task, and `SourceId` is the task ID.
    // 
    // - If `SourceType` is `PAI_PUBLIC_DATASET`, the dataset is created from a PAI public dataset. In this case, `SourceId` is empty.
    shared_ptr<string> sourceId_ {};
    // The source type of the initial dataset version (v1).
    shared_ptr<string> sourceType_ {};
    // The annotation template of the iTAG annotation set.
    shared_ptr<string> tagTemplateType_ {};
    // The URI of the initial dataset version (v1). The supported formats are as follows:
    // 
    // - For an OSS data source: `oss://bucket.endpoint/object`.
    // 
    // - For a NAS data source, the format varies by NAS type:
    // 
    //   CPFS 1.0 and CPFS 2.0 are distinguished by the format of the file system ID ():
    shared_ptr<string> uri_ {};
    // The user ID of the dataset owner.
    shared_ptr<string> userId_ {};
    // The ID of the workspace where the dataset is located.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
