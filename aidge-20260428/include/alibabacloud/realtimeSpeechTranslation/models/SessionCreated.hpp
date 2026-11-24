// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONCREATED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_SESSIONCREATED_HPP_
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
  class SessionCreated : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionCreated& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_TO_JSON(session, session_);
    };
    friend void from_json(const Darabonba::Json& j, SessionCreated& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_FROM_JSON(session, session_);
    };
    SessionCreated() = default ;
    SessionCreated(const SessionCreated &) = default ;
    SessionCreated(SessionCreated &&) = default ;
    SessionCreated(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionCreated() = default ;
    SessionCreated& operator=(const SessionCreated &) = default ;
    SessionCreated& operator=(SessionCreated &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Session : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Session& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(object, object_);
        DARABONBA_PTR_TO_JSON(modalities, modalities_);
        DARABONBA_PTR_TO_JSON(voice, voice_);
        DARABONBA_PTR_TO_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_TO_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_TO_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_TO_JSON(turn_detection, turnDetection_);
        DARABONBA_PTR_TO_JSON(translation, translation_);
      };
      friend void from_json(const Darabonba::Json& j, Session& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(object, object_);
        DARABONBA_PTR_FROM_JSON(modalities, modalities_);
        DARABONBA_PTR_FROM_JSON(voice, voice_);
        DARABONBA_PTR_FROM_JSON(input_audio_format, inputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(sample_rate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(output_audio_format, outputAudioFormat_);
        DARABONBA_PTR_FROM_JSON(turn_detection, turnDetection_);
        DARABONBA_PTR_FROM_JSON(translation, translation_);
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
        shared_ptr<string> type_ {};
        shared_ptr<float> threshold_ {};
        shared_ptr<int32_t> silenceDurationMs_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->object_ == nullptr && this->modalities_ == nullptr && this->voice_ == nullptr && this->inputAudioFormat_ == nullptr && this->sampleRate_ == nullptr
        && this->outputAudioFormat_ == nullptr && this->turnDetection_ == nullptr && this->translation_ == nullptr; };
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


      // turnDetection Field Functions 
      bool hasTurnDetection() const { return this->turnDetection_ != nullptr;};
      void deleteTurnDetection() { this->turnDetection_ = nullptr;};
      inline const Session::TurnDetection & getTurnDetection() const { DARABONBA_PTR_GET_CONST(turnDetection_, Session::TurnDetection) };
      inline Session::TurnDetection getTurnDetection() { DARABONBA_PTR_GET(turnDetection_, Session::TurnDetection) };
      inline Session& setTurnDetection(const Session::TurnDetection & turnDetection) { DARABONBA_PTR_SET_VALUE(turnDetection_, turnDetection) };
      inline Session& setTurnDetection(Session::TurnDetection && turnDetection) { DARABONBA_PTR_SET_RVALUE(turnDetection_, turnDetection) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const Session::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, Session::Translation) };
      inline Session::Translation getTranslation() { DARABONBA_PTR_GET(translation_, Session::Translation) };
      inline Session& setTranslation(const Session::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline Session& setTranslation(Session::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> object_ {};
      shared_ptr<vector<string>> modalities_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<string> inputAudioFormat_ {};
      shared_ptr<int32_t> sampleRate_ {};
      shared_ptr<string> outputAudioFormat_ {};
      shared_ptr<Session::TurnDetection> turnDetection_ {};
      shared_ptr<Session::Translation> translation_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->causedBy_ == nullptr && this->createdAt_ == nullptr && this->expiresAt_ == nullptr
        && this->session_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SessionCreated& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline SessionCreated& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SessionCreated& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // causedBy Field Functions 
    bool hasCausedBy() const { return this->causedBy_ != nullptr;};
    void deleteCausedBy() { this->causedBy_ = nullptr;};
    inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
    inline SessionCreated& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline SessionCreated& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
    inline SessionCreated& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // session Field Functions 
    bool hasSession() const { return this->session_ != nullptr;};
    void deleteSession() { this->session_ = nullptr;};
    inline const SessionCreated::Session & getSession() const { DARABONBA_PTR_GET_CONST(session_, SessionCreated::Session) };
    inline SessionCreated::Session getSession() { DARABONBA_PTR_GET(session_, SessionCreated::Session) };
    inline SessionCreated& setSession(const SessionCreated::Session & session) { DARABONBA_PTR_SET_VALUE(session_, session) };
    inline SessionCreated& setSession(SessionCreated::Session && session) { DARABONBA_PTR_SET_RVALUE(session_, session) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> causedBy_ {};
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<int64_t> expiresAt_ {};
    shared_ptr<SessionCreated::Session> session_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
