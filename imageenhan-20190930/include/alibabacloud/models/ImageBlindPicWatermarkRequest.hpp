// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBLINDPICWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBLINDPICWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImageBlindPicWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBlindPicWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(LogoURL, logoURL_);
      DARABONBA_PTR_TO_JSON(OriginImageURL, originImageURL_);
      DARABONBA_PTR_TO_JSON(OutputFileType, outputFileType_);
      DARABONBA_PTR_TO_JSON(QualityFactor, qualityFactor_);
      DARABONBA_PTR_TO_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBlindPicWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(LogoURL, logoURL_);
      DARABONBA_PTR_FROM_JSON(OriginImageURL, originImageURL_);
      DARABONBA_PTR_FROM_JSON(OutputFileType, outputFileType_);
      DARABONBA_PTR_FROM_JSON(QualityFactor, qualityFactor_);
      DARABONBA_PTR_FROM_JSON(WatermarkImageURL, watermarkImageURL_);
    };
    ImageBlindPicWatermarkRequest() = default ;
    ImageBlindPicWatermarkRequest(const ImageBlindPicWatermarkRequest &) = default ;
    ImageBlindPicWatermarkRequest(ImageBlindPicWatermarkRequest &&) = default ;
    ImageBlindPicWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBlindPicWatermarkRequest() = default ;
    ImageBlindPicWatermarkRequest& operator=(const ImageBlindPicWatermarkRequest &) = default ;
    ImageBlindPicWatermarkRequest& operator=(ImageBlindPicWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionType_ == nullptr
        && return this->logoURL_ == nullptr && return this->originImageURL_ == nullptr && return this->outputFileType_ == nullptr && return this->qualityFactor_ == nullptr && return this->watermarkImageURL_ == nullptr; };
    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ImageBlindPicWatermarkRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // logoURL Field Functions 
    bool hasLogoURL() const { return this->logoURL_ != nullptr;};
    void deleteLogoURL() { this->logoURL_ = nullptr;};
    inline string logoURL() const { DARABONBA_PTR_GET_DEFAULT(logoURL_, "") };
    inline ImageBlindPicWatermarkRequest& setLogoURL(string logoURL) { DARABONBA_PTR_SET_VALUE(logoURL_, logoURL) };


    // originImageURL Field Functions 
    bool hasOriginImageURL() const { return this->originImageURL_ != nullptr;};
    void deleteOriginImageURL() { this->originImageURL_ = nullptr;};
    inline string originImageURL() const { DARABONBA_PTR_GET_DEFAULT(originImageURL_, "") };
    inline ImageBlindPicWatermarkRequest& setOriginImageURL(string originImageURL) { DARABONBA_PTR_SET_VALUE(originImageURL_, originImageURL) };


    // outputFileType Field Functions 
    bool hasOutputFileType() const { return this->outputFileType_ != nullptr;};
    void deleteOutputFileType() { this->outputFileType_ = nullptr;};
    inline string outputFileType() const { DARABONBA_PTR_GET_DEFAULT(outputFileType_, "") };
    inline ImageBlindPicWatermarkRequest& setOutputFileType(string outputFileType) { DARABONBA_PTR_SET_VALUE(outputFileType_, outputFileType) };


    // qualityFactor Field Functions 
    bool hasQualityFactor() const { return this->qualityFactor_ != nullptr;};
    void deleteQualityFactor() { this->qualityFactor_ = nullptr;};
    inline int32_t qualityFactor() const { DARABONBA_PTR_GET_DEFAULT(qualityFactor_, 0) };
    inline ImageBlindPicWatermarkRequest& setQualityFactor(int32_t qualityFactor) { DARABONBA_PTR_SET_VALUE(qualityFactor_, qualityFactor) };


    // watermarkImageURL Field Functions 
    bool hasWatermarkImageURL() const { return this->watermarkImageURL_ != nullptr;};
    void deleteWatermarkImageURL() { this->watermarkImageURL_ = nullptr;};
    inline string watermarkImageURL() const { DARABONBA_PTR_GET_DEFAULT(watermarkImageURL_, "") };
    inline ImageBlindPicWatermarkRequest& setWatermarkImageURL(string watermarkImageURL) { DARABONBA_PTR_SET_VALUE(watermarkImageURL_, watermarkImageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> functionType_ = nullptr;
    std::shared_ptr<string> logoURL_ = nullptr;
    std::shared_ptr<string> originImageURL_ = nullptr;
    std::shared_ptr<string> outputFileType_ = nullptr;
    std::shared_ptr<int32_t> qualityFactor_ = nullptr;
    std::shared_ptr<string> watermarkImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
