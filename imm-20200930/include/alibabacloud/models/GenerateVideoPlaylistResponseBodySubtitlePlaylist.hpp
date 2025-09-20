// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYSUBTITLEPLAYLIST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTRESPONSEBODYSUBTITLEPLAYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistResponseBodySubtitlePlaylist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistResponseBodySubtitlePlaylist& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistResponseBodySubtitlePlaylist& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    GenerateVideoPlaylistResponseBodySubtitlePlaylist() = default ;
    GenerateVideoPlaylistResponseBodySubtitlePlaylist(const GenerateVideoPlaylistResponseBodySubtitlePlaylist &) = default ;
    GenerateVideoPlaylistResponseBodySubtitlePlaylist(GenerateVideoPlaylistResponseBodySubtitlePlaylist &&) = default ;
    GenerateVideoPlaylistResponseBodySubtitlePlaylist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistResponseBodySubtitlePlaylist() = default ;
    GenerateVideoPlaylistResponseBodySubtitlePlaylist& operator=(const GenerateVideoPlaylistResponseBodySubtitlePlaylist &) = default ;
    GenerateVideoPlaylistResponseBodySubtitlePlaylist& operator=(GenerateVideoPlaylistResponseBodySubtitlePlaylist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->language_ != nullptr && this->token_ != nullptr && this->URI_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GenerateVideoPlaylistResponseBodySubtitlePlaylist& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GenerateVideoPlaylistResponseBodySubtitlePlaylist& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateVideoPlaylistResponseBodySubtitlePlaylist& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GenerateVideoPlaylistResponseBodySubtitlePlaylist& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The serial number of the subtitle stream. The value starts from 0.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The language of the subtitle stream.
    // 
    // >  The language is derived from the subtitle stream information in the OSS path specified by the SourceURI parameter for a source video. If no language information exists in the source video, null is returned.
    std::shared_ptr<string> language_ = nullptr;
    // The token of the subtitle media playlist. You can use this parameter to generate the path of a subtitle file.
    // 
    // >  You can generate the path of a transcoded subtitle file based on the returned token value. The path must be in the oss://${Bucket}/${Object}-${Token}_${Index}.ts format. oss://${Bucket}/${Object} specifies the URI specified by input parameters for output files. ${Token} specifies the returned token value, and ${Index} specifies the serial number of a subtitle file.
    std::shared_ptr<string> token_ = nullptr;
    // The OSS path of the subtitle media playlist.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
