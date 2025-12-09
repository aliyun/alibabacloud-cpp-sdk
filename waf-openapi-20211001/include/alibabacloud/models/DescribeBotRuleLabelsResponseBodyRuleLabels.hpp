// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSRESPONSEBODYRULELABELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSRESPONSEBODYRULELABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeBotRuleLabelsResponseBodyRuleLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBotRuleLabelsResponseBodyRuleLabels& obj) { 
      DARABONBA_PTR_TO_JSON(BotBehavior, botBehavior_);
      DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(SubScene, subScene_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBotRuleLabelsResponseBodyRuleLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(BotBehavior, botBehavior_);
      DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(SubScene, subScene_);
    };
    DescribeBotRuleLabelsResponseBodyRuleLabels() = default ;
    DescribeBotRuleLabelsResponseBodyRuleLabels(const DescribeBotRuleLabelsResponseBodyRuleLabels &) = default ;
    DescribeBotRuleLabelsResponseBodyRuleLabels(DescribeBotRuleLabelsResponseBodyRuleLabels &&) = default ;
    DescribeBotRuleLabelsResponseBodyRuleLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBotRuleLabelsResponseBodyRuleLabels() = default ;
    DescribeBotRuleLabelsResponseBodyRuleLabels& operator=(const DescribeBotRuleLabelsResponseBodyRuleLabels &) = default ;
    DescribeBotRuleLabelsResponseBodyRuleLabels& operator=(DescribeBotRuleLabelsResponseBodyRuleLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->botBehavior_ == nullptr
        && return this->labelKey_ == nullptr && return this->labelType_ == nullptr && return this->subScene_ == nullptr; };
    // botBehavior Field Functions 
    bool hasBotBehavior() const { return this->botBehavior_ != nullptr;};
    void deleteBotBehavior() { this->botBehavior_ = nullptr;};
    inline string botBehavior() const { DARABONBA_PTR_GET_DEFAULT(botBehavior_, "") };
    inline DescribeBotRuleLabelsResponseBodyRuleLabels& setBotBehavior(string botBehavior) { DARABONBA_PTR_SET_VALUE(botBehavior_, botBehavior) };


    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string labelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline DescribeBotRuleLabelsResponseBodyRuleLabels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string labelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline DescribeBotRuleLabelsResponseBodyRuleLabels& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // subScene Field Functions 
    bool hasSubScene() const { return this->subScene_ != nullptr;};
    void deleteSubScene() { this->subScene_ = nullptr;};
    inline string subScene() const { DARABONBA_PTR_GET_DEFAULT(subScene_, "") };
    inline DescribeBotRuleLabelsResponseBodyRuleLabels& setSubScene(string subScene) { DARABONBA_PTR_SET_VALUE(subScene_, subScene) };


  protected:
    std::shared_ptr<string> botBehavior_ = nullptr;
    std::shared_ptr<string> labelKey_ = nullptr;
    std::shared_ptr<string> labelType_ = nullptr;
    std::shared_ptr<string> subScene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
