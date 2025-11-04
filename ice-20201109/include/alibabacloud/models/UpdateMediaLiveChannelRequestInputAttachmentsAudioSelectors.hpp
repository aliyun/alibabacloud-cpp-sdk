// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_TO_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_TO_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_FROM_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_FROM_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors &&) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& operator=(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& operator=(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLanguageSelection_ == nullptr
        && return this->audioPidSelection_ == nullptr && return this->audioTrackSelection_ == nullptr && return this->name_ == nullptr; };
    // audioLanguageSelection Field Functions 
    bool hasAudioLanguageSelection() const { return this->audioLanguageSelection_ != nullptr;};
    void deleteAudioLanguageSelection() { this->audioLanguageSelection_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection() const { DARABONBA_PTR_GET_CONST(audioLanguageSelection_, Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection audioLanguageSelection() { DARABONBA_PTR_GET(audioLanguageSelection_, Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioLanguageSelection(const Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection) { DARABONBA_PTR_SET_VALUE(audioLanguageSelection_, audioLanguageSelection) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioLanguageSelection(Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection && audioLanguageSelection) { DARABONBA_PTR_SET_RVALUE(audioLanguageSelection_, audioLanguageSelection) };


    // audioPidSelection Field Functions 
    bool hasAudioPidSelection() const { return this->audioPidSelection_ != nullptr;};
    void deleteAudioPidSelection() { this->audioPidSelection_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection() const { DARABONBA_PTR_GET_CONST(audioPidSelection_, Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection audioPidSelection() { DARABONBA_PTR_GET(audioPidSelection_, Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioPidSelection(const Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection) { DARABONBA_PTR_SET_VALUE(audioPidSelection_, audioPidSelection) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioPidSelection(Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection && audioPidSelection) { DARABONBA_PTR_SET_RVALUE(audioPidSelection_, audioPidSelection) };


    // audioTrackSelection Field Functions 
    bool hasAudioTrackSelection() const { return this->audioTrackSelection_ != nullptr;};
    void deleteAudioTrackSelection() { this->audioTrackSelection_ = nullptr;};
    inline const vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection() const { DARABONBA_PTR_GET_CONST(audioTrackSelection_, vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> audioTrackSelection() { DARABONBA_PTR_GET(audioTrackSelection_, vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioTrackSelection(const vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection) { DARABONBA_PTR_SET_VALUE(audioTrackSelection_, audioTrackSelection) };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setAudioTrackSelection(vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection> && audioTrackSelection) { DARABONBA_PTR_SET_RVALUE(audioTrackSelection_, audioTrackSelection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The audio language selection.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection> audioLanguageSelection_ = nullptr;
    // The audio PID selection.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioPidSelection> audioPidSelection_ = nullptr;
    // The audio track selection.
    std::shared_ptr<vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioTrackSelection>> audioTrackSelection_ = nullptr;
    // The name of the audio selector. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
