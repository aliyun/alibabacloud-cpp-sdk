// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TextModerationPlusResponseBodyDataResultCustomizedHit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(CustomizedHit, customizedHit_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(CustomizedHit, customizedHit_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
    };
    TextModerationPlusResponseBodyDataResult() = default ;
    TextModerationPlusResponseBodyDataResult(const TextModerationPlusResponseBodyDataResult &) = default ;
    TextModerationPlusResponseBodyDataResult(TextModerationPlusResponseBodyDataResult &&) = default ;
    TextModerationPlusResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyDataResult() = default ;
    TextModerationPlusResponseBodyDataResult& operator=(const TextModerationPlusResponseBodyDataResult &) = default ;
    TextModerationPlusResponseBodyDataResult& operator=(TextModerationPlusResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->customizedHit_ != nullptr && this->description_ != nullptr && this->label_ != nullptr && this->riskWords_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline TextModerationPlusResponseBodyDataResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // customizedHit Field Functions 
    bool hasCustomizedHit() const { return this->customizedHit_ != nullptr;};
    void deleteCustomizedHit() { this->customizedHit_ = nullptr;};
    inline const vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit> & customizedHit() const { DARABONBA_PTR_GET_CONST(customizedHit_, vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit>) };
    inline vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit> customizedHit() { DARABONBA_PTR_GET(customizedHit_, vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit>) };
    inline TextModerationPlusResponseBodyDataResult& setCustomizedHit(const vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit> & customizedHit) { DARABONBA_PTR_SET_VALUE(customizedHit_, customizedHit) };
    inline TextModerationPlusResponseBodyDataResult& setCustomizedHit(vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit> && customizedHit) { DARABONBA_PTR_SET_RVALUE(customizedHit_, customizedHit) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TextModerationPlusResponseBodyDataResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline TextModerationPlusResponseBodyDataResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // riskWords Field Functions 
    bool hasRiskWords() const { return this->riskWords_ != nullptr;};
    void deleteRiskWords() { this->riskWords_ = nullptr;};
    inline string riskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
    inline TextModerationPlusResponseBodyDataResult& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


  protected:
    // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
    std::shared_ptr<float> confidence_ = nullptr;
    // The custom term hit by the moderated content.
    std::shared_ptr<vector<Models::TextModerationPlusResponseBodyDataResultCustomizedHit>> customizedHit_ = nullptr;
    // The description of the label.
    std::shared_ptr<string> description_ = nullptr;
    // The label.
    std::shared_ptr<string> label_ = nullptr;
    // The term hit by the moderated content.
    std::shared_ptr<string> riskWords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
