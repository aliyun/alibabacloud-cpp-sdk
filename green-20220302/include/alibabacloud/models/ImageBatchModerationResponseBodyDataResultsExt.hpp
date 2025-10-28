// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtCustomImage.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtLogoData.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtPublicFigure.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtTextInImage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExt& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
      DARABONBA_PTR_TO_JSON(LogoData, logoData_);
      DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExt& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
      DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
      DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
    };
    ImageBatchModerationResponseBodyDataResultsExt() = default ;
    ImageBatchModerationResponseBodyDataResultsExt(const ImageBatchModerationResponseBodyDataResultsExt &) = default ;
    ImageBatchModerationResponseBodyDataResultsExt(ImageBatchModerationResponseBodyDataResultsExt &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExt() = default ;
    ImageBatchModerationResponseBodyDataResultsExt& operator=(const ImageBatchModerationResponseBodyDataResultsExt &) = default ;
    ImageBatchModerationResponseBodyDataResultsExt& operator=(ImageBatchModerationResponseBodyDataResultsExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customImage_ == nullptr
        && return this->logoData_ == nullptr && return this->publicFigure_ == nullptr && return this->textInImage_ == nullptr; };
    // customImage Field Functions 
    bool hasCustomImage() const { return this->customImage_ != nullptr;};
    void deleteCustomImage() { this->customImage_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage> & customImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage> customImage() { DARABONBA_PTR_GET(customImage_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage>) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setCustomImage(const vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setCustomImage(vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


    // logoData Field Functions 
    bool hasLogoData() const { return this->logoData_ != nullptr;};
    void deleteLogoData() { this->logoData_ = nullptr;};
    inline const Models::ImageBatchModerationResponseBodyDataResultsExtLogoData & logoData() const { DARABONBA_PTR_GET_CONST(logoData_, Models::ImageBatchModerationResponseBodyDataResultsExtLogoData) };
    inline Models::ImageBatchModerationResponseBodyDataResultsExtLogoData logoData() { DARABONBA_PTR_GET(logoData_, Models::ImageBatchModerationResponseBodyDataResultsExtLogoData) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setLogoData(const Models::ImageBatchModerationResponseBodyDataResultsExtLogoData & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setLogoData(Models::ImageBatchModerationResponseBodyDataResultsExtLogoData && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


    // publicFigure Field Functions 
    bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
    void deletePublicFigure() { this->publicFigure_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure> & publicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure> publicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure>) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setPublicFigure(const vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setPublicFigure(vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


    // textInImage Field Functions 
    bool hasTextInImage() const { return this->textInImage_ != nullptr;};
    void deleteTextInImage() { this->textInImage_ = nullptr;};
    inline const Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage & textInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage) };
    inline Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage textInImage() { DARABONBA_PTR_GET(textInImage_, Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setTextInImage(const Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
    inline ImageBatchModerationResponseBodyDataResultsExt& setTextInImage(Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


  protected:
    // Custom image library hit information list.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsExtCustomImage>> customImage_ = nullptr;
    // Logo identification information.
    std::shared_ptr<Models::ImageBatchModerationResponseBodyDataResultsExtLogoData> logoData_ = nullptr;
    // List of character information.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsExtPublicFigure>> publicFigure_ = nullptr;
    // Return the text information from the recognized images.
    std::shared_ptr<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImage> textInImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
