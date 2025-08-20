// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODYSTAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODYSTAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisSQLInfoResponseBodyStageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSQLInfoResponseBodyStageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_TO_JSON(InputDataSize, inputDataSize_);
      DARABONBA_PTR_TO_JSON(InputRows, inputRows_);
      DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_TO_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSQLInfoResponseBodyStageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_FROM_JSON(InputDataSize, inputDataSize_);
      DARABONBA_PTR_FROM_JSON(InputRows, inputRows_);
      DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_FROM_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeDiagnosisSQLInfoResponseBodyStageInfos() = default ;
    DescribeDiagnosisSQLInfoResponseBodyStageInfos(const DescribeDiagnosisSQLInfoResponseBodyStageInfos &) = default ;
    DescribeDiagnosisSQLInfoResponseBodyStageInfos(DescribeDiagnosisSQLInfoResponseBodyStageInfos &&) = default ;
    DescribeDiagnosisSQLInfoResponseBodyStageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSQLInfoResponseBodyStageInfos() = default ;
    DescribeDiagnosisSQLInfoResponseBodyStageInfos& operator=(const DescribeDiagnosisSQLInfoResponseBodyStageInfos &) = default ;
    DescribeDiagnosisSQLInfoResponseBodyStageInfos& operator=(DescribeDiagnosisSQLInfoResponseBodyStageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionType_ != nullptr
        && this->inputDataSize_ != nullptr && this->inputRows_ != nullptr && this->operatorCost_ != nullptr && this->outputDataSize_ != nullptr && this->outputRows_ != nullptr
        && this->peakMemory_ != nullptr && this->progress_ != nullptr && this->stageId_ != nullptr && this->state_ != nullptr; };
    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // inputDataSize Field Functions 
    bool hasInputDataSize() const { return this->inputDataSize_ != nullptr;};
    void deleteInputDataSize() { this->inputDataSize_ = nullptr;};
    inline int64_t inputDataSize() const { DARABONBA_PTR_GET_DEFAULT(inputDataSize_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setInputDataSize(int64_t inputDataSize) { DARABONBA_PTR_SET_VALUE(inputDataSize_, inputDataSize) };


    // inputRows Field Functions 
    bool hasInputRows() const { return this->inputRows_ != nullptr;};
    void deleteInputRows() { this->inputRows_ = nullptr;};
    inline int64_t inputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


    // operatorCost Field Functions 
    bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
    void deleteOperatorCost() { this->operatorCost_ = nullptr;};
    inline int64_t operatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


    // outputDataSize Field Functions 
    bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
    void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
    inline int64_t outputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline double progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setProgress(double progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDiagnosisSQLInfoResponseBodyStageInfos& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> executionType_ = nullptr;
    // The total amount of input data in the stage. Unit: bytes.
    std::shared_ptr<int64_t> inputDataSize_ = nullptr;
    // The total number of input rows in the stage.
    std::shared_ptr<int64_t> inputRows_ = nullptr;
    // The total amount of time consumed by all operators in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> operatorCost_ = nullptr;
    // The total amount of output data in the stage. Unit: bytes.
    std::shared_ptr<int64_t> outputDataSize_ = nullptr;
    // The total number of output rows in the stage.
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    // The total peak memory of the stage. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The execution progress of the stage.
    std::shared_ptr<double> progress_ = nullptr;
    // The stage ID.
    std::shared_ptr<string> stageId_ = nullptr;
    // The state of the stage.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
