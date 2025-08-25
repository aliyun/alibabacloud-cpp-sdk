// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EnhanceVideoQualityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceVideoQualityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_TO_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_TO_JSON(OutPutHeight, outPutHeight_);
      DARABONBA_PTR_TO_JSON(OutPutWidth, outPutWidth_);
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceVideoQualityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_FROM_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_FROM_JSON(OutPutHeight, outPutHeight_);
      DARABONBA_PTR_FROM_JSON(OutPutWidth, outPutWidth_);
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    EnhanceVideoQualityRequest() = default ;
    EnhanceVideoQualityRequest(const EnhanceVideoQualityRequest &) = default ;
    EnhanceVideoQualityRequest(EnhanceVideoQualityRequest &&) = default ;
    EnhanceVideoQualityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceVideoQualityRequest() = default ;
    EnhanceVideoQualityRequest& operator=(const EnhanceVideoQualityRequest &) = default ;
    EnhanceVideoQualityRequest& operator=(EnhanceVideoQualityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->frameRate_ != nullptr && this->HDRFormat_ != nullptr && this->maxIlluminance_ != nullptr && this->outPutHeight_ != nullptr && this->outPutWidth_ != nullptr
        && this->videoURL_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline EnhanceVideoQualityRequest& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline EnhanceVideoQualityRequest& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // HDRFormat Field Functions 
    bool hasHDRFormat() const { return this->HDRFormat_ != nullptr;};
    void deleteHDRFormat() { this->HDRFormat_ = nullptr;};
    inline string HDRFormat() const { DARABONBA_PTR_GET_DEFAULT(HDRFormat_, "") };
    inline EnhanceVideoQualityRequest& setHDRFormat(string HDRFormat) { DARABONBA_PTR_SET_VALUE(HDRFormat_, HDRFormat) };


    // maxIlluminance Field Functions 
    bool hasMaxIlluminance() const { return this->maxIlluminance_ != nullptr;};
    void deleteMaxIlluminance() { this->maxIlluminance_ = nullptr;};
    inline int32_t maxIlluminance() const { DARABONBA_PTR_GET_DEFAULT(maxIlluminance_, 0) };
    inline EnhanceVideoQualityRequest& setMaxIlluminance(int32_t maxIlluminance) { DARABONBA_PTR_SET_VALUE(maxIlluminance_, maxIlluminance) };


    // outPutHeight Field Functions 
    bool hasOutPutHeight() const { return this->outPutHeight_ != nullptr;};
    void deleteOutPutHeight() { this->outPutHeight_ = nullptr;};
    inline int32_t outPutHeight() const { DARABONBA_PTR_GET_DEFAULT(outPutHeight_, 0) };
    inline EnhanceVideoQualityRequest& setOutPutHeight(int32_t outPutHeight) { DARABONBA_PTR_SET_VALUE(outPutHeight_, outPutHeight) };


    // outPutWidth Field Functions 
    bool hasOutPutWidth() const { return this->outPutWidth_ != nullptr;};
    void deleteOutPutWidth() { this->outPutWidth_ = nullptr;};
    inline int32_t outPutWidth() const { DARABONBA_PTR_GET_DEFAULT(outPutWidth_, 0) };
    inline EnhanceVideoQualityRequest& setOutPutWidth(int32_t outPutWidth) { DARABONBA_PTR_SET_VALUE(outPutWidth_, outPutWidth) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline EnhanceVideoQualityRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    std::shared_ptr<string> HDRFormat_ = nullptr;
    std::shared_ptr<int32_t> maxIlluminance_ = nullptr;
    std::shared_ptr<int32_t> outPutHeight_ = nullptr;
    std::shared_ptr<int32_t> outPutWidth_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
