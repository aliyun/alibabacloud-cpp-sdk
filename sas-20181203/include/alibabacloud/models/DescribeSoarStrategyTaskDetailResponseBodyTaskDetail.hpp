// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskDetailResponseBodyTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(ProcessInfo, processInfo_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail() = default ;
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail(const DescribeSoarStrategyTaskDetailResponseBodyTaskDetail &) = default ;
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail(DescribeSoarStrategyTaskDetailResponseBodyTaskDetail &&) = default ;
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskDetailResponseBodyTaskDetail() = default ;
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& operator=(const DescribeSoarStrategyTaskDetailResponseBodyTaskDetail &) = default ;
    DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& operator=(DescribeSoarStrategyTaskDetailResponseBodyTaskDetail &&) = default ;
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
    inline DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& setLogInfo(string logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // processInfo Field Functions 
    bool hasProcessInfo() const { return this->processInfo_ != nullptr;};
    void deleteProcessInfo() { this->processInfo_ = nullptr;};
    inline string processInfo() const { DARABONBA_PTR_GET_DEFAULT(processInfo_, "") };
    inline DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& setProcessInfo(string processInfo) { DARABONBA_PTR_SET_VALUE(processInfo_, processInfo) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSoarStrategyTaskDetailResponseBodyTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The operational log information of the task.
    std::shared_ptr<string> logInfo_ = nullptr;
    // The parameters of the task.
    std::shared_ptr<string> params_ = nullptr;
    // The process information of the task.
    std::shared_ptr<string> processInfo_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
