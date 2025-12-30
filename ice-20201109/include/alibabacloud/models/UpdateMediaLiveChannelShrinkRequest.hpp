// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettings, audioSettingsShrink_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachmentsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroupsShrink_);
      DARABONBA_PTR_TO_JSON(VideoSettings, videoSettingsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachmentsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettingsShrink_);
    };
    UpdateMediaLiveChannelShrinkRequest() = default ;
    UpdateMediaLiveChannelShrinkRequest(const UpdateMediaLiveChannelShrinkRequest &) = default ;
    UpdateMediaLiveChannelShrinkRequest(UpdateMediaLiveChannelShrinkRequest &&) = default ;
    UpdateMediaLiveChannelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelShrinkRequest() = default ;
    UpdateMediaLiveChannelShrinkRequest& operator=(const UpdateMediaLiveChannelShrinkRequest &) = default ;
    UpdateMediaLiveChannelShrinkRequest& operator=(UpdateMediaLiveChannelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSettingsShrink_ == nullptr
        && this->channelId_ == nullptr && this->inputAttachmentsShrink_ == nullptr && this->name_ == nullptr && this->outputGroupsShrink_ == nullptr && this->videoSettingsShrink_ == nullptr; };
    // audioSettingsShrink Field Functions 
    bool hasAudioSettingsShrink() const { return this->audioSettingsShrink_ != nullptr;};
    void deleteAudioSettingsShrink() { this->audioSettingsShrink_ = nullptr;};
    inline string getAudioSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(audioSettingsShrink_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setAudioSettingsShrink(string audioSettingsShrink) { DARABONBA_PTR_SET_VALUE(audioSettingsShrink_, audioSettingsShrink) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // inputAttachmentsShrink Field Functions 
    bool hasInputAttachmentsShrink() const { return this->inputAttachmentsShrink_ != nullptr;};
    void deleteInputAttachmentsShrink() { this->inputAttachmentsShrink_ = nullptr;};
    inline string getInputAttachmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputAttachmentsShrink_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setInputAttachmentsShrink(string inputAttachmentsShrink) { DARABONBA_PTR_SET_VALUE(inputAttachmentsShrink_, inputAttachmentsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroupsShrink Field Functions 
    bool hasOutputGroupsShrink() const { return this->outputGroupsShrink_ != nullptr;};
    void deleteOutputGroupsShrink() { this->outputGroupsShrink_ = nullptr;};
    inline string getOutputGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(outputGroupsShrink_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setOutputGroupsShrink(string outputGroupsShrink) { DARABONBA_PTR_SET_VALUE(outputGroupsShrink_, outputGroupsShrink) };


    // videoSettingsShrink Field Functions 
    bool hasVideoSettingsShrink() const { return this->videoSettingsShrink_ != nullptr;};
    void deleteVideoSettingsShrink() { this->videoSettingsShrink_ = nullptr;};
    inline string getVideoSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(videoSettingsShrink_, "") };
    inline UpdateMediaLiveChannelShrinkRequest& setVideoSettingsShrink(string videoSettingsShrink) { DARABONBA_PTR_SET_VALUE(videoSettingsShrink_, videoSettingsShrink) };


  protected:
    // The audio settings.
    shared_ptr<string> audioSettingsShrink_ {};
    // The ID of the channel.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The inputs associated with the channel.
    // 
    // This parameter is required.
    shared_ptr<string> inputAttachmentsShrink_ {};
    // The name of the channel. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The output groups.
    // 
    // This parameter is required.
    shared_ptr<string> outputGroupsShrink_ {};
    // The video settings.
    shared_ptr<string> videoSettingsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
