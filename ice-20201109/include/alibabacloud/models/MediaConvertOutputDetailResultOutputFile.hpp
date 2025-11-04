// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILRESULTOUTPUTFILE_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILRESULTOUTPUTFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetailResultOutputFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetailResultOutputFile& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetailResultOutputFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    MediaConvertOutputDetailResultOutputFile() = default ;
    MediaConvertOutputDetailResultOutputFile(const MediaConvertOutputDetailResultOutputFile &) = default ;
    MediaConvertOutputDetailResultOutputFile(MediaConvertOutputDetailResultOutputFile &&) = default ;
    MediaConvertOutputDetailResultOutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetailResultOutputFile() = default ;
    MediaConvertOutputDetailResultOutputFile& operator=(const MediaConvertOutputDetailResultOutputFile &) = default ;
    MediaConvertOutputDetailResultOutputFile& operator=(MediaConvertOutputDetailResultOutputFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr && return this->url_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline MediaConvertOutputDetailResultOutputFile& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertOutputDetailResultOutputFile& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MediaConvertOutputDetailResultOutputFile& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
