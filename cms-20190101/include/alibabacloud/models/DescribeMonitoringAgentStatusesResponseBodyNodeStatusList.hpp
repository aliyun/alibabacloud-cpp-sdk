// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODYNODESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODYNODESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentStatusesResponseBodyNodeStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
    };
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList() = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList(const DescribeMonitoringAgentStatusesResponseBodyNodeStatusList &) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList(DescribeMonitoringAgentStatusesResponseBodyNodeStatusList &&) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentStatusesResponseBodyNodeStatusList() = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& operator=(const DescribeMonitoringAgentStatusesResponseBodyNodeStatusList &) = default ;
    DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& operator=(DescribeMonitoringAgentStatusesResponseBodyNodeStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeStatus_ == nullptr; };
    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline const vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus> & nodeStatus() const { DARABONBA_PTR_GET_CONST(nodeStatus_, vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus>) };
    inline vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus> nodeStatus() { DARABONBA_PTR_GET(nodeStatus_, vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus>) };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& setNodeStatus(const vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus> & nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusList& setNodeStatus(vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus> && nodeStatus) { DARABONBA_PTR_SET_RVALUE(nodeStatus_, nodeStatus) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitoringAgentStatusesResponseBodyNodeStatusListNodeStatus>> nodeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
