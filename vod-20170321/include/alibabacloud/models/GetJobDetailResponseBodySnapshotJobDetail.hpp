// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYSNAPSHOTJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYSNAPSHOTJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBodySnapshotJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBodySnapshotJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(NormalConfig, normalConfig_);
      DARABONBA_PTR_TO_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBodySnapshotJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(NormalConfig, normalConfig_);
      DARABONBA_PTR_FROM_JSON(SpriteConfig, spriteConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetJobDetailResponseBodySnapshotJobDetail() = default ;
    GetJobDetailResponseBodySnapshotJobDetail(const GetJobDetailResponseBodySnapshotJobDetail &) = default ;
    GetJobDetailResponseBodySnapshotJobDetail(GetJobDetailResponseBodySnapshotJobDetail &&) = default ;
    GetJobDetailResponseBodySnapshotJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBodySnapshotJobDetail() = default ;
    GetJobDetailResponseBodySnapshotJobDetail& operator=(const GetJobDetailResponseBodySnapshotJobDetail &) = default ;
    GetJobDetailResponseBodySnapshotJobDetail& operator=(GetJobDetailResponseBodySnapshotJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->createTime_ == nullptr && return this->jobId_ == nullptr && return this->normalConfig_ == nullptr && return this->spriteConfig_ == nullptr && return this->status_ == nullptr
        && return this->trigger_ == nullptr && return this->userId_ == nullptr && return this->videoId_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // normalConfig Field Functions 
    bool hasNormalConfig() const { return this->normalConfig_ != nullptr;};
    void deleteNormalConfig() { this->normalConfig_ = nullptr;};
    inline string normalConfig() const { DARABONBA_PTR_GET_DEFAULT(normalConfig_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setNormalConfig(string normalConfig) { DARABONBA_PTR_SET_VALUE(normalConfig_, normalConfig) };


    // spriteConfig Field Functions 
    bool hasSpriteConfig() const { return this->spriteConfig_ != nullptr;};
    void deleteSpriteConfig() { this->spriteConfig_ = nullptr;};
    inline string spriteConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteConfig_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setSpriteConfig(string spriteConfig) { DARABONBA_PTR_SET_VALUE(spriteConfig_, spriteConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetJobDetailResponseBodySnapshotJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetJobDetailResponseBodySnapshotJobDetail& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The time when the task was complete.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // Configuration of normal snapshots.
    std::shared_ptr<string> normalConfig_ = nullptr;
    // The sprite configuration.
    std::shared_ptr<string> spriteConfig_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   Processing
    // *   Fail
    // *   Success
    std::shared_ptr<string> status_ = nullptr;
    // The trigger mode. Valid values:
    // 
    // *   Auto
    // *   Manual
    std::shared_ptr<string> trigger_ = nullptr;
    // The ID of the user who submitted the task.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
