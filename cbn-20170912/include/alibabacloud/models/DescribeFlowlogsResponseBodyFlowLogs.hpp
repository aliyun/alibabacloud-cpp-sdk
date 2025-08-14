// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSRESPONSEBODYFLOWLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowlogsResponseBodyFlowLogsFlowLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeFlowlogsResponseBodyFlowLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowlogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_TO_JSON(FlowLog, flowLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowlogsResponseBodyFlowLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowLog, flowLog_);
    };
    DescribeFlowlogsResponseBodyFlowLogs() = default ;
    DescribeFlowlogsResponseBodyFlowLogs(const DescribeFlowlogsResponseBodyFlowLogs &) = default ;
    DescribeFlowlogsResponseBodyFlowLogs(DescribeFlowlogsResponseBodyFlowLogs &&) = default ;
    DescribeFlowlogsResponseBodyFlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowlogsResponseBodyFlowLogs() = default ;
    DescribeFlowlogsResponseBodyFlowLogs& operator=(const DescribeFlowlogsResponseBodyFlowLogs &) = default ;
    DescribeFlowlogsResponseBodyFlowLogs& operator=(DescribeFlowlogsResponseBodyFlowLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowLog_ != nullptr; };
    // flowLog Field Functions 
    bool hasFlowLog() const { return this->flowLog_ != nullptr;};
    void deleteFlowLog() { this->flowLog_ = nullptr;};
    inline const vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog> & flowLog() const { DARABONBA_PTR_GET_CONST(flowLog_, vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog>) };
    inline vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog> flowLog() { DARABONBA_PTR_GET(flowLog_, vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog>) };
    inline DescribeFlowlogsResponseBodyFlowLogs& setFlowLog(const vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog> & flowLog) { DARABONBA_PTR_SET_VALUE(flowLog_, flowLog) };
    inline DescribeFlowlogsResponseBodyFlowLogs& setFlowLog(vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog> && flowLog) { DARABONBA_PTR_SET_RVALUE(flowLog_, flowLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeFlowlogsResponseBodyFlowLogsFlowLog>> flowLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
