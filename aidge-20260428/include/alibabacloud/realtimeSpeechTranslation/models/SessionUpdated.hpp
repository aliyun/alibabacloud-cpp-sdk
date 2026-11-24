// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONUPDATED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONUPDATED_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class SessionUpdated : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionUpdated& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
      DARABONBA_PTR_TO_JSON(warnings, warnings_);
      DARABONBA_PTR_TO_JSON(session, session_);
    };
    friend void from_json(const Darabonba::Json& j, SessionUpdated& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
      DARABONBA_PTR_FROM_JSON(warnings, warnings_);
      DARABONBA_PTR_FROM_JSON(session, session_);
    };
    SessionUpdated() = default ;
    SessionUpdated(const SessionUpdated &) = default ;
    SessionUpdated(SessionUpdated &&) = default ;
    SessionUpdated(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionUpdated() = default ;
    SessionUpdated& operator=(const SessionUpdated &) = default ;
    SessionUpdated& operator=(SessionUpdated &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Session : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Session& obj) { 
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(language_pair, languagePair_);
        DARABONBA_PTR_TO_JSON(input_audio, inputAudio_);
        DARABONBA_PTR_TO_JSON(output, output_);
        DARABONBA_PTR_TO_JSON(transcription, transcription_);
        DARABONBA_PTR_TO_JSON(turn_detection, turnDetection_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(modalities, modalities_);
        DARABONBA_PTR_TO_JSON(voice, voice_);
        DARABONBA_PTR_TO_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_TO_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_TO_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_TO_JSON(translation, translation_);
        DARABONBA_PTR_TO_JSON(enable_voice_clone, enableVoiceClone_);
        DARABONBA_PTR_TO_JSON(voice_clone_options, voiceCloneOptions_);
        DARABONBA_PTR_TO_JSON(input_audio_transcription, inputAudioTranscription_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(language_pair, languagePair_);
        DARABONBA_PTR_FROM_JSON(input_audio, inputAudio_);
        DARABONBA_PTR_FROM_JSON(output, output_);
        DARABONBA_PTR_FROM_JSON(transcription, transcription_);
        DARABONBA_PTR_FROM_JSON(turn_detection, turnDetection_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(modalities, modalities_);
        DARABONBA_PTR_FROM_JSON(voice, voice_);
        DARABONBA_PTR_FROM_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(translation, translation_);
        DARABONBA_PTR_FROM_JSON(enable_voice_clone, enableVoiceClone_);
        DARABONBA_PTR_FROM_JSON(voice_clone_options, voiceCloneOptions_);
        DARABONBA_PTR_FROM_JSON(input_audio_transcription, inputAudioTranscription_);
      };
      Session() = default ;
      Session(const Session &) = default ;
      Session(Session &&) = default ;
      Session(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Session() = default ;
      Session& operator=(const Session &) = default ;
      Session& operator=(Session &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InputAudioTranscription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputAudioTranscription& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(language, language_);
        };
        friend void from_json(const Darabonba::Json& j, InputAudioTranscription& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(language, language_);
        };
        InputAudioTranscription() = default ;
        InputAudioTranscription(const InputAudioTranscription &) = default ;
        InputAudioTranscription(InputAudioTranscription &&) = default ;
        InputAudioTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputAudioTranscription() = default ;
        InputAudioTranscription& operator=(const InputAudioTranscription &) = default ;
        InputAudioTranscription& operator=(InputAudioTranscription &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->language_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline InputAudioTranscription& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline InputAudioTranscription& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      protected:
        // This parameter is required.
        shared_ptr<bool> enabled_ {};
        // 开启时回显指定语种，自动识别回显 auto；关闭时统一回显 auto。
        // 
        // This parameter is required.
        shared_ptr<string> language_ {};
      };

      class VoiceCloneOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceCloneOptions& obj) { 
          DARABONBA_PTR_TO_JSON(frequency, frequency_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceCloneOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(frequency, frequency_);
        };
        VoiceCloneOptions() = default ;
        VoiceCloneOptions(const VoiceCloneOptions &) = default ;
        VoiceCloneOptions(VoiceCloneOptions &&) = default ;
        VoiceCloneOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceCloneOptions() = default ;
        VoiceCloneOptions& operator=(const VoiceCloneOptions &) = default ;
        VoiceCloneOptions& operator=(VoiceCloneOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->frequency_ == nullptr; };
        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
        inline VoiceCloneOptions& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


      protected:
        shared_ptr<string> frequency_ {};
      };

      class Translation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translation& obj) { 
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(corpus, corpus_);
        };
        friend void from_json(const Darabonba::Json& j, Translation& obj) { 
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(corpus, corpus_);
        };
        Translation() = default ;
        Translation(const Translation &) = default ;
        Translation(Translation &&) = default ;
        Translation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Translation() = default ;
        Translation& operator=(const Translation &) = default ;
        Translation& operator=(Translation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Corpus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Corpus& obj) { 
            DARABONBA_PTR_TO_JSON(phrases, phrases_);
          };
          friend void from_json(const Darabonba::Json& j, Corpus& obj) { 
            DARABONBA_PTR_FROM_JSON(phrases, phrases_);
          };
          Corpus() = default ;
          Corpus(const Corpus &) = default ;
          Corpus(Corpus &&) = default ;
          Corpus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Corpus() = default ;
          Corpus& operator=(const Corpus &) = default ;
          Corpus& operator=(Corpus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->phrases_ == nullptr; };
          // phrases Field Functions 
          bool hasPhrases() const { return this->phrases_ != nullptr;};
          void deletePhrases() { this->phrases_ = nullptr;};
          inline const map<string, string> & getPhrases() const { DARABONBA_PTR_GET_CONST(phrases_, map<string, string>) };
          inline map<string, string> getPhrases() { DARABONBA_PTR_GET(phrases_, map<string, string>) };
          inline Corpus& setPhrases(const map<string, string> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
          inline Corpus& setPhrases(map<string, string> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


        protected:
          shared_ptr<map<string, string>> phrases_ {};
        };

        virtual bool empty() const override { return this->language_ == nullptr
        && this->corpus_ == nullptr; };
        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Translation& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // corpus Field Functions 
        bool hasCorpus() const { return this->corpus_ != nullptr;};
        void deleteCorpus() { this->corpus_ = nullptr;};
        inline const Translation::Corpus & getCorpus() const { DARABONBA_PTR_GET_CONST(corpus_, Translation::Corpus) };
        inline Translation::Corpus getCorpus() { DARABONBA_PTR_GET(corpus_, Translation::Corpus) };
        inline Translation& setCorpus(const Translation::Corpus & corpus) { DARABONBA_PTR_SET_VALUE(corpus_, corpus) };
        inline Translation& setCorpus(Translation::Corpus && corpus) { DARABONBA_PTR_SET_RVALUE(corpus_, corpus) };


      protected:
        shared_ptr<string> language_ {};
        shared_ptr<Translation::Corpus> corpus_ {};
      };

      class TurnDetection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TurnDetection& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(threshold, threshold_);
          DARABONBA_PTR_TO_JSON(silence_duration_ms, silenceDurationMs_);
          DARABONBA_PTR_TO_JSON(prefix_padding_ms, prefixPaddingMs_);
          DARABONBA_PTR_TO_JSON(create_response, createResponse_);
          DARABONBA_PTR_TO_JSON(interrupt_response, interruptResponse_);
        };
        friend void from_json(const Darabonba::Json& j, TurnDetection& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(silence_duration_ms, silenceDurationMs_);
          DARABONBA_PTR_FROM_JSON(prefix_padding_ms, prefixPaddingMs_);
          DARABONBA_PTR_FROM_JSON(create_response, createResponse_);
          DARABONBA_PTR_FROM_JSON(interrupt_response, interruptResponse_);
        };
        TurnDetection() = default ;
        TurnDetection(const TurnDetection &) = default ;
        TurnDetection(TurnDetection &&) = default ;
        TurnDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TurnDetection() = default ;
        TurnDetection& operator=(const TurnDetection &) = default ;
        TurnDetection& operator=(TurnDetection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->threshold_ == nullptr && this->silenceDurationMs_ == nullptr && this->prefixPaddingMs_ == nullptr && this->createResponse_ == nullptr && this->interruptResponse_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TurnDetection& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline TurnDetection& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // silenceDurationMs Field Functions 
        bool hasSilenceDurationMs() const { return this->silenceDurationMs_ != nullptr;};
        void deleteSilenceDurationMs() { this->silenceDurationMs_ = nullptr;};
        inline int32_t getSilenceDurationMs() const { DARABONBA_PTR_GET_DEFAULT(silenceDurationMs_, 0) };
        inline TurnDetection& setSilenceDurationMs(int32_t silenceDurationMs) { DARABONBA_PTR_SET_VALUE(silenceDurationMs_, silenceDurationMs) };


        // prefixPaddingMs Field Functions 
        bool hasPrefixPaddingMs() const { return this->prefixPaddingMs_ != nullptr;};
        void deletePrefixPaddingMs() { this->prefixPaddingMs_ = nullptr;};
        inline int32_t getPrefixPaddingMs() const { DARABONBA_PTR_GET_DEFAULT(prefixPaddingMs_, 0) };
        inline TurnDetection& setPrefixPaddingMs(int32_t prefixPaddingMs) { DARABONBA_PTR_SET_VALUE(prefixPaddingMs_, prefixPaddingMs) };


        // createResponse Field Functions 
        bool hasCreateResponse() const { return this->createResponse_ != nullptr;};
        void deleteCreateResponse() { this->createResponse_ = nullptr;};
        inline bool getCreateResponse() const { DARABONBA_PTR_GET_DEFAULT(createResponse_, false) };
        inline TurnDetection& setCreateResponse(bool createResponse) { DARABONBA_PTR_SET_VALUE(createResponse_, createResponse) };


        // interruptResponse Field Functions 
        bool hasInterruptResponse() const { return this->interruptResponse_ != nullptr;};
        void deleteInterruptResponse() { this->interruptResponse_ = nullptr;};
        inline bool getInterruptResponse() const { DARABONBA_PTR_GET_DEFAULT(interruptResponse_, false) };
        inline TurnDetection& setInterruptResponse(bool interruptResponse) { DARABONBA_PTR_SET_VALUE(interruptResponse_, interruptResponse) };


      protected:
        shared_ptr<string> type_ {};
        shared_ptr<float> threshold_ {};
        shared_ptr<int32_t> silenceDurationMs_ {};
        shared_ptr<int32_t> prefixPaddingMs_ {};
        shared_ptr<bool> createResponse_ {};
        shared_ptr<bool> interruptResponse_ {};
      };

      class Transcription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transcription& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, Transcription& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        Transcription() = default ;
        Transcription(const Transcription &) = default ;
        Transcription(Transcription &&) = default ;
        Transcription(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transcription() = default ;
        Transcription& operator=(const Transcription &) = default ;
        Transcription& operator=(Transcription &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Transcription& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(modalities, modalities_);
          DARABONBA_PTR_TO_JSON(audio, audio_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(modalities, modalities_);
          DARABONBA_PTR_FROM_JSON(audio, audio_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Audio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Audio& obj) { 
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(sample_rate, sampleRate_);
            DARABONBA_PTR_TO_JSON(channels, channels_);
            DARABONBA_PTR_TO_JSON(voice, voice_);
          };
          friend void from_json(const Darabonba::Json& j, Audio& obj) { 
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(sample_rate, sampleRate_);
            DARABONBA_PTR_FROM_JSON(channels, channels_);
            DARABONBA_PTR_FROM_JSON(voice, voice_);
          };
          Audio() = default ;
          Audio(const Audio &) = default ;
          Audio(Audio &&) = default ;
          Audio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Audio() = default ;
          Audio& operator=(const Audio &) = default ;
          Audio& operator=(Audio &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Voice : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Voice& obj) { 
              DARABONBA_PTR_TO_JSON(mode, mode_);
              DARABONBA_PTR_TO_JSON(id, id_);
            };
            friend void from_json(const Darabonba::Json& j, Voice& obj) { 
              DARABONBA_PTR_FROM_JSON(mode, mode_);
              DARABONBA_PTR_FROM_JSON(id, id_);
            };
            Voice() = default ;
            Voice(const Voice &) = default ;
            Voice(Voice &&) = default ;
            Voice(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Voice() = default ;
            Voice& operator=(const Voice &) = default ;
            Voice& operator=(Voice &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->mode_ == nullptr
        && this->id_ == nullptr; };
            // mode Field Functions 
            bool hasMode() const { return this->mode_ != nullptr;};
            void deleteMode() { this->mode_ = nullptr;};
            inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
            inline Voice& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Voice& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          protected:
            shared_ptr<string> mode_ {};
            shared_ptr<string> id_ {};
          };

          virtual bool empty() const override { return this->format_ == nullptr
        && this->sampleRate_ == nullptr && this->channels_ == nullptr && this->voice_ == nullptr; };
          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Audio& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // sampleRate Field Functions 
          bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
          void deleteSampleRate() { this->sampleRate_ = nullptr;};
          inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
          inline Audio& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


          // channels Field Functions 
          bool hasChannels() const { return this->channels_ != nullptr;};
          void deleteChannels() { this->channels_ = nullptr;};
          inline int32_t getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0) };
          inline Audio& setChannels(int32_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


          // voice Field Functions 
          bool hasVoice() const { return this->voice_ != nullptr;};
          void deleteVoice() { this->voice_ = nullptr;};
          inline const Audio::Voice & getVoice() const { DARABONBA_PTR_GET_CONST(voice_, Audio::Voice) };
          inline Audio::Voice getVoice() { DARABONBA_PTR_GET(voice_, Audio::Voice) };
          inline Audio& setVoice(const Audio::Voice & voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };
          inline Audio& setVoice(Audio::Voice && voice) { DARABONBA_PTR_SET_RVALUE(voice_, voice) };


        protected:
          shared_ptr<string> format_ {};
          shared_ptr<int32_t> sampleRate_ {};
          shared_ptr<int32_t> channels_ {};
          shared_ptr<Audio::Voice> voice_ {};
        };

        virtual bool empty() const override { return this->modalities_ == nullptr
        && this->audio_ == nullptr; };
        // modalities Field Functions 
        bool hasModalities() const { return this->modalities_ != nullptr;};
        void deleteModalities() { this->modalities_ = nullptr;};
        inline const vector<string> & getModalities() const { DARABONBA_PTR_GET_CONST(modalities_, vector<string>) };
        inline vector<string> getModalities() { DARABONBA_PTR_GET(modalities_, vector<string>) };
        inline Output& setModalities(const vector<string> & modalities) { DARABONBA_PTR_SET_VALUE(modalities_, modalities) };
        inline Output& setModalities(vector<string> && modalities) { DARABONBA_PTR_SET_RVALUE(modalities_, modalities) };


        // audio Field Functions 
        bool hasAudio() const { return this->audio_ != nullptr;};
        void deleteAudio() { this->audio_ = nullptr;};
        inline const Output::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, Output::Audio) };
        inline Output::Audio getAudio() { DARABONBA_PTR_GET(audio_, Output::Audio) };
        inline Output& setAudio(const Output::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
        inline Output& setAudio(Output::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      protected:
        shared_ptr<vector<string>> modalities_ {};
        shared_ptr<Output::Audio> audio_ {};
      };

      class InputAudio : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputAudio& obj) { 
          DARABONBA_PTR_TO_JSON(format, format_);
          DARABONBA_PTR_TO_JSON(sample_rate, sampleRate_);
          DARABONBA_PTR_TO_JSON(channels, channels_);
        };
        friend void from_json(const Darabonba::Json& j, InputAudio& obj) { 
          DARABONBA_PTR_FROM_JSON(format, format_);
          DARABONBA_PTR_FROM_JSON(sample_rate, sampleRate_);
          DARABONBA_PTR_FROM_JSON(channels, channels_);
        };
        InputAudio() = default ;
        InputAudio(const InputAudio &) = default ;
        InputAudio(InputAudio &&) = default ;
        InputAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputAudio() = default ;
        InputAudio& operator=(const InputAudio &) = default ;
        InputAudio& operator=(InputAudio &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->format_ == nullptr
        && this->sampleRate_ == nullptr && this->channels_ == nullptr; };
        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline InputAudio& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // sampleRate Field Functions 
        bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
        void deleteSampleRate() { this->sampleRate_ = nullptr;};
        inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
        inline InputAudio& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline int32_t getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0) };
        inline InputAudio& setChannels(int32_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


      protected:
        shared_ptr<string> format_ {};
        shared_ptr<int32_t> sampleRate_ {};
        shared_ptr<int32_t> channels_ {};
      };

      virtual bool empty() const override { return this->mode_ == nullptr
        && this->languagePair_ == nullptr && this->inputAudio_ == nullptr && this->output_ == nullptr && this->transcription_ == nullptr && this->turnDetection_ == nullptr
        && this->id_ == nullptr && this->object_ == nullptr && this->modalities_ == nullptr && this->voice_ == nullptr && this->inputAudioFormat_ == nullptr
        && this->sampleRate_ == nullptr && this->outputAudioFormat_ == nullptr && this->translation_ == nullptr && this->enableVoiceClone_ == nullptr && this->voiceCloneOptions_ == nullptr
        && this->inputAudioTranscription_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Session& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // languagePair Field Functions 
      bool hasLanguagePair() const { return this->languagePair_ != nullptr;};
      void deleteLanguagePair() { this->languagePair_ = nullptr;};
      inline const vector<string> & getLanguagePair() const { DARABONBA_PTR_GET_CONST(languagePair_, vector<string>) };
      inline vector<string> getLanguagePair() { DARABONBA_PTR_GET(languagePair_, vector<string>) };
      inline Session& setLanguagePair(const vector<string> & languagePair) { DARABONBA_PTR_SET_VALUE(languagePair_, languagePair) };
      inline Session& setLanguagePair(vector<string> && languagePair) { DARABONBA_PTR_SET_RVALUE(languagePair_, languagePair) };


      // inputAudio Field Functions 
      bool hasInputAudio() const { return this->inputAudio_ != nullptr;};
      void deleteInputAudio() { this->inputAudio_ = nullptr;};
      inline const Session::InputAudio & getInputAudio() const { DARABONBA_PTR_GET_CONST(inputAudio_, Session::InputAudio) };
      inline Session::InputAudio getInputAudio() { DARABONBA_PTR_GET(inputAudio_, Session::InputAudio) };
      inline Session& setInputAudio(const Session::InputAudio & inputAudio) { DARABONBA_PTR_SET_VALUE(inputAudio_, inputAudio) };
      inline Session& setInputAudio(Session::InputAudio && inputAudio) { DARABONBA_PTR_SET_RVALUE(inputAudio_, inputAudio) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Session::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Session::Output) };
      inline Session::Output getOutput() { DARABONBA_PTR_GET(output_, Session::Output) };
      inline Session& setOutput(const Session::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Session& setOutput(Session::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // transcription Field Functions 
      bool hasTranscription() const { return this->transcription_ != nullptr;};
      void deleteTranscription() { this->transcription_ = nullptr;};
      inline const Session::Transcription & getTranscription() const { DARABONBA_PTR_GET_CONST(transcription_, Session::Transcription) };
      inline Session::Transcription getTranscription() { DARABONBA_PTR_GET(transcription_, Session::Transcription) };
      inline Session& setTranscription(const Session::Transcription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
      inline Session& setTranscription(Session::Transcription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


      // turnDetection Field Functions 
      bool hasTurnDetection() const { return this->turnDetection_ != nullptr;};
      void deleteTurnDetection() { this->turnDetection_ = nullptr;};
      inline const Session::TurnDetection & getTurnDetection() const { DARABONBA_PTR_GET_CONST(turnDetection_, Session::TurnDetection) };
      inline Session::TurnDetection getTurnDetection() { DARABONBA_PTR_GET(turnDetection_, Session::TurnDetection) };
      inline Session& setTurnDetection(const Session::TurnDetection & turnDetection) { DARABONBA_PTR_SET_VALUE(turnDetection_, turnDetection) };
      inline Session& setTurnDetection(Session::TurnDetection && turnDetection) { DARABONBA_PTR_SET_RVALUE(turnDetection_, turnDetection) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Session& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Session& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // modalities Field Functions 
      bool hasModalities() const { return this->modalities_ != nullptr;};
      void deleteModalities() { this->modalities_ = nullptr;};
      inline const vector<string> & getModalities() const { DARABONBA_PTR_GET_CONST(modalities_, vector<string>) };
      inline vector<string> getModalities() { DARABONBA_PTR_GET(modalities_, vector<string>) };
      inline Session& setModalities(const vector<string> & modalities) { DARABONBA_PTR_SET_VALUE(modalities_, modalities) };
      inline Session& setModalities(vector<string> && modalities) { DARABONBA_PTR_SET_RVALUE(modalities_, modalities) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline Session& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      // inputAudioFormat Field Functions 
      bool hasInputAudioFormat() const { return this->inputAudioFormat_ != nullptr;};
      void deleteInputAudioFormat() { this->inputAudioFormat_ = nullptr;};
      inline string getInputAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(inputAudioFormat_, "") };
      inline Session& setInputAudioFormat(string inputAudioFormat) { DARABONBA_PTR_SET_VALUE(inputAudioFormat_, inputAudioFormat) };


      // sampleRate Field Functions 
      bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
      void deleteSampleRate() { this->sampleRate_ = nullptr;};
      inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
      inline Session& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      // outputAudioFormat Field Functions 
      bool hasOutputAudioFormat() const { return this->outputAudioFormat_ != nullptr;};
      void deleteOutputAudioFormat() { this->outputAudioFormat_ = nullptr;};
      inline string getOutputAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(outputAudioFormat_, "") };
      inline Session& setOutputAudioFormat(string outputAudioFormat) { DARABONBA_PTR_SET_VALUE(outputAudioFormat_, outputAudioFormat) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const Session::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, Session::Translation) };
      inline Session::Translation getTranslation() { DARABONBA_PTR_GET(translation_, Session::Translation) };
      inline Session& setTranslation(const Session::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline Session& setTranslation(Session::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


      // enableVoiceClone Field Functions 
      bool hasEnableVoiceClone() const { return this->enableVoiceClone_ != nullptr;};
      void deleteEnableVoiceClone() { this->enableVoiceClone_ = nullptr;};
      inline bool getEnableVoiceClone() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceClone_, false) };
      inline Session& setEnableVoiceClone(bool enableVoiceClone) { DARABONBA_PTR_SET_VALUE(enableVoiceClone_, enableVoiceClone) };


      // voiceCloneOptions Field Functions 
      bool hasVoiceCloneOptions() const { return this->voiceCloneOptions_ != nullptr;};
      void deleteVoiceCloneOptions() { this->voiceCloneOptions_ = nullptr;};
      inline const Session::VoiceCloneOptions & getVoiceCloneOptions() const { DARABONBA_PTR_GET_CONST(voiceCloneOptions_, Session::VoiceCloneOptions) };
      inline Session::VoiceCloneOptions getVoiceCloneOptions() { DARABONBA_PTR_GET(voiceCloneOptions_, Session::VoiceCloneOptions) };
      inline Session& setVoiceCloneOptions(const Session::VoiceCloneOptions & voiceCloneOptions) { DARABONBA_PTR_SET_VALUE(voiceCloneOptions_, voiceCloneOptions) };
      inline Session& setVoiceCloneOptions(Session::VoiceCloneOptions && voiceCloneOptions) { DARABONBA_PTR_SET_RVALUE(voiceCloneOptions_, voiceCloneOptions) };


      // inputAudioTranscription Field Functions 
      bool hasInputAudioTranscription() const { return this->inputAudioTranscription_ != nullptr;};
      void deleteInputAudioTranscription() { this->inputAudioTranscription_ = nullptr;};
      inline const Session::InputAudioTranscription & getInputAudioTranscription() const { DARABONBA_PTR_GET_CONST(inputAudioTranscription_, Session::InputAudioTranscription) };
      inline Session::InputAudioTranscription getInputAudioTranscription() { DARABONBA_PTR_GET(inputAudioTranscription_, Session::InputAudioTranscription) };
      inline Session& setInputAudioTranscription(const Session::InputAudioTranscription & inputAudioTranscription) { DARABONBA_PTR_SET_VALUE(inputAudioTranscription_, inputAudioTranscription) };
      inline Session& setInputAudioTranscription(Session::InputAudioTranscription && inputAudioTranscription) { DARABONBA_PTR_SET_RVALUE(inputAudioTranscription_, inputAudioTranscription) };


    protected:
      shared_ptr<string> mode_ {};
      shared_ptr<vector<string>> languagePair_ {};
      shared_ptr<Session::InputAudio> inputAudio_ {};
      shared_ptr<Session::Output> output_ {};
      shared_ptr<Session::Transcription> transcription_ {};
      shared_ptr<Session::TurnDetection> turnDetection_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> object_ {};
      shared_ptr<vector<string>> modalities_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<string> inputAudioFormat_ {};
      shared_ptr<int32_t> sampleRate_ {};
      shared_ptr<string> outputAudioFormat_ {};
      shared_ptr<Session::Translation> translation_ {};
      shared_ptr<bool> enableVoiceClone_ {};
      shared_ptr<Session::VoiceCloneOptions> voiceCloneOptions_ {};
      // 单向回执固定包含 enabled、language；双向使用 transcription 字段。内部转写 model 不对客回显。
      shared_ptr<Session::InputAudioTranscription> inputAudioTranscription_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->causedBy_ == nullptr && this->warnings_ == nullptr && this->session_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionUpdated& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionUpdated& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SessionUpdated& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // causedBy Field Functions 
    bool hasCausedBy() const { return this->causedBy_ != nullptr;};
    void deleteCausedBy() { this->causedBy_ = nullptr;};
    inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
    inline SessionUpdated& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<string> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<string>) };
    inline vector<string> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<string>) };
    inline SessionUpdated& setWarnings(const vector<string> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline SessionUpdated& setWarnings(vector<string> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const SessionUpdated::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, SessionUpdated::Session) };
    inline SessionUpdated::Session getSession() { DARABONBA_PTR_GET(session_, SessionUpdated::Session) };
    inline SessionUpdated& setSession(const SessionUpdated::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline SessionUpdated& setSession(SessionUpdated::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> causedBy_ {};
    shared_ptr<vector<string>> warnings_ {};
    shared_ptr<SessionUpdated::Session> session_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
