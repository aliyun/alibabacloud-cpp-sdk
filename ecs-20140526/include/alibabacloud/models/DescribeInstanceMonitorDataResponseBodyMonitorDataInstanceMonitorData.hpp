// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATAINSTANCEMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATAINSTANCEMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BPSRead, BPSRead_);
      DARABONBA_PTR_TO_JSON(BPSWrite, BPSWrite_);
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(CPUAdvanceCreditBalance, CPUAdvanceCreditBalance_);
      DARABONBA_PTR_TO_JSON(CPUCreditBalance, CPUCreditBalance_);
      DARABONBA_PTR_TO_JSON(CPUCreditUsage, CPUCreditUsage_);
      DARABONBA_PTR_TO_JSON(CPUNotpaidSurplusCreditUsage, CPUNotpaidSurplusCreditUsage_);
      DARABONBA_PTR_TO_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_TO_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_TO_JSON(InternetRX, internetRX_);
      DARABONBA_PTR_TO_JSON(InternetTX, internetTX_);
      DARABONBA_PTR_TO_JSON(IntranetBandwidth, intranetBandwidth_);
      DARABONBA_PTR_TO_JSON(IntranetRX, intranetRX_);
      DARABONBA_PTR_TO_JSON(IntranetTX, intranetTX_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BPSRead, BPSRead_);
      DARABONBA_PTR_FROM_JSON(BPSWrite, BPSWrite_);
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(CPUAdvanceCreditBalance, CPUAdvanceCreditBalance_);
      DARABONBA_PTR_FROM_JSON(CPUCreditBalance, CPUCreditBalance_);
      DARABONBA_PTR_FROM_JSON(CPUCreditUsage, CPUCreditUsage_);
      DARABONBA_PTR_FROM_JSON(CPUNotpaidSurplusCreditUsage, CPUNotpaidSurplusCreditUsage_);
      DARABONBA_PTR_FROM_JSON(IOPSRead, IOPSRead_);
      DARABONBA_PTR_FROM_JSON(IOPSWrite, IOPSWrite_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_FROM_JSON(InternetRX, internetRX_);
      DARABONBA_PTR_FROM_JSON(InternetTX, internetTX_);
      DARABONBA_PTR_FROM_JSON(IntranetBandwidth, intranetBandwidth_);
      DARABONBA_PTR_FROM_JSON(IntranetRX, intranetRX_);
      DARABONBA_PTR_FROM_JSON(IntranetTX, intranetTX_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &&) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& operator=(const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& operator=(DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->BPSRead_ == nullptr
        && return this->BPSWrite_ == nullptr && return this->CPU_ == nullptr && return this->CPUAdvanceCreditBalance_ == nullptr && return this->CPUCreditBalance_ == nullptr && return this->CPUCreditUsage_ == nullptr
        && return this->CPUNotpaidSurplusCreditUsage_ == nullptr && return this->IOPSRead_ == nullptr && return this->IOPSWrite_ == nullptr && return this->instanceId_ == nullptr && return this->internetBandwidth_ == nullptr
        && return this->internetRX_ == nullptr && return this->internetTX_ == nullptr && return this->intranetBandwidth_ == nullptr && return this->intranetRX_ == nullptr && return this->intranetTX_ == nullptr
        && return this->timeStamp_ == nullptr; };
    // BPSRead Field Functions 
    bool hasBPSRead() const { return this->BPSRead_ != nullptr;};
    void deleteBPSRead() { this->BPSRead_ = nullptr;};
    inline int32_t BPSRead() const { DARABONBA_PTR_GET_DEFAULT(BPSRead_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setBPSRead(int32_t BPSRead) { DARABONBA_PTR_SET_VALUE(BPSRead_, BPSRead) };


    // BPSWrite Field Functions 
    bool hasBPSWrite() const { return this->BPSWrite_ != nullptr;};
    void deleteBPSWrite() { this->BPSWrite_ = nullptr;};
    inline int32_t BPSWrite() const { DARABONBA_PTR_GET_DEFAULT(BPSWrite_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setBPSWrite(int32_t BPSWrite) { DARABONBA_PTR_SET_VALUE(BPSWrite_, BPSWrite) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // CPUAdvanceCreditBalance Field Functions 
    bool hasCPUAdvanceCreditBalance() const { return this->CPUAdvanceCreditBalance_ != nullptr;};
    void deleteCPUAdvanceCreditBalance() { this->CPUAdvanceCreditBalance_ = nullptr;};
    inline float CPUAdvanceCreditBalance() const { DARABONBA_PTR_GET_DEFAULT(CPUAdvanceCreditBalance_, 0.0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPUAdvanceCreditBalance(float CPUAdvanceCreditBalance) { DARABONBA_PTR_SET_VALUE(CPUAdvanceCreditBalance_, CPUAdvanceCreditBalance) };


    // CPUCreditBalance Field Functions 
    bool hasCPUCreditBalance() const { return this->CPUCreditBalance_ != nullptr;};
    void deleteCPUCreditBalance() { this->CPUCreditBalance_ = nullptr;};
    inline float CPUCreditBalance() const { DARABONBA_PTR_GET_DEFAULT(CPUCreditBalance_, 0.0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPUCreditBalance(float CPUCreditBalance) { DARABONBA_PTR_SET_VALUE(CPUCreditBalance_, CPUCreditBalance) };


    // CPUCreditUsage Field Functions 
    bool hasCPUCreditUsage() const { return this->CPUCreditUsage_ != nullptr;};
    void deleteCPUCreditUsage() { this->CPUCreditUsage_ = nullptr;};
    inline float CPUCreditUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUCreditUsage_, 0.0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPUCreditUsage(float CPUCreditUsage) { DARABONBA_PTR_SET_VALUE(CPUCreditUsage_, CPUCreditUsage) };


    // CPUNotpaidSurplusCreditUsage Field Functions 
    bool hasCPUNotpaidSurplusCreditUsage() const { return this->CPUNotpaidSurplusCreditUsage_ != nullptr;};
    void deleteCPUNotpaidSurplusCreditUsage() { this->CPUNotpaidSurplusCreditUsage_ = nullptr;};
    inline float CPUNotpaidSurplusCreditUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUNotpaidSurplusCreditUsage_, 0.0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPUNotpaidSurplusCreditUsage(float CPUNotpaidSurplusCreditUsage) { DARABONBA_PTR_SET_VALUE(CPUNotpaidSurplusCreditUsage_, CPUNotpaidSurplusCreditUsage) };


    // IOPSRead Field Functions 
    bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
    void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
    inline int32_t IOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


    // IOPSWrite Field Functions 
    bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
    void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
    inline int32_t IOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetBandwidth Field Functions 
    bool hasInternetBandwidth() const { return this->internetBandwidth_ != nullptr;};
    void deleteInternetBandwidth() { this->internetBandwidth_ = nullptr;};
    inline int32_t internetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidth_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setInternetBandwidth(int32_t internetBandwidth) { DARABONBA_PTR_SET_VALUE(internetBandwidth_, internetBandwidth) };


    // internetRX Field Functions 
    bool hasInternetRX() const { return this->internetRX_ != nullptr;};
    void deleteInternetRX() { this->internetRX_ = nullptr;};
    inline int32_t internetRX() const { DARABONBA_PTR_GET_DEFAULT(internetRX_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setInternetRX(int32_t internetRX) { DARABONBA_PTR_SET_VALUE(internetRX_, internetRX) };


    // internetTX Field Functions 
    bool hasInternetTX() const { return this->internetTX_ != nullptr;};
    void deleteInternetTX() { this->internetTX_ = nullptr;};
    inline int32_t internetTX() const { DARABONBA_PTR_GET_DEFAULT(internetTX_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setInternetTX(int32_t internetTX) { DARABONBA_PTR_SET_VALUE(internetTX_, internetTX) };


    // intranetBandwidth Field Functions 
    bool hasIntranetBandwidth() const { return this->intranetBandwidth_ != nullptr;};
    void deleteIntranetBandwidth() { this->intranetBandwidth_ = nullptr;};
    inline int32_t intranetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(intranetBandwidth_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setIntranetBandwidth(int32_t intranetBandwidth) { DARABONBA_PTR_SET_VALUE(intranetBandwidth_, intranetBandwidth) };


    // intranetRX Field Functions 
    bool hasIntranetRX() const { return this->intranetRX_ != nullptr;};
    void deleteIntranetRX() { this->intranetRX_ = nullptr;};
    inline int32_t intranetRX() const { DARABONBA_PTR_GET_DEFAULT(intranetRX_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setIntranetRX(int32_t intranetRX) { DARABONBA_PTR_SET_VALUE(intranetRX_, intranetRX) };


    // intranetTX Field Functions 
    bool hasIntranetTX() const { return this->intranetTX_ != nullptr;};
    void deleteIntranetTX() { this->intranetTX_ = nullptr;};
    inline int32_t intranetTX() const { DARABONBA_PTR_GET_DEFAULT(intranetTX_, 0) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setIntranetTX(int32_t intranetTX) { DARABONBA_PTR_SET_VALUE(intranetTX_, intranetTX) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The read bandwidth of the cloud disks (system disk and data disks). Unit: Byte/s.
    std::shared_ptr<int32_t> BPSRead_ = nullptr;
    // The write bandwidth of the cloud disks (system disk and data disks). Unit: Byte/s.
    std::shared_ptr<int32_t> BPSWrite_ = nullptr;
    // The vCPU utilization of the instance. Unit: percent (%).
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // The overdrawn CPU credits of the burstable instance.
    std::shared_ptr<float> CPUAdvanceCreditBalance_ = nullptr;
    // The total number of CPU credits of the burstable instance.
    std::shared_ptr<float> CPUCreditBalance_ = nullptr;
    // The number of CPU credits consumed by the burstable instance.
    std::shared_ptr<float> CPUCreditUsage_ = nullptr;
    // The unpaid overdrawn CPU credits.
    std::shared_ptr<float> CPUNotpaidSurplusCreditUsage_ = nullptr;
    // The number of read I/O operations per second on the cloud disks (system disk and data disks).
    std::shared_ptr<int32_t> IOPSRead_ = nullptr;
    // The number of write I/O operations per second on the cloud disks (system disk and data disks).
    std::shared_ptr<int32_t> IOPSWrite_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public bandwidth of the instance. Unit: Kbit/s.
    std::shared_ptr<int32_t> internetBandwidth_ = nullptr;
    // The Internet traffic received by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
    std::shared_ptr<int32_t> internetRX_ = nullptr;
    // The Internet traffic sent by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
    std::shared_ptr<int32_t> internetTX_ = nullptr;
    // The internal bandwidth of the instance. Unit: Kbit/s.
    std::shared_ptr<int32_t> intranetBandwidth_ = nullptr;
    // The internal data traffic received by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
    std::shared_ptr<int32_t> intranetRX_ = nullptr;
    // The internal data traffic sent by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
    std::shared_ptr<int32_t> intranetTX_ = nullptr;
    // The timestamp of the monitoring data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
