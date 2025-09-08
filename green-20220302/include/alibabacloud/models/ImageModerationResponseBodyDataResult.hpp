// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ImageModerationResponseBodyDataResult() = default ;
    ImageModerationResponseBodyDataResult(const ImageModerationResponseBodyDataResult &) = default ;
    ImageModerationResponseBodyDataResult(ImageModerationResponseBodyDataResult &&) = default ;
    ImageModerationResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataResult() = default ;
    ImageModerationResponseBodyDataResult& operator=(const ImageModerationResponseBodyDataResult &) = default ;
    ImageModerationResponseBodyDataResult& operator=(ImageModerationResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->description_ != nullptr && this->label_ != nullptr && this->riskLevel_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline ImageModerationResponseBodyDataResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImageModerationResponseBodyDataResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImageModerationResponseBodyDataResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageModerationResponseBodyDataResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
    std::shared_ptr<float> confidence_ = nullptr;
    // The description of the result.
    std::shared_ptr<string> description_ = nullptr;
    // The labels returned after the image moderation. Multiple risk labels and the corresponding scores of confidence levels may be returned for an image.
    std::shared_ptr<string> label_ = nullptr;
    // Risk Level
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
