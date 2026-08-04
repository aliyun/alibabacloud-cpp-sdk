// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetDeviceStatusDetailResponseBody() = default ;
    GetDeviceStatusDetailResponseBody(const GetDeviceStatusDetailResponseBody &) = default ;
    GetDeviceStatusDetailResponseBody(GetDeviceStatusDetailResponseBody &&) = default ;
    GetDeviceStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusDetailResponseBody() = default ;
    GetDeviceStatusDetailResponseBody& operator=(const GetDeviceStatusDetailResponseBody &) = default ;
    GetDeviceStatusDetailResponseBody& operator=(GetDeviceStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Player, player_);
        DARABONBA_PTR_TO_JSON(Power, power_);
        DARABONBA_PTR_TO_JSON(Speaker, speaker_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Player, player_);
        DARABONBA_PTR_FROM_JSON(Power, power_);
        DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Speaker : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Speaker& obj) { 
          DARABONBA_PTR_TO_JSON(Muted, muted_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, Speaker& obj) { 
          DARABONBA_PTR_FROM_JSON(Muted, muted_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        Speaker() = default ;
        Speaker(const Speaker &) = default ;
        Speaker(Speaker &&) = default ;
        Speaker(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Speaker() = default ;
        Speaker& operator=(const Speaker &) = default ;
        Speaker& operator=(Speaker &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->muted_ == nullptr
        && this->volume_ == nullptr; };
        // muted Field Functions 
        bool hasMuted() const { return this->muted_ != nullptr;};
        void deleteMuted() { this->muted_ = nullptr;};
        inline bool getMuted() const { DARABONBA_PTR_GET_DEFAULT(muted_, false) };
        inline Speaker& setMuted(bool muted) { DARABONBA_PTR_SET_VALUE(muted_, muted) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
        inline Speaker& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        // Is muted
        shared_ptr<bool> muted_ {};
        // Current volume value
        shared_ptr<int32_t> volume_ {};
      };

      class Power : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Power& obj) { 
          DARABONBA_PTR_TO_JSON(Quantity, quantity_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Power& obj) { 
          DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Power() = default ;
        Power(const Power &) = default ;
        Power(Power &&) = default ;
        Power(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Power() = default ;
        Power& operator=(const Power &) = default ;
        Power& operator=(Power &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quantity_ == nullptr
        && this->status_ == nullptr; };
        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
        inline Power& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Power& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Battery value
        shared_ptr<int32_t> quantity_ {};
        // Power status
        shared_ptr<string> status_ {};
      };

      class Player : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Player& obj) { 
          DARABONBA_PTR_TO_JSON(AudioAlbum, audioAlbum_);
          DARABONBA_PTR_TO_JSON(AudioAnchor, audioAnchor_);
          DARABONBA_PTR_TO_JSON(AudioExt, audioExt_);
          DARABONBA_PTR_TO_JSON(AudioId, audioId_);
          DARABONBA_PTR_TO_JSON(AudioLength, audioLength_);
          DARABONBA_PTR_TO_JSON(AudioName, audioName_);
          DARABONBA_PTR_TO_JSON(AudioSource, audioSource_);
          DARABONBA_PTR_TO_JSON(AudioUrl, audioUrl_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Player& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioAlbum, audioAlbum_);
          DARABONBA_PTR_FROM_JSON(AudioAnchor, audioAnchor_);
          DARABONBA_PTR_FROM_JSON(AudioExt, audioExt_);
          DARABONBA_PTR_FROM_JSON(AudioId, audioId_);
          DARABONBA_PTR_FROM_JSON(AudioLength, audioLength_);
          DARABONBA_PTR_FROM_JSON(AudioName, audioName_);
          DARABONBA_PTR_FROM_JSON(AudioSource, audioSource_);
          DARABONBA_PTR_FROM_JSON(AudioUrl, audioUrl_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Player() = default ;
        Player(const Player &) = default ;
        Player(Player &&) = default ;
        Player(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Player() = default ;
        Player& operator=(const Player &) = default ;
        Player& operator=(Player &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioAlbum_ == nullptr
        && this->audioAnchor_ == nullptr && this->audioExt_ == nullptr && this->audioId_ == nullptr && this->audioLength_ == nullptr && this->audioName_ == nullptr
        && this->audioSource_ == nullptr && this->audioUrl_ == nullptr && this->format_ == nullptr && this->progress_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->timestamp_ == nullptr; };
        // audioAlbum Field Functions 
        bool hasAudioAlbum() const { return this->audioAlbum_ != nullptr;};
        void deleteAudioAlbum() { this->audioAlbum_ = nullptr;};
        inline string getAudioAlbum() const { DARABONBA_PTR_GET_DEFAULT(audioAlbum_, "") };
        inline Player& setAudioAlbum(string audioAlbum) { DARABONBA_PTR_SET_VALUE(audioAlbum_, audioAlbum) };


        // audioAnchor Field Functions 
        bool hasAudioAnchor() const { return this->audioAnchor_ != nullptr;};
        void deleteAudioAnchor() { this->audioAnchor_ = nullptr;};
        inline string getAudioAnchor() const { DARABONBA_PTR_GET_DEFAULT(audioAnchor_, "") };
        inline Player& setAudioAnchor(string audioAnchor) { DARABONBA_PTR_SET_VALUE(audioAnchor_, audioAnchor) };


        // audioExt Field Functions 
        bool hasAudioExt() const { return this->audioExt_ != nullptr;};
        void deleteAudioExt() { this->audioExt_ = nullptr;};
        inline string getAudioExt() const { DARABONBA_PTR_GET_DEFAULT(audioExt_, "") };
        inline Player& setAudioExt(string audioExt) { DARABONBA_PTR_SET_VALUE(audioExt_, audioExt) };


        // audioId Field Functions 
        bool hasAudioId() const { return this->audioId_ != nullptr;};
        void deleteAudioId() { this->audioId_ = nullptr;};
        inline string getAudioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, "") };
        inline Player& setAudioId(string audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


        // audioLength Field Functions 
        bool hasAudioLength() const { return this->audioLength_ != nullptr;};
        void deleteAudioLength() { this->audioLength_ = nullptr;};
        inline string getAudioLength() const { DARABONBA_PTR_GET_DEFAULT(audioLength_, "") };
        inline Player& setAudioLength(string audioLength) { DARABONBA_PTR_SET_VALUE(audioLength_, audioLength) };


        // audioName Field Functions 
        bool hasAudioName() const { return this->audioName_ != nullptr;};
        void deleteAudioName() { this->audioName_ = nullptr;};
        inline string getAudioName() const { DARABONBA_PTR_GET_DEFAULT(audioName_, "") };
        inline Player& setAudioName(string audioName) { DARABONBA_PTR_SET_VALUE(audioName_, audioName) };


        // audioSource Field Functions 
        bool hasAudioSource() const { return this->audioSource_ != nullptr;};
        void deleteAudioSource() { this->audioSource_ = nullptr;};
        inline string getAudioSource() const { DARABONBA_PTR_GET_DEFAULT(audioSource_, "") };
        inline Player& setAudioSource(string audioSource) { DARABONBA_PTR_SET_VALUE(audioSource_, audioSource) };


        // audioUrl Field Functions 
        bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
        void deleteAudioUrl() { this->audioUrl_ = nullptr;};
        inline string getAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
        inline Player& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Player& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline Player& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Player& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Player& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Player& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // Song Album
        shared_ptr<string> audioAlbum_ {};
        // Artist
        shared_ptr<string> audioAnchor_ {};
        // Extension Information
        shared_ptr<string> audioExt_ {};
        // Audio ID
        shared_ptr<string> audioId_ {};
        // Song length, in seconds
        shared_ptr<string> audioLength_ {};
        // Song Name
        shared_ptr<string> audioName_ {};
        // Song Source (xiami)
        shared_ptr<string> audioSource_ {};
        // Song URL
        shared_ptr<string> audioUrl_ {};
        // Song Type (mp3)
        shared_ptr<string> format_ {};
        // Playback progress
        shared_ptr<string> progress_ {};
        // Playback Source (cloud)
        shared_ptr<string> source_ {};
        // Playback status, pause
        shared_ptr<string> status_ {};
        // Reporting Time
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->player_ == nullptr
        && this->power_ == nullptr && this->speaker_ == nullptr; };
      // player Field Functions 
      bool hasPlayer() const { return this->player_ != nullptr;};
      void deletePlayer() { this->player_ = nullptr;};
      inline const Result::Player & getPlayer() const { DARABONBA_PTR_GET_CONST(player_, Result::Player) };
      inline Result::Player getPlayer() { DARABONBA_PTR_GET(player_, Result::Player) };
      inline Result& setPlayer(const Result::Player & player) { DARABONBA_PTR_SET_VALUE(player_, player) };
      inline Result& setPlayer(Result::Player && player) { DARABONBA_PTR_SET_RVALUE(player_, player) };


      // power Field Functions 
      bool hasPower() const { return this->power_ != nullptr;};
      void deletePower() { this->power_ = nullptr;};
      inline const Result::Power & getPower() const { DARABONBA_PTR_GET_CONST(power_, Result::Power) };
      inline Result::Power getPower() { DARABONBA_PTR_GET(power_, Result::Power) };
      inline Result& setPower(const Result::Power & power) { DARABONBA_PTR_SET_VALUE(power_, power) };
      inline Result& setPower(Result::Power && power) { DARABONBA_PTR_SET_RVALUE(power_, power) };


      // speaker Field Functions 
      bool hasSpeaker() const { return this->speaker_ != nullptr;};
      void deleteSpeaker() { this->speaker_ = nullptr;};
      inline const Result::Speaker & getSpeaker() const { DARABONBA_PTR_GET_CONST(speaker_, Result::Speaker) };
      inline Result::Speaker getSpeaker() { DARABONBA_PTR_GET(speaker_, Result::Speaker) };
      inline Result& setSpeaker(const Result::Speaker & speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };
      inline Result& setSpeaker(Result::Speaker && speaker) { DARABONBA_PTR_SET_RVALUE(speaker_, speaker) };


    protected:
      // Player information
      shared_ptr<Result::Player> player_ {};
      // Battery information
      shared_ptr<Result::Power> power_ {};
      // Volume information
      shared_ptr<Result::Speaker> speaker_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDeviceStatusDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeviceStatusDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDeviceStatusDetailResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetDeviceStatusDetailResponseBody::Result) };
    inline GetDeviceStatusDetailResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetDeviceStatusDetailResponseBody::Result) };
    inline GetDeviceStatusDetailResponseBody& setResult(const GetDeviceStatusDetailResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDeviceStatusDetailResponseBody& setResult(GetDeviceStatusDetailResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Returned error code. 200 indicates that the invocation succeeded.
    shared_ptr<int32_t> code_ {};
    // Return Result of invoking this API.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned detailed information.
    shared_ptr<GetDeviceStatusDetailResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
