// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBOVERWITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBOVERWITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobOverwiteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobOverwiteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobOverwiteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
    };
    MediaConvertJobOverwiteParams() = default ;
    MediaConvertJobOverwiteParams(const MediaConvertJobOverwiteParams &) = default ;
    MediaConvertJobOverwiteParams(MediaConvertJobOverwiteParams &&) = default ;
    MediaConvertJobOverwiteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobOverwiteParams() = default ;
    MediaConvertJobOverwiteParams& operator=(const MediaConvertJobOverwiteParams &) = default ;
    MediaConvertJobOverwiteParams& operator=(MediaConvertJobOverwiteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Subtitles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subtitles& obj) { 
        DARABONBA_PTR_TO_JSON(Codec, codec_);
      };
      friend void from_json(const Darabonba::Json& j, Subtitles& obj) { 
        DARABONBA_PTR_FROM_JSON(Codec, codec_);
      };
      Subtitles() = default ;
      Subtitles(const Subtitles &) = default ;
      Subtitles(Subtitles &&) = default ;
      Subtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subtitles() = default ;
      Subtitles& operator=(const Subtitles &) = default ;
      Subtitles& operator=(Subtitles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->codec_ == nullptr; };
      // codec Field Functions 
      bool hasCodec() const { return this->codec_ != nullptr;};
      void deleteCodec() { this->codec_ = nullptr;};
      inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
      inline Subtitles& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    protected:
      shared_ptr<string> codec_ {};
    };

    virtual bool empty() const override { return this->subtitles_ == nullptr; };
    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<MediaConvertJobOverwiteParams::Subtitles> & getSubtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<MediaConvertJobOverwiteParams::Subtitles>) };
    inline vector<MediaConvertJobOverwiteParams::Subtitles> getSubtitles() { DARABONBA_PTR_GET(subtitles_, vector<MediaConvertJobOverwiteParams::Subtitles>) };
    inline MediaConvertJobOverwiteParams& setSubtitles(const vector<MediaConvertJobOverwiteParams::Subtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline MediaConvertJobOverwiteParams& setSubtitles(vector<MediaConvertJobOverwiteParams::Subtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


  protected:
    shared_ptr<vector<MediaConvertJobOverwiteParams::Subtitles>> subtitles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
