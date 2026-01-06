// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTINSRESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTINSRESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCustinsResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustinsResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustinsResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustinsResourceInfoResponseBody() = default ;
    DescribeCustinsResourceInfoResponseBody(const DescribeCustinsResourceInfoResponseBody &) = default ;
    DescribeCustinsResourceInfoResponseBody(DescribeCustinsResourceInfoResponseBody &&) = default ;
    DescribeCustinsResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustinsResourceInfoResponseBody() = default ;
    DescribeCustinsResourceInfoResponseBody& operator=(const DescribeCustinsResourceInfoResponseBody &) = default ;
    DescribeCustinsResourceInfoResponseBody& operator=(DescribeCustinsResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuAdjustDeadline_ == nullptr
        && this->cpuAdjustableMaxRatio_ == nullptr && this->cpuAdjustableMaxValue_ == nullptr && this->cpuIncreaseRatio_ == nullptr && this->cpuIncreaseRatioValue_ == nullptr && this->DBInstanceId_ == nullptr
        && this->iopsAdjustableMaxValue_ == nullptr && this->maxConnAdjustDeadline_ == nullptr && this->maxConnAdjustableMaxValue_ == nullptr && this->maxConnIncreaseRatio_ == nullptr && this->maxConnIncreaseRatioValue_ == nullptr
        && this->maxIopsAdjustDeadline_ == nullptr && this->maxIopsIncreaseRatio_ == nullptr && this->maxIopsIncreaseRatioValue_ == nullptr && this->memAdjustableMaxRatio_ == nullptr && this->memAdjustableMaxValue_ == nullptr
        && this->memoryAdjustDeadline_ == nullptr && this->memoryIncreaseRatio_ == nullptr && this->memoryIncreaseRatioValue_ == nullptr && this->originCpu_ == nullptr && this->originMaxConn_ == nullptr
        && this->originMaxIops_ == nullptr && this->originMemory_ == nullptr; };
      // cpuAdjustDeadline Field Functions 
      bool hasCpuAdjustDeadline() const { return this->cpuAdjustDeadline_ != nullptr;};
      void deleteCpuAdjustDeadline() { this->cpuAdjustDeadline_ = nullptr;};
      inline string getCpuAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustDeadline_, "") };
      inline Data& setCpuAdjustDeadline(string cpuAdjustDeadline) { DARABONBA_PTR_SET_VALUE(cpuAdjustDeadline_, cpuAdjustDeadline) };


      // cpuAdjustableMaxRatio Field Functions 
      bool hasCpuAdjustableMaxRatio() const { return this->cpuAdjustableMaxRatio_ != nullptr;};
      void deleteCpuAdjustableMaxRatio() { this->cpuAdjustableMaxRatio_ = nullptr;};
      inline string getCpuAdjustableMaxRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustableMaxRatio_, "") };
      inline Data& setCpuAdjustableMaxRatio(string cpuAdjustableMaxRatio) { DARABONBA_PTR_SET_VALUE(cpuAdjustableMaxRatio_, cpuAdjustableMaxRatio) };


      // cpuAdjustableMaxValue Field Functions 
      bool hasCpuAdjustableMaxValue() const { return this->cpuAdjustableMaxValue_ != nullptr;};
      void deleteCpuAdjustableMaxValue() { this->cpuAdjustableMaxValue_ = nullptr;};
      inline string getCpuAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(cpuAdjustableMaxValue_, "") };
      inline Data& setCpuAdjustableMaxValue(string cpuAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(cpuAdjustableMaxValue_, cpuAdjustableMaxValue) };


      // cpuIncreaseRatio Field Functions 
      bool hasCpuIncreaseRatio() const { return this->cpuIncreaseRatio_ != nullptr;};
      void deleteCpuIncreaseRatio() { this->cpuIncreaseRatio_ = nullptr;};
      inline string getCpuIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuIncreaseRatio_, "") };
      inline Data& setCpuIncreaseRatio(string cpuIncreaseRatio) { DARABONBA_PTR_SET_VALUE(cpuIncreaseRatio_, cpuIncreaseRatio) };


      // cpuIncreaseRatioValue Field Functions 
      bool hasCpuIncreaseRatioValue() const { return this->cpuIncreaseRatioValue_ != nullptr;};
      void deleteCpuIncreaseRatioValue() { this->cpuIncreaseRatioValue_ = nullptr;};
      inline string getCpuIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(cpuIncreaseRatioValue_, "") };
      inline Data& setCpuIncreaseRatioValue(string cpuIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(cpuIncreaseRatioValue_, cpuIncreaseRatioValue) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // iopsAdjustableMaxValue Field Functions 
      bool hasIopsAdjustableMaxValue() const { return this->iopsAdjustableMaxValue_ != nullptr;};
      void deleteIopsAdjustableMaxValue() { this->iopsAdjustableMaxValue_ = nullptr;};
      inline string getIopsAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(iopsAdjustableMaxValue_, "") };
      inline Data& setIopsAdjustableMaxValue(string iopsAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(iopsAdjustableMaxValue_, iopsAdjustableMaxValue) };


      // maxConnAdjustDeadline Field Functions 
      bool hasMaxConnAdjustDeadline() const { return this->maxConnAdjustDeadline_ != nullptr;};
      void deleteMaxConnAdjustDeadline() { this->maxConnAdjustDeadline_ = nullptr;};
      inline string getMaxConnAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(maxConnAdjustDeadline_, "") };
      inline Data& setMaxConnAdjustDeadline(string maxConnAdjustDeadline) { DARABONBA_PTR_SET_VALUE(maxConnAdjustDeadline_, maxConnAdjustDeadline) };


      // maxConnAdjustableMaxValue Field Functions 
      bool hasMaxConnAdjustableMaxValue() const { return this->maxConnAdjustableMaxValue_ != nullptr;};
      void deleteMaxConnAdjustableMaxValue() { this->maxConnAdjustableMaxValue_ = nullptr;};
      inline string getMaxConnAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxConnAdjustableMaxValue_, "") };
      inline Data& setMaxConnAdjustableMaxValue(string maxConnAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(maxConnAdjustableMaxValue_, maxConnAdjustableMaxValue) };


      // maxConnIncreaseRatio Field Functions 
      bool hasMaxConnIncreaseRatio() const { return this->maxConnIncreaseRatio_ != nullptr;};
      void deleteMaxConnIncreaseRatio() { this->maxConnIncreaseRatio_ = nullptr;};
      inline string getMaxConnIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(maxConnIncreaseRatio_, "") };
      inline Data& setMaxConnIncreaseRatio(string maxConnIncreaseRatio) { DARABONBA_PTR_SET_VALUE(maxConnIncreaseRatio_, maxConnIncreaseRatio) };


      // maxConnIncreaseRatioValue Field Functions 
      bool hasMaxConnIncreaseRatioValue() const { return this->maxConnIncreaseRatioValue_ != nullptr;};
      void deleteMaxConnIncreaseRatioValue() { this->maxConnIncreaseRatioValue_ = nullptr;};
      inline string getMaxConnIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(maxConnIncreaseRatioValue_, "") };
      inline Data& setMaxConnIncreaseRatioValue(string maxConnIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(maxConnIncreaseRatioValue_, maxConnIncreaseRatioValue) };


      // maxIopsAdjustDeadline Field Functions 
      bool hasMaxIopsAdjustDeadline() const { return this->maxIopsAdjustDeadline_ != nullptr;};
      void deleteMaxIopsAdjustDeadline() { this->maxIopsAdjustDeadline_ = nullptr;};
      inline string getMaxIopsAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(maxIopsAdjustDeadline_, "") };
      inline Data& setMaxIopsAdjustDeadline(string maxIopsAdjustDeadline) { DARABONBA_PTR_SET_VALUE(maxIopsAdjustDeadline_, maxIopsAdjustDeadline) };


      // maxIopsIncreaseRatio Field Functions 
      bool hasMaxIopsIncreaseRatio() const { return this->maxIopsIncreaseRatio_ != nullptr;};
      void deleteMaxIopsIncreaseRatio() { this->maxIopsIncreaseRatio_ = nullptr;};
      inline string getMaxIopsIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(maxIopsIncreaseRatio_, "") };
      inline Data& setMaxIopsIncreaseRatio(string maxIopsIncreaseRatio) { DARABONBA_PTR_SET_VALUE(maxIopsIncreaseRatio_, maxIopsIncreaseRatio) };


      // maxIopsIncreaseRatioValue Field Functions 
      bool hasMaxIopsIncreaseRatioValue() const { return this->maxIopsIncreaseRatioValue_ != nullptr;};
      void deleteMaxIopsIncreaseRatioValue() { this->maxIopsIncreaseRatioValue_ = nullptr;};
      inline string getMaxIopsIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(maxIopsIncreaseRatioValue_, "") };
      inline Data& setMaxIopsIncreaseRatioValue(string maxIopsIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(maxIopsIncreaseRatioValue_, maxIopsIncreaseRatioValue) };


      // memAdjustableMaxRatio Field Functions 
      bool hasMemAdjustableMaxRatio() const { return this->memAdjustableMaxRatio_ != nullptr;};
      void deleteMemAdjustableMaxRatio() { this->memAdjustableMaxRatio_ = nullptr;};
      inline string getMemAdjustableMaxRatio() const { DARABONBA_PTR_GET_DEFAULT(memAdjustableMaxRatio_, "") };
      inline Data& setMemAdjustableMaxRatio(string memAdjustableMaxRatio) { DARABONBA_PTR_SET_VALUE(memAdjustableMaxRatio_, memAdjustableMaxRatio) };


      // memAdjustableMaxValue Field Functions 
      bool hasMemAdjustableMaxValue() const { return this->memAdjustableMaxValue_ != nullptr;};
      void deleteMemAdjustableMaxValue() { this->memAdjustableMaxValue_ = nullptr;};
      inline string getMemAdjustableMaxValue() const { DARABONBA_PTR_GET_DEFAULT(memAdjustableMaxValue_, "") };
      inline Data& setMemAdjustableMaxValue(string memAdjustableMaxValue) { DARABONBA_PTR_SET_VALUE(memAdjustableMaxValue_, memAdjustableMaxValue) };


      // memoryAdjustDeadline Field Functions 
      bool hasMemoryAdjustDeadline() const { return this->memoryAdjustDeadline_ != nullptr;};
      void deleteMemoryAdjustDeadline() { this->memoryAdjustDeadline_ = nullptr;};
      inline string getMemoryAdjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(memoryAdjustDeadline_, "") };
      inline Data& setMemoryAdjustDeadline(string memoryAdjustDeadline) { DARABONBA_PTR_SET_VALUE(memoryAdjustDeadline_, memoryAdjustDeadline) };


      // memoryIncreaseRatio Field Functions 
      bool hasMemoryIncreaseRatio() const { return this->memoryIncreaseRatio_ != nullptr;};
      void deleteMemoryIncreaseRatio() { this->memoryIncreaseRatio_ = nullptr;};
      inline string getMemoryIncreaseRatio() const { DARABONBA_PTR_GET_DEFAULT(memoryIncreaseRatio_, "") };
      inline Data& setMemoryIncreaseRatio(string memoryIncreaseRatio) { DARABONBA_PTR_SET_VALUE(memoryIncreaseRatio_, memoryIncreaseRatio) };


      // memoryIncreaseRatioValue Field Functions 
      bool hasMemoryIncreaseRatioValue() const { return this->memoryIncreaseRatioValue_ != nullptr;};
      void deleteMemoryIncreaseRatioValue() { this->memoryIncreaseRatioValue_ = nullptr;};
      inline string getMemoryIncreaseRatioValue() const { DARABONBA_PTR_GET_DEFAULT(memoryIncreaseRatioValue_, "") };
      inline Data& setMemoryIncreaseRatioValue(string memoryIncreaseRatioValue) { DARABONBA_PTR_SET_VALUE(memoryIncreaseRatioValue_, memoryIncreaseRatioValue) };


      // originCpu Field Functions 
      bool hasOriginCpu() const { return this->originCpu_ != nullptr;};
      void deleteOriginCpu() { this->originCpu_ = nullptr;};
      inline string getOriginCpu() const { DARABONBA_PTR_GET_DEFAULT(originCpu_, "") };
      inline Data& setOriginCpu(string originCpu) { DARABONBA_PTR_SET_VALUE(originCpu_, originCpu) };


      // originMaxConn Field Functions 
      bool hasOriginMaxConn() const { return this->originMaxConn_ != nullptr;};
      void deleteOriginMaxConn() { this->originMaxConn_ = nullptr;};
      inline string getOriginMaxConn() const { DARABONBA_PTR_GET_DEFAULT(originMaxConn_, "") };
      inline Data& setOriginMaxConn(string originMaxConn) { DARABONBA_PTR_SET_VALUE(originMaxConn_, originMaxConn) };


      // originMaxIops Field Functions 
      bool hasOriginMaxIops() const { return this->originMaxIops_ != nullptr;};
      void deleteOriginMaxIops() { this->originMaxIops_ = nullptr;};
      inline string getOriginMaxIops() const { DARABONBA_PTR_GET_DEFAULT(originMaxIops_, "") };
      inline Data& setOriginMaxIops(string originMaxIops) { DARABONBA_PTR_SET_VALUE(originMaxIops_, originMaxIops) };


      // originMemory Field Functions 
      bool hasOriginMemory() const { return this->originMemory_ != nullptr;};
      void deleteOriginMemory() { this->originMemory_ = nullptr;};
      inline string getOriginMemory() const { DARABONBA_PTR_GET_DEFAULT(originMemory_, "") };
      inline Data& setOriginMemory(string originMemory) { DARABONBA_PTR_SET_VALUE(originMemory_, originMemory) };


    protected:
      // The deadline for the CPU adjustment.
      shared_ptr<string> cpuAdjustDeadline_ {};
      // The maximum percentage of the system CPU resources that the instance can use.
      shared_ptr<string> cpuAdjustableMaxRatio_ {};
      // The maximum CPU utilization.
      shared_ptr<string> cpuAdjustableMaxValue_ {};
      // The CPU utilization.
      shared_ptr<string> cpuIncreaseRatio_ {};
      // The CPU utilization. Unit: percentage.
      shared_ptr<string> cpuIncreaseRatioValue_ {};
      // The instance ID.
      shared_ptr<string> DBInstanceId_ {};
      // The maximum IOPS.
      shared_ptr<string> iopsAdjustableMaxValue_ {};
      // The deadline for the adjustment of the maximum number of connections.
      shared_ptr<string> maxConnAdjustDeadline_ {};
      // The maximum number of concurrent connections.
      shared_ptr<string> maxConnAdjustableMaxValue_ {};
      // The maximum number of concurrent connections.
      shared_ptr<string> maxConnIncreaseRatio_ {};
      // The maximum number of concurrent connections.
      shared_ptr<string> maxConnIncreaseRatioValue_ {};
      // The deadline for the adjustment of the maximum IOPS.
      shared_ptr<string> maxIopsAdjustDeadline_ {};
      // The maximum IOPS.
      shared_ptr<string> maxIopsIncreaseRatio_ {};
      // The maximum IOPS that can be supported by the instance.
      shared_ptr<string> maxIopsIncreaseRatioValue_ {};
      // The maximum percentage of the system memory that the instance can use.
      shared_ptr<string> memAdjustableMaxRatio_ {};
      // The maximum value of the resources to be evaluated.
      shared_ptr<string> memAdjustableMaxValue_ {};
      // The deadline for the memory adjustment.
      shared_ptr<string> memoryAdjustDeadline_ {};
      // The memory increase percentage.
      shared_ptr<string> memoryIncreaseRatio_ {};
      // The memory usage. Unit: MB.
      shared_ptr<string> memoryIncreaseRatioValue_ {};
      // The number of CPUs of the instance.
      shared_ptr<string> originCpu_ {};
      // The maximum number of concurrent connections.
      shared_ptr<string> originMaxConn_ {};
      // The maximum IOPS.
      shared_ptr<string> originMaxIops_ {};
      // The actual memory used. Unit: MB.
      shared_ptr<string> originMemory_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeCustinsResourceInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeCustinsResourceInfoResponseBody::Data>) };
    inline vector<DescribeCustinsResourceInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeCustinsResourceInfoResponseBody::Data>) };
    inline DescribeCustinsResourceInfoResponseBody& setData(const vector<DescribeCustinsResourceInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustinsResourceInfoResponseBody& setData(vector<DescribeCustinsResourceInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustinsResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<DescribeCustinsResourceInfoResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
