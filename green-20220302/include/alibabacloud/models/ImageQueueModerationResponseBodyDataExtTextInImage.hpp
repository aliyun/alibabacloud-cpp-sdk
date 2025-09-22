// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtTextInImageCustomText.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtTextInImageOcrResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtTextInImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtTextInImage& obj) { 
      DARABONBA_PTR_TO_JSON(CustomText, customText_);
      DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_TO_JSON(RiskWord, riskWord_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtTextInImage& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomText, customText_);
      DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
      DARABONBA_PTR_FROM_JSON(RiskWord, riskWord_);
    };
    ImageQueueModerationResponseBodyDataExtTextInImage() = default ;
    ImageQueueModerationResponseBodyDataExtTextInImage(const ImageQueueModerationResponseBodyDataExtTextInImage &) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImage(ImageQueueModerationResponseBodyDataExtTextInImage &&) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtTextInImage() = default ;
    ImageQueueModerationResponseBodyDataExtTextInImage& operator=(const ImageQueueModerationResponseBodyDataExtTextInImage &) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImage& operator=(ImageQueueModerationResponseBodyDataExtTextInImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customText_ != nullptr
        && this->ocrResult_ != nullptr && this->riskWord_ != nullptr; };
    // customText Field Functions 
    bool hasCustomText() const { return this->customText_ != nullptr;};
    void deleteCustomText() { this->customText_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText> & customText() const { DARABONBA_PTR_GET_CONST(customText_, vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText> customText() { DARABONBA_PTR_GET(customText_, vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText>) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setCustomText(const vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText> & customText) { DARABONBA_PTR_SET_VALUE(customText_, customText) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setCustomText(vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText> && customText) { DARABONBA_PTR_SET_RVALUE(customText_, customText) };


    // ocrResult Field Functions 
    bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
    void deleteOcrResult() { this->ocrResult_ = nullptr;};
    inline const vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult> & ocrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult>) };
    inline vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult> ocrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult>) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setOcrResult(const vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setOcrResult(vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


    // riskWord Field Functions 
    bool hasRiskWord() const { return this->riskWord_ != nullptr;};
    void deleteRiskWord() { this->riskWord_ = nullptr;};
    inline const vector<string> & riskWord() const { DARABONBA_PTR_GET_CONST(riskWord_, vector<string>) };
    inline vector<string> riskWord() { DARABONBA_PTR_GET(riskWord_, vector<string>) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setRiskWord(const vector<string> & riskWord) { DARABONBA_PTR_SET_VALUE(riskWord_, riskWord) };
    inline ImageQueueModerationResponseBodyDataExtTextInImage& setRiskWord(vector<string> && riskWord) { DARABONBA_PTR_SET_RVALUE(riskWord_, riskWord) };


  protected:
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageCustomText>> customText_ = nullptr;
    std::shared_ptr<vector<Models::ImageQueueModerationResponseBodyDataExtTextInImageOcrResult>> ocrResult_ = nullptr;
    std::shared_ptr<vector<string>> riskWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
