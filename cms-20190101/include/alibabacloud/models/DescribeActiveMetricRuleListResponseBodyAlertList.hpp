// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertListAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBodyAlertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBodyAlertList& obj) { 
      DARABONBA_PTR_TO_JSON(Alert, alert_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBodyAlertList& obj) { 
      DARABONBA_PTR_FROM_JSON(Alert, alert_);
    };
    DescribeActiveMetricRuleListResponseBodyAlertList() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertList(const DescribeActiveMetricRuleListResponseBodyAlertList &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertList(DescribeActiveMetricRuleListResponseBodyAlertList &&) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBodyAlertList() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertList& operator=(const DescribeActiveMetricRuleListResponseBodyAlertList &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertList& operator=(DescribeActiveMetricRuleListResponseBodyAlertList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alert_ != nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline const vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert> & alert() const { DARABONBA_PTR_GET_CONST(alert_, vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert>) };
    inline vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert> alert() { DARABONBA_PTR_GET(alert_, vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert>) };
    inline DescribeActiveMetricRuleListResponseBodyAlertList& setAlert(const vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert> & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
    inline DescribeActiveMetricRuleListResponseBodyAlertList& setAlert(vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert> && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


  protected:
    std::shared_ptr<vector<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlert>> alert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
