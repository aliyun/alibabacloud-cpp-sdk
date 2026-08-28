// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VISIONFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VISIONFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VisionFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VisionFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ability, abilityShrink_);
      DARABONBA_PTR_TO_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(IsFilter, isFilter_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonobjectDetectElements, nonobjectDetectElementsShrink_);
      DARABONBA_PTR_TO_JSON(NonobjectRemoveElements, nonobjectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectDetectElements, objectDetectElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TargetWidth, targetWidth_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_TO_JSON(UpscaleFactor, upscaleFactor_);
    };
    friend void from_json(const Darabonba::Json& j, VisionFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ability, abilityShrink_);
      DARABONBA_PTR_FROM_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(IsFilter, isFilter_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonobjectDetectElements, nonobjectDetectElementsShrink_);
      DARABONBA_PTR_FROM_JSON(NonobjectRemoveElements, nonobjectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectDetectElements, objectDetectElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetWidth, targetWidth_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_FROM_JSON(UpscaleFactor, upscaleFactor_);
    };
    VisionFlowShrinkRequest() = default ;
    VisionFlowShrinkRequest(const VisionFlowShrinkRequest &) = default ;
    VisionFlowShrinkRequest(VisionFlowShrinkRequest &&) = default ;
    VisionFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VisionFlowShrinkRequest() = default ;
    VisionFlowShrinkRequest& operator=(const VisionFlowShrinkRequest &) = default ;
    VisionFlowShrinkRequest& operator=(VisionFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abilityShrink_ == nullptr
        && this->backGroundType_ == nullptr && this->glossary_ == nullptr && this->imageUrl_ == nullptr && this->includingProductArea_ == nullptr && this->isFilter_ == nullptr
        && this->mask_ == nullptr && this->nonobjectDetectElementsShrink_ == nullptr && this->nonobjectRemoveElementsShrink_ == nullptr && this->objectDetectElementsShrink_ == nullptr && this->objectRemoveElementsShrink_ == nullptr
        && this->sourceLanguage_ == nullptr && this->targetHeight_ == nullptr && this->targetLanguage_ == nullptr && this->targetWidth_ == nullptr && this->translatingBrandInTheProduct_ == nullptr
        && this->upscaleFactor_ == nullptr; };
    // abilityShrink Field Functions 
    bool hasAbilityShrink() const { return this->abilityShrink_ != nullptr;};
    void deleteAbilityShrink() { this->abilityShrink_ = nullptr;};
    inline string getAbilityShrink() const { DARABONBA_PTR_GET_DEFAULT(abilityShrink_, "") };
    inline VisionFlowShrinkRequest& setAbilityShrink(string abilityShrink) { DARABONBA_PTR_SET_VALUE(abilityShrink_, abilityShrink) };


    // backGroundType Field Functions 
    bool hasBackGroundType() const { return this->backGroundType_ != nullptr;};
    void deleteBackGroundType() { this->backGroundType_ = nullptr;};
    inline string getBackGroundType() const { DARABONBA_PTR_GET_DEFAULT(backGroundType_, "") };
    inline VisionFlowShrinkRequest& setBackGroundType(string backGroundType) { DARABONBA_PTR_SET_VALUE(backGroundType_, backGroundType) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline VisionFlowShrinkRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline VisionFlowShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline VisionFlowShrinkRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // isFilter Field Functions 
    bool hasIsFilter() const { return this->isFilter_ != nullptr;};
    void deleteIsFilter() { this->isFilter_ = nullptr;};
    inline bool getIsFilter() const { DARABONBA_PTR_GET_DEFAULT(isFilter_, false) };
    inline VisionFlowShrinkRequest& setIsFilter(bool isFilter) { DARABONBA_PTR_SET_VALUE(isFilter_, isFilter) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline VisionFlowShrinkRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonobjectDetectElementsShrink Field Functions 
    bool hasNonobjectDetectElementsShrink() const { return this->nonobjectDetectElementsShrink_ != nullptr;};
    void deleteNonobjectDetectElementsShrink() { this->nonobjectDetectElementsShrink_ = nullptr;};
    inline string getNonobjectDetectElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonobjectDetectElementsShrink_, "") };
    inline VisionFlowShrinkRequest& setNonobjectDetectElementsShrink(string nonobjectDetectElementsShrink) { DARABONBA_PTR_SET_VALUE(nonobjectDetectElementsShrink_, nonobjectDetectElementsShrink) };


    // nonobjectRemoveElementsShrink Field Functions 
    bool hasNonobjectRemoveElementsShrink() const { return this->nonobjectRemoveElementsShrink_ != nullptr;};
    void deleteNonobjectRemoveElementsShrink() { this->nonobjectRemoveElementsShrink_ = nullptr;};
    inline string getNonobjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonobjectRemoveElementsShrink_, "") };
    inline VisionFlowShrinkRequest& setNonobjectRemoveElementsShrink(string nonobjectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(nonobjectRemoveElementsShrink_, nonobjectRemoveElementsShrink) };


    // objectDetectElementsShrink Field Functions 
    bool hasObjectDetectElementsShrink() const { return this->objectDetectElementsShrink_ != nullptr;};
    void deleteObjectDetectElementsShrink() { this->objectDetectElementsShrink_ = nullptr;};
    inline string getObjectDetectElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectDetectElementsShrink_, "") };
    inline VisionFlowShrinkRequest& setObjectDetectElementsShrink(string objectDetectElementsShrink) { DARABONBA_PTR_SET_VALUE(objectDetectElementsShrink_, objectDetectElementsShrink) };


    // objectRemoveElementsShrink Field Functions 
    bool hasObjectRemoveElementsShrink() const { return this->objectRemoveElementsShrink_ != nullptr;};
    void deleteObjectRemoveElementsShrink() { this->objectRemoveElementsShrink_ = nullptr;};
    inline string getObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectRemoveElementsShrink_, "") };
    inline VisionFlowShrinkRequest& setObjectRemoveElementsShrink(string objectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(objectRemoveElementsShrink_, objectRemoveElementsShrink) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline VisionFlowShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetHeight Field Functions 
    bool hasTargetHeight() const { return this->targetHeight_ != nullptr;};
    void deleteTargetHeight() { this->targetHeight_ = nullptr;};
    inline int32_t getTargetHeight() const { DARABONBA_PTR_GET_DEFAULT(targetHeight_, 0) };
    inline VisionFlowShrinkRequest& setTargetHeight(int32_t targetHeight) { DARABONBA_PTR_SET_VALUE(targetHeight_, targetHeight) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline VisionFlowShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // targetWidth Field Functions 
    bool hasTargetWidth() const { return this->targetWidth_ != nullptr;};
    void deleteTargetWidth() { this->targetWidth_ = nullptr;};
    inline int32_t getTargetWidth() const { DARABONBA_PTR_GET_DEFAULT(targetWidth_, 0) };
    inline VisionFlowShrinkRequest& setTargetWidth(int32_t targetWidth) { DARABONBA_PTR_SET_VALUE(targetWidth_, targetWidth) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline VisionFlowShrinkRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


    // upscaleFactor Field Functions 
    bool hasUpscaleFactor() const { return this->upscaleFactor_ != nullptr;};
    void deleteUpscaleFactor() { this->upscaleFactor_ = nullptr;};
    inline int32_t getUpscaleFactor() const { DARABONBA_PTR_GET_DEFAULT(upscaleFactor_, 0) };
    inline VisionFlowShrinkRequest& setUpscaleFactor(int32_t upscaleFactor) { DARABONBA_PTR_SET_VALUE(upscaleFactor_, upscaleFactor) };


  protected:
    // The AI capabilities to apply (1=Intelligent Element Detection, 2=Intelligent Matting, 3=Intelligent Removal, 4=Image Translation Pro, 5=Intelligent Cropping, 6=HD Upscaling). Multiple selections allowed.
    // 
    // This parameter is required.
    shared_ptr<string> abilityShrink_ {};
    // The background type of the output image. Valid values: WHITE_BACKGROUND (white background) and TRANSPARENT (transparent background). Required when the Intelligent Matting capability is selected.
    shared_ptr<string> backGroundType_ {};
    // The glossary ID. Optional. Create the glossary separately in the console and provide its ID. If empty, translation results are not modified.
    shared_ptr<string> glossary_ {};
    // The URL of the image to process. Required. Resolution must be greater than 256×256, long side no greater than 1920 pixels, short side no greater than 1080 pixels. File size must not exceed 5 MB. Supported formats: png, jpeg, jpg, bmp, webp.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to translate text on the image subject. Optional. Default value: false. Helps protect embedded information such as product names from being translated.
    shared_ptr<bool> includingProductArea_ {};
    // Specifies whether images containing the specified elements proceed to subsequent processing. A value of true indicates that images with the specified elements proceed to subsequent processing. A value of false indicates that images without the specified elements proceed. Required when the Intelligent Element Detection capability is selected.
    shared_ptr<bool> isFilter_ {};
    // The specific removal area in RLE format. Optional. If provided, this takes priority and the ObjectRemoveElements and NonobjectRemoveElements parameters are ignored.
    shared_ptr<string> mask_ {};
    // The elements to detect on the non-subject area of the image (1=Watermark, 2=Logo, 3=Text, 4=Text-bearing color block). Multiple selections allowed. When the Intelligent Element Detection capability is selected, at least one of NonobjectDetectElements or ObjectDetectElements is required.
    shared_ptr<string> nonobjectDetectElementsShrink_ {};
    // The elements to remove from the non-subject area of the image (1=Transparent text block, 2=Specific name, 3=Text, 4=Ad patch). Multiple selections allowed. When the Intelligent Removal capability is selected, at least one of NonobjectRemoveElements or ObjectRemoveElements is required.
    shared_ptr<string> nonobjectRemoveElementsShrink_ {};
    // The elements to detect on the image subject (1=Watermark, 2=Logo, 3=Text, 4=Text-bearing color block). Multiple selections allowed. When the Intelligent Element Detection capability is selected, at least one of ObjectDetectElements or NonobjectDetectElements is required.
    shared_ptr<string> objectDetectElementsShrink_ {};
    // The elements to remove from the image subject (1=Transparent text block, 2=Specific name, 3=Text, 4=Ad patch). Multiple selections allowed. When the Intelligent Removal capability is selected, at least one of ObjectRemoveElements or NonobjectRemoveElements is required.
    shared_ptr<string> objectRemoveElementsShrink_ {};
    // The source language code. Optional. Refer to the supported language pairs list for available language directions.
    shared_ptr<string> sourceLanguage_ {};
    // The desired height of the cropped image, in pixels. Valid values: 100 to 5000. Required when the Intelligent Cropping capability is selected.
    shared_ptr<int32_t> targetHeight_ {};
    // The target language code. Optional. Refer to the supported language pairs list for available language directions.
    shared_ptr<string> targetLanguage_ {};
    // The desired width of the cropped image, in pixels. Valid values: 100 to 5000. Required when the Intelligent Cropping capability is selected.
    shared_ptr<int32_t> targetWidth_ {};
    // Specifies whether to translate brand names in the image. Optional. Default value: false. Helps protect brand name information from being translated.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
    // The image upscaling factor. Optional. Default value: 2. Valid values: 2 to 4. Required when the HD Upscaling capability is selected.
    shared_ptr<int32_t> upscaleFactor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
