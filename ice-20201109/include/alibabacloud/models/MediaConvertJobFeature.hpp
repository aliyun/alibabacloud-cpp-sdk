// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURE_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobFeatureClip.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/MediaConvertJobFeatureWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobFeature& obj) { 
      DARABONBA_PTR_TO_JSON(Clip, clip_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(Clip, clip_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    MediaConvertJobFeature() = default ;
    MediaConvertJobFeature(const MediaConvertJobFeature &) = default ;
    MediaConvertJobFeature(MediaConvertJobFeature &&) = default ;
    MediaConvertJobFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobFeature() = default ;
    MediaConvertJobFeature& operator=(const MediaConvertJobFeature &) = default ;
    MediaConvertJobFeature& operator=(MediaConvertJobFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clip_ == nullptr
        && return this->metadata_ == nullptr && return this->watermarks_ == nullptr; };
    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline const MediaConvertJobFeatureClip & clip() const { DARABONBA_PTR_GET_CONST(clip_, MediaConvertJobFeatureClip) };
    inline MediaConvertJobFeatureClip clip() { DARABONBA_PTR_GET(clip_, MediaConvertJobFeatureClip) };
    inline MediaConvertJobFeature& setClip(const MediaConvertJobFeatureClip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
    inline MediaConvertJobFeature& setClip(MediaConvertJobFeatureClip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline MediaConvertJobFeature& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline MediaConvertJobFeature& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<MediaConvertJobFeatureWatermarks> & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<MediaConvertJobFeatureWatermarks>) };
    inline vector<MediaConvertJobFeatureWatermarks> watermarks() { DARABONBA_PTR_GET(watermarks_, vector<MediaConvertJobFeatureWatermarks>) };
    inline MediaConvertJobFeature& setWatermarks(const vector<MediaConvertJobFeatureWatermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline MediaConvertJobFeature& setWatermarks(vector<MediaConvertJobFeatureWatermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    std::shared_ptr<MediaConvertJobFeatureClip> clip_ = nullptr;
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    std::shared_ptr<vector<MediaConvertJobFeatureWatermarks>> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
