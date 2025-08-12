// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyMetricRuleTemplateResponseBodyResourceAlertResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ApplyMetricRuleTemplateResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyMetricRuleTemplateResponseBodyResource& obj) { 
      DARABONBA_PTR_TO_JSON(AlertResults, alertResults_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyMetricRuleTemplateResponseBodyResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertResults, alertResults_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    ApplyMetricRuleTemplateResponseBodyResource() = default ;
    ApplyMetricRuleTemplateResponseBodyResource(const ApplyMetricRuleTemplateResponseBodyResource &) = default ;
    ApplyMetricRuleTemplateResponseBodyResource(ApplyMetricRuleTemplateResponseBodyResource &&) = default ;
    ApplyMetricRuleTemplateResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyMetricRuleTemplateResponseBodyResource() = default ;
    ApplyMetricRuleTemplateResponseBodyResource& operator=(const ApplyMetricRuleTemplateResponseBodyResource &) = default ;
    ApplyMetricRuleTemplateResponseBodyResource& operator=(ApplyMetricRuleTemplateResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertResults_ != nullptr
        && this->groupId_ != nullptr; };
    // alertResults Field Functions 
    bool hasAlertResults() const { return this->alertResults_ != nullptr;};
    void deleteAlertResults() { this->alertResults_ = nullptr;};
    inline const vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults> & alertResults() const { DARABONBA_PTR_GET_CONST(alertResults_, vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults>) };
    inline vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults> alertResults() { DARABONBA_PTR_GET(alertResults_, vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults>) };
    inline ApplyMetricRuleTemplateResponseBodyResource& setAlertResults(const vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults> & alertResults) { DARABONBA_PTR_SET_VALUE(alertResults_, alertResults) };
    inline ApplyMetricRuleTemplateResponseBodyResource& setAlertResults(vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults> && alertResults) { DARABONBA_PTR_SET_RVALUE(alertResults_, alertResults) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ApplyMetricRuleTemplateResponseBodyResource& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The details of the generated alert rule.
    std::shared_ptr<vector<Models::ApplyMetricRuleTemplateResponseBodyResourceAlertResults>> alertResults_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
