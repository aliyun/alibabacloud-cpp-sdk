// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATADATASOURCEINSTANCELOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCELOGSRESPONSEBODYDATADATASOURCEINSTANCELOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& obj) { 
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogInstanceId, logInstanceId_);
      DARABONBA_PTR_TO_JSON(LogMdsCode, logMdsCode_);
      DARABONBA_PTR_TO_JSON(LogParams, logParams_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogInstanceId, logInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogMdsCode, logMdsCode_);
      DARABONBA_PTR_FROM_JSON(LogParams, logParams_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs() = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs(const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs &) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs(ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs &&) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs() = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& operator=(const ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs &) = default ;
    ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& operator=(ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logCode_ != nullptr
        && this->logInstanceId_ != nullptr && this->logMdsCode_ != nullptr && this->logParams_ != nullptr && this->taskStatus_ != nullptr; };
    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logInstanceId Field Functions 
    bool hasLogInstanceId() const { return this->logInstanceId_ != nullptr;};
    void deleteLogInstanceId() { this->logInstanceId_ = nullptr;};
    inline string logInstanceId() const { DARABONBA_PTR_GET_DEFAULT(logInstanceId_, "") };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setLogInstanceId(string logInstanceId) { DARABONBA_PTR_SET_VALUE(logInstanceId_, logInstanceId) };


    // logMdsCode Field Functions 
    bool hasLogMdsCode() const { return this->logMdsCode_ != nullptr;};
    void deleteLogMdsCode() { this->logMdsCode_ = nullptr;};
    inline string logMdsCode() const { DARABONBA_PTR_GET_DEFAULT(logMdsCode_, "") };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setLogMdsCode(string logMdsCode) { DARABONBA_PTR_SET_VALUE(logMdsCode_, logMdsCode) };


    // logParams Field Functions 
    bool hasLogParams() const { return this->logParams_ != nullptr;};
    void deleteLogParams() { this->logParams_ = nullptr;};
    inline const vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams> & logParams() const { DARABONBA_PTR_GET_CONST(logParams_, vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams>) };
    inline vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams> logParams() { DARABONBA_PTR_GET(logParams_, vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams>) };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setLogParams(const vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams> & logParams) { DARABONBA_PTR_SET_VALUE(logParams_, logParams) };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setLogParams(vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams> && logParams) { DARABONBA_PTR_SET_RVALUE(logParams_, logParams) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListDataSourceLogsResponseBodyDataDataSourceInstanceLogs& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The code of the log.
    std::shared_ptr<string> logCode_ = nullptr;
    // The ID of the log. The value is obtained after the threat analysis feature calculates the MD5 hash value of a parameter.
    std::shared_ptr<string> logInstanceId_ = nullptr;
    // The display code of the log.
    std::shared_ptr<string> logMdsCode_ = nullptr;
    // The parameters of the log.
    std::shared_ptr<vector<Models::ListDataSourceLogsResponseBodyDataDataSourceInstanceLogsLogParams>> logParams_ = nullptr;
    // Indicates whether the task for which logs are collected is enabled. Valid values:
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
