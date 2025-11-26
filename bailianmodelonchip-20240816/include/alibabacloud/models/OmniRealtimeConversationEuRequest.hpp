// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OMNIREALTIMECONVERSATIONEUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OMNIREALTIMECONVERSATIONEUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class OmniRealtimeConversationEURequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OmniRealtimeConversationEURequest& obj) { 
      DARABONBA_PTR_TO_JSON(inputAudio, inputAudio_);
      DARABONBA_PTR_TO_JSON(userPrompt, userPrompt_);
      DARABONBA_PTR_TO_JSON(voice, voice_);
    };
    friend void from_json(const Darabonba::Json& j, OmniRealtimeConversationEURequest& obj) { 
      DARABONBA_PTR_FROM_JSON(inputAudio, inputAudio_);
      DARABONBA_PTR_FROM_JSON(userPrompt, userPrompt_);
      DARABONBA_PTR_FROM_JSON(voice, voice_);
    };
    OmniRealtimeConversationEURequest() = default ;
    OmniRealtimeConversationEURequest(const OmniRealtimeConversationEURequest &) = default ;
    OmniRealtimeConversationEURequest(OmniRealtimeConversationEURequest &&) = default ;
    OmniRealtimeConversationEURequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OmniRealtimeConversationEURequest() = default ;
    OmniRealtimeConversationEURequest& operator=(const OmniRealtimeConversationEURequest &) = default ;
    OmniRealtimeConversationEURequest& operator=(OmniRealtimeConversationEURequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputAudio_ == nullptr
        && return this->userPrompt_ == nullptr && return this->voice_ == nullptr; };
    // inputAudio Field Functions 
    bool hasInputAudio() const { return this->inputAudio_ != nullptr;};
    void deleteInputAudio() { this->inputAudio_ = nullptr;};
    inline string inputAudio() const { DARABONBA_PTR_GET_DEFAULT(inputAudio_, "") };
    inline OmniRealtimeConversationEURequest& setInputAudio(string inputAudio) { DARABONBA_PTR_SET_VALUE(inputAudio_, inputAudio) };


    // userPrompt Field Functions 
    bool hasUserPrompt() const { return this->userPrompt_ != nullptr;};
    void deleteUserPrompt() { this->userPrompt_ = nullptr;};
    inline string userPrompt() const { DARABONBA_PTR_GET_DEFAULT(userPrompt_, "") };
    inline OmniRealtimeConversationEURequest& setUserPrompt(string userPrompt) { DARABONBA_PTR_SET_VALUE(userPrompt_, userPrompt) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline OmniRealtimeConversationEURequest& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputAudio_ = nullptr;
    std::shared_ptr<string> userPrompt_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
