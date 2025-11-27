// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYAUDIOPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYAUDIOPLAYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistResponseBodyAudioPlaylist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistResponseBodyAudioPlaylist& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistResponseBodyAudioPlaylist& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    GenerateVideoPlaylistResponseBodyAudioPlaylist() = default ;
    GenerateVideoPlaylistResponseBodyAudioPlaylist(const GenerateVideoPlaylistResponseBodyAudioPlaylist &) = default ;
    GenerateVideoPlaylistResponseBodyAudioPlaylist(GenerateVideoPlaylistResponseBodyAudioPlaylist &&) = default ;
    GenerateVideoPlaylistResponseBodyAudioPlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistResponseBodyAudioPlaylist() = default ;
    GenerateVideoPlaylistResponseBodyAudioPlaylist& operator=(const GenerateVideoPlaylistResponseBodyAudioPlaylist &) = default ;
    GenerateVideoPlaylistResponseBodyAudioPlaylist& operator=(GenerateVideoPlaylistResponseBodyAudioPlaylist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->token_ == nullptr && return this->URI_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline int32_t channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0) };
    inline GenerateVideoPlaylistResponseBodyAudioPlaylist& setChannels(int32_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateVideoPlaylistResponseBodyAudioPlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GenerateVideoPlaylistResponseBodyAudioPlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The number of audio channels.
    std::shared_ptr<int32_t> channels_ = nullptr;
    // The token of the audio media playlist. You can use this parameter to generate the path of a TS file.
    std::shared_ptr<string> token_ = nullptr;
    // The OSS path of the audio media playlist.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
