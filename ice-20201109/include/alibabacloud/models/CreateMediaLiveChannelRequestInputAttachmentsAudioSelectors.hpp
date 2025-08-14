// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_TO_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_TO_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_FROM_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_FROM_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors &&) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& operator=(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& operator=(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioLanguageSelection_ != nullptr
        && this->audioPidSelection_ != nullptr && this->audioTrackSelection_ != nullptr && this->name_ != nullptr; };
    // audioLanguageSelection Field Functions 
    bool hasAudioLanguageSelection() const { return this->audioLanguageSelection_ != nullptr;};
    void deleteAudioLanguageSelection() { this->audioLanguageSelection_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection() const { DARABONBA_PTR_GET_CONST(audioLanguageSelection_, Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection audioLanguageSelection() { DARABONBA_PTR_GET(audioLanguageSelection_, Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioLanguageSelection(const Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection) { DARABONBA_PTR_SET_VALUE(audioLanguageSelection_, audioLanguageSelection) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioLanguageSelection(Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection && audioLanguageSelection) { DARABONBA_PTR_SET_RVALUE(audioLanguageSelection_, audioLanguageSelection) };


    // audioPidSelection Field Functions 
    bool hasAudioPidSelection() const { return this->audioPidSelection_ != nullptr;};
    void deleteAudioPidSelection() { this->audioPidSelection_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection() const { DARABONBA_PTR_GET_CONST(audioPidSelection_, Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection audioPidSelection() { DARABONBA_PTR_GET(audioPidSelection_, Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioPidSelection(const Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection) { DARABONBA_PTR_SET_VALUE(audioPidSelection_, audioPidSelection) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioPidSelection(Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection && audioPidSelection) { DARABONBA_PTR_SET_RVALUE(audioPidSelection_, audioPidSelection) };


    // audioTrackSelection Field Functions 
    bool hasAudioTrackSelection() const { return this->audioTrackSelection_ != nullptr;};
    void deleteAudioTrackSelection() { this->audioTrackSelection_ = nullptr;};
    inline const vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection() const { DARABONBA_PTR_GET_CONST(audioTrackSelection_, vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> audioTrackSelection() { DARABONBA_PTR_GET(audioTrackSelection_, vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioTrackSelection(const vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection) { DARABONBA_PTR_SET_VALUE(audioTrackSelection_, audioTrackSelection) };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioTrackSelection(vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> && audioTrackSelection) { DARABONBA_PTR_SET_RVALUE(audioTrackSelection_, audioTrackSelection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The audio language selection.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection> audioLanguageSelection_ = nullptr;
    // The audio PID selection.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection> audioPidSelection_ = nullptr;
    // The audio track selection.
    std::shared_ptr<vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>> audioTrackSelection_ = nullptr;
    // The name of the audio selector. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
