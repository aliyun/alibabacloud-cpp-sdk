// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODYDATAPIPELINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODYDATAPIPELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeChangeOrderResponseBodyDataPipelines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChangeOrderResponseBodyDataPipelines& obj) { 
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(ParallelCount, parallelCount_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChangeOrderResponseBodyDataPipelines& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(ParallelCount, parallelCount_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeChangeOrderResponseBodyDataPipelines() = default ;
    DescribeChangeOrderResponseBodyDataPipelines(const DescribeChangeOrderResponseBodyDataPipelines &) = default ;
    DescribeChangeOrderResponseBodyDataPipelines(DescribeChangeOrderResponseBodyDataPipelines &&) = default ;
    DescribeChangeOrderResponseBodyDataPipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChangeOrderResponseBodyDataPipelines() = default ;
    DescribeChangeOrderResponseBodyDataPipelines& operator=(const DescribeChangeOrderResponseBodyDataPipelines &) = default ;
    DescribeChangeOrderResponseBodyDataPipelines& operator=(DescribeChangeOrderResponseBodyDataPipelines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchType_ != nullptr
        && this->parallelCount_ != nullptr && this->pipelineId_ != nullptr && this->pipelineName_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->updateTime_ != nullptr; };
    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline int32_t batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, 0) };
    inline DescribeChangeOrderResponseBodyDataPipelines& setBatchType(int32_t batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // parallelCount Field Functions 
    bool hasParallelCount() const { return this->parallelCount_ != nullptr;};
    void deleteParallelCount() { this->parallelCount_ = nullptr;};
    inline int32_t parallelCount() const { DARABONBA_PTR_GET_DEFAULT(parallelCount_, 0) };
    inline DescribeChangeOrderResponseBodyDataPipelines& setParallelCount(int32_t parallelCount) { DARABONBA_PTR_SET_VALUE(parallelCount_, parallelCount) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DescribeChangeOrderResponseBodyDataPipelines& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline DescribeChangeOrderResponseBodyDataPipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeChangeOrderResponseBodyDataPipelines& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeChangeOrderResponseBodyDataPipelines& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeChangeOrderResponseBodyDataPipelines& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The batch type.
    std::shared_ptr<int32_t> batchType_ = nullptr;
    // The number of parallel tasks in a batch.
    std::shared_ptr<int32_t> parallelCount_ = nullptr;
    // The ID of the batch.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The name of the batch.
    std::shared_ptr<string> pipelineName_ = nullptr;
    // The time when the batch processing started.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the batch. Valid values:
    // 
    // *   **0**: The batch is being prepared.
    // *   **1**: The batch is being processed.
    // *   **2**: The batch was processed.
    // *   **3**: The batch failed to be processed.
    // *   **6**: The batch processing was terminated.
    // *   **8**: The execution process is pending. You must manually release the batch.
    // *   **9**: The execution process is pending. SAE will automatically release the batch.
    // *   **10**: The batch failed to be processed due to a system exception.
    // *   **11**: The batch is pending approval.
    // *   **12**: The batch is approved and is pending execution.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The time when the batch information was last modified.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
