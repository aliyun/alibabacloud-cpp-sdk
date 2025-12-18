// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTEVALUATIONRESULTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertEvaluationResultsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Resources, resourcesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RevertEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Resources, resourcesShrink_);
    };
    RevertEvaluationResultsShrinkRequest() = default ;
    RevertEvaluationResultsShrinkRequest(const RevertEvaluationResultsShrinkRequest &) = default ;
    RevertEvaluationResultsShrinkRequest(RevertEvaluationResultsShrinkRequest &&) = default ;
    RevertEvaluationResultsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertEvaluationResultsShrinkRequest() = default ;
    RevertEvaluationResultsShrinkRequest& operator=(const RevertEvaluationResultsShrinkRequest &) = default ;
    RevertEvaluationResultsShrinkRequest& operator=(RevertEvaluationResultsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->resourcesShrink_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline RevertEvaluationResultsShrinkRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resourcesShrink Field Functions 
    bool hasResourcesShrink() const { return this->resourcesShrink_ != nullptr;};
    void deleteResourcesShrink() { this->resourcesShrink_ = nullptr;};
    inline string resourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourcesShrink_, "") };
    inline RevertEvaluationResultsShrinkRequest& setResourcesShrink(string resourcesShrink) { DARABONBA_PTR_SET_VALUE(resourcesShrink_, resourcesShrink) };


  protected:
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The resources that are to be re-evaluated.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourcesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
