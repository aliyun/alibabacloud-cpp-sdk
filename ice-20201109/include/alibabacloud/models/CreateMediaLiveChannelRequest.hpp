// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveChannelRequestAudioSettings.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestInputAttachments.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestOutputGroups.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_TO_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_TO_JSON(VideoSettings, videoSettings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSettings, audioSettings_);
      DARABONBA_PTR_FROM_JSON(InputAttachments, inputAttachments_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
      DARABONBA_PTR_FROM_JSON(VideoSettings, videoSettings_);
    };
    CreateMediaLiveChannelRequest() = default ;
    CreateMediaLiveChannelRequest(const CreateMediaLiveChannelRequest &) = default ;
    CreateMediaLiveChannelRequest(CreateMediaLiveChannelRequest &&) = default ;
    CreateMediaLiveChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequest() = default ;
    CreateMediaLiveChannelRequest& operator=(const CreateMediaLiveChannelRequest &) = default ;
    CreateMediaLiveChannelRequest& operator=(CreateMediaLiveChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSettings_ != nullptr
        && this->inputAttachments_ != nullptr && this->name_ != nullptr && this->outputGroups_ != nullptr && this->videoSettings_ != nullptr; };
    // audioSettings Field Functions 
    bool hasAudioSettings() const { return this->audioSettings_ != nullptr;};
    void deleteAudioSettings() { this->audioSettings_ = nullptr;};
    inline const vector<CreateMediaLiveChannelRequestAudioSettings> & audioSettings() const { DARABONBA_PTR_GET_CONST(audioSettings_, vector<CreateMediaLiveChannelRequestAudioSettings>) };
    inline vector<CreateMediaLiveChannelRequestAudioSettings> audioSettings() { DARABONBA_PTR_GET(audioSettings_, vector<CreateMediaLiveChannelRequestAudioSettings>) };
    inline CreateMediaLiveChannelRequest& setAudioSettings(const vector<CreateMediaLiveChannelRequestAudioSettings> & audioSettings) { DARABONBA_PTR_SET_VALUE(audioSettings_, audioSettings) };
    inline CreateMediaLiveChannelRequest& setAudioSettings(vector<CreateMediaLiveChannelRequestAudioSettings> && audioSettings) { DARABONBA_PTR_SET_RVALUE(audioSettings_, audioSettings) };


    // inputAttachments Field Functions 
    bool hasInputAttachments() const { return this->inputAttachments_ != nullptr;};
    void deleteInputAttachments() { this->inputAttachments_ = nullptr;};
    inline const vector<CreateMediaLiveChannelRequestInputAttachments> & inputAttachments() const { DARABONBA_PTR_GET_CONST(inputAttachments_, vector<CreateMediaLiveChannelRequestInputAttachments>) };
    inline vector<CreateMediaLiveChannelRequestInputAttachments> inputAttachments() { DARABONBA_PTR_GET(inputAttachments_, vector<CreateMediaLiveChannelRequestInputAttachments>) };
    inline CreateMediaLiveChannelRequest& setInputAttachments(const vector<CreateMediaLiveChannelRequestInputAttachments> & inputAttachments) { DARABONBA_PTR_SET_VALUE(inputAttachments_, inputAttachments) };
    inline CreateMediaLiveChannelRequest& setInputAttachments(vector<CreateMediaLiveChannelRequestInputAttachments> && inputAttachments) { DARABONBA_PTR_SET_RVALUE(inputAttachments_, inputAttachments) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<CreateMediaLiveChannelRequestOutputGroups> & outputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<CreateMediaLiveChannelRequestOutputGroups>) };
    inline vector<CreateMediaLiveChannelRequestOutputGroups> outputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<CreateMediaLiveChannelRequestOutputGroups>) };
    inline CreateMediaLiveChannelRequest& setOutputGroups(const vector<CreateMediaLiveChannelRequestOutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline CreateMediaLiveChannelRequest& setOutputGroups(vector<CreateMediaLiveChannelRequestOutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


    // videoSettings Field Functions 
    bool hasVideoSettings() const { return this->videoSettings_ != nullptr;};
    void deleteVideoSettings() { this->videoSettings_ = nullptr;};
    inline const vector<CreateMediaLiveChannelRequestVideoSettings> & videoSettings() const { DARABONBA_PTR_GET_CONST(videoSettings_, vector<CreateMediaLiveChannelRequestVideoSettings>) };
    inline vector<CreateMediaLiveChannelRequestVideoSettings> videoSettings() { DARABONBA_PTR_GET(videoSettings_, vector<CreateMediaLiveChannelRequestVideoSettings>) };
    inline CreateMediaLiveChannelRequest& setVideoSettings(const vector<CreateMediaLiveChannelRequestVideoSettings> & videoSettings) { DARABONBA_PTR_SET_VALUE(videoSettings_, videoSettings) };
    inline CreateMediaLiveChannelRequest& setVideoSettings(vector<CreateMediaLiveChannelRequestVideoSettings> && videoSettings) { DARABONBA_PTR_SET_RVALUE(videoSettings_, videoSettings) };


  protected:
    // The audio settings.
    std::shared_ptr<vector<CreateMediaLiveChannelRequestAudioSettings>> audioSettings_ = nullptr;
    // The associated inputs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMediaLiveChannelRequestInputAttachments>> inputAttachments_ = nullptr;
    // The name of the channel. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output groups.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMediaLiveChannelRequestOutputGroups>> outputGroups_ = nullptr;
    // The video settings.
    std::shared_ptr<vector<CreateMediaLiveChannelRequestVideoSettings>> videoSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
