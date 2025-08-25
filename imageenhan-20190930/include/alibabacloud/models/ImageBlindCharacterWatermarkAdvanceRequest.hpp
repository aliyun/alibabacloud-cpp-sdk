// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImageBlindCharacterWatermarkAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBlindCharacterWatermarkAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_TO_JSON(OriginImageURL, originImageURLObject_);
      DARABONBA_PTR_TO_JSON(OutputFileType, outputFileType_);
      DARABONBA_PTR_TO_JSON(QualityFactor, qualityFactor_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_TO_JSON(WatermarkImageURL, watermarkImageURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBlindCharacterWatermarkAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_FROM_JSON(OriginImageURL, originImageURLObject_);
      DARABONBA_PTR_FROM_JSON(OutputFileType, outputFileType_);
      DARABONBA_PTR_FROM_JSON(QualityFactor, qualityFactor_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_FROM_JSON(WatermarkImageURL, watermarkImageURLObject_);
    };
    ImageBlindCharacterWatermarkAdvanceRequest() = default ;
    ImageBlindCharacterWatermarkAdvanceRequest(const ImageBlindCharacterWatermarkAdvanceRequest &) = default ;
    ImageBlindCharacterWatermarkAdvanceRequest(ImageBlindCharacterWatermarkAdvanceRequest &&) = default ;
    ImageBlindCharacterWatermarkAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBlindCharacterWatermarkAdvanceRequest() = default ;
    ImageBlindCharacterWatermarkAdvanceRequest& operator=(const ImageBlindCharacterWatermarkAdvanceRequest &) = default ;
    ImageBlindCharacterWatermarkAdvanceRequest& operator=(ImageBlindCharacterWatermarkAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionType_ != nullptr
        && this->originImageURLObject_ != nullptr && this->outputFileType_ != nullptr && this->qualityFactor_ != nullptr && this->text_ != nullptr && this->watermarkImageURLObject_ != nullptr; };
    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // originImageURLObject Field Functions 
    bool hasOriginImageURLObject() const { return this->originImageURLObject_ != nullptr;};
    void deleteOriginImageURLObject() { this->originImageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> originImageURLObject() const { DARABONBA_GET(originImageURLObject_) };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setOriginImageURLObject(shared_ptr<Darabonba::IStream> originImageURLObject) { DARABONBA_SET_VALUE(originImageURLObject_, originImageURLObject) };


    // outputFileType Field Functions 
    bool hasOutputFileType() const { return this->outputFileType_ != nullptr;};
    void deleteOutputFileType() { this->outputFileType_ = nullptr;};
    inline string outputFileType() const { DARABONBA_PTR_GET_DEFAULT(outputFileType_, "") };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setOutputFileType(string outputFileType) { DARABONBA_PTR_SET_VALUE(outputFileType_, outputFileType) };


    // qualityFactor Field Functions 
    bool hasQualityFactor() const { return this->qualityFactor_ != nullptr;};
    void deleteQualityFactor() { this->qualityFactor_ = nullptr;};
    inline int32_t qualityFactor() const { DARABONBA_PTR_GET_DEFAULT(qualityFactor_, 0) };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setQualityFactor(int32_t qualityFactor) { DARABONBA_PTR_SET_VALUE(qualityFactor_, qualityFactor) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // watermarkImageURLObject Field Functions 
    bool hasWatermarkImageURLObject() const { return this->watermarkImageURLObject_ != nullptr;};
    void deleteWatermarkImageURLObject() { this->watermarkImageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> watermarkImageURLObject() const { DARABONBA_GET(watermarkImageURLObject_) };
    inline ImageBlindCharacterWatermarkAdvanceRequest& setWatermarkImageURLObject(shared_ptr<Darabonba::IStream> watermarkImageURLObject) { DARABONBA_SET_VALUE(watermarkImageURLObject_, watermarkImageURLObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> functionType_ = nullptr;
    shared_ptr<Darabonba::IStream> originImageURLObject_ = nullptr;
    std::shared_ptr<string> outputFileType_ = nullptr;
    std::shared_ptr<int32_t> qualityFactor_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    shared_ptr<Darabonba::IStream> watermarkImageURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
