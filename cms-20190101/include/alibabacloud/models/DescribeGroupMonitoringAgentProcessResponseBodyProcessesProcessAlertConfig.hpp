// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig>) };
    inline vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig>) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& setAlertConfig(const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfig& setAlertConfig(vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfig>> alertConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
