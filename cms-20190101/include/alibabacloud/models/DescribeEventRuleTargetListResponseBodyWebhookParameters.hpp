// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYWEBHOOKPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYWEBHOOKPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyWebhookParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyWebhookParameters& obj) { 
      DARABONBA_PTR_TO_JSON(WebhookParameter, webhookParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyWebhookParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(WebhookParameter, webhookParameter_);
    };
    DescribeEventRuleTargetListResponseBodyWebhookParameters() = default ;
    DescribeEventRuleTargetListResponseBodyWebhookParameters(const DescribeEventRuleTargetListResponseBodyWebhookParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyWebhookParameters(DescribeEventRuleTargetListResponseBodyWebhookParameters &&) = default ;
    DescribeEventRuleTargetListResponseBodyWebhookParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyWebhookParameters() = default ;
    DescribeEventRuleTargetListResponseBodyWebhookParameters& operator=(const DescribeEventRuleTargetListResponseBodyWebhookParameters &) = default ;
    DescribeEventRuleTargetListResponseBodyWebhookParameters& operator=(DescribeEventRuleTargetListResponseBodyWebhookParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->webhookParameter_ != nullptr; };
    // webhookParameter Field Functions 
    bool hasWebhookParameter() const { return this->webhookParameter_ != nullptr;};
    void deleteWebhookParameter() { this->webhookParameter_ = nullptr;};
    inline const vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter> & webhookParameter() const { DARABONBA_PTR_GET_CONST(webhookParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter>) };
    inline vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter> webhookParameter() { DARABONBA_PTR_GET(webhookParameter_, vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter>) };
    inline DescribeEventRuleTargetListResponseBodyWebhookParameters& setWebhookParameter(const vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter> & webhookParameter) { DARABONBA_PTR_SET_VALUE(webhookParameter_, webhookParameter) };
    inline DescribeEventRuleTargetListResponseBodyWebhookParameters& setWebhookParameter(vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter> && webhookParameter) { DARABONBA_PTR_SET_RVALUE(webhookParameter_, webhookParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeEventRuleTargetListResponseBodyWebhookParametersWebhookParameter>> webhookParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
