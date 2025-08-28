// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowLogsResponseBodyFlowLogsFlowLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFlowLogsResponseBodyFlowLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLog, flowLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLog, flowLog_);
    };
    DescribeFlowLogsResponseBodyFlowLogs() = default ;
    DescribeFlowLogsResponseBodyFlowLogs(const DescribeFlowLogsResponseBodyFlowLogs &) = default ;
    DescribeFlowLogsResponseBodyFlowLogs(DescribeFlowLogsResponseBodyFlowLogs &&) = default ;
    DescribeFlowLogsResponseBodyFlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogsResponseBodyFlowLogs() = default ;
    DescribeFlowLogsResponseBodyFlowLogs& operator=(const DescribeFlowLogsResponseBodyFlowLogs &) = default ;
    DescribeFlowLogsResponseBodyFlowLogs& operator=(DescribeFlowLogsResponseBodyFlowLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowLog_ != nullptr; };
    // flowLog Field Functions 
    bool hasFlowLog() const { return this->flowLog_ != nullptr;};
    void deleteFlowLog() { this->flowLog_ = nullptr;};
    inline const vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog> & flowLog() const { DARABONBA_PTR_GET_CONST(flowLog_, vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog>) };
    inline vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog> flowLog() { DARABONBA_PTR_GET(flowLog_, vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog>) };
    inline DescribeFlowLogsResponseBodyFlowLogs& setFlowLog(const vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog> & flowLog) { DARABONBA_PTR_SET_VALUE(flowLog_, flowLog) };
    inline DescribeFlowLogsResponseBodyFlowLogs& setFlowLog(vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog> && flowLog) { DARABONBA_PTR_SET_RVALUE(flowLog_, flowLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeFlowLogsResponseBodyFlowLogsFlowLog>> flowLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
