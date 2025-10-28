// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTTEXTINIMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTTEXTINIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtTextInImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtTextInImage& obj) { 
      DARABONBA_PTR_TO_JSON(CustomText, customText_);
      DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_TO_JSON(RiskWord, riskWord_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtTextInImage& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomText, customText_);
      DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_FROM_JSON(RiskWord, riskWord_);
    };
    ImageBatchModerationResponseBodyDataResultsExtTextInImage() = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImage(const ImageBatchModerationResponseBodyDataResultsExtTextInImage &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImage(ImageBatchModerationResponseBodyDataResultsExtTextInImage &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtTextInImage() = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImage& operator=(const ImageBatchModerationResponseBodyDataResultsExtTextInImage &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImage& operator=(ImageBatchModerationResponseBodyDataResultsExtTextInImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customText_ == nullptr
        && return this->ocrResult_ == nullptr && return this->riskWord_ == nullptr; };
    // customText Field Functions 
    bool hasCustomText() const { return this->customText_ != nullptr;};
    void deleteCustomText() { this->customText_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText> & customText() const { DARABONBA_PTR_GET_CONST(customText_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText> customText() { DARABONBA_PTR_GET(customText_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText>) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setCustomText(const vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText> & customText) { DARABONBA_PTR_SET_VALUE(customText_, customText) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setCustomText(vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText> && customText) { DARABONBA_PTR_SET_RVALUE(customText_, customText) };


    // ocrResult Field Functions 
    bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
    void deleteOcrResult() { this->ocrResult_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult> & ocrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult> ocrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult>) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setOcrResult(const vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setOcrResult(vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


    // riskWord Field Functions 
    bool hasRiskWord() const { return this->riskWord_ != nullptr;};
    void deleteRiskWord() { this->riskWord_ = nullptr;};
    inline const vector<string> & riskWord() const { DARABONBA_PTR_GET_CONST(riskWord_, vector<string>) };
    inline vector<string> riskWord() { DARABONBA_PTR_GET(riskWord_, vector<string>) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setRiskWord(const vector<string> & riskWord) { DARABONBA_PTR_SET_VALUE(riskWord_, riskWord) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImage& setRiskWord(vector<string> && riskWord) { DARABONBA_PTR_SET_RVALUE(riskWord_, riskWord) };


  protected:
    // When a custom text library is matched, return the custom library ID, custom library name, and custom words.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageCustomText>> customText_ = nullptr;
    // Return the text information of each line recognized in the image.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult>> ocrResult_ = nullptr;
    // hit risk keywords
    std::shared_ptr<vector<string>> riskWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
