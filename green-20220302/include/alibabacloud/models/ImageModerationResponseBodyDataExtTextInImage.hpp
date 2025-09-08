// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtTextInImageCustomText.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtTextInImageOcrResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtTextInImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtTextInImage& obj) { 
      DARABONBA_PTR_TO_JSON(CustomText, customText_);
      DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_TO_JSON(RiskWord, riskWord_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtTextInImage& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomText, customText_);
      DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_FROM_JSON(RiskWord, riskWord_);
    };
    ImageModerationResponseBodyDataExtTextInImage() = default ;
    ImageModerationResponseBodyDataExtTextInImage(const ImageModerationResponseBodyDataExtTextInImage &) = default ;
    ImageModerationResponseBodyDataExtTextInImage(ImageModerationResponseBodyDataExtTextInImage &&) = default ;
    ImageModerationResponseBodyDataExtTextInImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtTextInImage() = default ;
    ImageModerationResponseBodyDataExtTextInImage& operator=(const ImageModerationResponseBodyDataExtTextInImage &) = default ;
    ImageModerationResponseBodyDataExtTextInImage& operator=(ImageModerationResponseBodyDataExtTextInImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customText_ != nullptr
        && this->ocrResult_ != nullptr && this->riskWord_ != nullptr; };
    // customText Field Functions 
    bool hasCustomText() const { return this->customText_ != nullptr;};
    void deleteCustomText() { this->customText_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText> & customText() const { DARABONBA_PTR_GET_CONST(customText_, vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText>) };
    inline vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText> customText() { DARABONBA_PTR_GET(customText_, vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText>) };
    inline ImageModerationResponseBodyDataExtTextInImage& setCustomText(const vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText> & customText) { DARABONBA_PTR_SET_VALUE(customText_, customText) };
    inline ImageModerationResponseBodyDataExtTextInImage& setCustomText(vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText> && customText) { DARABONBA_PTR_SET_RVALUE(customText_, customText) };


    // ocrResult Field Functions 
    bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
    void deleteOcrResult() { this->ocrResult_ = nullptr;};
    inline const vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult> & ocrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult>) };
    inline vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult> ocrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult>) };
    inline ImageModerationResponseBodyDataExtTextInImage& setOcrResult(const vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
    inline ImageModerationResponseBodyDataExtTextInImage& setOcrResult(vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


    // riskWord Field Functions 
    bool hasRiskWord() const { return this->riskWord_ != nullptr;};
    void deleteRiskWord() { this->riskWord_ = nullptr;};
    inline const vector<string> & riskWord() const { DARABONBA_PTR_GET_CONST(riskWord_, vector<string>) };
    inline vector<string> riskWord() { DARABONBA_PTR_GET(riskWord_, vector<string>) };
    inline ImageModerationResponseBodyDataExtTextInImage& setRiskWord(const vector<string> & riskWord) { DARABONBA_PTR_SET_VALUE(riskWord_, riskWord) };
    inline ImageModerationResponseBodyDataExtTextInImage& setRiskWord(vector<string> && riskWord) { DARABONBA_PTR_SET_RVALUE(riskWord_, riskWord) };


  protected:
    // When a custom text library is hit, the custom library ID, custom library name, and custom word are returned.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtTextInImageCustomText>> customText_ = nullptr;
    // Returns the text information in the recognized image.
    std::shared_ptr<vector<Models::ImageModerationResponseBodyDataExtTextInImageOcrResult>> ocrResult_ = nullptr;
    // The risk words that are hit. Multiple words are separated by commas (,).
    std::shared_ptr<vector<string>> riskWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
