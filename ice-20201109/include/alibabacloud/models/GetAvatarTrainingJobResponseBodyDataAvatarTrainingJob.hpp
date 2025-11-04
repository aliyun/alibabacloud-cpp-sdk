// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODYDATAAVATARTRAININGJOB_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODYDATAAVATARTRAININGJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_TO_JSON(FirstTrainingTime, firstTrainingTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(LastTrainingTime, lastTrainingTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Portrait, portrait_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(Transparent, transparent_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_FROM_JSON(FirstTrainingTime, firstTrainingTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(LastTrainingTime, lastTrainingTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob() = default ;
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob(const GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob &) = default ;
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob(GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob &&) = default ;
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob() = default ;
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& operator=(const GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob &) = default ;
    GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& operator=(GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && return this->avatarId_ == nullptr && return this->avatarName_ == nullptr && return this->avatarType_ == nullptr && return this->firstTrainingTime_ == nullptr && return this->jobId_ == nullptr
        && return this->lastTrainingTime_ == nullptr && return this->message_ == nullptr && return this->portrait_ == nullptr && return this->status_ == nullptr && return this->thumbnail_ == nullptr
        && return this->transparent_ == nullptr && return this->video_ == nullptr; };
    // avatarDescription Field Functions 
    bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
    void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
    inline string avatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // avatarName Field Functions 
    bool hasAvatarName() const { return this->avatarName_ != nullptr;};
    void deleteAvatarName() { this->avatarName_ = nullptr;};
    inline string avatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


    // avatarType Field Functions 
    bool hasAvatarType() const { return this->avatarType_ != nullptr;};
    void deleteAvatarType() { this->avatarType_ = nullptr;};
    inline string avatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


    // firstTrainingTime Field Functions 
    bool hasFirstTrainingTime() const { return this->firstTrainingTime_ != nullptr;};
    void deleteFirstTrainingTime() { this->firstTrainingTime_ = nullptr;};
    inline string firstTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(firstTrainingTime_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setFirstTrainingTime(string firstTrainingTime) { DARABONBA_PTR_SET_VALUE(firstTrainingTime_, firstTrainingTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // lastTrainingTime Field Functions 
    bool hasLastTrainingTime() const { return this->lastTrainingTime_ != nullptr;};
    void deleteLastTrainingTime() { this->lastTrainingTime_ = nullptr;};
    inline string lastTrainingTime() const { DARABONBA_PTR_GET_DEFAULT(lastTrainingTime_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setLastTrainingTime(string lastTrainingTime) { DARABONBA_PTR_SET_VALUE(lastTrainingTime_, lastTrainingTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // portrait Field Functions 
    bool hasPortrait() const { return this->portrait_ != nullptr;};
    void deletePortrait() { this->portrait_ = nullptr;};
    inline string portrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool transparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string video() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    // The description of the digital human.
    std::shared_ptr<string> avatarDescription_ = nullptr;
    // The ID of the digital human.
    std::shared_ptr<string> avatarId_ = nullptr;
    // The name of the digital human.
    std::shared_ptr<string> avatarName_ = nullptr;
    // The type of the digital human.
    std::shared_ptr<string> avatarType_ = nullptr;
    // *   The time when the first training was initiated.
    // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> firstTrainingTime_ = nullptr;
    // The ID of the digital human training job.
    std::shared_ptr<string> jobId_ = nullptr;
    // *   The time when the last training was initiated.
    // *   The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> lastTrainingTime_ = nullptr;
    // The status description.
    std::shared_ptr<string> message_ = nullptr;
    // The media asset ID of the portrait image.
    std::shared_ptr<string> portrait_ = nullptr;
    // *   The state of the digital human training job.
    // *   Valid values: Init, Queuing, Training, Success, and Fail.
    std::shared_ptr<string> status_ = nullptr;
    // The thumbnail URL.
    std::shared_ptr<string> thumbnail_ = nullptr;
    // Indicates whether the input video supports alpha channels.
    std::shared_ptr<bool> transparent_ = nullptr;
    // The ID of the video used for training.
    std::shared_ptr<string> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
