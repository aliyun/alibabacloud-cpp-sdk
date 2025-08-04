// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITASYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITASYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitAsyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_ANY_TO_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_ANY_FROM_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    SubmitAsyncTaskResponseBodyData() = default ;
    SubmitAsyncTaskResponseBodyData(const SubmitAsyncTaskResponseBodyData &) = default ;
    SubmitAsyncTaskResponseBodyData(SubmitAsyncTaskResponseBodyData &&) = default ;
    SubmitAsyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAsyncTaskResponseBodyData() = default ;
    SubmitAsyncTaskResponseBodyData& operator=(const SubmitAsyncTaskResponseBodyData &) = default ;
    SubmitAsyncTaskResponseBodyData& operator=(SubmitAsyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->taskIntermediateResult_ != nullptr && this->taskName_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitAsyncTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskIntermediateResult Field Functions 
    bool hasTaskIntermediateResult() const { return this->taskIntermediateResult_ != nullptr;};
    void deleteTaskIntermediateResult() { this->taskIntermediateResult_ = nullptr;};
    inline     const Darabonba::Json & taskIntermediateResult() const { DARABONBA_GET(taskIntermediateResult_) };
    Darabonba::Json & taskIntermediateResult() { DARABONBA_GET(taskIntermediateResult_) };
    inline SubmitAsyncTaskResponseBodyData& setTaskIntermediateResult(const Darabonba::Json & taskIntermediateResult) { DARABONBA_SET_VALUE(taskIntermediateResult_, taskIntermediateResult) };
    inline SubmitAsyncTaskResponseBodyData& setTaskIntermediateResult(Darabonba::Json & taskIntermediateResult) { DARABONBA_SET_RVALUE(taskIntermediateResult_, taskIntermediateResult) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline SubmitAsyncTaskResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    Darabonba::Json taskIntermediateResult_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
