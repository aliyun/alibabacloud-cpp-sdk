// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(CanModify, canModify_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(DownloadUrlNetwork, downloadUrlNetwork_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Official, official_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(CanModify, canModify_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(DownloadUrlNetwork, downloadUrlNetwork_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Official, official_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
    virtual bool empty() const override { return this->canDelete_ == nullptr
        && this->canModify_ == nullptr && this->createdAt_ == nullptr && this->description_ == nullptr && this->downloadUrl_ == nullptr && this->downloadUrlNetwork_ == nullptr
        && this->iconUrl_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr && this->official_ == nullptr && this->requestId_ == nullptr
        && this->skillId_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr && this->visibility_ == nullptr; };
    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline GetSkillResponseBody& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // canModify Field Functions 
    bool hasCanModify() const { return this->canModify_ != nullptr;};
    void deleteCanModify() { this->canModify_ = nullptr;};
    inline bool getCanModify() const { DARABONBA_PTR_GET_DEFAULT(canModify_, false) };
    inline GetSkillResponseBody& setCanModify(bool canModify) { DARABONBA_PTR_SET_VALUE(canModify_, canModify) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetSkillResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSkillResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetSkillResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // downloadUrlNetwork Field Functions 
    bool hasDownloadUrlNetwork() const { return this->downloadUrlNetwork_ != nullptr;};
    void deleteDownloadUrlNetwork() { this->downloadUrlNetwork_ = nullptr;};
    inline string getDownloadUrlNetwork() const { DARABONBA_PTR_GET_DEFAULT(downloadUrlNetwork_, "") };
    inline GetSkillResponseBody& setDownloadUrlNetwork(string downloadUrlNetwork) { DARABONBA_PTR_SET_VALUE(downloadUrlNetwork_, downloadUrlNetwork) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline GetSkillResponseBody& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetSkillResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetSkillResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSkillResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // official Field Functions 
    bool hasOfficial() const { return this->official_ != nullptr;};
    void deleteOfficial() { this->official_ = nullptr;};
    inline bool getOfficial() const { DARABONBA_PTR_GET_DEFAULT(official_, false) };
    inline GetSkillResponseBody& setOfficial(bool official) { DARABONBA_PTR_SET_VALUE(official_, official) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline GetSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSkillResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetSkillResponseBody& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline GetSkillResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // Indicates whether the current caller can delete the skill.
    shared_ptr<bool> canDelete_ {};
    // Indicates whether the current caller can modify the skill.
    shared_ptr<bool> canModify_ {};
    // The creation time of the skill. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> createdAt_ {};
    // The description in the current main record of the skill.
    shared_ptr<string> description_ {};
    // The download URL of the bundle. This field is returned when the network is specified, an accessible artifact exists, and the pre-signing is successful.
    shared_ptr<string> downloadUrl_ {};
    // The network type actually used to generate the download URL.
    shared_ptr<string> downloadUrlNetwork_ {};
    // The URL of the skill icon, which is derived from the iconUrl in the metadata. This field may be empty if no icon is configured.
    shared_ptr<string> iconUrl_ {};
    // The metadata of the skill, which is mapped to the metadata field in the backend response.
    Darabonba::Json metadata_ {};
    // The name of the skill.
    shared_ptr<string> name_ {};
    // Indicates whether the skill is an official skill.
    shared_ptr<bool> official_ {};
    // The request ID, which is used for Tracing Analysis and troubleshooting.
    shared_ptr<string> requestId_ {};
    // The skill ID.
    shared_ptr<string> skillId_ {};
    // The current status of the skill. Common values include DRAFT and PUBLISHED.
    shared_ptr<string> status_ {};
    // The update time of the skill. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> updatedAt_ {};
    // The visibility of the current skill. Common values include user and tenant.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
