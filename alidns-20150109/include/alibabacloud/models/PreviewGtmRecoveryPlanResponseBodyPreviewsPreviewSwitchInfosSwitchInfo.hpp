// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEWSWITCHINFOSSWITCHINFO_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWGTMRECOVERYPLANRESPONSEBODYPREVIEWSPREVIEWSWITCHINFOSSWITCHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo(PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo &&) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo() = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& operator=(const PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo &) = default ;
    PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& operator=(PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->strategyName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline PreviewGtmRecoveryPlanResponseBodyPreviewsPreviewSwitchInfosSwitchInfo& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The formatted message content.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the switching policy for address pools.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
