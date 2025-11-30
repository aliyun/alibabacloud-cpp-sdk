// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBOVERWITEPARAMSSUBTITLES_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBOVERWITEPARAMSSUBTITLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobOverwiteParamsSubtitles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobOverwiteParamsSubtitles& obj) { 
      DARABONBA_PTR_TO_JSON(Codec, codec_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobOverwiteParamsSubtitles& obj) { 
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
    };
    MediaConvertJobOverwiteParamsSubtitles() = default ;
    MediaConvertJobOverwiteParamsSubtitles(const MediaConvertJobOverwiteParamsSubtitles &) = default ;
    MediaConvertJobOverwiteParamsSubtitles(MediaConvertJobOverwiteParamsSubtitles &&) = default ;
    MediaConvertJobOverwiteParamsSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobOverwiteParamsSubtitles() = default ;
    MediaConvertJobOverwiteParamsSubtitles& operator=(const MediaConvertJobOverwiteParamsSubtitles &) = default ;
    MediaConvertJobOverwiteParamsSubtitles& operator=(MediaConvertJobOverwiteParamsSubtitles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codec_ == nullptr; };
    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline MediaConvertJobOverwiteParamsSubtitles& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


  protected:
    std::shared_ptr<string> codec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
