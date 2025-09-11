// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODYSTAGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODYSTAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSQLPlanResponseBodyStageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanResponseBodyStageList& obj) { 
      DARABONBA_PTR_TO_JSON(CPUTimeAvg, CPUTimeAvg_);
      DARABONBA_PTR_TO_JSON(CPUTimeMax, CPUTimeMax_);
      DARABONBA_PTR_TO_JSON(CPUTimeMin, CPUTimeMin_);
      DARABONBA_PTR_TO_JSON(InputSizeAvg, inputSizeAvg_);
      DARABONBA_PTR_TO_JSON(InputSizeMax, inputSizeMax_);
      DARABONBA_PTR_TO_JSON(InputSizeMin, inputSizeMin_);
      DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(ScanSizeAvg, scanSizeAvg_);
      DARABONBA_PTR_TO_JSON(ScanSizeMax, scanSizeMax_);
      DARABONBA_PTR_TO_JSON(ScanSizeMin, scanSizeMin_);
      DARABONBA_PTR_TO_JSON(ScanTimeAvg, scanTimeAvg_);
      DARABONBA_PTR_TO_JSON(ScanTimeMax, scanTimeMax_);
      DARABONBA_PTR_TO_JSON(ScanTimeMin, scanTimeMin_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanResponseBodyStageList& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUTimeAvg, CPUTimeAvg_);
      DARABONBA_PTR_FROM_JSON(CPUTimeMax, CPUTimeMax_);
      DARABONBA_PTR_FROM_JSON(CPUTimeMin, CPUTimeMin_);
      DARABONBA_PTR_FROM_JSON(InputSizeAvg, inputSizeAvg_);
      DARABONBA_PTR_FROM_JSON(InputSizeMax, inputSizeMax_);
      DARABONBA_PTR_FROM_JSON(InputSizeMin, inputSizeMin_);
      DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(ScanSizeAvg, scanSizeAvg_);
      DARABONBA_PTR_FROM_JSON(ScanSizeMax, scanSizeMax_);
      DARABONBA_PTR_FROM_JSON(ScanSizeMin, scanSizeMin_);
      DARABONBA_PTR_FROM_JSON(ScanTimeAvg, scanTimeAvg_);
      DARABONBA_PTR_FROM_JSON(ScanTimeMax, scanTimeMax_);
      DARABONBA_PTR_FROM_JSON(ScanTimeMin, scanTimeMin_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeSQLPlanResponseBodyStageList() = default ;
    DescribeSQLPlanResponseBodyStageList(const DescribeSQLPlanResponseBodyStageList &) = default ;
    DescribeSQLPlanResponseBodyStageList(DescribeSQLPlanResponseBodyStageList &&) = default ;
    DescribeSQLPlanResponseBodyStageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanResponseBodyStageList() = default ;
    DescribeSQLPlanResponseBodyStageList& operator=(const DescribeSQLPlanResponseBodyStageList &) = default ;
    DescribeSQLPlanResponseBodyStageList& operator=(DescribeSQLPlanResponseBodyStageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPUTimeAvg_ != nullptr
        && this->CPUTimeMax_ != nullptr && this->CPUTimeMin_ != nullptr && this->inputSizeAvg_ != nullptr && this->inputSizeMax_ != nullptr && this->inputSizeMin_ != nullptr
        && this->operatorCost_ != nullptr && this->peakMemory_ != nullptr && this->scanSizeAvg_ != nullptr && this->scanSizeMax_ != nullptr && this->scanSizeMin_ != nullptr
        && this->scanTimeAvg_ != nullptr && this->scanTimeMax_ != nullptr && this->scanTimeMin_ != nullptr && this->stageId_ != nullptr && this->state_ != nullptr; };
    // CPUTimeAvg Field Functions 
    bool hasCPUTimeAvg() const { return this->CPUTimeAvg_ != nullptr;};
    void deleteCPUTimeAvg() { this->CPUTimeAvg_ = nullptr;};
    inline int64_t CPUTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeAvg_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setCPUTimeAvg(int64_t CPUTimeAvg) { DARABONBA_PTR_SET_VALUE(CPUTimeAvg_, CPUTimeAvg) };


    // CPUTimeMax Field Functions 
    bool hasCPUTimeMax() const { return this->CPUTimeMax_ != nullptr;};
    void deleteCPUTimeMax() { this->CPUTimeMax_ = nullptr;};
    inline int64_t CPUTimeMax() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeMax_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setCPUTimeMax(int64_t CPUTimeMax) { DARABONBA_PTR_SET_VALUE(CPUTimeMax_, CPUTimeMax) };


    // CPUTimeMin Field Functions 
    bool hasCPUTimeMin() const { return this->CPUTimeMin_ != nullptr;};
    void deleteCPUTimeMin() { this->CPUTimeMin_ = nullptr;};
    inline int64_t CPUTimeMin() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeMin_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setCPUTimeMin(int64_t CPUTimeMin) { DARABONBA_PTR_SET_VALUE(CPUTimeMin_, CPUTimeMin) };


    // inputSizeAvg Field Functions 
    bool hasInputSizeAvg() const { return this->inputSizeAvg_ != nullptr;};
    void deleteInputSizeAvg() { this->inputSizeAvg_ = nullptr;};
    inline int64_t inputSizeAvg() const { DARABONBA_PTR_GET_DEFAULT(inputSizeAvg_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setInputSizeAvg(int64_t inputSizeAvg) { DARABONBA_PTR_SET_VALUE(inputSizeAvg_, inputSizeAvg) };


    // inputSizeMax Field Functions 
    bool hasInputSizeMax() const { return this->inputSizeMax_ != nullptr;};
    void deleteInputSizeMax() { this->inputSizeMax_ = nullptr;};
    inline int64_t inputSizeMax() const { DARABONBA_PTR_GET_DEFAULT(inputSizeMax_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setInputSizeMax(int64_t inputSizeMax) { DARABONBA_PTR_SET_VALUE(inputSizeMax_, inputSizeMax) };


    // inputSizeMin Field Functions 
    bool hasInputSizeMin() const { return this->inputSizeMin_ != nullptr;};
    void deleteInputSizeMin() { this->inputSizeMin_ = nullptr;};
    inline int64_t inputSizeMin() const { DARABONBA_PTR_GET_DEFAULT(inputSizeMin_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setInputSizeMin(int64_t inputSizeMin) { DARABONBA_PTR_SET_VALUE(inputSizeMin_, inputSizeMin) };


    // operatorCost Field Functions 
    bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
    void deleteOperatorCost() { this->operatorCost_ = nullptr;};
    inline int64_t operatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // scanSizeAvg Field Functions 
    bool hasScanSizeAvg() const { return this->scanSizeAvg_ != nullptr;};
    void deleteScanSizeAvg() { this->scanSizeAvg_ = nullptr;};
    inline int64_t scanSizeAvg() const { DARABONBA_PTR_GET_DEFAULT(scanSizeAvg_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanSizeAvg(int64_t scanSizeAvg) { DARABONBA_PTR_SET_VALUE(scanSizeAvg_, scanSizeAvg) };


    // scanSizeMax Field Functions 
    bool hasScanSizeMax() const { return this->scanSizeMax_ != nullptr;};
    void deleteScanSizeMax() { this->scanSizeMax_ = nullptr;};
    inline int64_t scanSizeMax() const { DARABONBA_PTR_GET_DEFAULT(scanSizeMax_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanSizeMax(int64_t scanSizeMax) { DARABONBA_PTR_SET_VALUE(scanSizeMax_, scanSizeMax) };


    // scanSizeMin Field Functions 
    bool hasScanSizeMin() const { return this->scanSizeMin_ != nullptr;};
    void deleteScanSizeMin() { this->scanSizeMin_ = nullptr;};
    inline int64_t scanSizeMin() const { DARABONBA_PTR_GET_DEFAULT(scanSizeMin_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanSizeMin(int64_t scanSizeMin) { DARABONBA_PTR_SET_VALUE(scanSizeMin_, scanSizeMin) };


    // scanTimeAvg Field Functions 
    bool hasScanTimeAvg() const { return this->scanTimeAvg_ != nullptr;};
    void deleteScanTimeAvg() { this->scanTimeAvg_ = nullptr;};
    inline int64_t scanTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(scanTimeAvg_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanTimeAvg(int64_t scanTimeAvg) { DARABONBA_PTR_SET_VALUE(scanTimeAvg_, scanTimeAvg) };


    // scanTimeMax Field Functions 
    bool hasScanTimeMax() const { return this->scanTimeMax_ != nullptr;};
    void deleteScanTimeMax() { this->scanTimeMax_ = nullptr;};
    inline int64_t scanTimeMax() const { DARABONBA_PTR_GET_DEFAULT(scanTimeMax_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanTimeMax(int64_t scanTimeMax) { DARABONBA_PTR_SET_VALUE(scanTimeMax_, scanTimeMax) };


    // scanTimeMin Field Functions 
    bool hasScanTimeMin() const { return this->scanTimeMin_ != nullptr;};
    void deleteScanTimeMin() { this->scanTimeMin_ = nullptr;};
    inline int64_t scanTimeMin() const { DARABONBA_PTR_GET_DEFAULT(scanTimeMin_, 0L) };
    inline DescribeSQLPlanResponseBodyStageList& setScanTimeMin(int64_t scanTimeMin) { DARABONBA_PTR_SET_VALUE(scanTimeMin_, scanTimeMin) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline int32_t stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, 0) };
    inline DescribeSQLPlanResponseBodyStageList& setStageId(int32_t stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSQLPlanResponseBodyStageList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The average `CPU Time` value on each compute node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> CPUTimeAvg_ = nullptr;
    // The maximum `CPU Time` value on each compute node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> CPUTimeMax_ = nullptr;
    // The minimum `CPU Time` value on each compute node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> CPUTimeMin_ = nullptr;
    // The average amount of input data on each compute node in the stage. Unit: bytes.
    std::shared_ptr<int64_t> inputSizeAvg_ = nullptr;
    // The maximum amount of input data on each compute node in the stage. Unit: byte.
    std::shared_ptr<int64_t> inputSizeMax_ = nullptr;
    // The minimum amount of input data on each compute node in the stage. Unit: bytes.
    std::shared_ptr<int64_t> inputSizeMin_ = nullptr;
    // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
    std::shared_ptr<int64_t> operatorCost_ = nullptr;
    // The maximum memory usage when the SQL statement is executed. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The average amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
    std::shared_ptr<int64_t> scanSizeAvg_ = nullptr;
    // The maximum amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
    std::shared_ptr<int64_t> scanSizeMax_ = nullptr;
    // The minimum amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
    std::shared_ptr<int64_t> scanSizeMin_ = nullptr;
    // The average amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTimeAvg_ = nullptr;
    // The maximum amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTimeMax_ = nullptr;
    // The minimum amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTimeMin_ = nullptr;
    // The stage ID.
    std::shared_ptr<int32_t> stageId_ = nullptr;
    // The final execution state of the stage. Valid values:
    // 
    // *   FINISHED
    // *   CANCELED
    // *   ABORTED
    // *   FAILED
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
