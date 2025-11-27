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
        && return this->album_ == nullptr && return this->albumArtist_ == nullptr && return this->artist_ == nullptr && return this->audioStreams_ == nullptr && return this->bitrate_ == nullptr
        && return this->composer_ == nullptr && return this->duration_ == nullptr && return this->formatLongName_ == nullptr && return this->formatName_ == nullptr && return this->language_ == nullptr
        && return this->latLong_ == nullptr && return this->performer_ == nullptr && return this->produceTime_ == nullptr && return this->programCount_ == nullptr && return this->requestId_ == nullptr
        && return this->size_ == nullptr && return this->startTime_ == nullptr && return this->streamCount_ == nullptr && return this->subtitles_ == nullptr && return this->title_ == nullptr
        && return this->videoHeight_ == nullptr && return this->videoStreams_ == nullptr && return this->videoWidth_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> addresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline DetectMediaMetaResponseBody& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DetectMediaMetaResponseBody& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline string album() const { DARABONBA_PTR_GET_DEFAULT(album_, "") };
    inline DetectMediaMetaResponseBody& setAlbum(string album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumArtist Field Functions 
    bool hasAlbumArtist() const { return this->albumArtist_ != nullptr;};
    void deleteAlbumArtist() { this->albumArtist_ = nullptr;};
    inline string albumArtist() const { DARABONBA_PTR_GET_DEFAULT(albumArtist_, "") };
    inline DetectMediaMetaResponseBody& setAlbumArtist(string albumArtist) { DARABONBA_PTR_SET_VALUE(albumArtist_, albumArtist) };


    // artist Field Functions 
    bool hasArtist() const { return this->artist_ != nullptr;};
    void deleteArtist() { this->artist_ = nullptr;};
    inline string artist() const { DARABONBA_PTR_GET_DEFAULT(artist_, "") };
    inline DetectMediaMetaResponseBody& setArtist(string artist) { DARABONBA_PTR_SET_VALUE(artist_, artist) };


    // audioStreams Field Functions 
    bool hasAudioStreams() const { return this->audioStreams_ != nullptr;};
    void deleteAudioStreams() { this->audioStreams_ = nullptr;};
    inline const vector<AudioStream> & audioStreams() const { DARABONBA_PTR_GET_CONST(audioStreams_, vector<AudioStream>) };
    inline vector<AudioStream> audioStreams() { DARABONBA_PTR_GET(audioStreams_, vector<AudioStream>) };
    inline DetectMediaMetaResponseBody& setAudioStreams(const vector<AudioStream> & audioStreams) { DARABONBA_PTR_SET_VALUE(audioStreams_, audioStreams) };
    inline DetectMediaMetaResponseBody& setAudioStreams(vector<AudioStream> && audioStreams) { DARABONBA_PTR_SET_RVALUE(audioStreams_, audioStreams) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline DetectMediaMetaResponseBody& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // composer Field Functions 
    bool hasComposer() const { return this->composer_ != nullptr;};
    void deleteComposer() { this->composer_ = nullptr;};
    inline string composer() const { DARABONBA_PTR_GET_DEFAULT(composer_, "") };
    inline DetectMediaMetaResponseBody& setComposer(string composer) { DARABONBA_PTR_SET_VALUE(composer_, composer) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline DetectMediaMetaResponseBody& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // formatLongName Field Functions 
    bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
    void deleteFormatLongName() { this->formatLongName_ = nullptr;};
    inline string formatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
    inline DetectMediaMetaResponseBody& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline DetectMediaMetaResponseBody& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DetectMediaMetaResponseBody& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latLong Field Functions 
    bool hasLatLong() const { return this->latLong_ != nullptr;};
    void deleteLatLong() { this->latLong_ = nullptr;};
    inline string latLong() const { DARABONBA_PTR_GET_DEFAULT(latLong_, "") };
    inline DetectMediaMetaResponseBody& setLatLong(string latLong) { DARABONBA_PTR_SET_VALUE(latLong_, latLong) };


    // performer Field Functions 
    bool hasPerformer() const { return this->performer_ != nullptr;};
    void deletePerformer() { this->performer_ = nullptr;};
    inline string performer() const { DARABONBA_PTR_GET_DEFAULT(performer_, "") };
    inline DetectMediaMetaResponseBody& setPerformer(string performer) { DARABONBA_PTR_SET_VALUE(performer_, performer) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string produceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline DetectMediaMetaResponseBody& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // programCount Field Functions 
    bool hasProgramCount() const { return this->programCount_ != nullptr;};
    void deleteProgramCount() { this->programCount_ = nullptr;};
    inline int64_t programCount() const { DARABONBA_PTR_GET_DEFAULT(programCount_, 0L) };
    inline DetectMediaMetaResponseBody& setProgramCount(int64_t programCount) { DARABONBA_PTR_SET_VALUE(programCount_, programCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectMediaMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DetectMediaMetaResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline DetectMediaMetaResponseBody& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int64_t streamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0L) };
    inline DetectMediaMetaResponseBody& setStreamCount(int64_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<SubtitleStream> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<SubtitleStream>) };
    inline vector<SubtitleStream> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<SubtitleStream>) };
    inline DetectMediaMetaResponseBody& setSubtitles(const vector<SubtitleStream> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline DetectMediaMetaResponseBody& setSubtitles(vector<SubtitleStream> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DetectMediaMetaResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int64_t videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0L) };
    inline DetectMediaMetaResponseBody& setVideoHeight(int64_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoStreams Field Functions 
    bool hasVideoStreams() const { return this->videoStreams_ != nullptr;};
    void deleteVideoStreams() { this->videoStreams_ = nullptr;};
    inline const vector<VideoStream> & videoStreams() const { DARABONBA_PTR_GET_CONST(videoStreams_, vector<VideoStream>) };
    inline vector<VideoStream> videoStreams() { DARABONBA_PTR_GET(videoStreams_, vector<VideoStream>) };
    inline DetectMediaMetaResponseBody& setVideoStreams(const vector<VideoStream> & videoStreams) { DARABONBA_PTR_SET_VALUE(videoStreams_, videoStreams) };
    inline DetectMediaMetaResponseBody& setVideoStreams(vector<VideoStream> && videoStreams) { DARABONBA_PTR_SET_RVALUE(videoStreams_, videoStreams) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int64_t videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0L) };
    inline DetectMediaMetaResponseBody& setVideoWidth(int64_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


  protected:
    // The addresses.
    // 
    // This parameter is returned only when address information is detected.
    std::shared_ptr<vector<Address>> addresses_ = nullptr;
    // The album.
    std::shared_ptr<string> album_ = nullptr;
    // The album artist.
    std::shared_ptr<string> albumArtist_ = nullptr;
    // The artist.
    std::shared_ptr<string> artist_ = nullptr;
    // The audio streams.
    std::shared_ptr<vector<AudioStream>> audioStreams_ = nullptr;
    // The bitrate. Unit: bit/s.
    std::shared_ptr<int64_t> bitrate_ = nullptr;
    // The composer.
    std::shared_ptr<string> composer_ = nullptr;
    // The total duration of the video. Unit: seconds.
    std::shared_ptr<double> duration_ = nullptr;
    // The full format name.
    std::shared_ptr<string> formatLongName_ = nullptr;
    // The abbreviated format name.
    std::shared_ptr<string> formatName_ = nullptr;
    // The language of the content. For more information, see the ISO 639-2 Alpha-3 codes for the representation of names of languages.
    std::shared_ptr<string> language_ = nullptr;
    // The coordinate pair of the central point. The coordinate pair consists of latitude and longitude values. This parameter value must be in the "latitude,longitude" format. Valid values of the latitude: [-90,+90]. Valid values of the longitude: [-180,+180].
    std::shared_ptr<string> latLong_ = nullptr;
    // The performer.
    std::shared_ptr<string> performer_ = nullptr;
    // The time of recording. For more information about the time formats, see the RFC3339 Nano standard.
    std::shared_ptr<string> produceTime_ = nullptr;
    // The number of programs.
    std::shared_ptr<int64_t> programCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The size of the media object. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The initial playback time.
    std::shared_ptr<double> startTime_ = nullptr;
    // The number of media streams.
    std::shared_ptr<int64_t> streamCount_ = nullptr;
    // The subtitle streams.
    std::shared_ptr<vector<SubtitleStream>> subtitles_ = nullptr;
    // The title of the media object.
    std::shared_ptr<string> title_ = nullptr;
    // The video height in pixels.
    std::shared_ptr<int64_t> videoHeight_ = nullptr;
    // The video streams.
    std::shared_ptr<vector<VideoStream>> videoStreams_ = nullptr;
    // The video width in pixels.
    std::shared_ptr<int64_t> videoWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
