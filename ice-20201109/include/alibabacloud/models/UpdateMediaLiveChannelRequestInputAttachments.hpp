// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestInputAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestInputAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestInputAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
    };
    UpdateMediaLiveChannelRequestInputAttachments() = default ;
    UpdateMediaLiveChannelRequestInputAttachments(const UpdateMediaLiveChannelRequestInputAttachments &) = default ;
    UpdateMediaLiveChannelRequestInputAttachments(UpdateMediaLiveChannelRequestInputAttachments &&) = default ;
    UpdateMediaLiveChannelRequestInputAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestInputAttachments() = default ;
    UpdateMediaLiveChannelRequestInputAttachments& operator=(const UpdateMediaLiveChannelRequestInputAttachments &) = default ;
    UpdateMediaLiveChannelRequestInputAttachments& operator=(UpdateMediaLiveChannelRequestInputAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSelectors_ != nullptr
        && this->inputId_ != nullptr && this->languageName_ != nullptr; };
    // audioSelectors Field Functions 
    bool hasAudioSelectors() const { return this->audioSelectors_ != nullptr;};
    void deleteAudioSelectors() { this->audioSelectors_ = nullptr;};
    inline const vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors> & audioSelectors() const { DARABONBA_PTR_GET_CONST(audioSelectors_, vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors>) };
    inline vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors> audioSelectors() { DARABONBA_PTR_GET(audioSelectors_, vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors>) };
    inline UpdateMediaLiveChannelRequestInputAttachments& setAudioSelectors(const vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors> & audioSelectors) { DARABONBA_PTR_SET_VALUE(audioSelectors_, audioSelectors) };
    inline UpdateMediaLiveChannelRequestInputAttachments& setAudioSelectors(vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors> && audioSelectors) { DARABONBA_PTR_SET_RVALUE(audioSelectors_, audioSelectors) };


    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline UpdateMediaLiveChannelRequestInputAttachments& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // languageName Field Functions 
    bool hasLanguageName() const { return this->languageName_ != nullptr;};
    void deleteLanguageName() { this->languageName_ = nullptr;};
    inline string languageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
    inline UpdateMediaLiveChannelRequestInputAttachments& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


  protected:
    // The audio selectors.
    std::shared_ptr<vector<Models::UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectors>> audioSelectors_ = nullptr;
    // The ID of the associated input.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputId_ = nullptr;
    // The tag that identifies the language of the RTMP input. It can be referenced by the output. The maximum length is 32 characters. Supported characters:
    // 
    // *   Unicode letters
    // *   Digits (0-9)
    // *   Underscore (_)
    // *   Hyphen (-)
    // *   Space (a space cannot be at the beginning or end)
    std::shared_ptr<string> languageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
