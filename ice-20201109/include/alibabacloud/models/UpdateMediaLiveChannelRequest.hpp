// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestAudioSettings.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestInputAttachments.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestOutputGroups.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestVideoSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_TO_JSON(VideoSettings, videoSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettings_);
    };
    UpdateMediaLiveChannelRequest() = default ;
    UpdateMediaLiveChannelRequest(const UpdateMediaLiveChannelRequest &) = default ;
    UpdateMediaLiveChannelRequest(UpdateMediaLiveChannelRequest &&) = default ;
    UpdateMediaLiveChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequest() = default ;
    UpdateMediaLiveChannelRequest& operator=(const UpdateMediaLiveChannelRequest &) = default ;
    UpdateMediaLiveChannelRequest& operator=(UpdateMediaLiveChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSettings_ != nullptr
        && this->channelId_ != nullptr && this->inputAttachments_ != nullptr && this->name_ != nullptr && this->outputGroups_ != nullptr && this->videoSettings_ != nullptr; };
    // audioSettings Field Functions 
    bool hasAudioSettings() const { return this->audioSettings_ != nullptr;};
    void deleteAudioSettings() { this->audioSettings_ = nullptr;};
    inline const vector<UpdateMediaLiveChannelRequestAudioSettings> & audioSettings() const { DARABONBA_PTR_GET_CONST(audioSettings_, vector<UpdateMediaLiveChannelRequestAudioSettings>) };
    inline vector<UpdateMediaLiveChannelRequestAudioSettings> audioSettings() { DARABONBA_PTR_GET(audioSettings_, vector<UpdateMediaLiveChannelRequestAudioSettings>) };
    inline UpdateMediaLiveChannelRequest& setAudioSettings(const vector<UpdateMediaLiveChannelRequestAudioSettings> & audioSettings) { DARABONBA_PTR_SET_VALUE(audioSettings_, audioSettings) };
    inline UpdateMediaLiveChannelRequest& setAudioSettings(vector<UpdateMediaLiveChannelRequestAudioSettings> && audioSettings) { DARABONBA_PTR_SET_RVALUE(audioSettings_, audioSettings) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateMediaLiveChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // inputAttachments Field Functions 
    bool hasInputAttachments() const { return this->inputAttachments_ != nullptr;};
    void deleteInputAttachments() { this->inputAttachments_ = nullptr;};
    inline const vector<UpdateMediaLiveChannelRequestInputAttachments> & inputAttachments() const { DARABONBA_PTR_GET_CONST(inputAttachments_, vector<UpdateMediaLiveChannelRequestInputAttachments>) };
    inline vector<UpdateMediaLiveChannelRequestInputAttachments> inputAttachments() { DARABONBA_PTR_GET(inputAttachments_, vector<UpdateMediaLiveChannelRequestInputAttachments>) };
    inline UpdateMediaLiveChannelRequest& setInputAttachments(const vector<UpdateMediaLiveChannelRequestInputAttachments> & inputAttachments) { DARABONBA_PTR_SET_VALUE(inputAttachments_, inputAttachments) };
    inline UpdateMediaLiveChannelRequest& setInputAttachments(vector<UpdateMediaLiveChannelRequestInputAttachments> && inputAttachments) { DARABONBA_PTR_SET_RVALUE(inputAttachments_, inputAttachments) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveChannelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<UpdateMediaLiveChannelRequestOutputGroups> & outputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<UpdateMediaLiveChannelRequestOutputGroups>) };
    inline vector<UpdateMediaLiveChannelRequestOutputGroups> outputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<UpdateMediaLiveChannelRequestOutputGroups>) };
    inline UpdateMediaLiveChannelRequest& setOutputGroups(const vector<UpdateMediaLiveChannelRequestOutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline UpdateMediaLiveChannelRequest& setOutputGroups(vector<UpdateMediaLiveChannelRequestOutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


    // videoSettings Field Functions 
    bool hasVideoSettings() const { return this->videoSettings_ != nullptr;};
    void deleteVideoSettings() { this->videoSettings_ = nullptr;};
    inline const vector<UpdateMediaLiveChannelRequestVideoSettings> & videoSettings() const { DARABONBA_PTR_GET_CONST(videoSettings_, vector<UpdateMediaLiveChannelRequestVideoSettings>) };
    inline vector<UpdateMediaLiveChannelRequestVideoSettings> videoSettings() { DARABONBA_PTR_GET(videoSettings_, vector<UpdateMediaLiveChannelRequestVideoSettings>) };
    inline UpdateMediaLiveChannelRequest& setVideoSettings(const vector<UpdateMediaLiveChannelRequestVideoSettings> & videoSettings) { DARABONBA_PTR_SET_VALUE(videoSettings_, videoSettings) };
    inline UpdateMediaLiveChannelRequest& setVideoSettings(vector<UpdateMediaLiveChannelRequestVideoSettings> && videoSettings) { DARABONBA_PTR_SET_RVALUE(videoSettings_, videoSettings) };


  protected:
    // The audio settings.
    std::shared_ptr<vector<UpdateMediaLiveChannelRequestAudioSettings>> audioSettings_ = nullptr;
    // The ID of the channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // The inputs associated with the channel.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateMediaLiveChannelRequestInputAttachments>> inputAttachments_ = nullptr;
    // The name of the channel. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output groups.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateMediaLiveChannelRequestOutputGroups>> outputGroups_ = nullptr;
    // The video settings.
    std::shared_ptr<vector<UpdateMediaLiveChannelRequestVideoSettings>> videoSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
