// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCTASKRESPONSEBODYEXECUTERESULT_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCTASKRESPONSEBODYEXECUTERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteAdHocTaskResponseBodyExecuteResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdHocTaskResponseBodyExecuteResult& obj) { 
      DARABONBA_PTR_TO_JSON(SubTaskCount, subTaskCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdHocTaskResponseBodyExecuteResult& obj) { 
      DARABONBA_PTR_FROM_JSON(SubTaskCount, subTaskCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ExecuteAdHocTaskResponseBodyExecuteResult() = default ;
    ExecuteAdHocTaskResponseBodyExecuteResult(const ExecuteAdHocTaskResponseBodyExecuteResult &) = default ;
    ExecuteAdHocTaskResponseBodyExecuteResult(ExecuteAdHocTaskResponseBodyExecuteResult &&) = default ;
    ExecuteAdHocTaskResponseBodyExecuteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdHocTaskResponseBodyExecuteResult() = default ;
    ExecuteAdHocTaskResponseBodyExecuteResult& operator=(const ExecuteAdHocTaskResponseBodyExecuteResult &) = default ;
    ExecuteAdHocTaskResponseBodyExecuteResult& operator=(ExecuteAdHocTaskResponseBodyExecuteResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subTaskCount_ == nullptr
        && return this->taskId_ == nullptr; };
    // subTaskCount Field Functions 
    bool hasSubTaskCount() const { return this->subTaskCount_ != nullptr;};
    void deleteSubTaskCount() { this->subTaskCount_ = nullptr;};
    inline int32_t subTaskCount() const { DARABONBA_PTR_GET_DEFAULT(subTaskCount_, 0) };
    inline ExecuteAdHocTaskResponseBodyExecuteResult& setSubTaskCount(int32_t subTaskCount) { DARABONBA_PTR_SET_VALUE(subTaskCount_, subTaskCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExecuteAdHocTaskResponseBodyExecuteResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> subTaskCount_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
