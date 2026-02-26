// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOSTREAM_HPP_
#define ALIBABACLOUD_MODELS_VIDEOSTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoStream& obj) { 
      DARABONBA_PTR_TO_JSON(AverageFrameRate, averageFrameRate_);
      DARABONBA_PTR_TO_JSON(BitDepth, bitDepth_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_TO_JSON(ColorPrimaries, colorPrimaries_);
      DARABONBA_PTR_TO_JSON(ColorRange, colorRange_);
      DARABONBA_PTR_TO_JSON(ColorSpace, colorSpace_);
      DARABONBA_PTR_TO_JSON(ColorTransfer, colorTransfer_);
      DARABONBA_PTR_TO_JSON(DisplayAspectRatio, displayAspectRatio_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PixelFormat, pixelFormat_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(SampleAspectRatio, sampleAspectRatio_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeBase, timeBase_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, VideoStream& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageFrameRate, averageFrameRate_);
      DARABONBA_PTR_FROM_JSON(BitDepth, bitDepth_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_FROM_JSON(ColorPrimaries, colorPrimaries_);
      DARABONBA_PTR_FROM_JSON(ColorRange, colorRange_);
      DARABONBA_PTR_FROM_JSON(ColorSpace, colorSpace_);
      DARABONBA_PTR_FROM_JSON(ColorTransfer, colorTransfer_);
      DARABONBA_PTR_FROM_JSON(DisplayAspectRatio, displayAspectRatio_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PixelFormat, pixelFormat_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(SampleAspectRatio, sampleAspectRatio_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeBase, timeBase_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    VideoStream() = default ;
    VideoStream(const VideoStream &) = default ;
    VideoStream(VideoStream &&) = default ;
    VideoStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoStream() = default ;
    VideoStream& operator=(const VideoStream &) = default ;
    VideoStream& operator=(VideoStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->averageFrameRate_ == nullptr
        && this->bitDepth_ == nullptr && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->colorPrimaries_ == nullptr && this->colorRange_ == nullptr && this->colorSpace_ == nullptr
        && this->colorTransfer_ == nullptr && this->displayAspectRatio_ == nullptr && this->duration_ == nullptr && this->frameCount_ == nullptr && this->frameRate_ == nullptr
        && this->hasBFrames_ == nullptr && this->height_ == nullptr && this->index_ == nullptr && this->language_ == nullptr && this->level_ == nullptr
        && this->pixelFormat_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sampleAspectRatio_ == nullptr && this->startTime_ == nullptr
        && this->timeBase_ == nullptr && this->width_ == nullptr; };
    // averageFrameRate Field Functions 
    bool hasAverageFrameRate() const { return this->averageFrameRate_ != nullptr;};
    void deleteAverageFrameRate() { this->averageFrameRate_ = nullptr;};
    inline string getAverageFrameRate() const { DARABONBA_PTR_GET_DEFAULT(averageFrameRate_, "") };
    inline VideoStream& setAverageFrameRate(string averageFrameRate) { DARABONBA_PTR_SET_VALUE(averageFrameRate_, averageFrameRate) };


    // bitDepth Field Functions 
    bool hasBitDepth() const { return this->bitDepth_ != nullptr;};
    void deleteBitDepth() { this->bitDepth_ = nullptr;};
    inline int64_t getBitDepth() const { DARABONBA_PTR_GET_DEFAULT(bitDepth_, 0L) };
    inline VideoStream& setBitDepth(int64_t bitDepth) { DARABONBA_PTR_SET_VALUE(bitDepth_, bitDepth) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline VideoStream& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // codecLongName Field Functions 
    bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
    void deleteCodecLongName() { this->codecLongName_ = nullptr;};
    inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
    inline VideoStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline VideoStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // codecTag Field Functions 
    bool hasCodecTag() const { return this->codecTag_ != nullptr;};
    void deleteCodecTag() { this->codecTag_ = nullptr;};
    inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
    inline VideoStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


    // codecTagString Field Functions 
    bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
    void deleteCodecTagString() { this->codecTagString_ = nullptr;};
    inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
    inline VideoStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


    // codecTimeBase Field Functions 
    bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
    void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
    inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
    inline VideoStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


    // colorPrimaries Field Functions 
    bool hasColorPrimaries() const { return this->colorPrimaries_ != nullptr;};
    void deleteColorPrimaries() { this->colorPrimaries_ = nullptr;};
    inline string getColorPrimaries() const { DARABONBA_PTR_GET_DEFAULT(colorPrimaries_, "") };
    inline VideoStream& setColorPrimaries(string colorPrimaries) { DARABONBA_PTR_SET_VALUE(colorPrimaries_, colorPrimaries) };


    // colorRange Field Functions 
    bool hasColorRange() const { return this->colorRange_ != nullptr;};
    void deleteColorRange() { this->colorRange_ = nullptr;};
    inline string getColorRange() const { DARABONBA_PTR_GET_DEFAULT(colorRange_, "") };
    inline VideoStream& setColorRange(string colorRange) { DARABONBA_PTR_SET_VALUE(colorRange_, colorRange) };


    // colorSpace Field Functions 
    bool hasColorSpace() const { return this->colorSpace_ != nullptr;};
    void deleteColorSpace() { this->colorSpace_ = nullptr;};
    inline string getColorSpace() const { DARABONBA_PTR_GET_DEFAULT(colorSpace_, "") };
    inline VideoStream& setColorSpace(string colorSpace) { DARABONBA_PTR_SET_VALUE(colorSpace_, colorSpace) };


    // colorTransfer Field Functions 
    bool hasColorTransfer() const { return this->colorTransfer_ != nullptr;};
    void deleteColorTransfer() { this->colorTransfer_ = nullptr;};
    inline string getColorTransfer() const { DARABONBA_PTR_GET_DEFAULT(colorTransfer_, "") };
    inline VideoStream& setColorTransfer(string colorTransfer) { DARABONBA_PTR_SET_VALUE(colorTransfer_, colorTransfer) };


    // displayAspectRatio Field Functions 
    bool hasDisplayAspectRatio() const { return this->displayAspectRatio_ != nullptr;};
    void deleteDisplayAspectRatio() { this->displayAspectRatio_ = nullptr;};
    inline string getDisplayAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(displayAspectRatio_, "") };
    inline VideoStream& setDisplayAspectRatio(string displayAspectRatio) { DARABONBA_PTR_SET_VALUE(displayAspectRatio_, displayAspectRatio) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline VideoStream& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // frameCount Field Functions 
    bool hasFrameCount() const { return this->frameCount_ != nullptr;};
    void deleteFrameCount() { this->frameCount_ = nullptr;};
    inline int64_t getFrameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0L) };
    inline VideoStream& setFrameCount(int64_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline string getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, "") };
    inline VideoStream& setFrameRate(string frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // hasBFrames Field Functions 
    bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
    void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
    inline int64_t getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, 0L) };
    inline VideoStream& setHasBFrames(int64_t hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline VideoStream& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline VideoStream& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline VideoStream& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline VideoStream& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pixelFormat Field Functions 
    bool hasPixelFormat() const { return this->pixelFormat_ != nullptr;};
    void deletePixelFormat() { this->pixelFormat_ = nullptr;};
    inline string getPixelFormat() const { DARABONBA_PTR_GET_DEFAULT(pixelFormat_, "") };
    inline VideoStream& setPixelFormat(string pixelFormat) { DARABONBA_PTR_SET_VALUE(pixelFormat_, pixelFormat) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline VideoStream& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline VideoStream& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // sampleAspectRatio Field Functions 
    bool hasSampleAspectRatio() const { return this->sampleAspectRatio_ != nullptr;};
    void deleteSampleAspectRatio() { this->sampleAspectRatio_ = nullptr;};
    inline string getSampleAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(sampleAspectRatio_, "") };
    inline VideoStream& setSampleAspectRatio(string sampleAspectRatio) { DARABONBA_PTR_SET_VALUE(sampleAspectRatio_, sampleAspectRatio) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline VideoStream& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeBase Field Functions 
    bool hasTimeBase() const { return this->timeBase_ != nullptr;};
    void deleteTimeBase() { this->timeBase_ = nullptr;};
    inline string getTimeBase() const { DARABONBA_PTR_GET_DEFAULT(timeBase_, "") };
    inline VideoStream& setTimeBase(string timeBase) { DARABONBA_PTR_SET_VALUE(timeBase_, timeBase) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline VideoStream& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The average frame rate of the video stream.
    shared_ptr<string> averageFrameRate_ {};
    // The bit depth.
    shared_ptr<int64_t> bitDepth_ {};
    // The bitrate. Unit: bit/s.
    shared_ptr<int64_t> bitrate_ {};
    // The full name of the codec.
    shared_ptr<string> codecLongName_ {};
    // The abbreviated name of the codec.
    shared_ptr<string> codecName_ {};
    // The tag of the codec.
    shared_ptr<string> codecTag_ {};
    // The description of the codec tag.
    shared_ptr<string> codecTagString_ {};
    // The time base of the codec.
    shared_ptr<string> codecTimeBase_ {};
    // The primary colors.
    shared_ptr<string> colorPrimaries_ {};
    // The color range.
    shared_ptr<string> colorRange_ {};
    // The color space.
    shared_ptr<string> colorSpace_ {};
    // The color transfer function.
    shared_ptr<string> colorTransfer_ {};
    // The display aspect ratio of the video stream.
    shared_ptr<string> displayAspectRatio_ {};
    // The duration of the video stream. Unit: seconds.
    shared_ptr<double> duration_ {};
    // The number of frames.
    shared_ptr<int64_t> frameCount_ {};
    // The frame rate of the video stream.
    shared_ptr<string> frameRate_ {};
    // Specifies whether the video stream contains B frames.
    shared_ptr<int64_t> hasBFrames_ {};
    // The image height of the video stream. Unit: pixels.
    shared_ptr<int64_t> height_ {};
    // The index number of the video stream.
    shared_ptr<int64_t> index_ {};
    // The language used in the video stream. The language is indicated by using a BCP 47 language tag.
    shared_ptr<string> language_ {};
    // The level.
    shared_ptr<int64_t> level_ {};
    // The pixel format of the video stream.
    shared_ptr<string> pixelFormat_ {};
    // The profile.
    shared_ptr<string> profile_ {};
    // The image rotation angle of the video stream.
    shared_ptr<string> rotate_ {};
    // The sampling aspect ratio of the video stream.
    shared_ptr<string> sampleAspectRatio_ {};
    // The start time of the video stream. Unit: seconds.
    shared_ptr<double> startTime_ {};
    // The time base.
    shared_ptr<string> timeBase_ {};
    // The image width of the video stream. Unit: pixels.
    shared_ptr<int64_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
