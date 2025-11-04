// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequestTemplateConfigOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequestTemplateConfigOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(BlackLevel, blackLevel_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FrameType, frameType_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IsSptFrag, isSptFrag_);
      DARABONBA_PTR_TO_JSON(PixelBlackThreshold, pixelBlackThreshold_);
      DARABONBA_PTR_TO_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequestTemplateConfigOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackLevel, blackLevel_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FrameType, frameType_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IsSptFrag, isSptFrag_);
      DARABONBA_PTR_FROM_JSON(PixelBlackThreshold, pixelBlackThreshold_);
      DARABONBA_PTR_FROM_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams() = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams(const SubmitSnapshotJobRequestTemplateConfigOverwriteParams &) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams(SubmitSnapshotJobRequestTemplateConfigOverwriteParams &&) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequestTemplateConfigOverwriteParams() = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams& operator=(const SubmitSnapshotJobRequestTemplateConfigOverwriteParams &) = default ;
    SubmitSnapshotJobRequestTemplateConfigOverwriteParams& operator=(SubmitSnapshotJobRequestTemplateConfigOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackLevel_ == nullptr
        && return this->count_ == nullptr && return this->frameType_ == nullptr && return this->height_ == nullptr && return this->interval_ == nullptr && return this->isSptFrag_ == nullptr
        && return this->pixelBlackThreshold_ == nullptr && return this->spriteSnapshotConfig_ == nullptr && return this->time_ == nullptr && return this->type_ == nullptr && return this->width_ == nullptr; };
    // blackLevel Field Functions 
    bool hasBlackLevel() const { return this->blackLevel_ != nullptr;};
    void deleteBlackLevel() { this->blackLevel_ = nullptr;};
    inline int32_t blackLevel() const { DARABONBA_PTR_GET_DEFAULT(blackLevel_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setBlackLevel(int32_t blackLevel) { DARABONBA_PTR_SET_VALUE(blackLevel_, blackLevel) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // frameType Field Functions 
    bool hasFrameType() const { return this->frameType_ != nullptr;};
    void deleteFrameType() { this->frameType_ = nullptr;};
    inline string frameType() const { DARABONBA_PTR_GET_DEFAULT(frameType_, "") };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setFrameType(string frameType) { DARABONBA_PTR_SET_VALUE(frameType_, frameType) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // isSptFrag Field Functions 
    bool hasIsSptFrag() const { return this->isSptFrag_ != nullptr;};
    void deleteIsSptFrag() { this->isSptFrag_ = nullptr;};
    inline bool isSptFrag() const { DARABONBA_PTR_GET_DEFAULT(isSptFrag_, false) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setIsSptFrag(bool isSptFrag) { DARABONBA_PTR_SET_VALUE(isSptFrag_, isSptFrag) };


    // pixelBlackThreshold Field Functions 
    bool hasPixelBlackThreshold() const { return this->pixelBlackThreshold_ != nullptr;};
    void deletePixelBlackThreshold() { this->pixelBlackThreshold_ = nullptr;};
    inline int32_t pixelBlackThreshold() const { DARABONBA_PTR_GET_DEFAULT(pixelBlackThreshold_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setPixelBlackThreshold(int32_t pixelBlackThreshold) { DARABONBA_PTR_SET_VALUE(pixelBlackThreshold_, pixelBlackThreshold) };


    // spriteSnapshotConfig Field Functions 
    bool hasSpriteSnapshotConfig() const { return this->spriteSnapshotConfig_ != nullptr;};
    void deleteSpriteSnapshotConfig() { this->spriteSnapshotConfig_ = nullptr;};
    inline const Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig & spriteSnapshotConfig() const { DARABONBA_PTR_GET_CONST(spriteSnapshotConfig_, Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig) };
    inline Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig spriteSnapshotConfig() { DARABONBA_PTR_GET(spriteSnapshotConfig_, Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setSpriteSnapshotConfig(const Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig & spriteSnapshotConfig) { DARABONBA_PTR_SET_VALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setSpriteSnapshotConfig(Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig && spriteSnapshotConfig) { DARABONBA_PTR_SET_RVALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline SubmitSnapshotJobRequestTemplateConfigOverwriteParams& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The threshold that is used to filter out black frames for the first snapshot to be captured. This feature is available if you request the system to capture multiple snapshots.
    std::shared_ptr<int32_t> blackLevel_ = nullptr;
    // The number of snapshots.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The type of the frame.
    std::shared_ptr<string> frameType_ = nullptr;
    // The height of a captured snapshot.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The interval at which snapshots are captured.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The WebVTT snapshot configuration that specifies whether to merge the output snapshots.
    std::shared_ptr<bool> isSptFrag_ = nullptr;
    // The color value threshold that determines whether a pixel is black.
    std::shared_ptr<int32_t> pixelBlackThreshold_ = nullptr;
    // The configuration of the sprite snapshot.
    std::shared_ptr<Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParamsSpriteSnapshotConfig> spriteSnapshotConfig_ = nullptr;
    // The point in time at which the system starts to capture snapshots in the input video.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The snapshot type. Valid values:
    std::shared_ptr<string> type_ = nullptr;
    // The width of a captured snapshot.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
