// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelAudioSettings.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelInputAttachments.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelOutputGroups.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelVideoSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannel& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_TO_JSON(LastStopTime, lastStopTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VideoSettings, videoSettings_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_FROM_JSON(LastStopTime, lastStopTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettings_);
    };
    GetMediaLiveChannelResponseBodyChannel() = default ;
    GetMediaLiveChannelResponseBodyChannel(const GetMediaLiveChannelResponseBodyChannel &) = default ;
    GetMediaLiveChannelResponseBodyChannel(GetMediaLiveChannelResponseBodyChannel &&) = default ;
    GetMediaLiveChannelResponseBodyChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannel() = default ;
    GetMediaLiveChannelResponseBodyChannel& operator=(const GetMediaLiveChannelResponseBodyChannel &) = default ;
    GetMediaLiveChannelResponseBodyChannel& operator=(GetMediaLiveChannelResponseBodyChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSettings_ != nullptr
        && this->channelId_ != nullptr && this->createTime_ != nullptr && this->inputAttachments_ != nullptr && this->lastStartTime_ != nullptr && this->lastStopTime_ != nullptr
        && this->name_ != nullptr && this->outputGroups_ != nullptr && this->state_ != nullptr && this->videoSettings_ != nullptr; };
    // audioSettings Field Functions 
    bool hasAudioSettings() const { return this->audioSettings_ != nullptr;};
    void deleteAudioSettings() { this->audioSettings_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings> & audioSettings() const { DARABONBA_PTR_GET_CONST(audioSettings_, vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings> audioSettings() { DARABONBA_PTR_GET(audioSettings_, vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings>) };
    inline GetMediaLiveChannelResponseBodyChannel& setAudioSettings(const vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings> & audioSettings) { DARABONBA_PTR_SET_VALUE(audioSettings_, audioSettings) };
    inline GetMediaLiveChannelResponseBodyChannel& setAudioSettings(vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings> && audioSettings) { DARABONBA_PTR_SET_RVALUE(audioSettings_, audioSettings) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inputAttachments Field Functions 
    bool hasInputAttachments() const { return this->inputAttachments_ != nullptr;};
    void deleteInputAttachments() { this->inputAttachments_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments> & inputAttachments() const { DARABONBA_PTR_GET_CONST(inputAttachments_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments> inputAttachments() { DARABONBA_PTR_GET(inputAttachments_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments>) };
    inline GetMediaLiveChannelResponseBodyChannel& setInputAttachments(const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments> & inputAttachments) { DARABONBA_PTR_SET_VALUE(inputAttachments_, inputAttachments) };
    inline GetMediaLiveChannelResponseBodyChannel& setInputAttachments(vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments> && inputAttachments) { DARABONBA_PTR_SET_RVALUE(inputAttachments_, inputAttachments) };


    // lastStartTime Field Functions 
    bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
    void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
    inline string lastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


    // lastStopTime Field Functions 
    bool hasLastStopTime() const { return this->lastStopTime_ != nullptr;};
    void deleteLastStopTime() { this->lastStopTime_ = nullptr;};
    inline string lastStopTime() const { DARABONBA_PTR_GET_DEFAULT(lastStopTime_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setLastStopTime(string lastStopTime) { DARABONBA_PTR_SET_VALUE(lastStopTime_, lastStopTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups> & outputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups> outputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups>) };
    inline GetMediaLiveChannelResponseBodyChannel& setOutputGroups(const vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline GetMediaLiveChannelResponseBodyChannel& setOutputGroups(vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetMediaLiveChannelResponseBodyChannel& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // videoSettings Field Functions 
    bool hasVideoSettings() const { return this->videoSettings_ != nullptr;};
    void deleteVideoSettings() { this->videoSettings_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings> & videoSettings() const { DARABONBA_PTR_GET_CONST(videoSettings_, vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings> videoSettings() { DARABONBA_PTR_GET(videoSettings_, vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings>) };
    inline GetMediaLiveChannelResponseBodyChannel& setVideoSettings(const vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings> & videoSettings) { DARABONBA_PTR_SET_VALUE(videoSettings_, videoSettings) };
    inline GetMediaLiveChannelResponseBodyChannel& setVideoSettings(vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings> && videoSettings) { DARABONBA_PTR_SET_RVALUE(videoSettings_, videoSettings) };


  protected:
    // The audio settings.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelAudioSettings>> audioSettings_ = nullptr;
    // The ID of the channel.
    std::shared_ptr<string> channelId_ = nullptr;
    // The time when the channel was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The inputs associated with the channel.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachments>> inputAttachments_ = nullptr;
    // The time when the channel was last started. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. If the channel has never been started since it was created, an empty string is returned.
    std::shared_ptr<string> lastStartTime_ = nullptr;
    // The time when the channel was last stopped. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC. If the channel has never stopped since it was created, an empty string is returned.
    std::shared_ptr<string> lastStopTime_ = nullptr;
    // The channel name.
    std::shared_ptr<string> name_ = nullptr;
    // The output groups.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelOutputGroups>> outputGroups_ = nullptr;
    // The state of the channel. Valid values: IDLE, STARTING, RUNNING, RECOVERING, and STOPPING.
    std::shared_ptr<string> state_ = nullptr;
    // The video settings.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelVideoSettings>> videoSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
