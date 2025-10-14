// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODYPROCESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBodyProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBodyProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
    };
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses(const DescribeGroupMonitoringAgentProcessResponseBodyProcesses &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses(DescribeGroupMonitoringAgentProcessResponseBodyProcesses &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBodyProcesses() = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses& operator=(const DescribeGroupMonitoringAgentProcessResponseBodyProcesses &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBodyProcesses& operator=(DescribeGroupMonitoringAgentProcessResponseBodyProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->process_ == nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess> & process() const { DARABONBA_PTR_GET_CONST(process_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess>) };
    inline vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess> process() { DARABONBA_PTR_GET(process_, vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess>) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcesses& setProcess(const vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess> & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcesses& setProcess(vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess> && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupMonitoringAgentProcessResponseBodyProcessesProcess>> process_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
