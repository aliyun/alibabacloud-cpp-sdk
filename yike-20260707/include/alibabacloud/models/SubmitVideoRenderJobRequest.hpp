// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEORENDERJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEORENDERJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitVideoRenderJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoRenderJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoRenderJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoRenderJobRequest() = default ;
    SubmitVideoRenderJobRequest(const SubmitVideoRenderJobRequest &) = default ;
    SubmitVideoRenderJobRequest(SubmitVideoRenderJobRequest &&) = default ;
    SubmitVideoRenderJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoRenderJobRequest() = default ;
    SubmitVideoRenderJobRequest& operator=(const SubmitVideoRenderJobRequest &) = default ;
    SubmitVideoRenderJobRequest& operator=(SubmitVideoRenderJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->script_ == nullptr
        && this->settings_ == nullptr && this->userData_ == nullptr; };
    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline SubmitVideoRenderJobRequest& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline SubmitVideoRenderJobRequest& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoRenderJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The complete creative script (JSON string) after user confirmation or editing. The structure aligns with the JSON content in the `Result` file returned by the `GetRemakeScriptJob` API.
    shared_ptr<string> script_ {};
    // The rendering settings (JSON string).
    // 
    // - **Resolution** (String, required): The resolution. Valid values: `720P`, `1080P`.
    //   - **AspectRatio** (String, optional): The video aspect ratio. Valid values: `9:16`, `16:9`, `1:1`. Default value: `9:16`.
    //   - **VoiceoverLanguage** (String, optional): The voiceover language. Valid values: `zh` (Chinese), `en` (English), `es` (Spanish), `pt` (Portuguese), `fr` (French), `de` (German), `ja` (Japanese), `ko` (Korean), `ar` (Arabic). Default value: `zh`.
    //   - **WithSubtitles** (Bool, optional): Specifies whether to generate subtitles. Default value: `true`.
    //   - **TTS** (Object, optional): The TTS configuration. If not specified, the default voice is used. This parameter applies only to single-person scenarios with voiceover only.
    // 
    //     - **VoiceUrl** (String, optional): The URL of the voice file. The URL must be an HTTP or HTTPS address. If specified, the voiceover for the entire video uses this voice.
    // 
    //   - **Bgm** (String, optional): The URL or 32-character media asset ID of the background music.
    shared_ptr<string> settings_ {};
    // The custom user parameter in JSON format.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
