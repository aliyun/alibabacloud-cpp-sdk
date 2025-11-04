// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettings, audioSettingsShrink_);
      DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachmentsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroupsShrink_);
      DARABONBA_PTR_TO_JSON(VideoSettings, videoSettingsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachmentsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettingsShrink_);
    };
    CreateMediaLiveChannelShrinkRequest() = default ;
    CreateMediaLiveChannelShrinkRequest(const CreateMediaLiveChannelShrinkRequest &) = default ;
    CreateMediaLiveChannelShrinkRequest(CreateMediaLiveChannelShrinkRequest &&) = default ;
    CreateMediaLiveChannelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelShrinkRequest() = default ;
    CreateMediaLiveChannelShrinkRequest& operator=(const CreateMediaLiveChannelShrinkRequest &) = default ;
    CreateMediaLiveChannelShrinkRequest& operator=(CreateMediaLiveChannelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSettingsShrink_ == nullptr
        && return this->inputAttachmentsShrink_ == nullptr && return this->name_ == nullptr && return this->outputGroupsShrink_ == nullptr && return this->videoSettingsShrink_ == nullptr; };
    // audioSettingsShrink Field Functions 
    bool hasAudioSettingsShrink() const { return this->audioSettingsShrink_ != nullptr;};
    void deleteAudioSettingsShrink() { this->audioSettingsShrink_ = nullptr;};
    inline string audioSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(audioSettingsShrink_, "") };
    inline CreateMediaLiveChannelShrinkRequest& setAudioSettingsShrink(string audioSettingsShrink) { DARABONBA_PTR_SET_VALUE(audioSettingsShrink_, audioSettingsShrink) };


    // inputAttachmentsShrink Field Functions 
    bool hasInputAttachmentsShrink() const { return this->inputAttachmentsShrink_ != nullptr;};
    void deleteInputAttachmentsShrink() { this->inputAttachmentsShrink_ = nullptr;};
    inline string inputAttachmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputAttachmentsShrink_, "") };
    inline CreateMediaLiveChannelShrinkRequest& setInputAttachmentsShrink(string inputAttachmentsShrink) { DARABONBA_PTR_SET_VALUE(inputAttachmentsShrink_, inputAttachmentsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroupsShrink Field Functions 
    bool hasOutputGroupsShrink() const { return this->outputGroupsShrink_ != nullptr;};
    void deleteOutputGroupsShrink() { this->outputGroupsShrink_ = nullptr;};
    inline string outputGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(outputGroupsShrink_, "") };
    inline CreateMediaLiveChannelShrinkRequest& setOutputGroupsShrink(string outputGroupsShrink) { DARABONBA_PTR_SET_VALUE(outputGroupsShrink_, outputGroupsShrink) };


    // videoSettingsShrink Field Functions 
    bool hasVideoSettingsShrink() const { return this->videoSettingsShrink_ != nullptr;};
    void deleteVideoSettingsShrink() { this->videoSettingsShrink_ = nullptr;};
    inline string videoSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(videoSettingsShrink_, "") };
    inline CreateMediaLiveChannelShrinkRequest& setVideoSettingsShrink(string videoSettingsShrink) { DARABONBA_PTR_SET_VALUE(videoSettingsShrink_, videoSettingsShrink) };


  protected:
    // The audio settings.
    std::shared_ptr<string> audioSettingsShrink_ = nullptr;
    // The associated inputs.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputAttachmentsShrink_ = nullptr;
    // The name of the channel. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> outputGroupsShrink_ = nullptr;
    // The video settings.
    std::shared_ptr<string> videoSettingsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
