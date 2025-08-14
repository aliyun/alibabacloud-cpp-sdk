// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSINPUTATTACHMENTSAUDIOSELECTORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_TO_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_TO_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLanguageSelection, audioLanguageSelection_);
      DARABONBA_PTR_FROM_JSON(AudioPidSelection, audioPidSelection_);
      DARABONBA_PTR_FROM_JSON(AudioTrackSelection, audioTrackSelection_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors(const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors(ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors() = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& operator=(const ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& operator=(ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioLanguageSelection_ != nullptr
        && this->audioPidSelection_ != nullptr && this->audioTrackSelection_ != nullptr && this->name_ != nullptr; };
    // audioLanguageSelection Field Functions 
    bool hasAudioLanguageSelection() const { return this->audioLanguageSelection_ != nullptr;};
    void deleteAudioLanguageSelection() { this->audioLanguageSelection_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection() const { DARABONBA_PTR_GET_CONST(audioLanguageSelection_, Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection audioLanguageSelection() { DARABONBA_PTR_GET(audioLanguageSelection_, Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioLanguageSelection(const Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection & audioLanguageSelection) { DARABONBA_PTR_SET_VALUE(audioLanguageSelection_, audioLanguageSelection) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioLanguageSelection(Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection && audioLanguageSelection) { DARABONBA_PTR_SET_RVALUE(audioLanguageSelection_, audioLanguageSelection) };


    // audioPidSelection Field Functions 
    bool hasAudioPidSelection() const { return this->audioPidSelection_ != nullptr;};
    void deleteAudioPidSelection() { this->audioPidSelection_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection() const { DARABONBA_PTR_GET_CONST(audioPidSelection_, Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection audioPidSelection() { DARABONBA_PTR_GET(audioPidSelection_, Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioPidSelection(const Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection & audioPidSelection) { DARABONBA_PTR_SET_VALUE(audioPidSelection_, audioPidSelection) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioPidSelection(Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection && audioPidSelection) { DARABONBA_PTR_SET_RVALUE(audioPidSelection_, audioPidSelection) };


    // audioTrackSelection Field Functions 
    bool hasAudioTrackSelection() const { return this->audioTrackSelection_ != nullptr;};
    void deleteAudioTrackSelection() { this->audioTrackSelection_ = nullptr;};
    inline const vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection() const { DARABONBA_PTR_GET_CONST(audioTrackSelection_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection> audioTrackSelection() { DARABONBA_PTR_GET(audioTrackSelection_, vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection>) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioTrackSelection(const vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection> & audioTrackSelection) { DARABONBA_PTR_SET_VALUE(audioTrackSelection_, audioTrackSelection) };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setAudioTrackSelection(vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection> && audioTrackSelection) { DARABONBA_PTR_SET_RVALUE(audioTrackSelection_, audioTrackSelection) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The audio language selection.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioLanguageSelection> audioLanguageSelection_ = nullptr;
    // The audio PID selection.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioPidSelection> audioPidSelection_ = nullptr;
    // The audio track selection.
    std::shared_ptr<vector<Models::ListMediaLiveChannelsResponseBodyChannelsInputAttachmentsAudioSelectorsAudioTrackSelection>> audioTrackSelection_ = nullptr;
    // The name of the audio selector.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
