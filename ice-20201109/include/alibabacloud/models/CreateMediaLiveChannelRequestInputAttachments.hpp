// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestInputAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestInputAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestInputAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
    };
    CreateMediaLiveChannelRequestInputAttachments() = default ;
    CreateMediaLiveChannelRequestInputAttachments(const CreateMediaLiveChannelRequestInputAttachments &) = default ;
    CreateMediaLiveChannelRequestInputAttachments(CreateMediaLiveChannelRequestInputAttachments &&) = default ;
    CreateMediaLiveChannelRequestInputAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestInputAttachments() = default ;
    CreateMediaLiveChannelRequestInputAttachments& operator=(const CreateMediaLiveChannelRequestInputAttachments &) = default ;
    CreateMediaLiveChannelRequestInputAttachments& operator=(CreateMediaLiveChannelRequestInputAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSelectors_ == nullptr
        && return this->inputId_ == nullptr && return this->languageName_ == nullptr; };
    // audioSelectors Field Functions 
    bool hasAudioSelectors() const { return this->audioSelectors_ != nullptr;};
    void deleteAudioSelectors() { this->audioSelectors_ = nullptr;};
    inline const vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors> & audioSelectors() const { DARABONBA_PTR_GET_CONST(audioSelectors_, vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors>) };
    inline vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors> audioSelectors() { DARABONBA_PTR_GET(audioSelectors_, vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors>) };
    inline CreateMediaLiveChannelRequestInputAttachments& setAudioSelectors(const vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors> & audioSelectors) { DARABONBA_PTR_SET_VALUE(audioSelectors_, audioSelectors) };
    inline CreateMediaLiveChannelRequestInputAttachments& setAudioSelectors(vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors> && audioSelectors) { DARABONBA_PTR_SET_RVALUE(audioSelectors_, audioSelectors) };


    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline CreateMediaLiveChannelRequestInputAttachments& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // languageName Field Functions 
    bool hasLanguageName() const { return this->languageName_ != nullptr;};
    void deleteLanguageName() { this->languageName_ = nullptr;};
    inline string languageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
    inline CreateMediaLiveChannelRequestInputAttachments& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


  protected:
    // The audio selectors.
    std::shared_ptr<vector<Models::CreateMediaLiveChannelRequestInputAttachmentsAudioSelectors>> audioSelectors_ = nullptr;
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
