// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUESTSOURCESUBTITLES_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUESTSOURCESUBTITLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistRequestSourceSubtitles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistRequestSourceSubtitles& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistRequestSourceSubtitles& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    GenerateVideoPlaylistRequestSourceSubtitles() = default ;
    GenerateVideoPlaylistRequestSourceSubtitles(const GenerateVideoPlaylistRequestSourceSubtitles &) = default ;
    GenerateVideoPlaylistRequestSourceSubtitles(GenerateVideoPlaylistRequestSourceSubtitles &&) = default ;
    GenerateVideoPlaylistRequestSourceSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistRequestSourceSubtitles() = default ;
    GenerateVideoPlaylistRequestSourceSubtitles& operator=(const GenerateVideoPlaylistRequestSourceSubtitles &) = default ;
    GenerateVideoPlaylistRequestSourceSubtitles& operator=(GenerateVideoPlaylistRequestSourceSubtitles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr
        && this->URI_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GenerateVideoPlaylistRequestSourceSubtitles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GenerateVideoPlaylistRequestSourceSubtitles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The subtitle language. If you configure this parameter, the value must comply with the ISO 639-2 standard. By default, this parameter is left empty.
    std::shared_ptr<string> language_ = nullptr;
    // The OSS path of the subtitle file.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file.
    // 
    // >  The **MasterURI** parameter cannot be left empty, and the OSS path `oss://${Bucket}/${Object}` of a subtitle file must be in the directory specified by the **MasterURI** parameter or its subdirectory.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
