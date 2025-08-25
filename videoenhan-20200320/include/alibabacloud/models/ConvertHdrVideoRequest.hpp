// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHDRVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHDRVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ConvertHdrVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHdrVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_TO_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHdrVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_FROM_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    ConvertHdrVideoRequest() = default ;
    ConvertHdrVideoRequest(const ConvertHdrVideoRequest &) = default ;
    ConvertHdrVideoRequest(ConvertHdrVideoRequest &&) = default ;
    ConvertHdrVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHdrVideoRequest() = default ;
    ConvertHdrVideoRequest& operator=(const ConvertHdrVideoRequest &) = default ;
    ConvertHdrVideoRequest& operator=(ConvertHdrVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->HDRFormat_ != nullptr && this->maxIlluminance_ != nullptr && this->videoURL_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline ConvertHdrVideoRequest& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // HDRFormat Field Functions 
    bool hasHDRFormat() const { return this->HDRFormat_ != nullptr;};
    void deleteHDRFormat() { this->HDRFormat_ = nullptr;};
    inline string HDRFormat() const { DARABONBA_PTR_GET_DEFAULT(HDRFormat_, "") };
    inline ConvertHdrVideoRequest& setHDRFormat(string HDRFormat) { DARABONBA_PTR_SET_VALUE(HDRFormat_, HDRFormat) };


    // maxIlluminance Field Functions 
    bool hasMaxIlluminance() const { return this->maxIlluminance_ != nullptr;};
    void deleteMaxIlluminance() { this->maxIlluminance_ = nullptr;};
    inline int32_t maxIlluminance() const { DARABONBA_PTR_GET_DEFAULT(maxIlluminance_, 0) };
    inline ConvertHdrVideoRequest& setMaxIlluminance(int32_t maxIlluminance) { DARABONBA_PTR_SET_VALUE(maxIlluminance_, maxIlluminance) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline ConvertHdrVideoRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<string> HDRFormat_ = nullptr;
    std::shared_ptr<int32_t> maxIlluminance_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
