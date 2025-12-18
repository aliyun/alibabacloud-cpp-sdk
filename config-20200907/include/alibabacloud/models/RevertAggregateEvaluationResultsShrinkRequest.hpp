// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertAggregateEvaluationResultsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertAggregateEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Resources, resourcesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RevertAggregateEvaluationResultsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Resources, resourcesShrink_);
    };
    RevertAggregateEvaluationResultsShrinkRequest() = default ;
    RevertAggregateEvaluationResultsShrinkRequest(const RevertAggregateEvaluationResultsShrinkRequest &) = default ;
    RevertAggregateEvaluationResultsShrinkRequest(RevertAggregateEvaluationResultsShrinkRequest &&) = default ;
    RevertAggregateEvaluationResultsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertAggregateEvaluationResultsShrinkRequest() = default ;
    RevertAggregateEvaluationResultsShrinkRequest& operator=(const RevertAggregateEvaluationResultsShrinkRequest &) = default ;
    RevertAggregateEvaluationResultsShrinkRequest& operator=(RevertAggregateEvaluationResultsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->configRuleId_ == nullptr && return this->resourcesShrink_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline RevertAggregateEvaluationResultsShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline RevertAggregateEvaluationResultsShrinkRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // resourcesShrink Field Functions 
    bool hasResourcesShrink() const { return this->resourcesShrink_ != nullptr;};
    void deleteResourcesShrink() { this->resourcesShrink_ = nullptr;};
    inline string resourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourcesShrink_, "") };
    inline RevertAggregateEvaluationResultsShrinkRequest& setResourcesShrink(string resourcesShrink) { DARABONBA_PTR_SET_VALUE(resourcesShrink_, resourcesShrink) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The ID of the rule in the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The resources that you want to re-evaluate.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourcesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
