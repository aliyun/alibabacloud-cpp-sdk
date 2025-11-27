// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTINSRESOURCEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTINSRESOURCEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCustinsResourceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustinsResourceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CpuAdjustDeadline, cpuAdjustDeadline_);
      DARABONBA_PTR_TO_JSON(CpuAdjustableMaxRatio, cpuAdjustableMaxRatio_);
      DARABONBA_PTR_TO_JSON(CpuAdjustableMaxValue, cpuAdjustableMaxValue_);
      DARABONBA_PTR_TO_JSON(CpuIncreaseRatio, cpuIncreaseRatio_);
      DARABONBA_PTR_TO_JSON(CpuIncreaseRatioValue, cpuIncreaseRatioValue_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IopsAdjustableMaxValue, iopsAdjustableMaxValue_);
      DARABONBA_PTR_TO_JSON(MaxConnAdjustDeadline, maxConnAdjustDeadline_);
      DARABONBA_PTR_TO_JSON(MaxConnAdjustableMaxValue, maxConnAdjustableMaxValue_);
      DARABONBA_PTR_TO_JSON(MaxConnIncreaseRatio, maxConnIncreaseRatio_);
      DARABONBA_PTR_TO_JSON(MaxConnIncreaseRatioValue, maxConnIncreaseRatioValue_);
      DARABONBA_PTR_TO_JSON(MaxIopsAdjustDeadline, maxIopsAdjustDeadline_);
      DARABONBA_PTR_TO_JSON(MaxIopsIncreaseRatio, maxIopsIncreaseRatio_);
      DARABONBA_PTR_TO_JSON(MaxIopsIncreaseRatioValue, maxIopsIncreaseRatioValue_);
      DARABONBA_PTR_TO_JSON(MemAdjustableMaxRatio, memAdjustableMaxRatio_);
      DARABONBA_PTR_TO_JSON(MemAdjustableMaxValue, memAdjustableMaxValue_);
      DARABONBA_PTR_TO_JSON(MemoryAdjustDeadline, memoryAdjustDeadline_);
      DARABONBA_PTR_TO_JSON(MemoryIncreaseRatio, memoryIncreaseRatio_);
      DARABONBA_PTR_TO_JSON(MemoryIncreaseRatioValue, memoryIncreaseRatioValue_);
      DARABONBA_PTR_TO_JSON(OriginCpu, originCpu_);
      DARABONBA_PTR_TO_JSON(OriginMaxConn, originMaxConn_);
      DARABONBA_PTR_TO_JSON(OriginMaxIops, originMaxIops_);
      DARABONBA_PTR_TO_JSON(OriginMemory, originMemory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustinsResourceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuAdjustDeadline, cpuAdjustDeadline_);
      DARABONBA_PTR_FROM_JSON(CpuAdjustableMaxRatio, cpuAdjustableMaxRatio_);
      DARABONBA_PTR_FROM_JSON(CpuAdjustableMaxValue, cpuAdjustableMaxValue_);
      DARABONBA_PTR_FROM_JSON(CpuIncreaseRatio, cpuIncreaseRatio_);
      DARABONBA_PTR_FROM_JSON(CpuIncreaseRatioValue, cpuIncreaseRatioValue_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IopsAdjustableMaxValue, iopsAdjustableMaxValue_);
      DARABONBA_PTR_FROM_JSON(MaxConnAdjustDeadline, maxConnAdjustDeadline_);
      DARABONBA_PTR_FROM_JSON(MaxConnAdjustableMaxValue, maxConnAdjustableMaxValue_);
      DARABONBA_PTR_FROM_JSON(MaxConnIncreaseRatio, maxConnIncreaseRatio_);
      DARABONBA_PTR_FROM_JSON(MaxConnIncreaseRatioValue, maxConnIncreaseRatioValue_);
      DARABONBA_PTR_FROM_JSON(MaxIopsAdjustDeadline, maxIopsAdjustDeadline_);
      DARABONBA_PTR_FROM_JSON(MaxIopsIncreaseRatio, maxIopsIncreaseRatio_);
      DARABONBA_PTR_FROM_JSON(MaxIopsIncreaseRatioValue, maxIopsIncreaseRatioValue_);
      DARABONBA_PTR_FROM_JSON(MemAdjustableMaxRatio, memAdjustableMaxRatio_);
      DARABONBA_PTR_FROM_JSON(MemAdjustableMaxValue, memAdjustableMaxValue_);
      DARABONBA_PTR_FROM_JSON(MemoryAdjustDeadline, memoryAdjustDeadline_);
      DARABONBA_PTR_FROM_JSON(MemoryIncreaseRatio, memoryIncreaseRatio_);
      DARABONBA_PTR_FROM_JSON(MemoryIncreaseRatioValue, memoryIncreaseRatioValue_);
      DARABONBA_PTR_FROM_JSON(OriginCpu, originCpu_);
      DARABONBA_PTR_FROM_JSON(OriginMaxConn, originMaxConn_);
      DARABONBA_PTR_FROM_JSON(OriginMaxIops, originMaxIops_);
      DARABONBA_PTR_FROM_JSON(OriginMemory, originMemory_);
    };
    DescribeCustinsResourceInfoResponseBodyData() = default ;
    DescribeCustinsResourceInfoResponseBodyData(const DescribeCustinsResourceInfoResponseBodyData &) = default ;
    DescribeCustinsResourceInfoResponseBodyData(DescribeCustinsResourceInfoResponseBodyData &&) = default ;
    DescribeCustinsResourceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustinsResourceInfoResponseBodyData() = default ;
    DescribeCustinsResourceInfoResponseBodyData& operator=(const DescribeCustinsResourceInfoResponseBodyData &) = default ;
    DescribeCustinsResourceInfoResponseBodyData& operator=(DescribeCustinsResourceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuAdjustDeadline_ == nullptr
        && return this->cpuAdjustableMaxRatio_ == nullptr && return this->cpuAdjustableMaxValue_ == nullptr && return this->cpuIncreaseRatio_ == nullptr && return this->cpuIncreaseRatioValue_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->iopsAdjustableMaxValue_ == nullptr && return this->maxConnAdjustDeadline_ == nullptr && return this->maxConnAdjustableMaxValue_ == nullptr && return this->maxConnIncreaseRatio_ == nullptr && return this->maxConnIncreaseRatioValue_ == nullptr
        && return this->maxIopsAdjustDeadline_ == nullptr && return this->maxIopsIncreaseRatio_ == nullptr && return this->maxIopsIncreaseRatioValue_ == nullptr && return this->memAdjustableMaxRatio_ == nullptr && return this->memAdjustableMaxValue_ == nullptr
        && return this->memoryAdjustDeadline_ == nullptr && return this->memoryIncreaseRatio_ == nullptr && return this->memoryIncreaseRatioValue_ == nullptr && return this->originCpu_ == nullptr && return this->originMaxConn_ == nullptr
        && return this->originMaxIops_ == nullptr && return this->originMemory_ == nullptr; };
    // cpuAdjustDeadline Field Functions 
    bool hasCpuAdjustDeadline() const { return this->cpuAdjustDeadline_ != nullptr;};
    void deleteCpuAdjustDeadline() { this->cpuAdjustDeadline_ = nullptr;};
    inline string cpuAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustDeadline_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setCpuAdjustDeadline(string cpuAdjustDeadline) { DARABONBA_PTR_SET_VALUE(cpuAdjustDeadline_, cpuAdjustDeadline) };


    // cpuAdjustableMaxRatio Field Functions 
    bool hasCpuAdjustableMaxRatio() const { return this->cpuAdjustableMaxRatio_ != nullptr;};
    void deleteCpuAdjustableMaxRatio() { this->cpuAdjustableMaxRatio_ = nullptr;};
    inline string cpuAdjustableMaxRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustableMaxRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setCpuAdjustableMaxRatio(string cpuAdjustableMaxRatio) { DARABONBA_PTR_SET_VALUE(cpuAdjustableMaxRatio_, cpuAdjustableMaxRatio) };


    // cpuAdjustableMaxValue Field Functions 
    bool hasCpuAdjustableMaxValue() const { return this->cpuAdjustableMaxValue_ != nullptr;};
    void deleteCpuAdjustableMaxValue() { this->cpuAdjustableMaxValue_ = nullptr;};
    inline string cpuAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustableMaxValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setCpuAdjustableMaxValue(string cpuAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(cpuAdjustableMaxValue_, cpuAdjustableMaxValue) };


    // cpuIncreaseRatio Field Functions 
    bool hasCpuIncreaseRatio() const { return this->cpuIncreaseRatio_ != nullptr;};
    void deleteCpuIncreaseRatio() { this->cpuIncreaseRatio_ = nullptr;};
    inline string cpuIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuIncreaseRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setCpuIncreaseRatio(string cpuIncreaseRatio) { DARABONBA_PTR_SET_VALUE(cpuIncreaseRatio_, cpuIncreaseRatio) };


    // cpuIncreaseRatioValue Field Functions 
    bool hasCpuIncreaseRatioValue() const { return this->cpuIncreaseRatioValue_ != nullptr;};
    void deleteCpuIncreaseRatioValue() { this->cpuIncreaseRatioValue_ = nullptr;};
    inline string cpuIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(cpuIncreaseRatioValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setCpuIncreaseRatioValue(string cpuIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(cpuIncreaseRatioValue_, cpuIncreaseRatioValue) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // iopsAdjustableMaxValue Field Functions 
    bool hasIopsAdjustableMaxValue() const { return this->iopsAdjustableMaxValue_ != nullptr;};
    void deleteIopsAdjustableMaxValue() { this->iopsAdjustableMaxValue_ = nullptr;};
    inline string iopsAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(iopsAdjustableMaxValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setIopsAdjustableMaxValue(string iopsAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(iopsAdjustableMaxValue_, iopsAdjustableMaxValue) };


    // maxConnAdjustDeadline Field Functions 
    bool hasMaxConnAdjustDeadline() const { return this->maxConnAdjustDeadline_ != nullptr;};
    void deleteMaxConnAdjustDeadline() { this->maxConnAdjustDeadline_ = nullptr;};
    inline string maxConnAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(maxConnAdjustDeadline_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxConnAdjustDeadline(string maxConnAdjustDeadline) { DARABONBA_PTR_SET_VALUE(maxConnAdjustDeadline_, maxConnAdjustDeadline) };


    // maxConnAdjustableMaxValue Field Functions 
    bool hasMaxConnAdjustableMaxValue() const { return this->maxConnAdjustableMaxValue_ != nullptr;};
    void deleteMaxConnAdjustableMaxValue() { this->maxConnAdjustableMaxValue_ = nullptr;};
    inline string maxConnAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxConnAdjustableMaxValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxConnAdjustableMaxValue(string maxConnAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(maxConnAdjustableMaxValue_, maxConnAdjustableMaxValue) };


    // maxConnIncreaseRatio Field Functions 
    bool hasMaxConnIncreaseRatio() const { return this->maxConnIncreaseRatio_ != nullptr;};
    void deleteMaxConnIncreaseRatio() { this->maxConnIncreaseRatio_ = nullptr;};
    inline string maxConnIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(maxConnIncreaseRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxConnIncreaseRatio(string maxConnIncreaseRatio) { DARABONBA_PTR_SET_VALUE(maxConnIncreaseRatio_, maxConnIncreaseRatio) };


    // maxConnIncreaseRatioValue Field Functions 
    bool hasMaxConnIncreaseRatioValue() const { return this->maxConnIncreaseRatioValue_ != nullptr;};
    void deleteMaxConnIncreaseRatioValue() { this->maxConnIncreaseRatioValue_ = nullptr;};
    inline string maxConnIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(maxConnIncreaseRatioValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxConnIncreaseRatioValue(string maxConnIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(maxConnIncreaseRatioValue_, maxConnIncreaseRatioValue) };


    // maxIopsAdjustDeadline Field Functions 
    bool hasMaxIopsAdjustDeadline() const { return this->maxIopsAdjustDeadline_ != nullptr;};
    void deleteMaxIopsAdjustDeadline() { this->maxIopsAdjustDeadline_ = nullptr;};
    inline string maxIopsAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(maxIopsAdjustDeadline_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxIopsAdjustDeadline(string maxIopsAdjustDeadline) { DARABONBA_PTR_SET_VALUE(maxIopsAdjustDeadline_, maxIopsAdjustDeadline) };


    // maxIopsIncreaseRatio Field Functions 
    bool hasMaxIopsIncreaseRatio() const { return this->maxIopsIncreaseRatio_ != nullptr;};
    void deleteMaxIopsIncreaseRatio() { this->maxIopsIncreaseRatio_ = nullptr;};
    inline string maxIopsIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(maxIopsIncreaseRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxIopsIncreaseRatio(string maxIopsIncreaseRatio) { DARABONBA_PTR_SET_VALUE(maxIopsIncreaseRatio_, maxIopsIncreaseRatio) };


    // maxIopsIncreaseRatioValue Field Functions 
    bool hasMaxIopsIncreaseRatioValue() const { return this->maxIopsIncreaseRatioValue_ != nullptr;};
    void deleteMaxIopsIncreaseRatioValue() { this->maxIopsIncreaseRatioValue_ = nullptr;};
    inline string maxIopsIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(maxIopsIncreaseRatioValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMaxIopsIncreaseRatioValue(string maxIopsIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(maxIopsIncreaseRatioValue_, maxIopsIncreaseRatioValue) };


    // memAdjustableMaxRatio Field Functions 
    bool hasMemAdjustableMaxRatio() const { return this->memAdjustableMaxRatio_ != nullptr;};
    void deleteMemAdjustableMaxRatio() { this->memAdjustableMaxRatio_ = nullptr;};
    inline string memAdjustableMaxRatio() const { DARABONBA_PTR_GET_DEFAULT(memAdjustableMaxRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMemAdjustableMaxRatio(string memAdjustableMaxRatio) { DARABONBA_PTR_SET_VALUE(memAdjustableMaxRatio_, memAdjustableMaxRatio) };


    // memAdjustableMaxValue Field Functions 
    bool hasMemAdjustableMaxValue() const { return this->memAdjustableMaxValue_ != nullptr;};
    void deleteMemAdjustableMaxValue() { this->memAdjustableMaxValue_ = nullptr;};
    inline string memAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(memAdjustableMaxValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMemAdjustableMaxValue(string memAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(memAdjustableMaxValue_, memAdjustableMaxValue) };


    // memoryAdjustDeadline Field Functions 
    bool hasMemoryAdjustDeadline() const { return this->memoryAdjustDeadline_ != nullptr;};
    void deleteMemoryAdjustDeadline() { this->memoryAdjustDeadline_ = nullptr;};
    inline string memoryAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(memoryAdjustDeadline_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMemoryAdjustDeadline(string memoryAdjustDeadline) { DARABONBA_PTR_SET_VALUE(memoryAdjustDeadline_, memoryAdjustDeadline) };


    // memoryIncreaseRatio Field Functions 
    bool hasMemoryIncreaseRatio() const { return this->memoryIncreaseRatio_ != nullptr;};
    void deleteMemoryIncreaseRatio() { this->memoryIncreaseRatio_ = nullptr;};
    inline string memoryIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryIncreaseRatio_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMemoryIncreaseRatio(string memoryIncreaseRatio) { DARABONBA_PTR_SET_VALUE(memoryIncreaseRatio_, memoryIncreaseRatio) };


    // memoryIncreaseRatioValue Field Functions 
    bool hasMemoryIncreaseRatioValue() const { return this->memoryIncreaseRatioValue_ != nullptr;};
    void deleteMemoryIncreaseRatioValue() { this->memoryIncreaseRatioValue_ = nullptr;};
    inline string memoryIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(memoryIncreaseRatioValue_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setMemoryIncreaseRatioValue(string memoryIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(memoryIncreaseRatioValue_, memoryIncreaseRatioValue) };


    // originCpu Field Functions 
    bool hasOriginCpu() const { return this->originCpu_ != nullptr;};
    void deleteOriginCpu() { this->originCpu_ = nullptr;};
    inline string originCpu() const { DARABONBA_PTR_GET_DEFAULT(originCpu_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setOriginCpu(string originCpu) { DARABONBA_PTR_SET_VALUE(originCpu_, originCpu) };


    // originMaxConn Field Functions 
    bool hasOriginMaxConn() const { return this->originMaxConn_ != nullptr;};
    void deleteOriginMaxConn() { this->originMaxConn_ = nullptr;};
    inline string originMaxConn() const { DARABONBA_PTR_GET_DEFAULT(originMaxConn_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setOriginMaxConn(string originMaxConn) { DARABONBA_PTR_SET_VALUE(originMaxConn_, originMaxConn) };


    // originMaxIops Field Functions 
    bool hasOriginMaxIops() const { return this->originMaxIops_ != nullptr;};
    void deleteOriginMaxIops() { this->originMaxIops_ = nullptr;};
    inline string originMaxIops() const { DARABONBA_PTR_GET_DEFAULT(originMaxIops_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setOriginMaxIops(string originMaxIops) { DARABONBA_PTR_SET_VALUE(originMaxIops_, originMaxIops) };


    // originMemory Field Functions 
    bool hasOriginMemory() const { return this->originMemory_ != nullptr;};
    void deleteOriginMemory() { this->originMemory_ = nullptr;};
    inline string originMemory() const { DARABONBA_PTR_GET_DEFAULT(originMemory_, "") };
    inline DescribeCustinsResourceInfoResponseBodyData& setOriginMemory(string originMemory) { DARABONBA_PTR_SET_VALUE(originMemory_, originMemory) };


  protected:
    // The deadline for the CPU adjustment.
    std::shared_ptr<string> cpuAdjustDeadline_ = nullptr;
    // The maximum percentage of the system CPU resources that the instance can use.
    std::shared_ptr<string> cpuAdjustableMaxRatio_ = nullptr;
    // The maximum CPU utilization.
    std::shared_ptr<string> cpuAdjustableMaxValue_ = nullptr;
    // The CPU utilization.
    std::shared_ptr<string> cpuIncreaseRatio_ = nullptr;
    // The CPU utilization. Unit: percentage.
    std::shared_ptr<string> cpuIncreaseRatioValue_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The maximum IOPS.
    std::shared_ptr<string> iopsAdjustableMaxValue_ = nullptr;
    // The deadline for the adjustment of the maximum number of connections.
    std::shared_ptr<string> maxConnAdjustDeadline_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<string> maxConnAdjustableMaxValue_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<string> maxConnIncreaseRatio_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<string> maxConnIncreaseRatioValue_ = nullptr;
    // The deadline for the adjustment of the maximum IOPS.
    std::shared_ptr<string> maxIopsAdjustDeadline_ = nullptr;
    // The maximum IOPS.
    std::shared_ptr<string> maxIopsIncreaseRatio_ = nullptr;
    // The maximum IOPS that can be supported by the instance.
    std::shared_ptr<string> maxIopsIncreaseRatioValue_ = nullptr;
    // The maximum percentage of the system memory that the instance can use.
    std::shared_ptr<string> memAdjustableMaxRatio_ = nullptr;
    // The maximum value of the resources to be evaluated.
    std::shared_ptr<string> memAdjustableMaxValue_ = nullptr;
    // The deadline for the memory adjustment.
    std::shared_ptr<string> memoryAdjustDeadline_ = nullptr;
    // The memory increase percentage.
    std::shared_ptr<string> memoryIncreaseRatio_ = nullptr;
    // The memory usage. Unit: MB.
    std::shared_ptr<string> memoryIncreaseRatioValue_ = nullptr;
    // The number of CPUs of the instance.
    std::shared_ptr<string> originCpu_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<string> originMaxConn_ = nullptr;
    // The maximum IOPS.
    std::shared_ptr<string> originMaxIops_ = nullptr;
    // The actual memory used. Unit: MB.
    std::shared_ptr<string> originMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
