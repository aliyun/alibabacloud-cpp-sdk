// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATADESIGNATEDETAILVOSMETRICS_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATADESIGNATEDETAILVOSMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(CpuLoad1, cpuLoad1_);
      DARABONBA_PTR_TO_JSON(CpuLoad5, cpuLoad5_);
      DARABONBA_PTR_TO_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_TO_JSON(DiskMax, diskMax_);
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_TO_JSON(ExecCount, execCount_);
      DARABONBA_PTR_TO_JSON(Heap1Usage, heap1Usage_);
      DARABONBA_PTR_TO_JSON(Heap1Used, heap1Used_);
      DARABONBA_PTR_TO_JSON(Heap5Usage, heap5Usage_);
      DARABONBA_PTR_TO_JSON(HeapMax, heapMax_);
      DARABONBA_PTR_TO_JSON(SharePoolAvailableSize, sharePoolAvailableSize_);
      DARABONBA_PTR_TO_JSON(SharePoolQueueSize, sharePoolQueueSize_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuLoad1, cpuLoad1_);
      DARABONBA_PTR_FROM_JSON(CpuLoad5, cpuLoad5_);
      DARABONBA_PTR_FROM_JSON(CpuProcessors, cpuProcessors_);
      DARABONBA_PTR_FROM_JSON(DiskMax, diskMax_);
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_FROM_JSON(ExecCount, execCount_);
      DARABONBA_PTR_FROM_JSON(Heap1Usage, heap1Usage_);
      DARABONBA_PTR_FROM_JSON(Heap1Used, heap1Used_);
      DARABONBA_PTR_FROM_JSON(Heap5Usage, heap5Usage_);
      DARABONBA_PTR_FROM_JSON(HeapMax, heapMax_);
      DARABONBA_PTR_FROM_JSON(SharePoolAvailableSize, sharePoolAvailableSize_);
      DARABONBA_PTR_FROM_JSON(SharePoolQueueSize, sharePoolQueueSize_);
    };
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics() = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics(const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics(ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics &&) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics() = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& operator=(const ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& operator=(ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuLoad1_ == nullptr
        && return this->cpuLoad5_ == nullptr && return this->cpuProcessors_ == nullptr && return this->diskMax_ == nullptr && return this->diskUsage_ == nullptr && return this->diskUsed_ == nullptr
        && return this->execCount_ == nullptr && return this->heap1Usage_ == nullptr && return this->heap1Used_ == nullptr && return this->heap5Usage_ == nullptr && return this->heapMax_ == nullptr
        && return this->sharePoolAvailableSize_ == nullptr && return this->sharePoolQueueSize_ == nullptr; };
    // cpuLoad1 Field Functions 
    bool hasCpuLoad1() const { return this->cpuLoad1_ != nullptr;};
    void deleteCpuLoad1() { this->cpuLoad1_ = nullptr;};
    inline double cpuLoad1() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad1_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setCpuLoad1(double cpuLoad1) { DARABONBA_PTR_SET_VALUE(cpuLoad1_, cpuLoad1) };


    // cpuLoad5 Field Functions 
    bool hasCpuLoad5() const { return this->cpuLoad5_ != nullptr;};
    void deleteCpuLoad5() { this->cpuLoad5_ = nullptr;};
    inline double cpuLoad5() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad5_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setCpuLoad5(double cpuLoad5) { DARABONBA_PTR_SET_VALUE(cpuLoad5_, cpuLoad5) };


    // cpuProcessors Field Functions 
    bool hasCpuProcessors() const { return this->cpuProcessors_ != nullptr;};
    void deleteCpuProcessors() { this->cpuProcessors_ = nullptr;};
    inline int32_t cpuProcessors() const { DARABONBA_PTR_GET_DEFAULT(cpuProcessors_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setCpuProcessors(int32_t cpuProcessors) { DARABONBA_PTR_SET_VALUE(cpuProcessors_, cpuProcessors) };


    // diskMax Field Functions 
    bool hasDiskMax() const { return this->diskMax_ != nullptr;};
    void deleteDiskMax() { this->diskMax_ = nullptr;};
    inline int32_t diskMax() const { DARABONBA_PTR_GET_DEFAULT(diskMax_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setDiskMax(int32_t diskMax) { DARABONBA_PTR_SET_VALUE(diskMax_, diskMax) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline double diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setDiskUsage(double diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline int32_t diskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setDiskUsed(int32_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // execCount Field Functions 
    bool hasExecCount() const { return this->execCount_ != nullptr;};
    void deleteExecCount() { this->execCount_ = nullptr;};
    inline int64_t execCount() const { DARABONBA_PTR_GET_DEFAULT(execCount_, 0L) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setExecCount(int64_t execCount) { DARABONBA_PTR_SET_VALUE(execCount_, execCount) };


    // heap1Usage Field Functions 
    bool hasHeap1Usage() const { return this->heap1Usage_ != nullptr;};
    void deleteHeap1Usage() { this->heap1Usage_ = nullptr;};
    inline double heap1Usage() const { DARABONBA_PTR_GET_DEFAULT(heap1Usage_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setHeap1Usage(double heap1Usage) { DARABONBA_PTR_SET_VALUE(heap1Usage_, heap1Usage) };


    // heap1Used Field Functions 
    bool hasHeap1Used() const { return this->heap1Used_ != nullptr;};
    void deleteHeap1Used() { this->heap1Used_ = nullptr;};
    inline double heap1Used() const { DARABONBA_PTR_GET_DEFAULT(heap1Used_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setHeap1Used(double heap1Used) { DARABONBA_PTR_SET_VALUE(heap1Used_, heap1Used) };


    // heap5Usage Field Functions 
    bool hasHeap5Usage() const { return this->heap5Usage_ != nullptr;};
    void deleteHeap5Usage() { this->heap5Usage_ = nullptr;};
    inline double heap5Usage() const { DARABONBA_PTR_GET_DEFAULT(heap5Usage_, 0.0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setHeap5Usage(double heap5Usage) { DARABONBA_PTR_SET_VALUE(heap5Usage_, heap5Usage) };


    // heapMax Field Functions 
    bool hasHeapMax() const { return this->heapMax_ != nullptr;};
    void deleteHeapMax() { this->heapMax_ = nullptr;};
    inline int32_t heapMax() const { DARABONBA_PTR_GET_DEFAULT(heapMax_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setHeapMax(int32_t heapMax) { DARABONBA_PTR_SET_VALUE(heapMax_, heapMax) };


    // sharePoolAvailableSize Field Functions 
    bool hasSharePoolAvailableSize() const { return this->sharePoolAvailableSize_ != nullptr;};
    void deleteSharePoolAvailableSize() { this->sharePoolAvailableSize_ = nullptr;};
    inline int32_t sharePoolAvailableSize() const { DARABONBA_PTR_GET_DEFAULT(sharePoolAvailableSize_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setSharePoolAvailableSize(int32_t sharePoolAvailableSize) { DARABONBA_PTR_SET_VALUE(sharePoolAvailableSize_, sharePoolAvailableSize) };


    // sharePoolQueueSize Field Functions 
    bool hasSharePoolQueueSize() const { return this->sharePoolQueueSize_ != nullptr;};
    void deleteSharePoolQueueSize() { this->sharePoolQueueSize_ = nullptr;};
    inline int32_t sharePoolQueueSize() const { DARABONBA_PTR_GET_DEFAULT(sharePoolQueueSize_, 0) };
    inline ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVosMetrics& setSharePoolQueueSize(int32_t sharePoolQueueSize) { DARABONBA_PTR_SET_VALUE(sharePoolQueueSize_, sharePoolQueueSize) };


  protected:
    // The most recent value of CPU workload.
    std::shared_ptr<double> cpuLoad1_ = nullptr;
    // The average of the latest five values of CPU workload.
    std::shared_ptr<double> cpuLoad5_ = nullptr;
    // The number of available CPU processors.
    std::shared_ptr<int32_t> cpuProcessors_ = nullptr;
    // The total disk capacity in MB.
    std::shared_ptr<int32_t> diskMax_ = nullptr;
    // The disk usage.
    std::shared_ptr<double> diskUsage_ = nullptr;
    // The used disk space in MB.
    std::shared_ptr<int32_t> diskUsed_ = nullptr;
    // The number of job executions.
    std::shared_ptr<int64_t> execCount_ = nullptr;
    // The most recent value of heap memory usage.
    std::shared_ptr<double> heap1Usage_ = nullptr;
    // The most recent value of used heap memory in MB.
    std::shared_ptr<double> heap1Used_ = nullptr;
    // The average of the latest five values of heap memory usage.
    std::shared_ptr<double> heap5Usage_ = nullptr;
    // The maximum heap memory in MB.
    std::shared_ptr<int32_t> heapMax_ = nullptr;
    // The number of available resources in the shared pool.
    std::shared_ptr<int32_t> sharePoolAvailableSize_ = nullptr;
    // The queue size in the shared pool.
    std::shared_ptr<int32_t> sharePoolQueueSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
