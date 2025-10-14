// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIGALERTCONFIGTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSALERTCONFIGALERTCONFIGTARGETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->target_ == nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget>) };
    inline vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget> target() { DARABONBA_PTR_GET(target_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget>) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& setTarget(const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetList& setTarget(vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessAlertConfigAlertConfigTargetListTarget>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
