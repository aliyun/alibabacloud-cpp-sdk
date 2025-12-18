// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNOREEVALUATIONRESULTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IGNOREEVALUATIONRESULTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class IgnoreEvaluationResultsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(IgnoreDate, ignoreDate_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Resources, resourcesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(IgnoreDate, ignoreDate_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Resources, resourcesShrink_);
    };
    IgnoreEvaluationResultsShrinkRequest() = default ;
    IgnoreEvaluationResultsShrinkRequest(const IgnoreEvaluationResultsShrinkRequest &) = default ;
    IgnoreEvaluationResultsShrinkRequest(IgnoreEvaluationResultsShrinkRequest &&) = default ;
    IgnoreEvaluationResultsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreEvaluationResultsShrinkRequest() = default ;
    IgnoreEvaluationResultsShrinkRequest& operator=(const IgnoreEvaluationResultsShrinkRequest &) = default ;
    IgnoreEvaluationResultsShrinkRequest& operator=(IgnoreEvaluationResultsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->ignoreDate_ == nullptr && return this->reason_ == nullptr && return this->resourcesShrink_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline IgnoreEvaluationResultsShrinkRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // ignoreDate Field Functions 
    bool hasIgnoreDate() const { return this->ignoreDate_ != nullptr;};
    void deleteIgnoreDate() { this->ignoreDate_ = nullptr;};
    inline string ignoreDate() const { DARABONBA_PTR_GET_DEFAULT(ignoreDate_, "") };
    inline IgnoreEvaluationResultsShrinkRequest& setIgnoreDate(string ignoreDate) { DARABONBA_PTR_SET_VALUE(ignoreDate_, ignoreDate) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline IgnoreEvaluationResultsShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourcesShrink Field Functions 
    bool hasResourcesShrink() const { return this->resourcesShrink_ != nullptr;};
    void deleteResourcesShrink() { this->resourcesShrink_ = nullptr;};
    inline string resourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourcesShrink_, "") };
    inline IgnoreEvaluationResultsShrinkRequest& setResourcesShrink(string resourcesShrink) { DARABONBA_PTR_SET_VALUE(resourcesShrink_, resourcesShrink) };


  protected:
    // The ID of the rule.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The date from which the system automatically re-evaluates the ignored incompliant resources.
    // 
    // >  If you leave this parameter empty, the system does not automatically re-evaluate the ignored incompliant resources. You must manually re-evaluate the ignored incompliant resources.
    std::shared_ptr<string> ignoreDate_ = nullptr;
    // The reason why you want to ignore the resource.
    std::shared_ptr<string> reason_ = nullptr;
    // The resources to be ignored.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourcesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
