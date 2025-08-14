// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOLANGUAGESELECTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTINPUTATTACHMENTSAUDIOSELECTORSAUDIOLANGUAGESELECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& obj) { 
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& obj) { 
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
    };
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &&) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection() = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& operator=(const UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &) = default ;
    UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& operator=(UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->languageCode_ != nullptr; };
    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline UpdateMediaLiveChannelRequestInputAttachmentsAudioSelectorsAudioLanguageSelection& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


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
