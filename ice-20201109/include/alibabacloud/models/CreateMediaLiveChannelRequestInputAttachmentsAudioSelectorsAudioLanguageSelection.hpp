// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOLANGUAGESELECTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOLANGUAGESELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& obj) { 
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
    };
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &&) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection() = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& operator=(const CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &) = default ;
    CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& operator=(CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->languageCode_ != nullptr; };
    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline CreateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


  protected:
    // Enter a three-letter ISO 639-2 language code from within an audio source.
    // 
    // This parameter is required.
    std::shared_ptr<string> languageCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
