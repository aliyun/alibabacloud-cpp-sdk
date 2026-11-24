// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONUPDATE_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONUPDATE_HPP_
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
  class SessionUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session, session_);
    };
    friend void from_json(const Darabonba::Json& j, SessionUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session, session_);
    };
    SessionUpdate() = default ;
    SessionUpdate(const SessionUpdate &) = default ;
    SessionUpdate(SessionUpdate &&) = default ;
    SessionUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionUpdate() = default ;
    SessionUpdate& operator=(const SessionUpdate &) = default ;
    SessionUpdate& operator=(SessionUpdate &&) = default ;
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
        DARABONBA_PTR_TO_JSON(modalities, modalities_);
        DARABONBA_PTR_TO_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_TO_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_TO_JSON(input_audio_transcription, inputAudioTranscription_);
        DARABONBA_PTR_TO_JSON(translation, translation_);
        DARABONBA_PTR_TO_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_TO_JSON(voice, voice_);
        DARABONBA_PTR_TO_JSON(enable_voice_clone, enableVoiceClone_);
        DARABONBA_PTR_TO_JSON(voice_clone_options, voiceCloneOptions_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(language_pair, languagePair_);
        DARABONBA_PTR_FROM_JSON(input_audio, inputAudio_);
        DARABONBA_PTR_FROM_JSON(output, output_);
        DARABONBA_PTR_FROM_JSON(transcription, transcription_);
        DARABONBA_PTR_FROM_JSON(turn_detection, turnDetection_);
        DARABONBA_PTR_FROM_JSON(modalities, modalities_);
        DARABONBA_PTR_FROM_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(input_audio_transcription, inputAudioTranscription_);
        DARABONBA_PTR_FROM_JSON(translation, translation_);
        DARABONBA_PTR_FROM_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(voice, voice_);
        DARABONBA_PTR_FROM_JSON(enable_voice_clone, enableVoiceClone_);
        DARABONBA_PTR_FROM_JSON(voice_clone_options, voiceCloneOptions_);
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
        // never 使用已有复刻音色；once 会话开始时复刻一次；always 每次输出前复刻。once/always 必须设置 voice=default。
        shared_ptr<string> frequency_ {};
      };

      class Translation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translation& obj) { 
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(same_language_skip_options, sameLanguageSkipOptions_);
          DARABONBA_PTR_TO_JSON(corpus, corpus_);
        };
        friend void from_json(const Darabonba::Json& j, Translation& obj) { 
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(same_language_skip_options, sameLanguageSkipOptions_);
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
          // 动态 key 为源语言词汇，value 为目标语言译词；不固定热词名称，动态键映射保留需网关实测。
          shared_ptr<map<string, string>> phrases_ {};
        };

        class SameLanguageSkipOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SameLanguageSkipOptions& obj) { 
            DARABONBA_PTR_TO_JSON(skip_text, skipText_);
            DARABONBA_PTR_TO_JSON(skip_audio, skipAudio_);
          };
          friend void from_json(const Darabonba::Json& j, SameLanguageSkipOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(skip_text, skipText_);
            DARABONBA_PTR_FROM_JSON(skip_audio, skipAudio_);
          };
          SameLanguageSkipOptions() = default ;
          SameLanguageSkipOptions(const SameLanguageSkipOptions &) = default ;
          SameLanguageSkipOptions(SameLanguageSkipOptions &&) = default ;
          SameLanguageSkipOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SameLanguageSkipOptions() = default ;
          SameLanguageSkipOptions& operator=(const SameLanguageSkipOptions &) = default ;
          SameLanguageSkipOptions& operator=(SameLanguageSkipOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->skipText_ == nullptr
        && this->skipAudio_ == nullptr; };
          // skipText Field Functions 
          bool hasSkipText() const { return this->skipText_ != nullptr;};
          void deleteSkipText() { this->skipText_ = nullptr;};
          inline bool getSkipText() const { DARABONBA_PTR_GET_DEFAULT(skipText_, false) };
          inline SameLanguageSkipOptions& setSkipText(bool skipText) { DARABONBA_PTR_SET_VALUE(skipText_, skipText) };


          // skipAudio Field Functions 
          bool hasSkipAudio() const { return this->skipAudio_ != nullptr;};
          void deleteSkipAudio() { this->skipAudio_ = nullptr;};
          inline bool getSkipAudio() const { DARABONBA_PTR_GET_DEFAULT(skipAudio_, false) };
          inline SameLanguageSkipOptions& setSkipAudio(bool skipAudio) { DARABONBA_PTR_SET_VALUE(skipAudio_, skipAudio) };


        protected:
          shared_ptr<bool> skipText_ {};
          shared_ptr<bool> skipAudio_ {};
        };

        virtual bool empty() const override { return this->language_ == nullptr
        && this->sameLanguageSkipOptions_ == nullptr && this->corpus_ == nullptr; };
        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Translation& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // sameLanguageSkipOptions Field Functions 
        bool hasSameLanguageSkipOptions() const { return this->sameLanguageSkipOptions_ != nullptr;};
        void deleteSameLanguageSkipOptions() { this->sameLanguageSkipOptions_ = nullptr;};
        inline const Translation::SameLanguageSkipOptions & getSameLanguageSkipOptions() const { DARABONBA_PTR_GET_CONST(sameLanguageSkipOptions_, Translation::SameLanguageSkipOptions) };
        inline Translation::SameLanguageSkipOptions getSameLanguageSkipOptions() { DARABONBA_PTR_GET(sameLanguageSkipOptions_, Translation::SameLanguageSkipOptions) };
        inline Translation& setSameLanguageSkipOptions(const Translation::SameLanguageSkipOptions & sameLanguageSkipOptions) { DARABONBA_PTR_SET_VALUE(sameLanguageSkipOptions_, sameLanguageSkipOptions) };
        inline Translation& setSameLanguageSkipOptions(Translation::SameLanguageSkipOptions && sameLanguageSkipOptions) { DARABONBA_PTR_SET_RVALUE(sameLanguageSkipOptions_, sameLanguageSkipOptions) };


        // corpus Field Functions 
        bool hasCorpus() const { return this->corpus_ != nullptr;};
        void deleteCorpus() { this->corpus_ = nullptr;};
        inline const Translation::Corpus & getCorpus() const { DARABONBA_PTR_GET_CONST(corpus_, Translation::Corpus) };
        inline Translation::Corpus getCorpus() { DARABONBA_PTR_GET(corpus_, Translation::Corpus) };
        inline Translation& setCorpus(const Translation::Corpus & corpus) { DARABONBA_PTR_SET_VALUE(corpus_, corpus) };
        inline Translation& setCorpus(Translation::Corpus && corpus) { DARABONBA_PTR_SET_RVALUE(corpus_, corpus) };


      protected:
        // 例如 en，缺省时模型默认 en；具体支持范围由模型校验。
        shared_ptr<string> language_ {};
        // 仅单向 Qwen 3.5 使用，目标语种为 zh 或 en 时生效；源语种等于目标语种时按设置跳过输出。
        shared_ptr<Translation::SameLanguageSkipOptions> sameLanguageSkipOptions_ {};
        // 仅单向原生协议使用；与双向不支持的 glossary 字段不同。
        shared_ptr<Translation::Corpus> corpus_ {};
      };

      class InputAudioTranscription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputAudioTranscription& obj) { 
          DARABONBA_PTR_TO_JSON(language, language_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, InputAudioTranscription& obj) { 
          DARABONBA_PTR_FROM_JSON(language, language_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
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
        virtual bool empty() const override { return this->language_ == nullptr
        && this->enabled_ == nullptr; };
        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline InputAudioTranscription& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline InputAudioTranscription& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // 默认 auto，省略或 auto 表示自动识别。开启时保留指定的受支持语种；关闭时忽略本字段。此字段不是翻译目标语言。
        shared_ptr<string> language_ {};
        // 默认 true。false 时忽略 language，不影响译文和译音。
        shared_ptr<bool> enabled_ {};
      };

      class TurnDetection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TurnDetection& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(threshold, threshold_);
          DARABONBA_PTR_TO_JSON(silence_duration_ms, silenceDurationMs_);
        };
        friend void from_json(const Darabonba::Json& j, TurnDetection& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(silence_duration_ms, silenceDurationMs_);
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
        && this->threshold_ == nullptr && this->silenceDurationMs_ == nullptr; };
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


      protected:
        // manual 对象仅用于双向；单向手动模式使用整个 turn_detection 为 null。
        shared_ptr<string> type_ {};
        // 范围 -1 到 1，后端缺省0.2。
        shared_ptr<float> threshold_ {};
        // 范围200到6000，后端缺省1000。
        shared_ptr<int32_t> silenceDurationMs_ {};
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
        // 省略时后端为 true；关闭输出不会关闭内部语种识别。
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
            // 非空且不能含控制字符，最长128字符；具体音色支持范围由模型校验。
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
          // 仅支持 preset；不支持 clone_frequency。id 省略或为 default 时后端使用 Tina。
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
        // 必须包含 text，可加 audio；不可重复，不能只有 audio。允许顺序反转，后端规范化为 text、audio。
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
        && this->modalities_ == nullptr && this->sampleRate_ == nullptr && this->inputAudioFormat_ == nullptr && this->inputAudioTranscription_ == nullptr && this->translation_ == nullptr
        && this->outputAudioFormat_ == nullptr && this->voice_ == nullptr && this->enableVoiceClone_ == nullptr && this->voiceCloneOptions_ == nullptr; };
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


      // modalities Field Functions 
      bool hasModalities() const { return this->modalities_ != nullptr;};
      void deleteModalities() { this->modalities_ = nullptr;};
      inline const vector<string> & getModalities() const { DARABONBA_PTR_GET_CONST(modalities_, vector<string>) };
      inline vector<string> getModalities() { DARABONBA_PTR_GET(modalities_, vector<string>) };
      inline Session& setModalities(const vector<string> & modalities) { DARABONBA_PTR_SET_VALUE(modalities_, modalities) };
      inline Session& setModalities(vector<string> && modalities) { DARABONBA_PTR_SET_RVALUE(modalities_, modalities) };


      // sampleRate Field Functions 
      bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
      void deleteSampleRate() { this->sampleRate_ = nullptr;};
      inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
      inline Session& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      // inputAudioFormat Field Functions 
      bool hasInputAudioFormat() const { return this->inputAudioFormat_ != nullptr;};
      void deleteInputAudioFormat() { this->inputAudioFormat_ = nullptr;};
      inline string getInputAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(inputAudioFormat_, "") };
      inline Session& setInputAudioFormat(string inputAudioFormat) { DARABONBA_PTR_SET_VALUE(inputAudioFormat_, inputAudioFormat) };


      // inputAudioTranscription Field Functions 
      bool hasInputAudioTranscription() const { return this->inputAudioTranscription_ != nullptr;};
      void deleteInputAudioTranscription() { this->inputAudioTranscription_ = nullptr;};
      inline const Session::InputAudioTranscription & getInputAudioTranscription() const { DARABONBA_PTR_GET_CONST(inputAudioTranscription_, Session::InputAudioTranscription) };
      inline Session::InputAudioTranscription getInputAudioTranscription() { DARABONBA_PTR_GET(inputAudioTranscription_, Session::InputAudioTranscription) };
      inline Session& setInputAudioTranscription(const Session::InputAudioTranscription & inputAudioTranscription) { DARABONBA_PTR_SET_VALUE(inputAudioTranscription_, inputAudioTranscription) };
      inline Session& setInputAudioTranscription(Session::InputAudioTranscription && inputAudioTranscription) { DARABONBA_PTR_SET_RVALUE(inputAudioTranscription_, inputAudioTranscription) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const Session::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, Session::Translation) };
      inline Session::Translation getTranslation() { DARABONBA_PTR_GET(translation_, Session::Translation) };
      inline Session& setTranslation(const Session::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline Session& setTranslation(Session::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


      // outputAudioFormat Field Functions 
      bool hasOutputAudioFormat() const { return this->outputAudioFormat_ != nullptr;};
      void deleteOutputAudioFormat() { this->outputAudioFormat_ = nullptr;};
      inline string getOutputAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(outputAudioFormat_, "") };
      inline Session& setOutputAudioFormat(string outputAudioFormat) { DARABONBA_PTR_SET_VALUE(outputAudioFormat_, outputAudioFormat) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline Session& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


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


    protected:
      // 仅双向使用；可省略，提供时必须为 bidirectional，不能切换模式。
      shared_ptr<string> mode_ {};
      // 仅双向使用；可省略，提供时必须与创建时内容及顺序一致。
      shared_ptr<vector<string>> languagePair_ {};
      // 仅双向使用；省略时后端使用 pcm_s16le、16000Hz、单声道，不接受 null。
      shared_ptr<Session::InputAudio> inputAudio_ {};
      // 仅双向使用；省略时后端输出 text 和 audio。
      shared_ptr<Session::Output> output_ {};
      shared_ptr<Session::Transcription> transcription_ {};
      // 单向 manual 必须显式传 null，VAD 使用 server_vad 对象。双向不接受 null，manual 使用对象；省略时后端为 server_vad。nullable 仅兼容单向，模式约束交后端校验。
      shared_ptr<Session::TurnDetection> turnDetection_ {};
      // 仅单向使用；支持 text 或 text 与 audio，省略时模型默认 text 与 audio。双向使用 output.modalities。
      shared_ptr<vector<string>> modalities_ {};
      // 仅单向使用；须与输入音频一致，支持8000或16000。
      shared_ptr<int32_t> sampleRate_ {};
      // 仅单向原生协议使用；现有冒烟客户端使用 pcm，opus 尚未在本次实测。双向仅支持 pcm_s16le。
      shared_ptr<string> inputAudioFormat_ {};
      // 仅单向使用，仅支持 enabled、language。对象省略或为空时默认开启、自动识别。enabled=false 时忽略 language，关闭原文转写；model 不再接受。默认值由后端补齐，网关不注入。
      shared_ptr<Session::InputAudioTranscription> inputAudioTranscription_ {};
      // 仅单向原生协议使用；双向目标语言来自创建时的语言对，不接受本字段。
      shared_ptr<Session::Translation> translation_ {};
      // 仅单向译音使用，当前原生协议只支持 pcm。
      shared_ptr<string> outputAudioFormat_ {};
      // 未启用复刻时使用预设音色，模型缺省为 Tina。启用复刻且 frequency 为 once/always 时必须为 default；never 时须为已有复刻音色ID。双向使用 output.audio.voice.id。
      shared_ptr<string> voice_ {};
      // 仅单向原生协议使用，模型默认 false；开启时联动 voice 和 voice_clone_options，实际可用性由上游校验。本次未实测复刻，双向不支持。
      shared_ptr<bool> enableVoiceClone_ {};
      // 仅 enable_voice_clone=true 时生效；双向不支持本字段。
      shared_ptr<Session::VoiceCloneOptions> voiceCloneOptions_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->session_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionUpdate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionUpdate& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const SessionUpdate::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, SessionUpdate::Session) };
    inline SessionUpdate::Session getSession() { DARABONBA_PTR_GET(session_, SessionUpdate::Session) };
    inline SessionUpdate& setSession(const SessionUpdate::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline SessionUpdate& setSession(SessionUpdate::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    // This parameter is required.
    shared_ptr<string> type_ {};
    // 可省略；提供时必须为非空、非纯空白字符串。
    shared_ptr<string> eventId_ {};
    // 仅填写当前模式适用字段。双向必须提供 session 对象，仅允许输入前更新；单向按 Qwen 3.5 原生契约可省略 session。
    // 双向不支持 glossary、声音复刻及单向平铺配置，模式、语言对、条件必填及能力校验由后端执行。网关不补默认值。
    // 单向手动提交、关闭转写：{"modalities":["text"],"sample_rate":16000,"input_audio_format":"pcm","input_audio_transcription":{"enabled":false},"translation":{"language":"en"},"turn_detection":null}
    // 单向 VAD、译音与转写：{"modalities":["text","audio"],"sample_rate":16000,"input_audio_format":"pcm","input_audio_transcription":{"enabled":true,"language":"auto"},"translation":{"language":"en"},"turn_detection":{"type":"server_vad","threshold":0.2,"silence_duration_ms":1000},"output_audio_format":"pcm","voice":"Tina","enable_voice_clone":false}
    // 双向手动提交、仅译文：{"input_audio":{"format":"pcm_s16le","sample_rate":16000,"channels":1},"output":{"modalities":["text"]},"transcription":{"enabled":false},"turn_detection":{"type":"manual"}}
    // 双向 VAD、译文与译音：{"input_audio":{"format":"pcm_s16le","sample_rate":16000,"channels":1},"output":{"modalities":["text","audio"],"audio":{"format":"pcm_s16le","sample_rate":24000,"channels":1,"voice":{"mode":"preset","id":"Tina"}}},"transcription":{"enabled":true},"turn_detection":{"type":"server_vad","threshold":0.2,"silence_duration_ms":1000}}
    // 单向扩展字段依据百炼 live-translator-client-events；新增原生字段须同步登记。显式 null 和热词动态键的映射保留行为仍需网关实测。
    shared_ptr<SessionUpdate::Session> session_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
