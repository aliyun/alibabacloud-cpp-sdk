// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSESPROCESSMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchExpress_ != nullptr; };
    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress> & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress>) };
    inline vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress> matchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress>) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& setMatchExpress(const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpress& setMatchExpress(vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcessMatchExpressMatchExpress>> matchExpress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
