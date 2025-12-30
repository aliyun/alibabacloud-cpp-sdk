// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAVATARTRAININGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAVATARTRAININGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateAvatarTrainingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAvatarTrainingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_TO_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_TO_JSON(Portrait, portrait_);
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(Transparent, transparent_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAvatarTrainingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarDescription, avatarDescription_);
      DARABONBA_PTR_FROM_JSON(AvatarName, avatarName_);
      DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(Transparent, transparent_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    CreateAvatarTrainingJobRequest() = default ;
    CreateAvatarTrainingJobRequest(const CreateAvatarTrainingJobRequest &) = default ;
    CreateAvatarTrainingJobRequest(CreateAvatarTrainingJobRequest &&) = default ;
    CreateAvatarTrainingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAvatarTrainingJobRequest() = default ;
    CreateAvatarTrainingJobRequest& operator=(const CreateAvatarTrainingJobRequest &) = default ;
    CreateAvatarTrainingJobRequest& operator=(CreateAvatarTrainingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarDescription_ == nullptr
        && this->avatarName_ == nullptr && this->avatarType_ == nullptr && this->portrait_ == nullptr && this->thumbnail_ == nullptr && this->transparent_ == nullptr
        && this->video_ == nullptr; };
    // avatarDescription Field Functions 
    bool hasAvatarDescription() const { return this->avatarDescription_ != nullptr;};
    void deleteAvatarDescription() { this->avatarDescription_ = nullptr;};
    inline string getAvatarDescription() const { DARABONBA_PTR_GET_DEFAULT(avatarDescription_, "") };
    inline CreateAvatarTrainingJobRequest& setAvatarDescription(string avatarDescription) { DARABONBA_PTR_SET_VALUE(avatarDescription_, avatarDescription) };


    // avatarName Field Functions 
    bool hasAvatarName() const { return this->avatarName_ != nullptr;};
    void deleteAvatarName() { this->avatarName_ = nullptr;};
    inline string getAvatarName() const { DARABONBA_PTR_GET_DEFAULT(avatarName_, "") };
    inline CreateAvatarTrainingJobRequest& setAvatarName(string avatarName) { DARABONBA_PTR_SET_VALUE(avatarName_, avatarName) };


    // avatarType Field Functions 
    bool hasAvatarType() const { return this->avatarType_ != nullptr;};
    void deleteAvatarType() { this->avatarType_ = nullptr;};
    inline string getAvatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
    inline CreateAvatarTrainingJobRequest& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


    // portrait Field Functions 
    bool hasPortrait() const { return this->portrait_ != nullptr;};
    void deletePortrait() { this->portrait_ = nullptr;};
    inline string getPortrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
    inline CreateAvatarTrainingJobRequest& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline CreateAvatarTrainingJobRequest& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    // transparent Field Functions 
    bool hasTransparent() const { return this->transparent_ != nullptr;};
    void deleteTransparent() { this->transparent_ = nullptr;};
    inline bool getTransparent() const { DARABONBA_PTR_GET_DEFAULT(transparent_, false) };
    inline CreateAvatarTrainingJobRequest& setTransparent(bool transparent) { DARABONBA_PTR_SET_VALUE(transparent_, transparent) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string getVideo() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline CreateAvatarTrainingJobRequest& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    // *   The description of the digital human.
    // *   The description can be up to 1,000 characters in length.
    shared_ptr<string> avatarDescription_ {};
    // *   The name of the digital human.
    // *   The name can be up to seven characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> avatarName_ {};
    // The type of the digital human.
    shared_ptr<string> avatarType_ {};
    // *   The media asset ID of the portrait image.
    // *   The value must be 32 characters in length.
    shared_ptr<string> portrait_ {};
    // *   The thumbnail URL.
    // *   After the digital human is trained, the thumbnail is uploaded to this URL.
    // *   The URL must be a valid public Object Storage Service (OSS) URL.
    // *   The URL can be up to 512 characters in length.
    shared_ptr<string> thumbnail_ {};
    // *   Specifies whether the training video supports alpha channels.
    // 
    //     **
    // 
    //     **Note**: Make sure that the current settings are consistent with those of the submitted training video. Otherwise, the digital human may malfunction.
    shared_ptr<bool> transparent_ {};
    // *   The ID of the video used for training.
    // *   The value must be 32 characters in length.
    // *   Supported formats: MP4, MOV, and WebM.
    // *   The duration of the video must be 5 to 15 minutes.
    // *   The resolution of the video must be 1920×1080 or 1080×1920.
    shared_ptr<string> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
