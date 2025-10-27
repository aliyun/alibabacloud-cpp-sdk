// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARPLAYBOOKTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARPLAYBOOKTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail() = default ;
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail(const DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail &) = default ;
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail(DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail &&) = default ;
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail() = default ;
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& operator=(const DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail &) = default ;
    DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& operator=(DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logInfo_ == nullptr
        && return this->params_ == nullptr && return this->processInfo_ == nullptr && return this->taskName_ == nullptr; };
    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline string logInfo() const { DARABONBA_PTR_GET_DEFAULT(logInfo_, "") };
    inline DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& setLogInfo(string logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // processInfo Field Functions 
    bool hasProcessInfo() const { return this->processInfo_ != nullptr;};
    void deleteProcessInfo() { this->processInfo_ = nullptr;};
    inline string processInfo() const { DARABONBA_PTR_GET_DEFAULT(processInfo_, "") };
    inline DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& setProcessInfo(string processInfo) { DARABONBA_PTR_SET_VALUE(processInfo_, processInfo) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSoarPlaybookTaskDetailResponseBodyTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Log information of the task.
    std::shared_ptr<string> logInfo_ = nullptr;
    // Parameters for invoking the playbook.
    std::shared_ptr<string> params_ = nullptr;
    // Process information corresponding to the strategy.
    std::shared_ptr<string> processInfo_ = nullptr;
    // Task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
