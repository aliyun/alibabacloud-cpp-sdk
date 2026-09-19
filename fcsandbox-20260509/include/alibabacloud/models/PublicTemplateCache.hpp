// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATECACHE_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATECACHE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateCache : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateCache& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(imageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(imageSizeMB, imageSizeMB_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(readyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateCache& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(imageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(imageSizeMB, imageSizeMB_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(readyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    PublicTemplateCache() = default ;
    PublicTemplateCache(const PublicTemplateCache &) = default ;
    PublicTemplateCache(PublicTemplateCache &&) = default ;
    PublicTemplateCache(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateCache() = default ;
    PublicTemplateCache& operator=(const PublicTemplateCache &) = default ;
    PublicTemplateCache& operator=(PublicTemplateCache &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->imageDigest_ == nullptr && this->imageSizeMB_ == nullptr && this->progress_ == nullptr && this->readyTime_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline PublicTemplateCache& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline PublicTemplateCache& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // imageSizeMB Field Functions 
    bool hasImageSizeMB() const { return this->imageSizeMB_ != nullptr;};
    void deleteImageSizeMB() { this->imageSizeMB_ = nullptr;};
    inline int32_t getImageSizeMB() const { DARABONBA_PTR_GET_DEFAULT(imageSizeMB_, 0) };
    inline PublicTemplateCache& setImageSizeMB(int32_t imageSizeMB) { DARABONBA_PTR_SET_VALUE(imageSizeMB_, imageSizeMB) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline PublicTemplateCache& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline string getReadyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, "") };
    inline PublicTemplateCache& setReadyTime(string readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PublicTemplateCache& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline PublicTemplateCache& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline PublicTemplateCache& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline PublicTemplateCache& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The creation time in UTC.
    shared_ptr<string> createdTime_ {};
    // The digest of the cached image.
    shared_ptr<string> imageDigest_ {};
    // The size of the cached image. Unit: MB.
    shared_ptr<int32_t> imageSizeMB_ {};
    // The prefetch progress percentage.
    shared_ptr<int32_t> progress_ {};
    // The ready time in UTC.
    shared_ptr<string> readyTime_ {};
    // The cache status. Valid values: InProgress, Success, Failed, Deleting, and Evicted.
    shared_ptr<string> status_ {};
    // The reason for the status. This parameter is backfilled when the status is not Success.
    shared_ptr<string> statusReason_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The unique identifier of the template.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
