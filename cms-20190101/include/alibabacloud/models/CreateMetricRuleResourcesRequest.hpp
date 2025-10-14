// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CreateMetricRuleResourcesRequest() = default ;
    CreateMetricRuleResourcesRequest(const CreateMetricRuleResourcesRequest &) = default ;
    CreateMetricRuleResourcesRequest(CreateMetricRuleResourcesRequest &&) = default ;
    CreateMetricRuleResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleResourcesRequest() = default ;
    CreateMetricRuleResourcesRequest& operator=(const CreateMetricRuleResourcesRequest &) = default ;
    CreateMetricRuleResourcesRequest& operator=(CreateMetricRuleResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overwrite_ == nullptr
        && return this->resources_ == nullptr && return this->ruleId_ == nullptr; };
    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline string overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, "") };
    inline CreateMetricRuleResourcesRequest& setOverwrite(string overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreateMetricRuleResourcesRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateMetricRuleResourcesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // Specifies whether to overwrite existing resources. Valid values:
    // 
    // *   true: The resources submitted this time overwrite the previously associated resources.
    // *   false: The resources submitted this time do not overwrite the previously associated resources. The associated resources after submission include the previously associated resources and the resources submitted this time.
    std::shared_ptr<string> overwrite_ = nullptr;
    // The resources that are associated with the alert rule. Set the value to a JSON array.
    // 
    // >  You can add up to 100 resources each time. An alert rule can be associated with up to 3,000 resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
