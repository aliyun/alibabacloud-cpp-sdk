// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHDRVIDEOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHDRVIDEOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ConvertHdrVideoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHdrVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_TO_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHdrVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(HDRFormat, HDRFormat_);
      DARABONBA_PTR_FROM_JSON(MaxIlluminance, maxIlluminance_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    ConvertHdrVideoAdvanceRequest() = default ;
    ConvertHdrVideoAdvanceRequest(const ConvertHdrVideoAdvanceRequest &) = default ;
    ConvertHdrVideoAdvanceRequest(ConvertHdrVideoAdvanceRequest &&) = default ;
    ConvertHdrVideoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHdrVideoAdvanceRequest() = default ;
    ConvertHdrVideoAdvanceRequest& operator=(const ConvertHdrVideoAdvanceRequest &) = default ;
    ConvertHdrVideoAdvanceRequest& operator=(ConvertHdrVideoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->HDRFormat_ != nullptr && this->maxIlluminance_ != nullptr && this->videoURLObject_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline ConvertHdrVideoAdvanceRequest& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // HDRFormat Field Functions 
    bool hasHDRFormat() const { return this->HDRFormat_ != nullptr;};
    void deleteHDRFormat() { this->HDRFormat_ = nullptr;};
    inline string HDRFormat() const { DARABONBA_PTR_GET_DEFAULT(HDRFormat_, "") };
    inline ConvertHdrVideoAdvanceRequest& setHDRFormat(string HDRFormat) { DARABONBA_PTR_SET_VALUE(HDRFormat_, HDRFormat) };


    // maxIlluminance Field Functions 
    bool hasMaxIlluminance() const { return this->maxIlluminance_ != nullptr;};
    void deleteMaxIlluminance() { this->maxIlluminance_ = nullptr;};
    inline int32_t maxIlluminance() const { DARABONBA_PTR_GET_DEFAULT(maxIlluminance_, 0) };
    inline ConvertHdrVideoAdvanceRequest& setMaxIlluminance(int32_t maxIlluminance) { DARABONBA_PTR_SET_VALUE(maxIlluminance_, maxIlluminance) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline ConvertHdrVideoAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<string> HDRFormat_ = nullptr;
    std::shared_ptr<int32_t> maxIlluminance_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
