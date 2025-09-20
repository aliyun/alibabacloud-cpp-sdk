// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOTRANSCODEVIDEO_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOTRANSCODEVIDEO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoTranscodeVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoTranscodeVideo& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptiveResolutionDirection, adaptiveResolutionDirection_);
      DARABONBA_PTR_TO_JSON(BFrames, BFrames_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BitrateOption, bitrateOption_);
      DARABONBA_PTR_TO_JSON(BufferSize, bufferSize_);
      DARABONBA_PTR_TO_JSON(CRF, CRF_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(FrameRateOption, frameRateOption_);
      DARABONBA_PTR_TO_JSON(GOPSize, GOPSize_);
      DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_TO_JSON(PixelFormat, pixelFormat_);
      DARABONBA_PTR_TO_JSON(Refs, refs_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(ResolutionOption, resolutionOption_);
      DARABONBA_PTR_TO_JSON(Rotation, rotation_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoTranscodeVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptiveResolutionDirection, adaptiveResolutionDirection_);
      DARABONBA_PTR_FROM_JSON(BFrames, BFrames_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BitrateOption, bitrateOption_);
      DARABONBA_PTR_FROM_JSON(BufferSize, bufferSize_);
      DARABONBA_PTR_FROM_JSON(CRF, CRF_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(FrameRateOption, frameRateOption_);
      DARABONBA_PTR_FROM_JSON(GOPSize, GOPSize_);
      DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
      DARABONBA_PTR_FROM_JSON(PixelFormat, pixelFormat_);
      DARABONBA_PTR_FROM_JSON(Refs, refs_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(ResolutionOption, resolutionOption_);
      DARABONBA_PTR_FROM_JSON(Rotation, rotation_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
    };
    TargetVideoTranscodeVideo() = default ;
    TargetVideoTranscodeVideo(const TargetVideoTranscodeVideo &) = default ;
    TargetVideoTranscodeVideo(TargetVideoTranscodeVideo &&) = default ;
    TargetVideoTranscodeVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoTranscodeVideo() = default ;
    TargetVideoTranscodeVideo& operator=(const TargetVideoTranscodeVideo &) = default ;
    TargetVideoTranscodeVideo& operator=(TargetVideoTranscodeVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adaptiveResolutionDirection_ != nullptr
        && this->BFrames_ != nullptr && this->bitrate_ != nullptr && this->bitrateOption_ != nullptr && this->bufferSize_ != nullptr && this->CRF_ != nullptr
        && this->codec_ != nullptr && this->frameRate_ != nullptr && this->frameRateOption_ != nullptr && this->GOPSize_ != nullptr && this->maxBitrate_ != nullptr
        && this->pixelFormat_ != nullptr && this->refs_ != nullptr && this->resolution_ != nullptr && this->resolutionOption_ != nullptr && this->rotation_ != nullptr
        && this->scaleType_ != nullptr; };
    // adaptiveResolutionDirection Field Functions 
    bool hasAdaptiveResolutionDirection() const { return this->adaptiveResolutionDirection_ != nullptr;};
    void deleteAdaptiveResolutionDirection() { this->adaptiveResolutionDirection_ = nullptr;};
    inline bool adaptiveResolutionDirection() const { DARABONBA_PTR_GET_DEFAULT(adaptiveResolutionDirection_, false) };
    inline TargetVideoTranscodeVideo& setAdaptiveResolutionDirection(bool adaptiveResolutionDirection) { DARABONBA_PTR_SET_VALUE(adaptiveResolutionDirection_, adaptiveResolutionDirection) };


    // BFrames Field Functions 
    bool hasBFrames() const { return this->BFrames_ != nullptr;};
    void deleteBFrames() { this->BFrames_ = nullptr;};
    inline int32_t BFrames() const { DARABONBA_PTR_GET_DEFAULT(BFrames_, 0) };
    inline TargetVideoTranscodeVideo& setBFrames(int32_t BFrames) { DARABONBA_PTR_SET_VALUE(BFrames_, BFrames) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline TargetVideoTranscodeVideo& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bitrateOption Field Functions 
    bool hasBitrateOption() const { return this->bitrateOption_ != nullptr;};
    void deleteBitrateOption() { this->bitrateOption_ = nullptr;};
    inline string bitrateOption() const { DARABONBA_PTR_GET_DEFAULT(bitrateOption_, "") };
    inline TargetVideoTranscodeVideo& setBitrateOption(string bitrateOption) { DARABONBA_PTR_SET_VALUE(bitrateOption_, bitrateOption) };


    // bufferSize Field Functions 
    bool hasBufferSize() const { return this->bufferSize_ != nullptr;};
    void deleteBufferSize() { this->bufferSize_ = nullptr;};
    inline int32_t bufferSize() const { DARABONBA_PTR_GET_DEFAULT(bufferSize_, 0) };
    inline TargetVideoTranscodeVideo& setBufferSize(int32_t bufferSize) { DARABONBA_PTR_SET_VALUE(bufferSize_, bufferSize) };


    // CRF Field Functions 
    bool hasCRF() const { return this->CRF_ != nullptr;};
    void deleteCRF() { this->CRF_ = nullptr;};
    inline float CRF() const { DARABONBA_PTR_GET_DEFAULT(CRF_, 0.0) };
    inline TargetVideoTranscodeVideo& setCRF(float CRF) { DARABONBA_PTR_SET_VALUE(CRF_, CRF) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline TargetVideoTranscodeVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline float frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0.0) };
    inline TargetVideoTranscodeVideo& setFrameRate(float frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // frameRateOption Field Functions 
    bool hasFrameRateOption() const { return this->frameRateOption_ != nullptr;};
    void deleteFrameRateOption() { this->frameRateOption_ = nullptr;};
    inline string frameRateOption() const { DARABONBA_PTR_GET_DEFAULT(frameRateOption_, "") };
    inline TargetVideoTranscodeVideo& setFrameRateOption(string frameRateOption) { DARABONBA_PTR_SET_VALUE(frameRateOption_, frameRateOption) };


    // GOPSize Field Functions 
    bool hasGOPSize() const { return this->GOPSize_ != nullptr;};
    void deleteGOPSize() { this->GOPSize_ = nullptr;};
    inline int32_t GOPSize() const { DARABONBA_PTR_GET_DEFAULT(GOPSize_, 0) };
    inline TargetVideoTranscodeVideo& setGOPSize(int32_t GOPSize) { DARABONBA_PTR_SET_VALUE(GOPSize_, GOPSize) };


    // maxBitrate Field Functions 
    bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
    void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
    inline int32_t maxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
    inline TargetVideoTranscodeVideo& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


    // pixelFormat Field Functions 
    bool hasPixelFormat() const { return this->pixelFormat_ != nullptr;};
    void deletePixelFormat() { this->pixelFormat_ = nullptr;};
    inline string pixelFormat() const { DARABONBA_PTR_GET_DEFAULT(pixelFormat_, "") };
    inline TargetVideoTranscodeVideo& setPixelFormat(string pixelFormat) { DARABONBA_PTR_SET_VALUE(pixelFormat_, pixelFormat) };


    // refs Field Functions 
    bool hasRefs() const { return this->refs_ != nullptr;};
    void deleteRefs() { this->refs_ = nullptr;};
    inline int32_t refs() const { DARABONBA_PTR_GET_DEFAULT(refs_, 0) };
    inline TargetVideoTranscodeVideo& setRefs(int32_t refs) { DARABONBA_PTR_SET_VALUE(refs_, refs) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline TargetVideoTranscodeVideo& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // resolutionOption Field Functions 
    bool hasResolutionOption() const { return this->resolutionOption_ != nullptr;};
    void deleteResolutionOption() { this->resolutionOption_ = nullptr;};
    inline string resolutionOption() const { DARABONBA_PTR_GET_DEFAULT(resolutionOption_, "") };
    inline TargetVideoTranscodeVideo& setResolutionOption(string resolutionOption) { DARABONBA_PTR_SET_VALUE(resolutionOption_, resolutionOption) };


    // rotation Field Functions 
    bool hasRotation() const { return this->rotation_ != nullptr;};
    void deleteRotation() { this->rotation_ = nullptr;};
    inline int32_t rotation() const { DARABONBA_PTR_GET_DEFAULT(rotation_, 0) };
    inline TargetVideoTranscodeVideo& setRotation(int32_t rotation) { DARABONBA_PTR_SET_VALUE(rotation_, rotation) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline TargetVideoTranscodeVideo& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


  protected:
    std::shared_ptr<bool> adaptiveResolutionDirection_ = nullptr;
    std::shared_ptr<int32_t> BFrames_ = nullptr;
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<string> bitrateOption_ = nullptr;
    std::shared_ptr<int32_t> bufferSize_ = nullptr;
    std::shared_ptr<float> CRF_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<float> frameRate_ = nullptr;
    std::shared_ptr<string> frameRateOption_ = nullptr;
    std::shared_ptr<int32_t> GOPSize_ = nullptr;
    std::shared_ptr<int32_t> maxBitrate_ = nullptr;
    std::shared_ptr<string> pixelFormat_ = nullptr;
    std::shared_ptr<int32_t> refs_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<string> resolutionOption_ = nullptr;
    std::shared_ptr<int32_t> rotation_ = nullptr;
    std::shared_ptr<string> scaleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
