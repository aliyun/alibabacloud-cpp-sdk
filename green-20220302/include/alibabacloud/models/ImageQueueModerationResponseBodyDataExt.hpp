// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtCustomImage.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtFaceData.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtLogoData.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtOcrResult.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtPublicFigure.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtRecognition.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtTextInImage.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtVlContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExt& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
      DARABONBA_PTR_TO_JSON(FaceData, faceData_);
      DARABONBA_PTR_TO_JSON(LogoData, logoData_);
      DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_TO_JSON(Recognition, recognition_);
      DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
      DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExt& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
      DARABONBA_PTR_FROM_JSON(FaceData, faceData_);
      DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
      DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_FROM_JSON(Recognition, recognition_);
      DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
      DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
    };
    ImageQueueModerationResponseBodyDataExt() = default ;
    ImageQueueModerationResponseBodyDataExt(const ImageQueueModerationResponseBodyDataExt &) = default ;
    ImageQueueModerationResponseBodyDataExt(ImageQueueModerationResponseBodyDataExt &&) = default ;
    ImageQueueModerationResponseBodyDataExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExt() = default ;
    ImageQueueModerationResponseBodyDataExt& operator=(const ImageQueueModerationResponseBodyDataExt &) = default ;
    ImageQueueModerationResponseBodyDataExt& operator=(ImageQueueModerationResponseBodyDataExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customImage_ != nullptr
        && this->faceData_ != nullptr && this->logoData_ != nullptr && this->ocrResult_ != nullptr && this->publicFigure_ != nullptr && this->recognition_ != nullptr
        && this->textInImage_ != nullptr && this->vlContent_ != nullptr; };
    // customImage Field Functions 
    bool hasCustomImage() const { return this->customImage_ != nullptr;};
    void deleteCustomImage() { this->customImage_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage> & customImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage> customImage() { DARABONBA_PTR_GET(customImage_, vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage>) };
    inline ImageQueueModerationResponseBodyDataExt& setCustomImage(const vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
    inline ImageQueueModerationResponseBodyDataExt& setCustomImage(vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


    // faceData Field Functions 
    bool hasFaceData() const { return this->faceData_ != nullptr;};
    void deleteFaceData() { this->faceData_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtFaceData> & faceData() const { DARABONBA_PTR_GET_CONST(faceData_, vector<Models::ImageQueueModerationResponseBodyDataExtFaceData>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtFaceData> faceData() { DARABONBA_PTR_GET(faceData_, vector<Models::ImageQueueModerationResponseBodyDataExtFaceData>) };
    inline ImageQueueModerationResponseBodyDataExt& setFaceData(const vector<Models::ImageQueueModerationResponseBodyDataExtFaceData> & faceData) { DARABONBA_PTR_SET_VALUE(faceData_, faceData) };
    inline ImageQueueModerationResponseBodyDataExt& setFaceData(vector<Models::ImageQueueModerationResponseBodyDataExtFaceData> && faceData) { DARABONBA_PTR_SET_RVALUE(faceData_, faceData) };


    // logoData Field Functions 
    bool hasLogoData() const { return this->logoData_ != nullptr;};
    void deleteLogoData() { this->logoData_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtLogoData> & logoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Models::ImageQueueModerationResponseBodyDataExtLogoData>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtLogoData> logoData() { DARABONBA_PTR_GET(logoData_, vector<Models::ImageQueueModerationResponseBodyDataExtLogoData>) };
    inline ImageQueueModerationResponseBodyDataExt& setLogoData(const vector<Models::ImageQueueModerationResponseBodyDataExtLogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
    inline ImageQueueModerationResponseBodyDataExt& setLogoData(vector<Models::ImageQueueModerationResponseBodyDataExtLogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


    // ocrResult Field Functions 
    bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
    void deleteOcrResult() { this->ocrResult_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult> & ocrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult> ocrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult>) };
    inline ImageQueueModerationResponseBodyDataExt& setOcrResult(const vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
    inline ImageQueueModerationResponseBodyDataExt& setOcrResult(vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


    // publicFigure Field Functions 
    bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
    void deletePublicFigure() { this->publicFigure_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure> & publicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure> publicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure>) };
    inline ImageQueueModerationResponseBodyDataExt& setPublicFigure(const vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
    inline ImageQueueModerationResponseBodyDataExt& setPublicFigure(vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


    // recognition Field Functions 
    bool hasRecognition() const { return this->recognition_ != nullptr;};
    void deleteRecognition() { this->recognition_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtRecognition> & recognition() const { DARABONBA_PTR_GET_CONST(recognition_, vector<Models::ImageQueueModerationResponseBodyDataExtRecognition>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtRecognition> recognition() { DARABONBA_PTR_GET(recognition_, vector<Models::ImageQueueModerationResponseBodyDataExtRecognition>) };
    inline ImageQueueModerationResponseBodyDataExt& setRecognition(const vector<Models::ImageQueueModerationResponseBodyDataExtRecognition> & recognition) { DARABONBA_PTR_SET_VALUE(recognition_, recognition) };
    inline ImageQueueModerationResponseBodyDataExt& setRecognition(vector<Models::ImageQueueModerationResponseBodyDataExtRecognition> && recognition) { DARABONBA_PTR_SET_RVALUE(recognition_, recognition) };


    // textInImage Field Functions 
    bool hasTextInImage() const { return this->textInImage_ != nullptr;};
    void deleteTextInImage() { this->textInImage_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtTextInImage & textInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Models::ImageQueueModerationResponseBodyDataExtTextInImage) };
    inline Models::ImageQueueModerationResponseBodyDataExtTextInImage textInImage() { DARABONBA_PTR_GET(textInImage_, Models::ImageQueueModerationResponseBodyDataExtTextInImage) };
    inline ImageQueueModerationResponseBodyDataExt& setTextInImage(const Models::ImageQueueModerationResponseBodyDataExtTextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
    inline ImageQueueModerationResponseBodyDataExt& setTextInImage(Models::ImageQueueModerationResponseBodyDataExtTextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


    // vlContent Field Functions 
    bool hasVlContent() const { return this->vlContent_ != nullptr;};
    void deleteVlContent() { this->vlContent_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtVlContent & vlContent() const { DARABONBA_PTR_GET_CONST(vlContent_, Models::ImageQueueModerationResponseBodyDataExtVlContent) };
    inline Models::ImageQueueModerationResponseBodyDataExtVlContent vlContent() { DARABONBA_PTR_GET(vlContent_, Models::ImageQueueModerationResponseBodyDataExtVlContent) };
    inline ImageQueueModerationResponseBodyDataExt& setVlContent(const Models::ImageQueueModerationResponseBodyDataExtVlContent & vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };
    inline ImageQueueModerationResponseBodyDataExt& setVlContent(Models::ImageQueueModerationResponseBodyDataExtVlContent && vlContent) { DARABONBA_PTR_SET_RVALUE(vlContent_, vlContent) };


  protected:
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtCustomImage>> customImage_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtFaceData>> faceData_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtLogoData>> logoData_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtOcrResult>> ocrResult_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtPublicFigure>> publicFigure_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtRecognition>> recognition_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtTextInImage> textInImage_ = nullptr;
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtVlContent> vlContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
