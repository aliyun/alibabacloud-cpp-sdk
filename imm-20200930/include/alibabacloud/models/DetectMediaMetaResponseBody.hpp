// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTMEDIAMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTMEDIAMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
#include <alibabacloud/models/AudioStream.hpp>
#include <alibabacloud/models/SubtitleStream.hpp>
#include <alibabacloud/models/VideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectMediaMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectMediaMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(Album, album_);
      DARABONBA_PTR_TO_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_TO_JSON(Artist, artist_);
      DARABONBA_PTR_TO_JSON(AudioStreams, audioStreams_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Composer, composer_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LatLong, latLong_);
      DARABONBA_PTR_TO_JSON(Performer, performer_);
      DARABONBA_PTR_TO_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_TO_JSON(ProgramCount, programCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoStreams, videoStreams_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
    };
    friend void from_json(const Darabonba::Json& j, DetectMediaMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(Album, album_);
      DARABONBA_PTR_FROM_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_FROM_JSON(Artist, artist_);
      DARABONBA_PTR_FROM_JSON(AudioStreams, audioStreams_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Composer, composer_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LatLong, latLong_);
      DARABONBA_PTR_FROM_JSON(Performer, performer_);
      DARABONBA_PTR_FROM_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_FROM_JSON(ProgramCount, programCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoStreams, videoStreams_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
    };
    DetectMediaMetaResponseBody() = default ;
    DetectMediaMetaResponseBody(const DetectMediaMetaResponseBody &) = default ;
    DetectMediaMetaResponseBody(DetectMediaMetaResponseBody &&) = default ;
    DetectMediaMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectMediaMetaResponseBody() = default ;
    DetectMediaMetaResponseBody& operator=(const DetectMediaMetaResponseBody &) = default ;
    DetectMediaMetaResponseBody& operator=(DetectMediaMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && this->album_ == nullptr && this->albumArtist_ == nullptr && this->artist_ == nullptr && this->audioStreams_ == nullptr && this->bitrate_ == nullptr
        && this->composer_ == nullptr && this->duration_ == nullptr && this->formatLongName_ == nullptr && this->formatName_ == nullptr && this->language_ == nullptr
        && this->latLong_ == nullptr && this->performer_ == nullptr && this->produceTime_ == nullptr && this->programCount_ == nullptr && this->requestId_ == nullptr
        && this->size_ == nullptr && this->startTime_ == nullptr && this->streamCount_ == nullptr && this->subtitles_ == nullptr && this->title_ == nullptr
        && this->videoHeight_ == nullptr && this->videoStreams_ == nullptr && this->videoWidth_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline DetectMediaMetaResponseBody& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DetectMediaMetaResponseBody& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline string getAlbum() const { DARABONBA_PTR_GET_DEFAULT(album_, "") };
    inline DetectMediaMetaResponseBody& setAlbum(string album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumArtist Field Functions 
    bool hasAlbumArtist() const { return this->albumArtist_ != nullptr;};
    void deleteAlbumArtist() { this->albumArtist_ = nullptr;};
    inline string getAlbumArtist() const { DARABONBA_PTR_GET_DEFAULT(albumArtist_, "") };
    inline DetectMediaMetaResponseBody& setAlbumArtist(string albumArtist) { DARABONBA_PTR_SET_VALUE(albumArtist_, albumArtist) };


    // artist Field Functions 
    bool hasArtist() const { return this->artist_ != nullptr;};
    void deleteArtist() { this->artist_ = nullptr;};
    inline string getArtist() const { DARABONBA_PTR_GET_DEFAULT(artist_, "") };
    inline DetectMediaMetaResponseBody& setArtist(string artist) { DARABONBA_PTR_SET_VALUE(artist_, artist) };


    // audioStreams Field Functions 
    bool hasAudioStreams() const { return this->audioStreams_ != nullptr;};
    void deleteAudioStreams() { this->audioStreams_ = nullptr;};
    inline const vector<AudioStream> & getAudioStreams() const { DARABONBA_PTR_GET_CONST(audioStreams_, vector<AudioStream>) };
    inline vector<AudioStream> getAudioStreams() { DARABONBA_PTR_GET(audioStreams_, vector<AudioStream>) };
    inline DetectMediaMetaResponseBody& setAudioStreams(const vector<AudioStream> & audioStreams) { DARABONBA_PTR_SET_VALUE(audioStreams_, audioStreams) };
    inline DetectMediaMetaResponseBody& setAudioStreams(vector<AudioStream> && audioStreams) { DARABONBA_PTR_SET_RVALUE(audioStreams_, audioStreams) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline DetectMediaMetaResponseBody& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // composer Field Functions 
    bool hasComposer() const { return this->composer_ != nullptr;};
    void deleteComposer() { this->composer_ = nullptr;};
    inline string getComposer() const { DARABONBA_PTR_GET_DEFAULT(composer_, "") };
    inline DetectMediaMetaResponseBody& setComposer(string composer) { DARABONBA_PTR_SET_VALUE(composer_, composer) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline DetectMediaMetaResponseBody& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // formatLongName Field Functions 
    bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
    void deleteFormatLongName() { this->formatLongName_ = nullptr;};
    inline string getFormatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
    inline DetectMediaMetaResponseBody& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline DetectMediaMetaResponseBody& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DetectMediaMetaResponseBody& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latLong Field Functions 
    bool hasLatLong() const { return this->latLong_ != nullptr;};
    void deleteLatLong() { this->latLong_ = nullptr;};
    inline string getLatLong() const { DARABONBA_PTR_GET_DEFAULT(latLong_, "") };
    inline DetectMediaMetaResponseBody& setLatLong(string latLong) { DARABONBA_PTR_SET_VALUE(latLong_, latLong) };


    // performer Field Functions 
    bool hasPerformer() const { return this->performer_ != nullptr;};
    void deletePerformer() { this->performer_ = nullptr;};
    inline string getPerformer() const { DARABONBA_PTR_GET_DEFAULT(performer_, "") };
    inline DetectMediaMetaResponseBody& setPerformer(string performer) { DARABONBA_PTR_SET_VALUE(performer_, performer) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string getProduceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline DetectMediaMetaResponseBody& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // programCount Field Functions 
    bool hasProgramCount() const { return this->programCount_ != nullptr;};
    void deleteProgramCount() { this->programCount_ = nullptr;};
    inline int64_t getProgramCount() const { DARABONBA_PTR_GET_DEFAULT(programCount_, 0L) };
    inline DetectMediaMetaResponseBody& setProgramCount(int64_t programCount) { DARABONBA_PTR_SET_VALUE(programCount_, programCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectMediaMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DetectMediaMetaResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline DetectMediaMetaResponseBody& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int64_t getStreamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0L) };
    inline DetectMediaMetaResponseBody& setStreamCount(int64_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<SubtitleStream> & getSubtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<SubtitleStream>) };
    inline vector<SubtitleStream> getSubtitles() { DARABONBA_PTR_GET(subtitles_, vector<SubtitleStream>) };
    inline DetectMediaMetaResponseBody& setSubtitles(const vector<SubtitleStream> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline DetectMediaMetaResponseBody& setSubtitles(vector<SubtitleStream> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DetectMediaMetaResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int64_t getVideoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0L) };
    inline DetectMediaMetaResponseBody& setVideoHeight(int64_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoStreams Field Functions 
    bool hasVideoStreams() const { return this->videoStreams_ != nullptr;};
    void deleteVideoStreams() { this->videoStreams_ = nullptr;};
    inline const vector<VideoStream> & getVideoStreams() const { DARABONBA_PTR_GET_CONST(videoStreams_, vector<VideoStream>) };
    inline vector<VideoStream> getVideoStreams() { DARABONBA_PTR_GET(videoStreams_, vector<VideoStream>) };
    inline DetectMediaMetaResponseBody& setVideoStreams(const vector<VideoStream> & videoStreams) { DARABONBA_PTR_SET_VALUE(videoStreams_, videoStreams) };
    inline DetectMediaMetaResponseBody& setVideoStreams(vector<VideoStream> && videoStreams) { DARABONBA_PTR_SET_RVALUE(videoStreams_, videoStreams) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int64_t getVideoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0L) };
    inline DetectMediaMetaResponseBody& setVideoWidth(int64_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


  protected:
    // The addresses.
    // 
    // This parameter is returned only when address information is detected.
    shared_ptr<vector<Address>> addresses_ {};
    // The album.
    shared_ptr<string> album_ {};
    // The album artist.
    shared_ptr<string> albumArtist_ {};
    // The artist.
    shared_ptr<string> artist_ {};
    // The audio streams.
    shared_ptr<vector<AudioStream>> audioStreams_ {};
    // The bitrate. Unit: bit/s.
    shared_ptr<int64_t> bitrate_ {};
    // The composer.
    shared_ptr<string> composer_ {};
    // The total duration of the video. Unit: seconds.
    shared_ptr<double> duration_ {};
    // The full format name.
    shared_ptr<string> formatLongName_ {};
    // The abbreviated format name.
    shared_ptr<string> formatName_ {};
    // The language of the content. For more information, see the ISO 639-2 Alpha-3 codes for the representation of names of languages.
    shared_ptr<string> language_ {};
    // The coordinate pair of the central point. The coordinate pair consists of latitude and longitude values. This parameter value must be in the "latitude,longitude" format. Valid values of the latitude: [-90,+90]. Valid values of the longitude: [-180,+180].
    shared_ptr<string> latLong_ {};
    // The performer.
    shared_ptr<string> performer_ {};
    // The time of recording. For more information about the time formats, see the RFC3339 Nano standard.
    shared_ptr<string> produceTime_ {};
    // The number of programs.
    shared_ptr<int64_t> programCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The size of the media object. Unit: bytes.
    shared_ptr<int64_t> size_ {};
    // The initial playback time.
    shared_ptr<double> startTime_ {};
    // The number of media streams.
    shared_ptr<int64_t> streamCount_ {};
    // The subtitle streams.
    shared_ptr<vector<SubtitleStream>> subtitles_ {};
    // The title of the media object.
    shared_ptr<string> title_ {};
    // The video height in pixels.
    shared_ptr<int64_t> videoHeight_ {};
    // The video streams.
    shared_ptr<vector<VideoStream>> videoStreams_ {};
    // The video width in pixels.
    shared_ptr<int64_t> videoWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
