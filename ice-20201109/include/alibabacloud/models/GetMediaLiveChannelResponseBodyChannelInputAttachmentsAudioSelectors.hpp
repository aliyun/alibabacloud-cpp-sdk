// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_TO_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_TO_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_FROM_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_FROM_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors(const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors(GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors &&) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& operator=(const GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& operator=(GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioLanguageSelection_ != nullptr
        && this->audioPidSelection_ != nullptr && this->audioTrackSelection_ != nullptr && this->name_ != nullptr; };
    // audioLanguageSelection Field Functions 
    bool hasAudioLanguageSelection() const { return this->audioLanguageSelection_ != nullptr;};
    void deleteAudioLanguageSelection() { this->audioLanguageSelection_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection() const { DARABONBA_PTR_GET_CONST(audioLanguageSelection_, Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection audioLanguageSelection() { DARABONBA_PTR_GET(audioLanguageSelection_, Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioLanguageSelection(const Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection) { DARABONBA_PTR_SET_VALUE(audioLanguageSelection_, audioLanguageSelection) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioLanguageSelection(Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection && audioLanguageSelection) { DARABONBA_PTR_SET_RVALUE(audioLanguageSelection_, audioLanguageSelection) };


    // audioPidSelection Field Functions 
    bool hasAudioPidSelection() const { return this->audioPidSelection_ != nullptr;};
    void deleteAudioPidSelection() { this->audioPidSelection_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection() const { DARABONBA_PTR_GET_CONST(audioPidSelection_, Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection audioPidSelection() { DARABONBA_PTR_GET(audioPidSelection_, Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioPidSelection(const Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection) { DARABONBA_PTR_SET_VALUE(audioPidSelection_, audioPidSelection) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioPidSelection(Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection && audioPidSelection) { DARABONBA_PTR_SET_RVALUE(audioPidSelection_, audioPidSelection) };


    // audioTrackSelection Field Functions 
    bool hasAudioTrackSelection() const { return this->audioTrackSelection_ != nullptr;};
    void deleteAudioTrackSelection() { this->audioTrackSelection_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection() const { DARABONBA_PTR_GET_CONST(audioTrackSelection_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection> audioTrackSelection() { DARABONBA_PTR_GET(audioTrackSelection_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioTrackSelection(const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection) { DARABONBA_PTR_SET_VALUE(audioTrackSelection_, audioTrackSelection) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setAudioTrackSelection(vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection> && audioTrackSelection) { DARABONBA_PTR_SET_RVALUE(audioTrackSelection_, audioTrackSelection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The audio language selection.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioLanguageSelection> audioLanguageSelection_ = nullptr;
    // The audio PID selection.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioPidSelection> audioPidSelection_ = nullptr;
    // The audio track selection.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectorsAudioTrackSelection>> audioTrackSelection_ = nullptr;
    // The name of the audio selector.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
