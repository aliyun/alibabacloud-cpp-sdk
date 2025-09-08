// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATAATTACKRESULT_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODYDATAATTACKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBodyDataAttackResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBodyDataAttackResult& obj) { 
      DARABONBA_PTR_TO_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBodyDataAttackResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    TextModerationPlusResponseBodyDataAttackResult() = default ;
    TextModerationPlusResponseBodyDataAttackResult(const TextModerationPlusResponseBodyDataAttackResult &) = default ;
    TextModerationPlusResponseBodyDataAttackResult(TextModerationPlusResponseBodyDataAttackResult &&) = default ;
    TextModerationPlusResponseBodyDataAttackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBodyDataAttackResult() = default ;
    TextModerationPlusResponseBodyDataAttackResult& operator=(const TextModerationPlusResponseBodyDataAttackResult &) = default ;
    TextModerationPlusResponseBodyDataAttackResult& operator=(TextModerationPlusResponseBodyDataAttackResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackLevel_ != nullptr
        && this->confidence_ != nullptr && this->description_ != nullptr && this->label_ != nullptr; };
    // attackLevel Field Functions 
    bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
    void deleteAttackLevel() { this->attackLevel_ = nullptr;};
    inline string attackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
    inline TextModerationPlusResponseBodyDataAttackResult& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline TextModerationPlusResponseBodyDataAttackResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TextModerationPlusResponseBodyDataAttackResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline TextModerationPlusResponseBodyDataAttackResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // The level of prompt attack
    std::shared_ptr<string> attackLevel_ = nullptr;
    // The confidence
    std::shared_ptr<float> confidence_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The label
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
