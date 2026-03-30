// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class PreviewVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
      DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
      DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
    };
    PreviewVoiceRequest() = default ;
    PreviewVoiceRequest(const PreviewVoiceRequest &) = default ;
    PreviewVoiceRequest(PreviewVoiceRequest &&) = default ;
    PreviewVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewVoiceRequest() = default ;
    PreviewVoiceRequest& operator=(const PreviewVoiceRequest &) = default ;
    PreviewVoiceRequest& operator=(PreviewVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pitchRate_ == nullptr
        && this->speechRate_ == nullptr && this->volume_ == nullptr; };
      // pitchRate Field Functions 
      bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
      void deletePitchRate() { this->pitchRate_ = nullptr;};
      inline float getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0.0) };
      inline Params& setPitchRate(float pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline float getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
      inline Params& setSpeechRate(float speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline Params& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      shared_ptr<float> pitchRate_ {};
      shared_ptr<float> speechRate_ {};
      shared_ptr<int32_t> volume_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->model_ == nullptr && this->nlsAccessType_ == nullptr && this->nlsEngine_ == nullptr && this->params_ == nullptr && this->text_ == nullptr
        && this->voice_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PreviewVoiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline PreviewVoiceRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nlsAccessType Field Functions 
    bool hasNlsAccessType() const { return this->nlsAccessType_ != nullptr;};
    void deleteNlsAccessType() { this->nlsAccessType_ = nullptr;};
    inline string getNlsAccessType() const { DARABONBA_PTR_GET_DEFAULT(nlsAccessType_, "") };
    inline PreviewVoiceRequest& setNlsAccessType(string nlsAccessType) { DARABONBA_PTR_SET_VALUE(nlsAccessType_, nlsAccessType) };


    // nlsEngine Field Functions 
    bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
    void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
    inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
    inline PreviewVoiceRequest& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const PreviewVoiceRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, PreviewVoiceRequest::Params) };
    inline PreviewVoiceRequest::Params getParams() { DARABONBA_PTR_GET(params_, PreviewVoiceRequest::Params) };
    inline PreviewVoiceRequest& setParams(const PreviewVoiceRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline PreviewVoiceRequest& setParams(PreviewVoiceRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline PreviewVoiceRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline PreviewVoiceRequest& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> nlsAccessType_ {};
    shared_ptr<string> nlsEngine_ {};
    shared_ptr<PreviewVoiceRequest::Params> params_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> voice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
