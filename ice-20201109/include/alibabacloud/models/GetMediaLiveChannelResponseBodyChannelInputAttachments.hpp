// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELINPUTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelInputAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelInputAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputName, inputName_);
      DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelInputAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSelectors, audioSelectors_);
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputName, inputName_);
      DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
    };
    GetMediaLiveChannelResponseBodyChannelInputAttachments() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachments(const GetMediaLiveChannelResponseBodyChannelInputAttachments &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachments(GetMediaLiveChannelResponseBodyChannelInputAttachments &&) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelInputAttachments() = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachments& operator=(const GetMediaLiveChannelResponseBodyChannelInputAttachments &) = default ;
    GetMediaLiveChannelResponseBodyChannelInputAttachments& operator=(GetMediaLiveChannelResponseBodyChannelInputAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSelectors_ == nullptr
        && return this->inputId_ == nullptr && return this->inputName_ == nullptr && return this->languageName_ == nullptr; };
    // audioSelectors Field Functions 
    bool hasAudioSelectors() const { return this->audioSelectors_ != nullptr;};
    void deleteAudioSelectors() { this->audioSelectors_ = nullptr;};
    inline const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors> & audioSelectors() const { DARABONBA_PTR_GET_CONST(audioSelectors_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors>) };
    inline vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors> audioSelectors() { DARABONBA_PTR_GET(audioSelectors_, vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors>) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachments& setAudioSelectors(const vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors> & audioSelectors) { DARABONBA_PTR_SET_VALUE(audioSelectors_, audioSelectors) };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachments& setAudioSelectors(vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors> && audioSelectors) { DARABONBA_PTR_SET_RVALUE(audioSelectors_, audioSelectors) };


    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachments& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputName Field Functions 
    bool hasInputName() const { return this->inputName_ != nullptr;};
    void deleteInputName() { this->inputName_ = nullptr;};
    inline string inputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachments& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


    // languageName Field Functions 
    bool hasLanguageName() const { return this->languageName_ != nullptr;};
    void deleteLanguageName() { this->languageName_ = nullptr;};
    inline string languageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
    inline GetMediaLiveChannelResponseBodyChannelInputAttachments& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


  protected:
    // The audio selectors.
    std::shared_ptr<vector<Models::GetMediaLiveChannelResponseBodyChannelInputAttachmentsAudioSelectors>> audioSelectors_ = nullptr;
    // The ID of the associated input.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputId_ = nullptr;
    // The name of the input.
    std::shared_ptr<string> inputName_ = nullptr;
    // The language name.
    std::shared_ptr<string> languageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
