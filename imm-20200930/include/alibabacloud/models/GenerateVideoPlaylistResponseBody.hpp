// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioPlaylist, audioPlaylist_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubtitlePlaylist, subtitlePlaylist_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VideoPlaylist, videoPlaylist_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioPlaylist, audioPlaylist_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubtitlePlaylist, subtitlePlaylist_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VideoPlaylist, videoPlaylist_);
    };
    GenerateVideoPlaylistResponseBody() = default ;
    GenerateVideoPlaylistResponseBody(const GenerateVideoPlaylistResponseBody &) = default ;
    GenerateVideoPlaylistResponseBody(GenerateVideoPlaylistResponseBody &&) = default ;
    GenerateVideoPlaylistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistResponseBody() = default ;
    GenerateVideoPlaylistResponseBody& operator=(const GenerateVideoPlaylistResponseBody &) = default ;
    GenerateVideoPlaylistResponseBody& operator=(GenerateVideoPlaylistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoPlaylist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoPlaylist& obj) { 
        DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, VideoPlaylist& obj) { 
        DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      VideoPlaylist() = default ;
      VideoPlaylist(const VideoPlaylist &) = default ;
      VideoPlaylist(VideoPlaylist &&) = default ;
      VideoPlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoPlaylist() = default ;
      VideoPlaylist& operator=(const VideoPlaylist &) = default ;
      VideoPlaylist& operator=(VideoPlaylist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frameRate_ == nullptr
        && this->resolution_ == nullptr && this->token_ == nullptr && this->URI_ == nullptr; };
      // frameRate Field Functions 
      bool hasFrameRate() const { return this->frameRate_ != nullptr;};
      void deleteFrameRate() { this->frameRate_ = nullptr;};
      inline string getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, "") };
      inline VideoPlaylist& setFrameRate(string frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline VideoPlaylist& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline VideoPlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline VideoPlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The video frame rate.
      shared_ptr<string> frameRate_ {};
      // The video resolution.
      shared_ptr<string> resolution_ {};
      // The token of the video media playlist. You can use this parameter to generate the path of a TS file.
      // 
      // >  You can generate the path of a transcoded TS file based on the value of this parameter. The path must be in the oss://${Bucket}/${Object}-${Token}-${Index}.ts format. oss://${Bucket}/${Object} specifies the URI specified by input parameters for output files. ${Token} specifies the returned token, and ${Index} specifies the serial number of a TS file.
      shared_ptr<string> token_ {};
      // The OSS path of the video media playlist.
      shared_ptr<string> URI_ {};
    };

    class SubtitlePlaylist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubtitlePlaylist& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, SubtitlePlaylist& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      SubtitlePlaylist() = default ;
      SubtitlePlaylist(const SubtitlePlaylist &) = default ;
      SubtitlePlaylist(SubtitlePlaylist &&) = default ;
      SubtitlePlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubtitlePlaylist() = default ;
      SubtitlePlaylist& operator=(const SubtitlePlaylist &) = default ;
      SubtitlePlaylist& operator=(SubtitlePlaylist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->language_ == nullptr && this->token_ == nullptr && this->URI_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline SubtitlePlaylist& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SubtitlePlaylist& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline SubtitlePlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline SubtitlePlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The serial number of the subtitle stream. The value starts from 0.
      shared_ptr<int32_t> index_ {};
      // The language of the subtitle stream.
      // 
      // >  The language is derived from the subtitle stream information in the OSS path specified by the SourceURI parameter for a source video. If no language information exists in the source video, null is returned.
      shared_ptr<string> language_ {};
      // The token of the subtitle media playlist. You can use this parameter to generate the path of a subtitle file.
      // 
      // >  You can generate the path of a transcoded subtitle file based on the returned token value. The path must be in the oss://${Bucket}/${Object}-${Token}_${Index}.ts format. oss://${Bucket}/${Object} specifies the URI specified by input parameters for output files. ${Token} specifies the returned token value, and ${Index} specifies the serial number of a subtitle file.
      shared_ptr<string> token_ {};
      // The OSS path of the subtitle media playlist.
      shared_ptr<string> URI_ {};
    };

    class AudioPlaylist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioPlaylist& obj) { 
        DARABONBA_PTR_TO_JSON(Channels, channels_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, AudioPlaylist& obj) { 
        DARABONBA_PTR_FROM_JSON(Channels, channels_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      AudioPlaylist() = default ;
      AudioPlaylist(const AudioPlaylist &) = default ;
      AudioPlaylist(AudioPlaylist &&) = default ;
      AudioPlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioPlaylist() = default ;
      AudioPlaylist& operator=(const AudioPlaylist &) = default ;
      AudioPlaylist& operator=(AudioPlaylist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channels_ == nullptr
        && this->token_ == nullptr && this->URI_ == nullptr; };
      // channels Field Functions 
      bool hasChannels() const { return this->channels_ != nullptr;};
      void deleteChannels() { this->channels_ = nullptr;};
      inline int32_t getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0) };
      inline AudioPlaylist& setChannels(int32_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline AudioPlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline AudioPlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The number of audio channels.
      shared_ptr<int32_t> channels_ {};
      // The token of the audio media playlist. You can use this parameter to generate the path of a TS file.
      shared_ptr<string> token_ {};
      // The OSS path of the audio media playlist.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->audioPlaylist_ == nullptr
        && this->duration_ == nullptr && this->masterURI_ == nullptr && this->requestId_ == nullptr && this->subtitlePlaylist_ == nullptr && this->token_ == nullptr
        && this->videoPlaylist_ == nullptr; };
    // audioPlaylist Field Functions 
    bool hasAudioPlaylist() const { return this->audioPlaylist_ != nullptr;};
    void deleteAudioPlaylist() { this->audioPlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBody::AudioPlaylist> & getAudioPlaylist() const { DARABONBA_PTR_GET_CONST(audioPlaylist_, vector<GenerateVideoPlaylistResponseBody::AudioPlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBody::AudioPlaylist> getAudioPlaylist() { DARABONBA_PTR_GET(audioPlaylist_, vector<GenerateVideoPlaylistResponseBody::AudioPlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setAudioPlaylist(const vector<GenerateVideoPlaylistResponseBody::AudioPlaylist> & audioPlaylist) { DARABONBA_PTR_SET_VALUE(audioPlaylist_, audioPlaylist) };
    inline GenerateVideoPlaylistResponseBody& setAudioPlaylist(vector<GenerateVideoPlaylistResponseBody::AudioPlaylist> && audioPlaylist) { DARABONBA_PTR_SET_RVALUE(audioPlaylist_, audioPlaylist) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GenerateVideoPlaylistResponseBody& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string getMasterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistResponseBody& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateVideoPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subtitlePlaylist Field Functions 
    bool hasSubtitlePlaylist() const { return this->subtitlePlaylist_ != nullptr;};
    void deleteSubtitlePlaylist() { this->subtitlePlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist> & getSubtitlePlaylist() const { DARABONBA_PTR_GET_CONST(subtitlePlaylist_, vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist> getSubtitlePlaylist() { DARABONBA_PTR_GET(subtitlePlaylist_, vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setSubtitlePlaylist(const vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist> & subtitlePlaylist) { DARABONBA_PTR_SET_VALUE(subtitlePlaylist_, subtitlePlaylist) };
    inline GenerateVideoPlaylistResponseBody& setSubtitlePlaylist(vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist> && subtitlePlaylist) { DARABONBA_PTR_SET_RVALUE(subtitlePlaylist_, subtitlePlaylist) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateVideoPlaylistResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // videoPlaylist Field Functions 
    bool hasVideoPlaylist() const { return this->videoPlaylist_ != nullptr;};
    void deleteVideoPlaylist() { this->videoPlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBody::VideoPlaylist> & getVideoPlaylist() const { DARABONBA_PTR_GET_CONST(videoPlaylist_, vector<GenerateVideoPlaylistResponseBody::VideoPlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBody::VideoPlaylist> getVideoPlaylist() { DARABONBA_PTR_GET(videoPlaylist_, vector<GenerateVideoPlaylistResponseBody::VideoPlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setVideoPlaylist(const vector<GenerateVideoPlaylistResponseBody::VideoPlaylist> & videoPlaylist) { DARABONBA_PTR_SET_VALUE(videoPlaylist_, videoPlaylist) };
    inline GenerateVideoPlaylistResponseBody& setVideoPlaylist(vector<GenerateVideoPlaylistResponseBody::VideoPlaylist> && videoPlaylist) { DARABONBA_PTR_SET_RVALUE(videoPlaylist_, videoPlaylist) };


  protected:
    // The audio media playlist files.
    shared_ptr<vector<GenerateVideoPlaylistResponseBody::AudioPlaylist>> audioPlaylist_ {};
    // The total duration of the generated video.
    shared_ptr<float> duration_ {};
    // The OSS path of the master playlist.
    shared_ptr<string> masterURI_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The subtitle media playlist files.
    shared_ptr<vector<GenerateVideoPlaylistResponseBody::SubtitlePlaylist>> subtitlePlaylist_ {};
    // The token of the master playlist.
    shared_ptr<string> token_ {};
    // The video media playlist files.
    shared_ptr<vector<GenerateVideoPlaylistResponseBody::VideoPlaylist>> videoPlaylist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
