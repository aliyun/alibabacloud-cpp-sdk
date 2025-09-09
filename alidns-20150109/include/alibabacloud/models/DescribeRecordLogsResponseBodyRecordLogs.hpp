// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODYRECORDLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODYRECORDLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordLogsResponseBodyRecordLogsRecordLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordLogsResponseBodyRecordLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordLogsResponseBodyRecordLogs& obj) { 
      DARABONBA_PTR_TO_JSON(RecordLog, recordLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordLogsResponseBodyRecordLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordLog, recordLog_);
    };
    DescribeRecordLogsResponseBodyRecordLogs() = default ;
    DescribeRecordLogsResponseBodyRecordLogs(const DescribeRecordLogsResponseBodyRecordLogs &) = default ;
    DescribeRecordLogsResponseBodyRecordLogs(DescribeRecordLogsResponseBodyRecordLogs &&) = default ;
    DescribeRecordLogsResponseBodyRecordLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordLogsResponseBodyRecordLogs() = default ;
    DescribeRecordLogsResponseBodyRecordLogs& operator=(const DescribeRecordLogsResponseBodyRecordLogs &) = default ;
    DescribeRecordLogsResponseBodyRecordLogs& operator=(DescribeRecordLogsResponseBodyRecordLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordLog_ != nullptr; };
    // recordLog Field Functions 
    bool hasRecordLog() const { return this->recordLog_ != nullptr;};
    void deleteRecordLog() { this->recordLog_ = nullptr;};
    inline const vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog> & recordLog() const { DARABONBA_PTR_GET_CONST(recordLog_, vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog>) };
    inline vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog> recordLog() { DARABONBA_PTR_GET(recordLog_, vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog>) };
    inline DescribeRecordLogsResponseBodyRecordLogs& setRecordLog(const vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog> & recordLog) { DARABONBA_PTR_SET_VALUE(recordLog_, recordLog) };
    inline DescribeRecordLogsResponseBodyRecordLogs& setRecordLog(vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog> && recordLog) { DARABONBA_PTR_SET_RVALUE(recordLog_, recordLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecordLogsResponseBodyRecordLogsRecordLog>> recordLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
