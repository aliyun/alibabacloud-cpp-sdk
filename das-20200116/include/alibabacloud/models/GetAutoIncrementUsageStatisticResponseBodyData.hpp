// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoIncrementUsageStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoIncrementUsageStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrementUsageList, autoIncrementUsageList_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(Finish, finish_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoIncrementUsageStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrementUsageList, autoIncrementUsageList_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(Finish, finish_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetAutoIncrementUsageStatisticResponseBodyData() = default ;
    GetAutoIncrementUsageStatisticResponseBodyData(const GetAutoIncrementUsageStatisticResponseBodyData &) = default ;
    GetAutoIncrementUsageStatisticResponseBodyData(GetAutoIncrementUsageStatisticResponseBodyData &&) = default ;
    GetAutoIncrementUsageStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoIncrementUsageStatisticResponseBodyData() = default ;
    GetAutoIncrementUsageStatisticResponseBodyData& operator=(const GetAutoIncrementUsageStatisticResponseBodyData &) = default ;
    GetAutoIncrementUsageStatisticResponseBodyData& operator=(GetAutoIncrementUsageStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoIncrementUsageList_ == nullptr
        && return this->errorInfo_ == nullptr && return this->finish_ == nullptr && return this->taskStatus_ == nullptr && return this->timestamp_ == nullptr; };
    // autoIncrementUsageList Field Functions 
    bool hasAutoIncrementUsageList() const { return this->autoIncrementUsageList_ != nullptr;};
    void deleteAutoIncrementUsageList() { this->autoIncrementUsageList_ = nullptr;};
    inline const vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList> & autoIncrementUsageList() const { DARABONBA_PTR_GET_CONST(autoIncrementUsageList_, vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList>) };
    inline vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList> autoIncrementUsageList() { DARABONBA_PTR_GET(autoIncrementUsageList_, vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList>) };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setAutoIncrementUsageList(const vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList> & autoIncrementUsageList) { DARABONBA_PTR_SET_VALUE(autoIncrementUsageList_, autoIncrementUsageList) };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setAutoIncrementUsageList(vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList> && autoIncrementUsageList) { DARABONBA_PTR_SET_RVALUE(autoIncrementUsageList_, autoIncrementUsageList) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline bool finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetAutoIncrementUsageStatisticResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The usage details of auto-increment IDs.
    std::shared_ptr<vector<Models::GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList>> autoIncrementUsageList_ = nullptr;
    // The error message returned if the task fails.
    std::shared_ptr<string> errorInfo_ = nullptr;
    // Indicates whether the task is complete. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> finish_ = nullptr;
    // The task status. Valid values:
    // 
    // *   **INIT**: The task is being initialized.
    // *   **RUNNING**: The task is being executed.
    // *   **SUCCESS**: The task succeeds.
    // *   **FAIL**: The task fails.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The time when the request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
