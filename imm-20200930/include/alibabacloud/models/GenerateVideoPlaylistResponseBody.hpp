// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateVideoPlaylistResponseBodyAudioPlaylist.hpp>
#include <alibabacloud/models/GenerateVideoPlaylistResponseBodySubtitlePlaylist.hpp>
#include <alibabacloud/models/GenerateVideoPlaylistResponseBodyVideoPlaylist.hpp>
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
    virtual bool empty() const override { return this->audioPlaylist_ == nullptr
        && return this->duration_ == nullptr && return this->masterURI_ == nullptr && return this->requestId_ == nullptr && return this->subtitlePlaylist_ == nullptr && return this->token_ == nullptr
        && return this->videoPlaylist_ == nullptr; };
    // audioPlaylist Field Functions 
    bool hasAudioPlaylist() const { return this->audioPlaylist_ != nullptr;};
    void deleteAudioPlaylist() { this->audioPlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBodyAudioPlaylist> & audioPlaylist() const { DARABONBA_PTR_GET_CONST(audioPlaylist_, vector<GenerateVideoPlaylistResponseBodyAudioPlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBodyAudioPlaylist> audioPlaylist() { DARABONBA_PTR_GET(audioPlaylist_, vector<GenerateVideoPlaylistResponseBodyAudioPlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setAudioPlaylist(const vector<GenerateVideoPlaylistResponseBodyAudioPlaylist> & audioPlaylist) { DARABONBA_PTR_SET_VALUE(audioPlaylist_, audioPlaylist) };
    inline GenerateVideoPlaylistResponseBody& setAudioPlaylist(vector<GenerateVideoPlaylistResponseBodyAudioPlaylist> && audioPlaylist) { DARABONBA_PTR_SET_RVALUE(audioPlaylist_, audioPlaylist) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GenerateVideoPlaylistResponseBody& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string masterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistResponseBody& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateVideoPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subtitlePlaylist Field Functions 
    bool hasSubtitlePlaylist() const { return this->subtitlePlaylist_ != nullptr;};
    void deleteSubtitlePlaylist() { this->subtitlePlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist> & subtitlePlaylist() const { DARABONBA_PTR_GET_CONST(subtitlePlaylist_, vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist> subtitlePlaylist() { DARABONBA_PTR_GET(subtitlePlaylist_, vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setSubtitlePlaylist(const vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist> & subtitlePlaylist) { DARABONBA_PTR_SET_VALUE(subtitlePlaylist_, subtitlePlaylist) };
    inline GenerateVideoPlaylistResponseBody& setSubtitlePlaylist(vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist> && subtitlePlaylist) { DARABONBA_PTR_SET_RVALUE(subtitlePlaylist_, subtitlePlaylist) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateVideoPlaylistResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // videoPlaylist Field Functions 
    bool hasVideoPlaylist() const { return this->videoPlaylist_ != nullptr;};
    void deleteVideoPlaylist() { this->videoPlaylist_ = nullptr;};
    inline const vector<GenerateVideoPlaylistResponseBodyVideoPlaylist> & videoPlaylist() const { DARABONBA_PTR_GET_CONST(videoPlaylist_, vector<GenerateVideoPlaylistResponseBodyVideoPlaylist>) };
    inline vector<GenerateVideoPlaylistResponseBodyVideoPlaylist> videoPlaylist() { DARABONBA_PTR_GET(videoPlaylist_, vector<GenerateVideoPlaylistResponseBodyVideoPlaylist>) };
    inline GenerateVideoPlaylistResponseBody& setVideoPlaylist(const vector<GenerateVideoPlaylistResponseBodyVideoPlaylist> & videoPlaylist) { DARABONBA_PTR_SET_VALUE(videoPlaylist_, videoPlaylist) };
    inline GenerateVideoPlaylistResponseBody& setVideoPlaylist(vector<GenerateVideoPlaylistResponseBodyVideoPlaylist> && videoPlaylist) { DARABONBA_PTR_SET_RVALUE(videoPlaylist_, videoPlaylist) };


  protected:
    // The audio media playlist files.
    std::shared_ptr<vector<GenerateVideoPlaylistResponseBodyAudioPlaylist>> audioPlaylist_ = nullptr;
    // The total duration of the generated video.
    std::shared_ptr<float> duration_ = nullptr;
    // The OSS path of the master playlist.
    std::shared_ptr<string> masterURI_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The subtitle media playlist files.
    std::shared_ptr<vector<GenerateVideoPlaylistResponseBodySubtitlePlaylist>> subtitlePlaylist_ = nullptr;
    // The token of the master playlist.
    std::shared_ptr<string> token_ = nullptr;
    // The video media playlist files.
    std::shared_ptr<vector<GenerateVideoPlaylistResponseBodyVideoPlaylist>> videoPlaylist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
