// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROMETHEUSALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROMETHEUSALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribePrometheusAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DescribePrometheusAlertRuleRequest() = default ;
    DescribePrometheusAlertRuleRequest(const DescribePrometheusAlertRuleRequest &) = default ;
    DescribePrometheusAlertRuleRequest(DescribePrometheusAlertRuleRequest &&) = default ;
    DescribePrometheusAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrometheusAlertRuleRequest() = default ;
    DescribePrometheusAlertRuleRequest& operator=(const DescribePrometheusAlertRuleRequest &) = default ;
    DescribePrometheusAlertRuleRequest& operator=(DescribePrometheusAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->clusterId_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline DescribePrometheusAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribePrometheusAlertRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the alert rule. You can call the ListPrometheusAlertRules operation to query the ID of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The ID of the Prometheus instance.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
