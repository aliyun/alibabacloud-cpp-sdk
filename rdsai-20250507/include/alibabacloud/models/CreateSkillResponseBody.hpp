// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLRESPONSEBODY_HPP_
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
  class CreateSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogRevision, catalogRevision_);
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skill, skill_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogRevision, catalogRevision_);
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Dbtypes, dbtypes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skill, skill_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateSkillResponseBody() = default ;
    CreateSkillResponseBody(const CreateSkillResponseBody &) = default ;
    CreateSkillResponseBody(CreateSkillResponseBody &&) = default ;
    CreateSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillResponseBody() = default ;
    CreateSkillResponseBody& operator=(const CreateSkillResponseBody &) = default ;
    CreateSkillResponseBody& operator=(CreateSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Version : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Version& obj) { 
        DARABONBA_PTR_TO_JSON(ActivatedAt, activatedAt_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(CredentialRequired, credentialRequired_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PackageSize, packageSize_);
        DARABONBA_PTR_TO_JSON(RevokeReason, revokeReason_);
        DARABONBA_PTR_TO_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Version& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivatedAt, activatedAt_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CredentialRequired, credentialRequired_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PackageSize, packageSize_);
        DARABONBA_PTR_FROM_JSON(RevokeReason, revokeReason_);
        DARABONBA_PTR_FROM_JSON(RevokedAt, revokedAt_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Version() = default ;
      Version(const Version &) = default ;
      Version(Version &&) = default ;
      Version(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Version() = default ;
      Version& operator=(const Version &) = default ;
      Version& operator=(Version &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activatedAt_ == nullptr
        && this->createdAt_ == nullptr && this->credentialRequired_ == nullptr && this->id_ == nullptr && this->packageSize_ == nullptr && this->revokeReason_ == nullptr
        && this->revokedAt_ == nullptr && this->sha256_ == nullptr && this->skillId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // activatedAt Field Functions 
      bool hasActivatedAt() const { return this->activatedAt_ != nullptr;};
      void deleteActivatedAt() { this->activatedAt_ = nullptr;};
      inline string getActivatedAt() const { DARABONBA_PTR_GET_DEFAULT(activatedAt_, "") };
      inline Version& setActivatedAt(string activatedAt) { DARABONBA_PTR_SET_VALUE(activatedAt_, activatedAt) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Version& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // credentialRequired Field Functions 
      bool hasCredentialRequired() const { return this->credentialRequired_ != nullptr;};
      void deleteCredentialRequired() { this->credentialRequired_ = nullptr;};
      inline bool getCredentialRequired() const { DARABONBA_PTR_GET_DEFAULT(credentialRequired_, false) };
      inline Version& setCredentialRequired(bool credentialRequired) { DARABONBA_PTR_SET_VALUE(credentialRequired_, credentialRequired) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Version& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // packageSize Field Functions 
      bool hasPackageSize() const { return this->packageSize_ != nullptr;};
      void deletePackageSize() { this->packageSize_ = nullptr;};
      inline int64_t getPackageSize() const { DARABONBA_PTR_GET_DEFAULT(packageSize_, 0L) };
      inline Version& setPackageSize(int64_t packageSize) { DARABONBA_PTR_SET_VALUE(packageSize_, packageSize) };


      // revokeReason Field Functions 
      bool hasRevokeReason() const { return this->revokeReason_ != nullptr;};
      void deleteRevokeReason() { this->revokeReason_ = nullptr;};
      inline string getRevokeReason() const { DARABONBA_PTR_GET_DEFAULT(revokeReason_, "") };
      inline Version& setRevokeReason(string revokeReason) { DARABONBA_PTR_SET_VALUE(revokeReason_, revokeReason) };


      // revokedAt Field Functions 
      bool hasRevokedAt() const { return this->revokedAt_ != nullptr;};
      void deleteRevokedAt() { this->revokedAt_ = nullptr;};
      inline string getRevokedAt() const { DARABONBA_PTR_GET_DEFAULT(revokedAt_, "") };
      inline Version& setRevokedAt(string revokedAt) { DARABONBA_PTR_SET_VALUE(revokedAt_, revokedAt) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Version& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline Version& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Version& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Version& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The activation time of the Skill version.
      shared_ptr<string> activatedAt_ {};
      // The creation time of the Skill version.
      shared_ptr<string> createdAt_ {};
      // Indicates whether the Skill requires a credential.
      shared_ptr<bool> credentialRequired_ {};
      // The Skill version ID.
      shared_ptr<string> id_ {};
      // The Skill package size, in bytes.
      shared_ptr<int64_t> packageSize_ {};
      // The revocation reason of the Skill version.
      shared_ptr<string> revokeReason_ {};
      // The revocation time of the Skill version.
      shared_ptr<string> revokedAt_ {};
      // The SHA-256 digest of the Skill package.
      shared_ptr<string> sha256_ {};
      // The ID of the parent Skill.
      shared_ptr<string> skillId_ {};
      // The status of the Skill version.
      shared_ptr<string> status_ {};
      // The Skill version number.
      shared_ptr<string> version_ {};
    };

    class Skill : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skill& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveVersionId, activeVersionId_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Skill& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveVersionId, activeVersionId_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      };
      Skill() = default ;
      Skill(const Skill &) = default ;
      Skill(Skill &&) = default ;
      Skill(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skill() = default ;
      Skill& operator=(const Skill &) = default ;
      Skill& operator=(Skill &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeVersionId_ == nullptr
        && this->category_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->icon_ == nullptr
        && this->id_ == nullptr && this->isDeleted_ == nullptr && this->scope_ == nullptr && this->slug_ == nullptr && this->updatedAt_ == nullptr; };
      // activeVersionId Field Functions 
      bool hasActiveVersionId() const { return this->activeVersionId_ != nullptr;};
      void deleteActiveVersionId() { this->activeVersionId_ = nullptr;};
      inline string getActiveVersionId() const { DARABONBA_PTR_GET_DEFAULT(activeVersionId_, "") };
      inline Skill& setActiveVersionId(string activeVersionId) { DARABONBA_PTR_SET_VALUE(activeVersionId_, activeVersionId) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Skill& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Skill& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Skill& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Skill& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Skill& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Skill& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline Skill& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Skill& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Skill& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Skill& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The ID of the currently active version.
      shared_ptr<string> activeVersionId_ {};
      // The Skill category.
      shared_ptr<string> category_ {};
      // The Skill creation time.
      shared_ptr<string> createdAt_ {};
      // The Skill description.
      shared_ptr<string> description_ {};
      // The Skill display name.
      shared_ptr<string> displayName_ {};
      // The public HTTPS URL of the current icon. This value is empty if no icon is configured.
      shared_ptr<string> icon_ {};
      // Skill ID
      shared_ptr<string> id_ {};
      // Indicates whether the Skill is deleted.
      shared_ptr<bool> isDeleted_ {};
      // The visibility scope of the Skill.
      shared_ptr<string> scope_ {};
      // The stable identifier of the Skill.
      shared_ptr<string> slug_ {};
      // The Skill update time.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->catalogRevision_ == nullptr
        && this->content_ == nullptr && this->createdAt_ == nullptr && this->dbtypes_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->requestId_ == nullptr && this->skill_ == nullptr && this->skillType_ == nullptr && this->version_ == nullptr; };
    // catalogRevision Field Functions 
    bool hasCatalogRevision() const { return this->catalogRevision_ != nullptr;};
    void deleteCatalogRevision() { this->catalogRevision_ = nullptr;};
    inline int64_t getCatalogRevision() const { DARABONBA_PTR_GET_DEFAULT(catalogRevision_, 0L) };
    inline CreateSkillResponseBody& setCatalogRevision(int64_t catalogRevision) { DARABONBA_PTR_SET_VALUE(catalogRevision_, catalogRevision) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline CreateSkillResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline CreateSkillResponseBody& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateSkillResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dbtypes Field Functions 
    bool hasDbtypes() const { return this->dbtypes_ != nullptr;};
    void deleteDbtypes() { this->dbtypes_ = nullptr;};
    inline const vector<string> & getDbtypes() const { DARABONBA_PTR_GET_CONST(dbtypes_, vector<string>) };
    inline vector<string> getDbtypes() { DARABONBA_PTR_GET(dbtypes_, vector<string>) };
    inline CreateSkillResponseBody& setDbtypes(const vector<string> & dbtypes) { DARABONBA_PTR_SET_VALUE(dbtypes_, dbtypes) };
    inline CreateSkillResponseBody& setDbtypes(vector<string> && dbtypes) { DARABONBA_PTR_SET_RVALUE(dbtypes_, dbtypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSkillResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateSkillResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSkillResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline const CreateSkillResponseBody::Skill & getSkill() const { DARABONBA_PTR_GET_CONST(skill_, CreateSkillResponseBody::Skill) };
    inline CreateSkillResponseBody::Skill getSkill() { DARABONBA_PTR_GET(skill_, CreateSkillResponseBody::Skill) };
    inline CreateSkillResponseBody& setSkill(const CreateSkillResponseBody::Skill & skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };
    inline CreateSkillResponseBody& setSkill(CreateSkillResponseBody::Skill && skill) { DARABONBA_PTR_SET_RVALUE(skill_, skill) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
    inline CreateSkillResponseBody& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const CreateSkillResponseBody::Version & getVersion() const { DARABONBA_PTR_GET_CONST(version_, CreateSkillResponseBody::Version) };
    inline CreateSkillResponseBody::Version getVersion() { DARABONBA_PTR_GET(version_, CreateSkillResponseBody::Version) };
    inline CreateSkillResponseBody& setVersion(const CreateSkillResponseBody::Version & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline CreateSkillResponseBody& setVersion(CreateSkillResponseBody::Version && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The Skill catalog revision number.
    shared_ptr<int64_t> catalogRevision_ {};
    // The content grouped by database type.
    Darabonba::Json content_ {};
    // The creation time.
    shared_ptr<string> createdAt_ {};
    // The list of database types.
    shared_ptr<vector<string>> dbtypes_ {};
    // The Skill description.
    shared_ptr<string> description_ {};
    // The unique identifier of the Skill.
    shared_ptr<string> id_ {};
    // The Skill name.
    shared_ptr<string> name_ {};
    // The unique request identifier.
    shared_ptr<string> requestId_ {};
    // The created Skill.
    shared_ptr<CreateSkillResponseBody::Skill> skill_ {};
    // The Skill type.
    shared_ptr<string> skillType_ {};
    // The created Skill version.
    shared_ptr<CreateSkillResponseBody::Version> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
