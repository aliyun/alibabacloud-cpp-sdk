// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PreviousAndNextControlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviousAndNextControlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PreviousAndNextControlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PreviousAndNextControlResponseBody() = default ;
    PreviousAndNextControlResponseBody(const PreviousAndNextControlResponseBody &) = default ;
    PreviousAndNextControlResponseBody(PreviousAndNextControlResponseBody &&) = default ;
    PreviousAndNextControlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviousAndNextControlResponseBody() = default ;
    PreviousAndNextControlResponseBody& operator=(const PreviousAndNextControlResponseBody &) = default ;
    PreviousAndNextControlResponseBody& operator=(PreviousAndNextControlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumName, albumName_);
        DARABONBA_PTR_TO_JSON(AlbumRawId, albumRawId_);
        DARABONBA_PTR_TO_JSON(AudioLength, audioLength_);
        DARABONBA_PTR_TO_JSON(Copyright, copyright_);
        DARABONBA_PTR_TO_JSON(Cover, cover_);
        DARABONBA_PTR_TO_JSON(DefaultPlayOrder, defaultPlayOrder_);
        DARABONBA_PTR_TO_JSON(ItemUrl, itemUrl_);
        DARABONBA_PTR_TO_JSON(Liked, liked_);
        DARABONBA_PTR_TO_JSON(LyricUrl, lyricUrl_);
        DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
        DARABONBA_PTR_TO_JSON(Pos, pos_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RawId, rawId_);
        DARABONBA_PTR_TO_JSON(Singer, singer_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Valid, valid_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumName, albumName_);
        DARABONBA_PTR_FROM_JSON(AlbumRawId, albumRawId_);
        DARABONBA_PTR_FROM_JSON(AudioLength, audioLength_);
        DARABONBA_PTR_FROM_JSON(Copyright, copyright_);
        DARABONBA_PTR_FROM_JSON(Cover, cover_);
        DARABONBA_PTR_FROM_JSON(DefaultPlayOrder, defaultPlayOrder_);
        DARABONBA_PTR_FROM_JSON(ItemUrl, itemUrl_);
        DARABONBA_PTR_FROM_JSON(Liked, liked_);
        DARABONBA_PTR_FROM_JSON(LyricUrl, lyricUrl_);
        DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
        DARABONBA_PTR_FROM_JSON(Pos, pos_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RawId, rawId_);
        DARABONBA_PTR_FROM_JSON(Singer, singer_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Valid, valid_);
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
      class Cover : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cover& obj) { 
          DARABONBA_PTR_TO_JSON(CanResize, canResize_);
          DARABONBA_PTR_TO_JSON(Img, img_);
          DARABONBA_PTR_TO_JSON(Large, large_);
          DARABONBA_PTR_TO_JSON(Mediam, mediam_);
          DARABONBA_PTR_TO_JSON(Medium, medium_);
          DARABONBA_PTR_TO_JSON(Small, small_);
        };
        friend void from_json(const Darabonba::Json& j, Cover& obj) { 
          DARABONBA_PTR_FROM_JSON(CanResize, canResize_);
          DARABONBA_PTR_FROM_JSON(Img, img_);
          DARABONBA_PTR_FROM_JSON(Large, large_);
          DARABONBA_PTR_FROM_JSON(Mediam, mediam_);
          DARABONBA_PTR_FROM_JSON(Medium, medium_);
          DARABONBA_PTR_FROM_JSON(Small, small_);
        };
        Cover() = default ;
        Cover(const Cover &) = default ;
        Cover(Cover &&) = default ;
        Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cover() = default ;
        Cover& operator=(const Cover &) = default ;
        Cover& operator=(Cover &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canResize_ == nullptr
        && this->img_ == nullptr && this->large_ == nullptr && this->mediam_ == nullptr && this->medium_ == nullptr && this->small_ == nullptr; };
        // canResize Field Functions 
        bool hasCanResize() const { return this->canResize_ != nullptr;};
        void deleteCanResize() { this->canResize_ = nullptr;};
        inline bool getCanResize() const { DARABONBA_PTR_GET_DEFAULT(canResize_, false) };
        inline Cover& setCanResize(bool canResize) { DARABONBA_PTR_SET_VALUE(canResize_, canResize) };


        // img Field Functions 
        bool hasImg() const { return this->img_ != nullptr;};
        void deleteImg() { this->img_ = nullptr;};
        inline string getImg() const { DARABONBA_PTR_GET_DEFAULT(img_, "") };
        inline Cover& setImg(string img) { DARABONBA_PTR_SET_VALUE(img_, img) };


        // large Field Functions 
        bool hasLarge() const { return this->large_ != nullptr;};
        void deleteLarge() { this->large_ = nullptr;};
        inline string getLarge() const { DARABONBA_PTR_GET_DEFAULT(large_, "") };
        inline Cover& setLarge(string large) { DARABONBA_PTR_SET_VALUE(large_, large) };


        // mediam Field Functions 
        bool hasMediam() const { return this->mediam_ != nullptr;};
        void deleteMediam() { this->mediam_ = nullptr;};
        inline string getMediam() const { DARABONBA_PTR_GET_DEFAULT(mediam_, "") };
        inline Cover& setMediam(string mediam) { DARABONBA_PTR_SET_VALUE(mediam_, mediam) };


        // medium Field Functions 
        bool hasMedium() const { return this->medium_ != nullptr;};
        void deleteMedium() { this->medium_ = nullptr;};
        inline string getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
        inline Cover& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


        // small Field Functions 
        bool hasSmall() const { return this->small_ != nullptr;};
        void deleteSmall() { this->small_ = nullptr;};
        inline string getSmall() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
        inline Cover& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


      protected:
        // Indicates whether OSS rules can be used for cropping.
        shared_ptr<bool> canResize_ {};
        // Default image
        shared_ptr<string> img_ {};
        // Large image
        shared_ptr<string> large_ {};
        // Medium image
        shared_ptr<string> mediam_ {};
        // Medium image
        shared_ptr<string> medium_ {};
        // Small image
        shared_ptr<string> small_ {};
      };

      virtual bool empty() const override { return this->albumName_ == nullptr
        && this->albumRawId_ == nullptr && this->audioLength_ == nullptr && this->copyright_ == nullptr && this->cover_ == nullptr && this->defaultPlayOrder_ == nullptr
        && this->itemUrl_ == nullptr && this->liked_ == nullptr && this->lyricUrl_ == nullptr && this->playMode_ == nullptr && this->pos_ == nullptr
        && this->progress_ == nullptr && this->rawId_ == nullptr && this->singer_ == nullptr && this->source_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr && this->valid_ == nullptr; };
      // albumName Field Functions 
      bool hasAlbumName() const { return this->albumName_ != nullptr;};
      void deleteAlbumName() { this->albumName_ = nullptr;};
      inline string getAlbumName() const { DARABONBA_PTR_GET_DEFAULT(albumName_, "") };
      inline Result& setAlbumName(string albumName) { DARABONBA_PTR_SET_VALUE(albumName_, albumName) };


      // albumRawId Field Functions 
      bool hasAlbumRawId() const { return this->albumRawId_ != nullptr;};
      void deleteAlbumRawId() { this->albumRawId_ = nullptr;};
      inline string getAlbumRawId() const { DARABONBA_PTR_GET_DEFAULT(albumRawId_, "") };
      inline Result& setAlbumRawId(string albumRawId) { DARABONBA_PTR_SET_VALUE(albumRawId_, albumRawId) };


      // audioLength Field Functions 
      bool hasAudioLength() const { return this->audioLength_ != nullptr;};
      void deleteAudioLength() { this->audioLength_ = nullptr;};
      inline int32_t getAudioLength() const { DARABONBA_PTR_GET_DEFAULT(audioLength_, 0) };
      inline Result& setAudioLength(int32_t audioLength) { DARABONBA_PTR_SET_VALUE(audioLength_, audioLength) };


      // copyright Field Functions 
      bool hasCopyright() const { return this->copyright_ != nullptr;};
      void deleteCopyright() { this->copyright_ = nullptr;};
      inline int32_t getCopyright() const { DARABONBA_PTR_GET_DEFAULT(copyright_, 0) };
      inline Result& setCopyright(int32_t copyright) { DARABONBA_PTR_SET_VALUE(copyright_, copyright) };


      // cover Field Functions 
      bool hasCover() const { return this->cover_ != nullptr;};
      void deleteCover() { this->cover_ = nullptr;};
      inline const Result::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, Result::Cover) };
      inline Result::Cover getCover() { DARABONBA_PTR_GET(cover_, Result::Cover) };
      inline Result& setCover(const Result::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
      inline Result& setCover(Result::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


      // defaultPlayOrder Field Functions 
      bool hasDefaultPlayOrder() const { return this->defaultPlayOrder_ != nullptr;};
      void deleteDefaultPlayOrder() { this->defaultPlayOrder_ = nullptr;};
      inline int32_t getDefaultPlayOrder() const { DARABONBA_PTR_GET_DEFAULT(defaultPlayOrder_, 0) };
      inline Result& setDefaultPlayOrder(int32_t defaultPlayOrder) { DARABONBA_PTR_SET_VALUE(defaultPlayOrder_, defaultPlayOrder) };


      // itemUrl Field Functions 
      bool hasItemUrl() const { return this->itemUrl_ != nullptr;};
      void deleteItemUrl() { this->itemUrl_ = nullptr;};
      inline string getItemUrl() const { DARABONBA_PTR_GET_DEFAULT(itemUrl_, "") };
      inline Result& setItemUrl(string itemUrl) { DARABONBA_PTR_SET_VALUE(itemUrl_, itemUrl) };


      // liked Field Functions 
      bool hasLiked() const { return this->liked_ != nullptr;};
      void deleteLiked() { this->liked_ = nullptr;};
      inline bool getLiked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
      inline Result& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


      // lyricUrl Field Functions 
      bool hasLyricUrl() const { return this->lyricUrl_ != nullptr;};
      void deleteLyricUrl() { this->lyricUrl_ = nullptr;};
      inline string getLyricUrl() const { DARABONBA_PTR_GET_DEFAULT(lyricUrl_, "") };
      inline Result& setLyricUrl(string lyricUrl) { DARABONBA_PTR_SET_VALUE(lyricUrl_, lyricUrl) };


      // playMode Field Functions 
      bool hasPlayMode() const { return this->playMode_ != nullptr;};
      void deletePlayMode() { this->playMode_ = nullptr;};
      inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
      inline Result& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


      // pos Field Functions 
      bool hasPos() const { return this->pos_ != nullptr;};
      void deletePos() { this->pos_ = nullptr;};
      inline int32_t getPos() const { DARABONBA_PTR_GET_DEFAULT(pos_, 0) };
      inline Result& setPos(int32_t pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Result& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // rawId Field Functions 
      bool hasRawId() const { return this->rawId_ != nullptr;};
      void deleteRawId() { this->rawId_ = nullptr;};
      inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
      inline Result& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


      // singer Field Functions 
      bool hasSinger() const { return this->singer_ != nullptr;};
      void deleteSinger() { this->singer_ = nullptr;};
      inline string getSinger() const { DARABONBA_PTR_GET_DEFAULT(singer_, "") };
      inline Result& setSinger(string singer) { DARABONBA_PTR_SET_VALUE(singer_, singer) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // valid Field Functions 
      bool hasValid() const { return this->valid_ != nullptr;};
      void deleteValid() { this->valid_ = nullptr;};
      inline string getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
      inline Result& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


    protected:
      // Third-party album name
      shared_ptr<string> albumName_ {};
      // Third-party album ID
      shared_ptr<string> albumRawId_ {};
      // Length
      shared_ptr<int32_t> audioLength_ {};
      // The copyright field is upgraded to indicate whether playback is allowed: 0 means playable, 1 or 2 means not playable.
      shared_ptr<int32_t> copyright_ {};
      // Thumbnail image object
      shared_ptr<Result::Cover> cover_ {};
      // Default playback order for the package: 0 for sequential, 1 for reverse order.
      shared_ptr<int32_t> defaultPlayOrder_ {};
      // Playback URL
      shared_ptr<string> itemUrl_ {};
      // is collected
      shared_ptr<bool> liked_ {};
      // Lyrics URL
      shared_ptr<string> lyricUrl_ {};
      // Playback mode (Repeat, Shuffle, RepeatOne, Normal)
      shared_ptr<string> playMode_ {};
      // The position of this item in the playlist
      shared_ptr<int32_t> pos_ {};
      // Song playback progress
      shared_ptr<int32_t> progress_ {};
      // Third-party ID
      shared_ptr<string> rawId_ {};
      // author
      shared_ptr<string> singer_ {};
      // Source
      shared_ptr<string> source_ {};
      // title
      shared_ptr<string> title_ {};
      // Type (such as music, program, joke, news, children_song, radio, etc.)
      shared_ptr<string> type_ {};
      // Indicates whether playback is allowed: VALID(10), UNKNOWN(20), NOT_VALID(30)
      shared_ptr<string> valid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline PreviousAndNextControlResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreviousAndNextControlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviousAndNextControlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const PreviousAndNextControlResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, PreviousAndNextControlResponseBody::Result) };
    inline PreviousAndNextControlResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, PreviousAndNextControlResponseBody::Result) };
    inline PreviousAndNextControlResponseBody& setResult(const PreviousAndNextControlResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PreviousAndNextControlResponseBody& setResult(PreviousAndNextControlResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline PreviousAndNextControlResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Return code of the invocation
    shared_ptr<int32_t> code_ {};
    // Additional information, typically used to briefly describe a failed invocation to help the caller troubleshoot the issue.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Actual return result from the service
    shared_ptr<PreviousAndNextControlResponseBody::Result> result_ {};
    // Indicates whether the invocation succeeded. A value of true means success, and false means failure. When the value is false, check the Message field for details.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
