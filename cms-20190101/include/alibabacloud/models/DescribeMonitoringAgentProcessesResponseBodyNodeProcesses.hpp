// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODYNODEPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODYNODEPROCESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentProcessesResponseBodyNodeProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(NodeProcess, nodeProcess_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeProcess, nodeProcess_);
    };
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses() = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses(const DescribeMonitoringAgentProcessesResponseBodyNodeProcesses &) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses(DescribeMonitoringAgentProcessesResponseBodyNodeProcesses &&) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentProcessesResponseBodyNodeProcesses() = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& operator=(const DescribeMonitoringAgentProcessesResponseBodyNodeProcesses &) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& operator=(DescribeMonitoringAgentProcessesResponseBodyNodeProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeProcess_ != nullptr; };
    // nodeProcess Field Functions 
    bool hasNodeProcess() const { return this->nodeProcess_ != nullptr;};
    void deleteNodeProcess() { this->nodeProcess_ = nullptr;};
    inline const vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess> & nodeProcess() const { DARABONBA_PTR_GET_CONST(nodeProcess_, vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess>) };
    inline vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess> nodeProcess() { DARABONBA_PTR_GET(nodeProcess_, vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess>) };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& setNodeProcess(const vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess> & nodeProcess) { DARABONBA_PTR_SET_VALUE(nodeProcess_, nodeProcess) };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcesses& setNodeProcess(vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess> && nodeProcess) { DARABONBA_PTR_SET_RVALUE(nodeProcess_, nodeProcess) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess>> nodeProcess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
