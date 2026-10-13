// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveVersionId, activeVersionId_);
      DARABONBA_PTR_TO_JSON(BundleHash, bundleHash_);
      DARABONBA_PTR_TO_JSON(BundleSizeBytes, bundleSizeBytes_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_ANY_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_ANY_TO_JSON(Frontmatter, frontmatter_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillMarkdown, skillMarkdown_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveVersionId, activeVersionId_);
      DARABONBA_PTR_FROM_JSON(BundleHash, bundleHash_);
      DARABONBA_PTR_FROM_JSON(BundleSizeBytes, bundleSizeBytes_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_ANY_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_ANY_FROM_JSON(Frontmatter, frontmatter_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillMarkdown, skillMarkdown_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    GetSkillResponseBody() = default ;
    GetSkillResponseBody(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody(GetSkillResponseBody &&) = default ;
    GetSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillResponseBody() = default ;
    GetSkillResponseBody& operator=(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody& operator=(GetSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(ActivatedAt, activatedAt_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(CredentialRequired, credentialRequired_);
        DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PackageSize, packageSize_);
        DARABONBA_PTR_TO_JSON(RevokeReason, revokeReason_);
        DARABONBA_PTR_TO_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillMarkdown, skillMarkdown_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateNote, updateNote_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivatedAt, activatedAt_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CredentialRequired, credentialRequired_);
        DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PackageSize, packageSize_);
        DARABONBA_PTR_FROM_JSON(RevokeReason, revokeReason_);
        DARABONBA_PTR_FROM_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillMarkdown, skillMarkdown_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateNote, updateNote_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Versions() = default ;
      Versions(const Versions &) = default ;
      Versions(Versions &&) = default ;
      Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Versions() = default ;
      Versions& operator=(const Versions &) = default ;
      Versions& operator=(Versions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activatedAt_ == nullptr
        && this->createdAt_ == nullptr && this->credentialRequired_ == nullptr && this->fileCount_ == nullptr && this->id_ == nullptr && this->packageSize_ == nullptr
        && this->revokeReason_ == nullptr && this->revokedAt_ == nullptr && this->sha256_ == nullptr && this->skillId_ == nullptr && this->skillMarkdown_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->updateNote_ == nullptr && this->version_ == nullptr; };
      // activatedAt Field Functions 
      bool hasActivatedAt() const { return this->activatedAt_ != nullptr;};
      void deleteActivatedAt() { this->activatedAt_ = nullptr;};
      inline string getActivatedAt() const { DARABONBA_PTR_GET_DEFAULT(activatedAt_, "") };
      inline Versions& setActivatedAt(string activatedAt) { DARABONBA_PTR_SET_VALUE(activatedAt_, activatedAt) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Versions& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // credentialRequired Field Functions 
      bool hasCredentialRequired() const { return this->credentialRequired_ != nullptr;};
      void deleteCredentialRequired() { this->credentialRequired_ = nullptr;};
      inline bool getCredentialRequired() const { DARABONBA_PTR_GET_DEFAULT(credentialRequired_, false) };
      inline Versions& setCredentialRequired(bool credentialRequired) { DARABONBA_PTR_SET_VALUE(credentialRequired_, credentialRequired) };


      // fileCount Field Functions 
      bool hasFileCount() const { return this->fileCount_ != nullptr;};
      void deleteFileCount() { this->fileCount_ = nullptr;};
      inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
      inline Versions& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Versions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // packageSize Field Functions 
      bool hasPackageSize() const { return this->packageSize_ != nullptr;};
      void deletePackageSize() { this->packageSize_ = nullptr;};
      inline int64_t getPackageSize() const { DARABONBA_PTR_GET_DEFAULT(packageSize_, 0L) };
      inline Versions& setPackageSize(int64_t packageSize) { DARABONBA_PTR_SET_VALUE(packageSize_, packageSize) };


      // revokeReason Field Functions 
      bool hasRevokeReason() const { return this->revokeReason_ != nullptr;};
      void deleteRevokeReason() { this->revokeReason_ = nullptr;};
      inline string getRevokeReason() const { DARABONBA_PTR_GET_DEFAULT(revokeReason_, "") };
      inline Versions& setRevokeReason(string revokeReason) { DARABONBA_PTR_SET_VALUE(revokeReason_, revokeReason) };


      // revokedAt Field Functions 
      bool hasRevokedAt() const { return this->revokedAt_ != nullptr;};
      void deleteRevokedAt() { this->revokedAt_ = nullptr;};
      inline string getRevokedAt() const { DARABONBA_PTR_GET_DEFAULT(revokedAt_, "") };
      inline Versions& setRevokedAt(string revokedAt) { DARABONBA_PTR_SET_VALUE(revokedAt_, revokedAt) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Versions& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Versions& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillMarkdown Field Functions 
      bool hasSkillMarkdown() const { return this->skillMarkdown_ != nullptr;};
      void deleteSkillMarkdown() { this->skillMarkdown_ = nullptr;};
      inline string getSkillMarkdown() const { DARABONBA_PTR_GET_DEFAULT(skillMarkdown_, "") };
      inline Versions& setSkillMarkdown(string skillMarkdown) { DARABONBA_PTR_SET_VALUE(skillMarkdown_, skillMarkdown) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Versions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Versions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateNote Field Functions 
      bool hasUpdateNote() const { return this->updateNote_ != nullptr;};
      void deleteUpdateNote() { this->updateNote_ = nullptr;};
      inline string getUpdateNote() const { DARABONBA_PTR_GET_DEFAULT(updateNote_, "") };
      inline Versions& setUpdateNote(string updateNote) { DARABONBA_PTR_SET_VALUE(updateNote_, updateNote) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The activation time of the skill version.
      shared_ptr<string> activatedAt_ {};
      // The creation time of the skill version.
      shared_ptr<string> createdAt_ {};
      // Indicates whether the skill requires a credential.
      shared_ptr<bool> credentialRequired_ {};
      // The number of files in the skill bundle.
      shared_ptr<int64_t> fileCount_ {};
      // The skill version ID.
      shared_ptr<string> id_ {};
      // The size of the skill bundle, in bytes.
      shared_ptr<int64_t> packageSize_ {};
      // The reason for revoking the skill version.
      shared_ptr<string> revokeReason_ {};
      // The revocation time of the skill version.
      shared_ptr<string> revokedAt_ {};
      // The SHA-256 digest of the skill package.
      shared_ptr<string> sha256_ {};
      // The ID of the skill to which the version belongs.
      shared_ptr<string> skillId_ {};
      // The Markdown content of the skill.
      shared_ptr<string> skillMarkdown_ {};
      // The creation source of the skill version.
      shared_ptr<string> source_ {};
      // The status of the skill version.
      shared_ptr<string> status_ {};
      // The update note for the version.
      shared_ptr<string> updateNote_ {};
      // The version number of the skill.
      shared_ptr<string> version_ {};
    };

    class Capabilities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
        DARABONBA_PTR_TO_JSON(Delete, delete_);
        DARABONBA_PTR_TO_JSON(Download, download_);
        DARABONBA_PTR_TO_JSON(Edit, edit_);
        DARABONBA_PTR_TO_JSON(Rollback, rollback_);
        DARABONBA_PTR_TO_JSON(Share, share_);
        DARABONBA_PTR_TO_JSON(Upload, upload_);
      };
      friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
        DARABONBA_PTR_FROM_JSON(Delete, delete_);
        DARABONBA_PTR_FROM_JSON(Download, download_);
        DARABONBA_PTR_FROM_JSON(Edit, edit_);
        DARABONBA_PTR_FROM_JSON(Rollback, rollback_);
        DARABONBA_PTR_FROM_JSON(Share, share_);
        DARABONBA_PTR_FROM_JSON(Upload, upload_);
      };
      Capabilities() = default ;
      Capabilities(const Capabilities &) = default ;
      Capabilities(Capabilities &&) = default ;
      Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Capabilities() = default ;
      Capabilities& operator=(const Capabilities &) = default ;
      Capabilities& operator=(Capabilities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delete_ == nullptr
        && this->download_ == nullptr && this->edit_ == nullptr && this->rollback_ == nullptr && this->share_ == nullptr && this->upload_ == nullptr; };
      // delete Field Functions 
      bool hasDelete() const { return this->delete_ != nullptr;};
      void deleteDelete() { this->delete_ = nullptr;};
      inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
      inline Capabilities& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


      // download Field Functions 
      bool hasDownload() const { return this->download_ != nullptr;};
      void deleteDownload() { this->download_ = nullptr;};
      inline bool getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, false) };
      inline Capabilities& setDownload(bool download) { DARABONBA_PTR_SET_VALUE(download_, download) };


      // edit Field Functions 
      bool hasEdit() const { return this->edit_ != nullptr;};
      void deleteEdit() { this->edit_ = nullptr;};
      inline bool getEdit() const { DARABONBA_PTR_GET_DEFAULT(edit_, false) };
      inline Capabilities& setEdit(bool edit) { DARABONBA_PTR_SET_VALUE(edit_, edit) };


      // rollback Field Functions 
      bool hasRollback() const { return this->rollback_ != nullptr;};
      void deleteRollback() { this->rollback_ = nullptr;};
      inline bool getRollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, false) };
      inline Capabilities& setRollback(bool rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


      // share Field Functions 
      bool hasShare() const { return this->share_ != nullptr;};
      void deleteShare() { this->share_ = nullptr;};
      inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
      inline Capabilities& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


      // upload Field Functions 
      bool hasUpload() const { return this->upload_ != nullptr;};
      void deleteUpload() { this->upload_ = nullptr;};
      inline bool getUpload() const { DARABONBA_PTR_GET_DEFAULT(upload_, false) };
      inline Capabilities& setUpload(bool upload) { DARABONBA_PTR_SET_VALUE(upload_, upload) };


    protected:
      // Indicates whether the skill can be deleted.
      shared_ptr<bool> delete_ {};
      // Indicates whether the skill bundle can be downloaded.
      shared_ptr<bool> download_ {};
      // Indicates whether the skill can be edited.
      shared_ptr<bool> edit_ {};
      // Indicates whether the skill version can be rolled back.
      shared_ptr<bool> rollback_ {};
      // Indicates whether the skill can be shared.
      shared_ptr<bool> share_ {};
      // Indicates whether a new version can be uploaded.
      shared_ptr<bool> upload_ {};
    };

    virtual bool empty() const override { return this->activeVersionId_ == nullptr
        && this->bundleHash_ == nullptr && this->bundleSizeBytes_ == nullptr && this->capabilities_ == nullptr && this->category_ == nullptr && this->content_ == nullptr
        && this->createdAt_ == nullptr && this->dbtypes_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->downloadUrl_ == nullptr
        && this->expiresAt_ == nullptr && this->file_ == nullptr && this->files_ == nullptr && this->frontmatter_ == nullptr && this->icon_ == nullptr
        && this->id_ == nullptr && this->isDeleted_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->scope_ == nullptr
        && this->skillId_ == nullptr && this->skillMarkdown_ == nullptr && this->skillType_ == nullptr && this->slug_ == nullptr && this->updatedAt_ == nullptr
        && this->version_ == nullptr && this->versionId_ == nullptr && this->versions_ == nullptr && this->visibility_ == nullptr; };
    // activeVersionId Field Functions 
    bool hasActiveVersionId() const { return this->activeVersionId_ != nullptr;};
    void deleteActiveVersionId() { this->activeVersionId_ = nullptr;};
    inline string getActiveVersionId() const { DARABONBA_PTR_GET_DEFAULT(activeVersionId_, "") };
    inline GetSkillResponseBody& setActiveVersionId(string activeVersionId) { DARABONBA_PTR_SET_VALUE(activeVersionId_, activeVersionId) };


    // bundleHash Field Functions 
    bool hasBundleHash() const { return this->bundleHash_ != nullptr;};
    void deleteBundleHash() { this->bundleHash_ = nullptr;};
    inline string getBundleHash() const { DARABONBA_PTR_GET_DEFAULT(bundleHash_, "") };
    inline GetSkillResponseBody& setBundleHash(string bundleHash) { DARABONBA_PTR_SET_VALUE(bundleHash_, bundleHash) };


    // bundleSizeBytes Field Functions 
    bool hasBundleSizeBytes() const { return this->bundleSizeBytes_ != nullptr;};
    void deleteBundleSizeBytes() { this->bundleSizeBytes_ = nullptr;};
    inline int64_t getBundleSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(bundleSizeBytes_, 0L) };
    inline GetSkillResponseBody& setBundleSizeBytes(int64_t bundleSizeBytes) { DARABONBA_PTR_SET_VALUE(bundleSizeBytes_, bundleSizeBytes) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const GetSkillResponseBody::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, GetSkillResponseBody::Capabilities) };
    inline GetSkillResponseBody::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, GetSkillResponseBody::Capabilities) };
    inline GetSkillResponseBody& setCapabilities(const GetSkillResponseBody::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline GetSkillResponseBody& setCapabilities(GetSkillResponseBody::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetSkillResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline GetSkillResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline GetSkillResponseBody& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetSkillResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dbtypes Field Functions 
    bool hasDbtypes() const { return this->dbtypes_ != nullptr;};
    void deleteDbtypes() { this->dbtypes_ = nullptr;};
    inline const vector<string> & getDbtypes() const { DARABONBA_PTR_GET_CONST(dbtypes_, vector<string>) };
    inline vector<string> getDbtypes() { DARABONBA_PTR_GET(dbtypes_, vector<string>) };
    inline GetSkillResponseBody& setDbtypes(const vector<string> & dbtypes) { DARABONBA_PTR_SET_VALUE(dbtypes_, dbtypes) };
    inline GetSkillResponseBody& setDbtypes(vector<string> && dbtypes) { DARABONBA_PTR_SET_RVALUE(dbtypes_, dbtypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSkillResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetSkillResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetSkillResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline GetSkillResponseBody& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline     const Darabonba::Json & getFile() const { DARABONBA_GET(file_) };
    Darabonba::Json & getFile() { DARABONBA_GET(file_) };
    inline GetSkillResponseBody& setFile(const Darabonba::Json & file) { DARABONBA_SET_VALUE(file_, file) };
    inline GetSkillResponseBody& setFile(Darabonba::Json && file) { DARABONBA_SET_RVALUE(file_, file) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Darabonba::Json> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getFiles() { DARABONBA_PTR_GET(files_, vector<Darabonba::Json>) };
    inline GetSkillResponseBody& setFiles(const vector<Darabonba::Json> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline GetSkillResponseBody& setFiles(vector<Darabonba::Json> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // frontmatter Field Functions 
    bool hasFrontmatter() const { return this->frontmatter_ != nullptr;};
    void deleteFrontmatter() { this->frontmatter_ = nullptr;};
    inline     const Darabonba::Json & getFrontmatter() const { DARABONBA_GET(frontmatter_) };
    Darabonba::Json & getFrontmatter() { DARABONBA_GET(frontmatter_) };
    inline GetSkillResponseBody& setFrontmatter(const Darabonba::Json & frontmatter) { DARABONBA_SET_VALUE(frontmatter_, frontmatter) };
    inline GetSkillResponseBody& setFrontmatter(Darabonba::Json && frontmatter) { DARABONBA_SET_RVALUE(frontmatter_, frontmatter) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetSkillResponseBody& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSkillResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline GetSkillResponseBody& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSkillResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetSkillResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline GetSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillMarkdown Field Functions 
    bool hasSkillMarkdown() const { return this->skillMarkdown_ != nullptr;};
    void deleteSkillMarkdown() { this->skillMarkdown_ = nullptr;};
    inline string getSkillMarkdown() const { DARABONBA_PTR_GET_DEFAULT(skillMarkdown_, "") };
    inline GetSkillResponseBody& setSkillMarkdown(string skillMarkdown) { DARABONBA_PTR_SET_VALUE(skillMarkdown_, skillMarkdown) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
    inline GetSkillResponseBody& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline GetSkillResponseBody& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline GetSkillResponseBody& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetSkillResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetSkillResponseBody& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<GetSkillResponseBody::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<GetSkillResponseBody::Versions>) };
    inline vector<GetSkillResponseBody::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<GetSkillResponseBody::Versions>) };
    inline GetSkillResponseBody& setVersions(const vector<GetSkillResponseBody::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetSkillResponseBody& setVersions(vector<GetSkillResponseBody::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetSkillResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The current active version ID.
    shared_ptr<string> activeVersionId_ {};
    // The content digest of the current skill bundle.
    shared_ptr<string> bundleHash_ {};
    // The size of the current skill bundle, in bytes.
    shared_ptr<int64_t> bundleSizeBytes_ {};
    // The skill operations that the current user can perform.
    shared_ptr<GetSkillResponseBody::Capabilities> capabilities_ {};
    // The skill category.
    shared_ptr<string> category_ {};
    // The content.
    Darabonba::Json content_ {};
    // The creation time.
    shared_ptr<string> createdAt_ {};
    // The list of database types.
    shared_ptr<vector<string>> dbtypes_ {};
    // The skill description. The description can be up to 1000 characters in length.
    shared_ptr<string> description_ {};
    // The display name of the skill.
    shared_ptr<string> displayName_ {};
    // The temporary download URL of the skill bundle.
    shared_ptr<string> downloadUrl_ {};
    // The expiration time of the temporary download URL.
    shared_ptr<string> expiresAt_ {};
    // The file in the bundle that is read based on the specified path.
    Darabonba::Json file_ {};
    // The list of files in the current skill bundle.
    shared_ptr<vector<Darabonba::Json>> files_ {};
    // The metadata fields of SKILL.md.
    Darabonba::Json frontmatter_ {};
    // The public HTTPS URL of the current icon. This value is empty if no icon is configured.
    shared_ptr<string> icon_ {};
    // The unique identifier of the skill.
    shared_ptr<string> id_ {};
    // Indicates whether the skill is deleted.
    shared_ptr<bool> isDeleted_ {};
    // The skill name. The name can contain only lowercase letters, digits, and hyphens.
    shared_ptr<string> name_ {};
    // The unique request identifier.
    shared_ptr<string> requestId_ {};
    // The visibility scope of the skill.
    shared_ptr<string> scope_ {};
    // The current skill ID.
    shared_ptr<string> skillId_ {};
    // The full Markdown content of SKILL.md.
    shared_ptr<string> skillMarkdown_ {};
    // The skill type.
    shared_ptr<string> skillType_ {};
    // The stable identifier of the private skill.
    shared_ptr<string> slug_ {};
    // The update time.
    shared_ptr<string> updatedAt_ {};
    // The current skill version number.
    shared_ptr<string> version_ {};
    // The current skill version ID.
    shared_ptr<string> versionId_ {};
    // The list of versions visible to the current principal.
    shared_ptr<vector<GetSkillResponseBody::Versions>> versions_ {};
    // The visibility of the skill to the current user.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
