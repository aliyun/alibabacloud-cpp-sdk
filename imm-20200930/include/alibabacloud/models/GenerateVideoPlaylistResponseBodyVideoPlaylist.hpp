// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYVIDEOPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYVIDEOPLAYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistResponseBodyVideoPlaylist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistResponseBodyVideoPlaylist& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistResponseBodyVideoPlaylist& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    GenerateVideoPlaylistResponseBodyVideoPlaylist() = default ;
    GenerateVideoPlaylistResponseBodyVideoPlaylist(const GenerateVideoPlaylistResponseBodyVideoPlaylist &) = default ;
    GenerateVideoPlaylistResponseBodyVideoPlaylist(GenerateVideoPlaylistResponseBodyVideoPlaylist &&) = default ;
    GenerateVideoPlaylistResponseBodyVideoPlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistResponseBodyVideoPlaylist() = default ;
    GenerateVideoPlaylistResponseBodyVideoPlaylist& operator=(const GenerateVideoPlaylistResponseBodyVideoPlaylist &) = default ;
    GenerateVideoPlaylistResponseBodyVideoPlaylist& operator=(GenerateVideoPlaylistResponseBodyVideoPlaylist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameRate_ == nullptr
        && return this->resolution_ == nullptr && return this->token_ == nullptr && return this->URI_ == nullptr; };
    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline string frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, "") };
    inline GenerateVideoPlaylistResponseBodyVideoPlaylist& setFrameRate(string frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GenerateVideoPlaylistResponseBodyVideoPlaylist& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateVideoPlaylistResponseBodyVideoPlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GenerateVideoPlaylistResponseBodyVideoPlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The video frame rate.
    std::shared_ptr<string> frameRate_ = nullptr;
    // The video resolution.
    std::shared_ptr<string> resolution_ = nullptr;
    // The token of the video media playlist. You can use this parameter to generate the path of a TS file.
    // 
    // >  You can generate the path of a transcoded TS file based on the value of this parameter. The path must be in the oss://${Bucket}/${Object}-${Token}-${Index}.ts format. oss://${Bucket}/${Object} specifies the URI specified by input parameters for output files. ${Token} specifies the returned token, and ${Index} specifies the serial number of a TS file.
    std::shared_ptr<string> token_ = nullptr;
    // The OSS path of the video media playlist.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
