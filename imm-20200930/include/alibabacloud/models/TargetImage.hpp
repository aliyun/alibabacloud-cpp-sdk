// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETIMAGE_HPP_
#define ALIBABACLOUD_MODELS_TARGETIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetImage& obj) { 
      DARABONBA_PTR_TO_JSON(Animations, animations_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Sprites, sprites_);
    };
    friend void from_json(const Darabonba::Json& j, TargetImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Animations, animations_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Sprites, sprites_);
    };
    TargetImage() = default ;
    TargetImage(const TargetImage &) = default ;
    TargetImage(TargetImage &&) = default ;
    TargetImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetImage() = default ;
    TargetImage& operator=(const TargetImage &) = default ;
    TargetImage& operator=(TargetImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sprites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sprites& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Sprites& obj) { 
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
      Sprites() = default ;
      Sprites(const Sprites &) = default ;
      Sprites(Sprites &&) = default ;
      Sprites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sprites() = default ;
      Sprites& operator=(const Sprites &) = default ;
      Sprites& operator=(Sprites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->format_ == nullptr
        && this->interval_ == nullptr && this->margin_ == nullptr && this->mode_ == nullptr && this->number_ == nullptr && this->pad_ == nullptr
        && this->scaleHeight_ == nullptr && this->scaleType_ == nullptr && this->scaleWidth_ == nullptr && this->startTime_ == nullptr && this->threshold_ == nullptr
        && this->tileHeight_ == nullptr && this->tileWidth_ == nullptr && this->URI_ == nullptr; };
      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Sprites& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline double getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
      inline Sprites& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // margin Field Functions 
      bool hasMargin() const { return this->margin_ != nullptr;};
      void deleteMargin() { this->margin_ = nullptr;};
      inline int32_t getMargin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0) };
      inline Sprites& setMargin(int32_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Sprites& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
      inline Sprites& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // pad Field Functions 
      bool hasPad() const { return this->pad_ != nullptr;};
      void deletePad() { this->pad_ = nullptr;};
      inline int32_t getPad() const { DARABONBA_PTR_GET_DEFAULT(pad_, 0) };
      inline Sprites& setPad(int32_t pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


      // scaleHeight Field Functions 
      bool hasScaleHeight() const { return this->scaleHeight_ != nullptr;};
      void deleteScaleHeight() { this->scaleHeight_ = nullptr;};
      inline float getScaleHeight() const { DARABONBA_PTR_GET_DEFAULT(scaleHeight_, 0.0) };
      inline Sprites& setScaleHeight(float scaleHeight) { DARABONBA_PTR_SET_VALUE(scaleHeight_, scaleHeight) };


      // scaleType Field Functions 
      bool hasScaleType() const { return this->scaleType_ != nullptr;};
      void deleteScaleType() { this->scaleType_ = nullptr;};
      inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
      inline Sprites& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


      // scaleWidth Field Functions 
      bool hasScaleWidth() const { return this->scaleWidth_ != nullptr;};
      void deleteScaleWidth() { this->scaleWidth_ = nullptr;};
      inline float getScaleWidth() const { DARABONBA_PTR_GET_DEFAULT(scaleWidth_, 0.0) };
      inline Sprites& setScaleWidth(float scaleWidth) { DARABONBA_PTR_SET_VALUE(scaleWidth_, scaleWidth) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
      inline Sprites& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline Sprites& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // tileHeight Field Functions 
      bool hasTileHeight() const { return this->tileHeight_ != nullptr;};
      void deleteTileHeight() { this->tileHeight_ = nullptr;};
      inline int32_t getTileHeight() const { DARABONBA_PTR_GET_DEFAULT(tileHeight_, 0) };
      inline Sprites& setTileHeight(int32_t tileHeight) { DARABONBA_PTR_SET_VALUE(tileHeight_, tileHeight) };


      // tileWidth Field Functions 
      bool hasTileWidth() const { return this->tileWidth_ != nullptr;};
      void deleteTileWidth() { this->tileWidth_ = nullptr;};
      inline int32_t getTileWidth() const { DARABONBA_PTR_GET_DEFAULT(tileWidth_, 0) };
      inline Sprites& setTileWidth(int32_t tileWidth) { DARABONBA_PTR_SET_VALUE(tileWidth_, tileWidth) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sprites& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The format of the sprite. Valid values:
      // 
      // *   jpg
      // *   png
      // 
      // This parameter is required.
      shared_ptr<string> format_ {};
      // The time interval of frame capturing in seconds.
      shared_ptr<double> interval_ {};
      // The margin between the small images and the edges of the sprite. Default value: 2.
      shared_ptr<int32_t> margin_ {};
      shared_ptr<string> mode_ {};
      // The number of small images in the sprite. The default value is 0, which indicates that frames are captured until the end of the video.
      shared_ptr<int32_t> number_ {};
      // The padding between small images. Default value: 2.
      shared_ptr<int32_t> pad_ {};
      // The height of individual small images. The default value is 1. The value can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: (1,4096).
      // *   A decimal: the ratio relative to the height of the target video resolution. Valid values: (0,1].
      shared_ptr<float> scaleHeight_ {};
      // The resizing mode. Valid values:
      // 
      // *   stretch: stretches the image to fill the entire space. This is the default value.
      // *   crop: resizes and crops the image.
      // *   fill: resizes the image and keeps the black border.
      // *   fit: resizes the image and removes the black border.
      shared_ptr<string> scaleType_ {};
      // The width of individual small images. The default value is 1. The value can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: (1,4096).
      // *   A decimal: the ratio relative to the width of the target video resolution. Valid values: (0,1].
      shared_ptr<float> scaleWidth_ {};
      // The time in seconds at which frame capturing starts. The default value is 0, which indicates that frame capturing starts at the beginning of the video.
      shared_ptr<double> startTime_ {};
      shared_ptr<int32_t> threshold_ {};
      // The number of small images in each column. Default value: 6.
      shared_ptr<int32_t> tileHeight_ {};
      // The number of small images in each row. Default value: 6.
      shared_ptr<int32_t> tileWidth_ {};
      // The URI of the sprite in Object Storage Service (OSS).
      // 
      // The OSS URI follows the oss://bucket/object format, where bucket is the name of the bucket in the same region as the current project and object is the path of the object with the extension included.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Snapshots() = default ;
      Snapshots(const Snapshots &) = default ;
      Snapshots(Snapshots &&) = default ;
      Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshots() = default ;
      Snapshots& operator=(const Snapshots &) = default ;
      Snapshots& operator=(Snapshots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->format_ == nullptr
        && this->height_ == nullptr && this->interval_ == nullptr && this->mode_ == nullptr && this->number_ == nullptr && this->scaleType_ == nullptr
        && this->startTime_ == nullptr && this->threshold_ == nullptr && this->URI_ == nullptr && this->width_ == nullptr; };
      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Snapshots& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Snapshots& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline double getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
      inline Snapshots& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Snapshots& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
      inline Snapshots& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // scaleType Field Functions 
      bool hasScaleType() const { return this->scaleType_ != nullptr;};
      void deleteScaleType() { this->scaleType_ = nullptr;};
      inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
      inline Snapshots& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
      inline Snapshots& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline Snapshots& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Snapshots& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Snapshots& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The format of the frame. Valid values:
      // 
      // *   jpg
      // *   png
      // 
      // This parameter is required.
      shared_ptr<string> format_ {};
      // The height of the frame image. By default, the image has the same height as the source video. The value of the parameter can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: [1,4096].
      // *   A decimal: the ratio relative to the height of the target image resolution. Valid values: (0,1).
      shared_ptr<double> height_ {};
      // The time interval of frame capturing in seconds.
      shared_ptr<double> interval_ {};
      shared_ptr<string> mode_ {};
      // The number of frames. The default value is 0, which indicates that frames are captured until the end of the video.
      shared_ptr<int32_t> number_ {};
      // The resizing mode. Valid values:
      // 
      // *   stretch: stretches the image to fill the entire space. This is the default value.
      // *   crop: resizes and crops the image.
      // *   fill: resizes the image and keeps the black border.
      // *   fit: resizes the image and removes the black border.
      shared_ptr<string> scaleType_ {};
      // The time in seconds at which frame capturing starts. The default value is 0, which indicates that frame capturing starts at the beginning of the video.
      shared_ptr<double> startTime_ {};
      shared_ptr<int32_t> threshold_ {};
      // The OSS URI of the frame.
      // 
      // The OSS URI follows the oss://bucket/object format, where bucket is the name of the bucket in the same region as the current project and object is the path of the object with the extension included.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
      // The width of the frame image. By default, the image has the same width as the source video. The value of the parameter can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: [1,4096].
      // *   A decimal: the ratio relative to the width of the target image resolution. Valid values: (0,1).
      shared_ptr<double> width_ {};
    };

    class Animations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Animations& obj) { 
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Animations& obj) { 
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Animations() = default ;
      Animations(const Animations &) = default ;
      Animations(Animations &&) = default ;
      Animations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Animations() = default ;
      Animations& operator=(const Animations &) = default ;
      Animations& operator=(Animations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->format_ == nullptr
        && this->frameRate_ == nullptr && this->height_ == nullptr && this->interval_ == nullptr && this->number_ == nullptr && this->scaleType_ == nullptr
        && this->startTime_ == nullptr && this->URI_ == nullptr && this->width_ == nullptr; };
      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Animations& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // frameRate Field Functions 
      bool hasFrameRate() const { return this->frameRate_ != nullptr;};
      void deleteFrameRate() { this->frameRate_ = nullptr;};
      inline double getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0.0) };
      inline Animations& setFrameRate(double frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline double getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Animations& setHeight(double height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline double getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
      inline Animations& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
      inline Animations& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // scaleType Field Functions 
      bool hasScaleType() const { return this->scaleType_ != nullptr;};
      void deleteScaleType() { this->scaleType_ = nullptr;};
      inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
      inline Animations& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
      inline Animations& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Animations& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline double getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Animations& setWidth(double width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The format of the animated image. Valid values:
      // 
      // *   gif
      // *   webp
      // 
      // This parameter is required.
      shared_ptr<string> format_ {};
      // The frame rate of the animated image. You can use this parameter together with the Interval parameter to slow down the animation.
      shared_ptr<double> frameRate_ {};
      // The height of the animated image. By default, the animated image has the same height as the source video. The value of the parameter can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: [1,4096].
      // *   A decimal: the ratio relative to the height of the target image resolution. Valid values: (0,1).
      shared_ptr<double> height_ {};
      // The time interval for extracting frames. Unit: seconds.
      shared_ptr<double> interval_ {};
      // The number of extracted frames. The default value is 0, which indicates that frames are extracted until the end of the video.
      shared_ptr<int32_t> number_ {};
      // The resizing mode. Valid values:
      // 
      // *   stretch: stretches the image to fill the entire space. This is the default value.
      // *   crop: resizes and crops the image.
      // *   fill: resizes the image and keeps the black border.
      // *   fit: resizes the image and removes the black border.
      shared_ptr<string> scaleType_ {};
      // The start time for extracting frames. Unit: seconds. Default value: 0.
      shared_ptr<double> startTime_ {};
      // The URI of the animated image.
      // 
      // The OSS URI follows the oss://bucket/object format, where bucket is the name of the bucket in the same region as the current project and object is the path of the object with the extension included.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
      // The width of the animated image. By default, the animated image has the same width as the source video. The value of the parameter can be an integer or a decimal.
      // 
      // *   An integer: the number of pixels. Valid values: [1,4096].
      // *   A decimal: the ratio relative to the width of the target image resolution. Valid values: (0,1).
      shared_ptr<double> width_ {};
    };

    virtual bool empty() const override { return this->animations_ == nullptr
        && this->snapshots_ == nullptr && this->sprites_ == nullptr; };
    // animations Field Functions 
    bool hasAnimations() const { return this->animations_ != nullptr;};
    void deleteAnimations() { this->animations_ = nullptr;};
    inline const vector<TargetImage::Animations> & getAnimations() const { DARABONBA_PTR_GET_CONST(animations_, vector<TargetImage::Animations>) };
    inline vector<TargetImage::Animations> getAnimations() { DARABONBA_PTR_GET(animations_, vector<TargetImage::Animations>) };
    inline TargetImage& setAnimations(const vector<TargetImage::Animations> & animations) { DARABONBA_PTR_SET_VALUE(animations_, animations) };
    inline TargetImage& setAnimations(vector<TargetImage::Animations> && animations) { DARABONBA_PTR_SET_RVALUE(animations_, animations) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<TargetImage::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<TargetImage::Snapshots>) };
    inline vector<TargetImage::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<TargetImage::Snapshots>) };
    inline TargetImage& setSnapshots(const vector<TargetImage::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline TargetImage& setSnapshots(vector<TargetImage::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // sprites Field Functions 
    bool hasSprites() const { return this->sprites_ != nullptr;};
    void deleteSprites() { this->sprites_ = nullptr;};
    inline const vector<TargetImage::Sprites> & getSprites() const { DARABONBA_PTR_GET_CONST(sprites_, vector<TargetImage::Sprites>) };
    inline vector<TargetImage::Sprites> getSprites() { DARABONBA_PTR_GET(sprites_, vector<TargetImage::Sprites>) };
    inline TargetImage& setSprites(const vector<TargetImage::Sprites> & sprites) { DARABONBA_PTR_SET_VALUE(sprites_, sprites) };
    inline TargetImage& setSprites(vector<TargetImage::Sprites> && sprites) { DARABONBA_PTR_SET_RVALUE(sprites_, sprites) };


  protected:
    // The animated images.
    shared_ptr<vector<TargetImage::Animations>> animations_ {};
    // The frames.
    shared_ptr<vector<TargetImage::Snapshots>> snapshots_ {};
    // The sprites.
    shared_ptr<vector<TargetImage::Sprites>> sprites_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
