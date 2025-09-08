// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePipelineResponseBodyDataStageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribePipelineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_TO_JSON(CurrentStageId, currentStageId_);
      DARABONBA_PTR_TO_JSON(NextPipelineId, nextPipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(PipelineStatus, pipelineStatus_);
      DARABONBA_PTR_TO_JSON(ShowBatch, showBatch_);
      DARABONBA_PTR_TO_JSON(StageList, stageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentStageId, currentStageId_);
      DARABONBA_PTR_FROM_JSON(NextPipelineId, nextPipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(PipelineStatus, pipelineStatus_);
      DARABONBA_PTR_FROM_JSON(ShowBatch, showBatch_);
      DARABONBA_PTR_FROM_JSON(StageList, stageList_);
    };
    DescribePipelineResponseBodyData() = default ;
    DescribePipelineResponseBodyData(const DescribePipelineResponseBodyData &) = default ;
    DescribePipelineResponseBodyData(DescribePipelineResponseBodyData &&) = default ;
    DescribePipelineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBodyData() = default ;
    DescribePipelineResponseBodyData& operator=(const DescribePipelineResponseBodyData &) = default ;
    DescribePipelineResponseBodyData& operator=(DescribePipelineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coStatus_ != nullptr
        && this->currentStageId_ != nullptr && this->nextPipelineId_ != nullptr && this->pipelineId_ != nullptr && this->pipelineName_ != nullptr && this->pipelineStatus_ != nullptr
        && this->showBatch_ != nullptr && this->stageList_ != nullptr; };
    // coStatus Field Functions 
    bool hasCoStatus() const { return this->coStatus_ != nullptr;};
    void deleteCoStatus() { this->coStatus_ = nullptr;};
    inline string coStatus() const { DARABONBA_PTR_GET_DEFAULT(coStatus_, "") };
    inline DescribePipelineResponseBodyData& setCoStatus(string coStatus) { DARABONBA_PTR_SET_VALUE(coStatus_, coStatus) };


    // currentStageId Field Functions 
    bool hasCurrentStageId() const { return this->currentStageId_ != nullptr;};
    void deleteCurrentStageId() { this->currentStageId_ = nullptr;};
    inline string currentStageId() const { DARABONBA_PTR_GET_DEFAULT(currentStageId_, "") };
    inline DescribePipelineResponseBodyData& setCurrentStageId(string currentStageId) { DARABONBA_PTR_SET_VALUE(currentStageId_, currentStageId) };


    // nextPipelineId Field Functions 
    bool hasNextPipelineId() const { return this->nextPipelineId_ != nullptr;};
    void deleteNextPipelineId() { this->nextPipelineId_ = nullptr;};
    inline string nextPipelineId() const { DARABONBA_PTR_GET_DEFAULT(nextPipelineId_, "") };
    inline DescribePipelineResponseBodyData& setNextPipelineId(string nextPipelineId) { DARABONBA_PTR_SET_VALUE(nextPipelineId_, nextPipelineId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DescribePipelineResponseBodyData& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline DescribePipelineResponseBodyData& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // pipelineStatus Field Functions 
    bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
    void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
    inline int32_t pipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, 0) };
    inline DescribePipelineResponseBodyData& setPipelineStatus(int32_t pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


    // showBatch Field Functions 
    bool hasShowBatch() const { return this->showBatch_ != nullptr;};
    void deleteShowBatch() { this->showBatch_ = nullptr;};
    inline bool showBatch() const { DARABONBA_PTR_GET_DEFAULT(showBatch_, false) };
    inline DescribePipelineResponseBodyData& setShowBatch(bool showBatch) { DARABONBA_PTR_SET_VALUE(showBatch_, showBatch) };


    // stageList Field Functions 
    bool hasStageList() const { return this->stageList_ != nullptr;};
    void deleteStageList() { this->stageList_ = nullptr;};
    inline const vector<Models::DescribePipelineResponseBodyDataStageList> & stageList() const { DARABONBA_PTR_GET_CONST(stageList_, vector<Models::DescribePipelineResponseBodyDataStageList>) };
    inline vector<Models::DescribePipelineResponseBodyDataStageList> stageList() { DARABONBA_PTR_GET(stageList_, vector<Models::DescribePipelineResponseBodyDataStageList>) };
    inline DescribePipelineResponseBodyData& setStageList(const vector<Models::DescribePipelineResponseBodyDataStageList> & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
    inline DescribePipelineResponseBodyData& setStageList(vector<Models::DescribePipelineResponseBodyDataStageList> && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


  protected:
    // The status of the change order for the batch.
    std::shared_ptr<string> coStatus_ = nullptr;
    // The ID of the batch processing stage.
    std::shared_ptr<string> currentStageId_ = nullptr;
    // The ID of the next batch.
    std::shared_ptr<string> nextPipelineId_ = nullptr;
    // The ID of the batch.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The name of the batch.
    std::shared_ptr<string> pipelineName_ = nullptr;
    // The batch status. Valid values:
    // 
    // *   **0**: The batch is prepared for processing.
    // *   **1**: The task is being executed.
    // *   **2**: successful
    // *   **3**: The processing failed in this stage.
    // *   **6**: The batch processing was terminated.
    // *   **10**: The batch could not be processed due to a system exception.
    std::shared_ptr<int32_t> pipelineStatus_ = nullptr;
    // Indicates whether to start processing the next batch. Valid values:
    // 
    // *   **false**: indicates that the next batch cannot be processed yet.
    // *   **true**: indicates that the next batch can be processed now.
    std::shared_ptr<bool> showBatch_ = nullptr;
    // The list of batch processing stages.
    std::shared_ptr<vector<Models::DescribePipelineResponseBodyDataStageList>> stageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
