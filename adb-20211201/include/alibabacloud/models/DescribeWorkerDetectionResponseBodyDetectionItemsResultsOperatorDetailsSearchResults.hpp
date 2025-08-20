// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILSSEARCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSOPERATORDETAILSSEARCHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& obj) { 
      DARABONBA_PTR_TO_JSON(InputRows, inputRows_);
      DARABONBA_PTR_TO_JSON(InputSize, inputSize_);
      DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_TO_JSON(OperatorInfo, operatorInfo_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(InputRows, inputRows_);
      DARABONBA_PTR_FROM_JSON(InputSize, inputSize_);
      DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_FROM_JSON(OperatorInfo, operatorInfo_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputRows_ != nullptr
        && this->inputSize_ != nullptr && this->operatorCost_ != nullptr && this->operatorInfo_ != nullptr && this->operatorName_ != nullptr && this->outputRows_ != nullptr
        && this->outputSize_ != nullptr && this->peakMemory_ != nullptr && this->processId_ != nullptr && this->stageId_ != nullptr; };
    // inputRows Field Functions 
    bool hasInputRows() const { return this->inputRows_ != nullptr;};
    void deleteInputRows() { this->inputRows_ = nullptr;};
    inline int64_t inputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


    // inputSize Field Functions 
    bool hasInputSize() const { return this->inputSize_ != nullptr;};
    void deleteInputSize() { this->inputSize_ = nullptr;};
    inline int64_t inputSize() const { DARABONBA_PTR_GET_DEFAULT(inputSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setInputSize(int64_t inputSize) { DARABONBA_PTR_SET_VALUE(inputSize_, inputSize) };


    // operatorCost Field Functions 
    bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
    void deleteOperatorCost() { this->operatorCost_ = nullptr;};
    inline int64_t operatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


    // operatorInfo Field Functions 
    bool hasOperatorInfo() const { return this->operatorInfo_ != nullptr;};
    void deleteOperatorInfo() { this->operatorInfo_ = nullptr;};
    inline string operatorInfo() const { DARABONBA_PTR_GET_DEFAULT(operatorInfo_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setOperatorInfo(string operatorInfo) { DARABONBA_PTR_SET_VALUE(operatorInfo_, operatorInfo) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // outputSize Field Functions 
    bool hasOutputSize() const { return this->outputSize_ != nullptr;};
    void deleteOutputSize() { this->outputSize_ = nullptr;};
    inline int64_t outputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setOutputSize(int64_t outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsOperatorDetailsSearchResults& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


  protected:
    // The number of rows input by the operator.
    std::shared_ptr<int64_t> inputRows_ = nullptr;
    // The amount of data input by the operator. Unit: bytes.
    std::shared_ptr<int64_t> inputSize_ = nullptr;
    // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
    std::shared_ptr<int64_t> operatorCost_ = nullptr;
    // The property information about the operator.
    std::shared_ptr<string> operatorInfo_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operatorName_ = nullptr;
    // The number of rows output by the operator.
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    // The amount of data output by the operator. Unit: bytes.
    std::shared_ptr<int64_t> outputSize_ = nullptr;
    // The peak memory. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The query ID that can be used for diagnostics.
    std::shared_ptr<string> processId_ = nullptr;
    // The stage ID.
    std::shared_ptr<string> stageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
