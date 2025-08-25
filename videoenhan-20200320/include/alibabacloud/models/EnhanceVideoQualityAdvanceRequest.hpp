// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEVIDEOQUALITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EnhanceVideoQualityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceVideoQualityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_TO_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_TO_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_TO_JSON(OutPutHeight, outPutHeight_);
      DARABONBA_PTR_TO_JSON(OutPutWidth, outPutWidth_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceVideoQualityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_PTR_FROM_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_FROM_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_FROM_JSON(OutPutHeight, outPutHeight_);
      DARABONBA_PTR_FROM_JSON(OutPutWidth, outPutWidth_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    EnhanceVideoQualityAdvanceRequest() = default ;
    EnhanceVideoQualityAdvanceRequest(const EnhanceVideoQualityAdvanceRequest &) = default ;
    EnhanceVideoQualityAdvanceRequest(EnhanceVideoQualityAdvanceRequest &&) = default ;
    EnhanceVideoQualityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceVideoQualityAdvanceRequest() = default ;
    EnhanceVideoQualityAdvanceRequest& operator=(const EnhanceVideoQualityAdvanceRequest &) = default ;
    EnhanceVideoQualityAdvanceRequest& operator=(EnhanceVideoQualityAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->frameRate_ != nullptr && this->HDRFormat_ != nullptr && this->maxIlluminance_ != nullptr && this->outPutHeight_ != nullptr && this->outPutWidth_ != nullptr
        && this->videoURLObject_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline EnhanceVideoQualityAdvanceRequest& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline EnhanceVideoQualityAdvanceRequest& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // HDRFormat Field Functions 
    bool hasHDRFormat() const { return this->HDRFormat_ != nullptr;};
    void deleteHDRFormat() { this->HDRFormat_ = nullptr;};
    inline string HDRFormat() const { DARABONBA_PTR_GET_DEFAULT(HDRFormat_, "") };
    inline EnhanceVideoQualityAdvanceRequest& setHDRFormat(string HDRFormat) { DARABONBA_PTR_SET_VALUE(HDRFormat_, HDRFormat) };


    // maxIlluminance Field Functions 
    bool hasMaxIlluminance() const { return this->maxIlluminance_ != nullptr;};
    void deleteMaxIlluminance() { this->maxIlluminance_ = nullptr;};
    inline int32_t maxIlluminance() const { DARABONBA_PTR_GET_DEFAULT(maxIlluminance_, 0) };
    inline EnhanceVideoQualityAdvanceRequest& setMaxIlluminance(int32_t maxIlluminance) { DARABONBA_PTR_SET_VALUE(maxIlluminance_, maxIlluminance) };


    // outPutHeight Field Functions 
    bool hasOutPutHeight() const { return this->outPutHeight_ != nullptr;};
    void deleteOutPutHeight() { this->outPutHeight_ = nullptr;};
    inline int32_t outPutHeight() const { DARABONBA_PTR_GET_DEFAULT(outPutHeight_, 0) };
    inline EnhanceVideoQualityAdvanceRequest& setOutPutHeight(int32_t outPutHeight) { DARABONBA_PTR_SET_VALUE(outPutHeight_, outPutHeight) };


    // outPutWidth Field Functions 
    bool hasOutPutWidth() const { return this->outPutWidth_ != nullptr;};
    void deleteOutPutWidth() { this->outPutWidth_ = nullptr;};
    inline int32_t outPutWidth() const { DARABONBA_PTR_GET_DEFAULT(outPutWidth_, 0) };
    inline EnhanceVideoQualityAdvanceRequest& setOutPutWidth(int32_t outPutWidth) { DARABONBA_PTR_SET_VALUE(outPutWidth_, outPutWidth) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline EnhanceVideoQualityAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    std::shared_ptr<string> HDRFormat_ = nullptr;
    std::shared_ptr<int32_t> maxIlluminance_ = nullptr;
    std::shared_ptr<int32_t> outPutHeight_ = nullptr;
    std::shared_ptr<int32_t> outPutWidth_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
