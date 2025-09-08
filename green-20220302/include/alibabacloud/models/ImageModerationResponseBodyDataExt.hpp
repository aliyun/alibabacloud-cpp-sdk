// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtCustomImage.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtFaceData.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtLogoData.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtOcrResult.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtPublicFigure.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtRecognition.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtTextInImage.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtVlContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExt& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
      DARABONBA_PTR_TO_JSON(FaceData, faceData_);
      DARABONBA_PTR_TO_JSON(LogoData, logoData_);
      DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_TO_JSON(Recognition, recognition_);
      DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
      DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExt& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
      DARABONBA_PTR_FROM_JSON(FaceData, faceData_);
      DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
      DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_FROM_JSON(Recognition, recognition_);
      DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
      DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
    };
    ImageModerationResponseBodyDataExt() = default ;
    ImageModerationResponseBodyDataExt(const ImageModerationResponseBodyDataExt &) = default ;
    ImageModerationResponseBodyDataExt(ImageModerationResponseBodyDataExt &&) = default ;
    ImageModerationResponseBodyDataExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExt() = default ;
    ImageModerationResponseBodyDataExt& operator=(const ImageModerationResponseBodyDataExt &) = default ;
    ImageModerationResponseBodyDataExt& operator=(ImageModerationResponseBodyDataExt &&) = default ;
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
    inline const vector<Models::ImageModerationResponseBodyDataExtCustomImage> & customImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Models::ImageModerationResponseBodyDataExtCustomImage>) };
    inline vector<Models::ImageModerationResponseBodyDataExtCustomImage> customImage() { DARABONBA_PTR_GET(customImage_, vector<Models::ImageModerationResponseBodyDataExtCustomImage>) };
    inline ImageModerationResponseBodyDataExt& setCustomImage(const vector<Models::ImageModerationResponseBodyDataExtCustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
    inline ImageModerationResponseBodyDataExt& setCustomImage(vector<Models::ImageModerationResponseBodyDataExtCustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


    // faceData Field Functions 
    bool hasFaceData() const { return this->faceData_ != nullptr;};
    void deleteFaceData() { this->faceData_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtFaceData> & faceData() const { DARABONBA_PTR_GET_CONST(faceData_, vector<Models::ImageModerationResponseBodyDataExtFaceData>) };
    inline vector<Models::ImageModerationResponseBodyDataExtFaceData> faceData() { DARABONBA_PTR_GET(faceData_, vector<Models::ImageModerationResponseBodyDataExtFaceData>) };
    inline ImageModerationResponseBodyDataExt& setFaceData(const vector<Models::ImageModerationResponseBodyDataExtFaceData> & faceData) { DARABONBA_PTR_SET_VALUE(faceData_, faceData) };
    inline ImageModerationResponseBodyDataExt& setFaceData(vector<Models::ImageModerationResponseBodyDataExtFaceData> && faceData) { DARABONBA_PTR_SET_RVALUE(faceData_, faceData) };


    // logoData Field Functions 
    bool hasLogoData() const { return this->logoData_ != nullptr;};
    void deleteLogoData() { this->logoData_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtLogoData> & logoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Models::ImageModerationResponseBodyDataExtLogoData>) };
    inline vector<Models::ImageModerationResponseBodyDataExtLogoData> logoData() { DARABONBA_PTR_GET(logoData_, vector<Models::ImageModerationResponseBodyDataExtLogoData>) };
    inline ImageModerationResponseBodyDataExt& setLogoData(const vector<Models::ImageModerationResponseBodyDataExtLogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
    inline ImageModerationResponseBodyDataExt& setLogoData(vector<Models::ImageModerationResponseBodyDataExtLogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


    // ocrResult Field Functions 
    bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
    void deleteOcrResult() { this->ocrResult_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtOcrResult> & ocrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Models::ImageModerationResponseBodyDataExtOcrResult>) };
    inline vector<Models::ImageModerationResponseBodyDataExtOcrResult> ocrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Models::ImageModerationResponseBodyDataExtOcrResult>) };
    inline ImageModerationResponseBodyDataExt& setOcrResult(const vector<Models::ImageModerationResponseBodyDataExtOcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
    inline ImageModerationResponseBodyDataExt& setOcrResult(vector<Models::ImageModerationResponseBodyDataExtOcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


    // publicFigure Field Functions 
    bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
    void deletePublicFigure() { this->publicFigure_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtPublicFigure> & publicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Models::ImageModerationResponseBodyDataExtPublicFigure>) };
    inline vector<Models::ImageModerationResponseBodyDataExtPublicFigure> publicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Models::ImageModerationResponseBodyDataExtPublicFigure>) };
    inline ImageModerationResponseBodyDataExt& setPublicFigure(const vector<Models::ImageModerationResponseBodyDataExtPublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
    inline ImageModerationResponseBodyDataExt& setPublicFigure(vector<Models::ImageModerationResponseBodyDataExtPublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


    // recognition Field Functions 
    bool hasRecognition() const { return this->recognition_ != nullptr;};
    void deleteRecognition() { this->recognition_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtRecognition> & recognition() const { DARABONBA_PTR_GET_CONST(recognition_, vector<Models::ImageModerationResponseBodyDataExtRecognition>) };
    inline vector<Models::ImageModerationResponseBodyDataExtRecognition> recognition() { DARABONBA_PTR_GET(recognition_, vector<Models::ImageModerationResponseBodyDataExtRecognition>) };
    inline ImageModerationResponseBodyDataExt& setRecognition(const vector<Models::ImageModerationResponseBodyDataExtRecognition> & recognition) { DARABONBA_PTR_SET_VALUE(recognition_, recognition) };
    inline ImageModerationResponseBodyDataExt& setRecognition(vector<Models::ImageModerationResponseBodyDataExtRecognition> && recognition) { DARABONBA_PTR_SET_RVALUE(recognition_, recognition) };


    // textInImage Field Functions 
    bool hasTextInImage() const { return this->textInImage_ != nullptr;};
    void deleteTextInImage() { this->textInImage_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtTextInImage & textInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Models::ImageModerationResponseBodyDataExtTextInImage) };
    inline Models::ImageModerationResponseBodyDataExtTextInImage textInImage() { DARABONBA_PTR_GET(textInImage_, Models::ImageModerationResponseBodyDataExtTextInImage) };
    inline ImageModerationResponseBodyDataExt& setTextInImage(const Models::ImageModerationResponseBodyDataExtTextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
    inline ImageModerationResponseBodyDataExt& setTextInImage(Models::ImageModerationResponseBodyDataExtTextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


    // vlContent Field Functions 
    bool hasVlContent() const { return this->vlContent_ != nullptr;};
    void deleteVlContent() { this->vlContent_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtVlContent & vlContent() const { DARABONBA_PTR_GET_CONST(vlContent_, Models::ImageModerationResponseBodyDataExtVlContent) };
    inline Models::ImageModerationResponseBodyDataExtVlContent vlContent() { DARABONBA_PTR_GET(vlContent_, Models::ImageModerationResponseBodyDataExtVlContent) };
    inline ImageModerationResponseBodyDataExt& setVlContent(const Models::ImageModerationResponseBodyDataExtVlContent & vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };
    inline ImageModerationResponseBodyDataExt& setVlContent(Models::ImageModerationResponseBodyDataExtVlContent && vlContent) { DARABONBA_PTR_SET_RVALUE(vlContent_, vlContent) };


  protected:
    // If a custom image library is hit, information about the hit custom image library is returned.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtCustomImage>> customImage_ = nullptr;
    // The returned face attribute information
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtFaceData>> faceData_ = nullptr;
    // Logo information.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtLogoData>> logoData_ = nullptr;
    // Returns the text information in the recognized image.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtOcrResult>> ocrResult_ = nullptr;
    // Person information list.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtPublicFigure>> publicFigure_ = nullptr;
    // The result of image recognition.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtRecognition>> recognition_ = nullptr;
    // Returns the text information in the hit image.
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtTextInImage> textInImage_ = nullptr;
    // the vl output content
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtVlContent> vlContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
