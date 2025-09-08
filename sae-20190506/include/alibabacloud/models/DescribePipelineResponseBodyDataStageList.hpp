// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATASTAGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATASTAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePipelineResponseBodyDataStageListTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribePipelineResponseBodyDataStageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBodyDataStageList& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorType, executorType_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBodyDataStageList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorType, executorType_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    DescribePipelineResponseBodyDataStageList() = default ;
    DescribePipelineResponseBodyDataStageList(const DescribePipelineResponseBodyDataStageList &) = default ;
    DescribePipelineResponseBodyDataStageList(DescribePipelineResponseBodyDataStageList &&) = default ;
    DescribePipelineResponseBodyDataStageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBodyDataStageList() = default ;
    DescribePipelineResponseBodyDataStageList& operator=(const DescribePipelineResponseBodyDataStageList &) = default ;
    DescribePipelineResponseBodyDataStageList& operator=(DescribePipelineResponseBodyDataStageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorType_ != nullptr
        && this->stageId_ != nullptr && this->stageName_ != nullptr && this->status_ != nullptr && this->taskList_ != nullptr; };
    // executorType Field Functions 
    bool hasExecutorType() const { return this->executorType_ != nullptr;};
    void deleteExecutorType() { this->executorType_ = nullptr;};
    inline int32_t executorType() const { DARABONBA_PTR_GET_DEFAULT(executorType_, 0) };
    inline DescribePipelineResponseBodyDataStageList& setExecutorType(int32_t executorType) { DARABONBA_PTR_SET_VALUE(executorType_, executorType) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribePipelineResponseBodyDataStageList& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribePipelineResponseBodyDataStageList& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribePipelineResponseBodyDataStageList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<Models::DescribePipelineResponseBodyDataStageListTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<Models::DescribePipelineResponseBodyDataStageListTaskList>) };
    inline vector<Models::DescribePipelineResponseBodyDataStageListTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<Models::DescribePipelineResponseBodyDataStageListTaskList>) };
    inline DescribePipelineResponseBodyDataStageList& setTaskList(const vector<Models::DescribePipelineResponseBodyDataStageListTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribePipelineResponseBodyDataStageList& setTaskList(vector<Models::DescribePipelineResponseBodyDataStageListTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // The execution type of the stage. Valid values:
    // 
    // *   **0**: in sequence.
    // *   **1**: in parallel.
    std::shared_ptr<int32_t> executorType_ = nullptr;
    // The ID of the stage.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the stage.
    std::shared_ptr<string> stageName_ = nullptr;
    // The status of the batch processing stage. Valid values:
    // 
    // *   **0**: The batch is prepared for this processing stage.
    // *   **1**: The task is being executed.
    // *   **2**: successful
    // *   **3**: The processing failed in this stage.
    // *   **6**: The processing stage was terminated.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The list of task statuses.
    std::shared_ptr<vector<Models::DescribePipelineResponseBodyDataStageListTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
