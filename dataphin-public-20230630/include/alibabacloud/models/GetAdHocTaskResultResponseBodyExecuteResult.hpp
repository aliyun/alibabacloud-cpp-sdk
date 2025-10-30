// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODYEXECUTERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODYEXECUTERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskResultResponseBodyExecuteResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskResultResponseBodyExecuteResult& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ScheduleTaskId, scheduleTaskId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskResultResponseBodyExecuteResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ScheduleTaskId, scheduleTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAdHocTaskResultResponseBodyExecuteResult() = default ;
    GetAdHocTaskResultResponseBodyExecuteResult(const GetAdHocTaskResultResponseBodyExecuteResult &) = default ;
    GetAdHocTaskResultResponseBodyExecuteResult(GetAdHocTaskResultResponseBodyExecuteResult &&) = default ;
    GetAdHocTaskResultResponseBodyExecuteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskResultResponseBodyExecuteResult() = default ;
    GetAdHocTaskResultResponseBodyExecuteResult& operator=(const GetAdHocTaskResultResponseBodyExecuteResult &) = default ;
    GetAdHocTaskResultResponseBodyExecuteResult& operator=(GetAdHocTaskResultResponseBodyExecuteResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr
        && return this->scheduleTaskId_ == nullptr && return this->taskId_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetAdHocTaskResultResponseBodyExecuteResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scheduleTaskId Field Functions 
    bool hasScheduleTaskId() const { return this->scheduleTaskId_ != nullptr;};
    void deleteScheduleTaskId() { this->scheduleTaskId_ = nullptr;};
    inline string scheduleTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduleTaskId_, "") };
    inline GetAdHocTaskResultResponseBodyExecuteResult& setScheduleTaskId(string scheduleTaskId) { DARABONBA_PTR_SET_VALUE(scheduleTaskId_, scheduleTaskId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAdHocTaskResultResponseBodyExecuteResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> scheduleTaskId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
