// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteMetricRuleResourcesRequest() = default ;
    DeleteMetricRuleResourcesRequest(const DeleteMetricRuleResourcesRequest &) = default ;
    DeleteMetricRuleResourcesRequest(DeleteMetricRuleResourcesRequest &&) = default ;
    DeleteMetricRuleResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleResourcesRequest() = default ;
    DeleteMetricRuleResourcesRequest& operator=(const DeleteMetricRuleResourcesRequest &) = default ;
    DeleteMetricRuleResourcesRequest& operator=(DeleteMetricRuleResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resources_ != nullptr
        && this->ruleId_ != nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DeleteMetricRuleResourcesRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteMetricRuleResourcesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The resources that are associated with the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
