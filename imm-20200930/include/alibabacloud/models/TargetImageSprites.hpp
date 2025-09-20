// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETIMAGESPRITES_HPP_
#define ALIBABACLOUD_MODELS_TARGETIMAGESPRITES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetImageSprites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetImageSprites& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Margin, margin_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Pad, pad_);
      DARABONBA_PTR_TO_JSON(ScaleHeight, scaleHeight_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(ScaleWidth, scaleWidth_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(TileHeight, tileHeight_);
      DARABONBA_PTR_TO_JSON(TileWidth, tileWidth_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, TargetImageSprites& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Margin, margin_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Pad, pad_);
      DARABONBA_PTR_FROM_JSON(ScaleHeight, scaleHeight_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(ScaleWidth, scaleWidth_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(TileHeight, tileHeight_);
      DARABONBA_PTR_FROM_JSON(TileWidth, tileWidth_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    TargetImageSprites() = default ;
    TargetImageSprites(const TargetImageSprites &) = default ;
    TargetImageSprites(TargetImageSprites &&) = default ;
    TargetImageSprites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetImageSprites() = default ;
    TargetImageSprites& operator=(const TargetImageSprites &) = default ;
    TargetImageSprites& operator=(TargetImageSprites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->format_ != nullptr
        && this->interval_ != nullptr && this->margin_ != nullptr && this->mode_ != nullptr && this->number_ != nullptr && this->pad_ != nullptr
        && this->scaleHeight_ != nullptr && this->scaleType_ != nullptr && this->scaleWidth_ != nullptr && this->startTime_ != nullptr && this->threshold_ != nullptr
        && this->tileHeight_ != nullptr && this->tileWidth_ != nullptr && this->URI_ != nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline TargetImageSprites& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline double interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
    inline TargetImageSprites& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // margin Field Functions 
    bool hasMargin() const { return this->margin_ != nullptr;};
    void deleteMargin() { this->margin_ = nullptr;};
    inline int32_t margin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0) };
    inline TargetImageSprites& setMargin(int32_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline TargetImageSprites& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline TargetImageSprites& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline int32_t pad() const { DARABONBA_PTR_GET_DEFAULT(pad_, 0) };
    inline TargetImageSprites& setPad(int32_t pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // scaleHeight Field Functions 
    bool hasScaleHeight() const { return this->scaleHeight_ != nullptr;};
    void deleteScaleHeight() { this->scaleHeight_ = nullptr;};
    inline float scaleHeight() const { DARABONBA_PTR_GET_DEFAULT(scaleHeight_, 0.0) };
    inline TargetImageSprites& setScaleHeight(float scaleHeight) { DARABONBA_PTR_SET_VALUE(scaleHeight_, scaleHeight) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline TargetImageSprites& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // scaleWidth Field Functions 
    bool hasScaleWidth() const { return this->scaleWidth_ != nullptr;};
    void deleteScaleWidth() { this->scaleWidth_ = nullptr;};
    inline float scaleWidth() const { DARABONBA_PTR_GET_DEFAULT(scaleWidth_, 0.0) };
    inline TargetImageSprites& setScaleWidth(float scaleWidth) { DARABONBA_PTR_SET_VALUE(scaleWidth_, scaleWidth) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline TargetImageSprites& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline TargetImageSprites& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // tileHeight Field Functions 
    bool hasTileHeight() const { return this->tileHeight_ != nullptr;};
    void deleteTileHeight() { this->tileHeight_ = nullptr;};
    inline int32_t tileHeight() const { DARABONBA_PTR_GET_DEFAULT(tileHeight_, 0) };
    inline TargetImageSprites& setTileHeight(int32_t tileHeight) { DARABONBA_PTR_SET_VALUE(tileHeight_, tileHeight) };


    // tileWidth Field Functions 
    bool hasTileWidth() const { return this->tileWidth_ != nullptr;};
    void deleteTileWidth() { this->tileWidth_ = nullptr;};
    inline int32_t tileWidth() const { DARABONBA_PTR_GET_DEFAULT(tileWidth_, 0) };
    inline TargetImageSprites& setTileWidth(int32_t tileWidth) { DARABONBA_PTR_SET_VALUE(tileWidth_, tileWidth) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline TargetImageSprites& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<double> interval_ = nullptr;
    std::shared_ptr<int32_t> margin_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<int32_t> pad_ = nullptr;
    std::shared_ptr<float> scaleHeight_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
    std::shared_ptr<float> scaleWidth_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    std::shared_ptr<int32_t> threshold_ = nullptr;
    std::shared_ptr<int32_t> tileHeight_ = nullptr;
    std::shared_ptr<int32_t> tileWidth_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
