// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceMonitorDataResponseBody() = default ;
    DescribeInstanceMonitorDataResponseBody(const DescribeInstanceMonitorDataResponseBody &) = default ;
    DescribeInstanceMonitorDataResponseBody(DescribeInstanceMonitorDataResponseBody &&) = default ;
    DescribeInstanceMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMonitorDataResponseBody() = default ;
    DescribeInstanceMonitorDataResponseBody& operator=(const DescribeInstanceMonitorDataResponseBody &) = default ;
    DescribeInstanceMonitorDataResponseBody& operator=(DescribeInstanceMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceMonitorData, instanceMonitorData_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceMonitorData, instanceMonitorData_);
      };
      MonitorData() = default ;
      MonitorData(const MonitorData &) = default ;
      MonitorData(MonitorData &&) = default ;
      MonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorData() = default ;
      MonitorData& operator=(const MonitorData &) = default ;
      MonitorData& operator=(MonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceMonitorData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceMonitorData& obj) { 
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
        friend void from_json(const Darabonba::Json& j, InstanceMonitorData& obj) { 
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
        InstanceMonitorData() = default ;
        InstanceMonitorData(const InstanceMonitorData &) = default ;
        InstanceMonitorData(InstanceMonitorData &&) = default ;
        InstanceMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceMonitorData() = default ;
        InstanceMonitorData& operator=(const InstanceMonitorData &) = default ;
        InstanceMonitorData& operator=(InstanceMonitorData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->BPSRead_ == nullptr
        && this->BPSWrite_ == nullptr && this->CPU_ == nullptr && this->CPUAdvanceCreditBalance_ == nullptr && this->CPUCreditBalance_ == nullptr && this->CPUCreditUsage_ == nullptr
        && this->CPUNotpaidSurplusCreditUsage_ == nullptr && this->IOPSRead_ == nullptr && this->IOPSWrite_ == nullptr && this->instanceId_ == nullptr && this->internetBandwidth_ == nullptr
        && this->internetRX_ == nullptr && this->internetTX_ == nullptr && this->intranetBandwidth_ == nullptr && this->intranetRX_ == nullptr && this->intranetTX_ == nullptr
        && this->timeStamp_ == nullptr; };
        // BPSRead Field Functions 
        bool hasBPSRead() const { return this->BPSRead_ != nullptr;};
        void deleteBPSRead() { this->BPSRead_ = nullptr;};
        inline int32_t getBPSRead() const { DARABONBA_PTR_GET_DEFAULT(BPSRead_, 0) };
        inline InstanceMonitorData& setBPSRead(int32_t BPSRead) { DARABONBA_PTR_SET_VALUE(BPSRead_, BPSRead) };


        // BPSWrite Field Functions 
        bool hasBPSWrite() const { return this->BPSWrite_ != nullptr;};
        void deleteBPSWrite() { this->BPSWrite_ = nullptr;};
        inline int32_t getBPSWrite() const { DARABONBA_PTR_GET_DEFAULT(BPSWrite_, 0) };
        inline InstanceMonitorData& setBPSWrite(int32_t BPSWrite) { DARABONBA_PTR_SET_VALUE(BPSWrite_, BPSWrite) };


        // CPU Field Functions 
        bool hasCPU() const { return this->CPU_ != nullptr;};
        void deleteCPU() { this->CPU_ = nullptr;};
        inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
        inline InstanceMonitorData& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


        // CPUAdvanceCreditBalance Field Functions 
        bool hasCPUAdvanceCreditBalance() const { return this->CPUAdvanceCreditBalance_ != nullptr;};
        void deleteCPUAdvanceCreditBalance() { this->CPUAdvanceCreditBalance_ = nullptr;};
        inline float getCPUAdvanceCreditBalance() const { DARABONBA_PTR_GET_DEFAULT(CPUAdvanceCreditBalance_, 0.0) };
        inline InstanceMonitorData& setCPUAdvanceCreditBalance(float CPUAdvanceCreditBalance) { DARABONBA_PTR_SET_VALUE(CPUAdvanceCreditBalance_, CPUAdvanceCreditBalance) };


        // CPUCreditBalance Field Functions 
        bool hasCPUCreditBalance() const { return this->CPUCreditBalance_ != nullptr;};
        void deleteCPUCreditBalance() { this->CPUCreditBalance_ = nullptr;};
        inline float getCPUCreditBalance() const { DARABONBA_PTR_GET_DEFAULT(CPUCreditBalance_, 0.0) };
        inline InstanceMonitorData& setCPUCreditBalance(float CPUCreditBalance) { DARABONBA_PTR_SET_VALUE(CPUCreditBalance_, CPUCreditBalance) };


        // CPUCreditUsage Field Functions 
        bool hasCPUCreditUsage() const { return this->CPUCreditUsage_ != nullptr;};
        void deleteCPUCreditUsage() { this->CPUCreditUsage_ = nullptr;};
        inline float getCPUCreditUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUCreditUsage_, 0.0) };
        inline InstanceMonitorData& setCPUCreditUsage(float CPUCreditUsage) { DARABONBA_PTR_SET_VALUE(CPUCreditUsage_, CPUCreditUsage) };


        // CPUNotpaidSurplusCreditUsage Field Functions 
        bool hasCPUNotpaidSurplusCreditUsage() const { return this->CPUNotpaidSurplusCreditUsage_ != nullptr;};
        void deleteCPUNotpaidSurplusCreditUsage() { this->CPUNotpaidSurplusCreditUsage_ = nullptr;};
        inline float getCPUNotpaidSurplusCreditUsage() const { DARABONBA_PTR_GET_DEFAULT(CPUNotpaidSurplusCreditUsage_, 0.0) };
        inline InstanceMonitorData& setCPUNotpaidSurplusCreditUsage(float CPUNotpaidSurplusCreditUsage) { DARABONBA_PTR_SET_VALUE(CPUNotpaidSurplusCreditUsage_, CPUNotpaidSurplusCreditUsage) };


        // IOPSRead Field Functions 
        bool hasIOPSRead() const { return this->IOPSRead_ != nullptr;};
        void deleteIOPSRead() { this->IOPSRead_ = nullptr;};
        inline int32_t getIOPSRead() const { DARABONBA_PTR_GET_DEFAULT(IOPSRead_, 0) };
        inline InstanceMonitorData& setIOPSRead(int32_t IOPSRead) { DARABONBA_PTR_SET_VALUE(IOPSRead_, IOPSRead) };


        // IOPSWrite Field Functions 
        bool hasIOPSWrite() const { return this->IOPSWrite_ != nullptr;};
        void deleteIOPSWrite() { this->IOPSWrite_ = nullptr;};
        inline int32_t getIOPSWrite() const { DARABONBA_PTR_GET_DEFAULT(IOPSWrite_, 0) };
        inline InstanceMonitorData& setIOPSWrite(int32_t IOPSWrite) { DARABONBA_PTR_SET_VALUE(IOPSWrite_, IOPSWrite) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceMonitorData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // internetBandwidth Field Functions 
        bool hasInternetBandwidth() const { return this->internetBandwidth_ != nullptr;};
        void deleteInternetBandwidth() { this->internetBandwidth_ = nullptr;};
        inline int32_t getInternetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidth_, 0) };
        inline InstanceMonitorData& setInternetBandwidth(int32_t internetBandwidth) { DARABONBA_PTR_SET_VALUE(internetBandwidth_, internetBandwidth) };


        // internetRX Field Functions 
        bool hasInternetRX() const { return this->internetRX_ != nullptr;};
        void deleteInternetRX() { this->internetRX_ = nullptr;};
        inline int32_t getInternetRX() const { DARABONBA_PTR_GET_DEFAULT(internetRX_, 0) };
        inline InstanceMonitorData& setInternetRX(int32_t internetRX) { DARABONBA_PTR_SET_VALUE(internetRX_, internetRX) };


        // internetTX Field Functions 
        bool hasInternetTX() const { return this->internetTX_ != nullptr;};
        void deleteInternetTX() { this->internetTX_ = nullptr;};
        inline int32_t getInternetTX() const { DARABONBA_PTR_GET_DEFAULT(internetTX_, 0) };
        inline InstanceMonitorData& setInternetTX(int32_t internetTX) { DARABONBA_PTR_SET_VALUE(internetTX_, internetTX) };


        // intranetBandwidth Field Functions 
        bool hasIntranetBandwidth() const { return this->intranetBandwidth_ != nullptr;};
        void deleteIntranetBandwidth() { this->intranetBandwidth_ = nullptr;};
        inline int32_t getIntranetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(intranetBandwidth_, 0) };
        inline InstanceMonitorData& setIntranetBandwidth(int32_t intranetBandwidth) { DARABONBA_PTR_SET_VALUE(intranetBandwidth_, intranetBandwidth) };


        // intranetRX Field Functions 
        bool hasIntranetRX() const { return this->intranetRX_ != nullptr;};
        void deleteIntranetRX() { this->intranetRX_ = nullptr;};
        inline int32_t getIntranetRX() const { DARABONBA_PTR_GET_DEFAULT(intranetRX_, 0) };
        inline InstanceMonitorData& setIntranetRX(int32_t intranetRX) { DARABONBA_PTR_SET_VALUE(intranetRX_, intranetRX) };


        // intranetTX Field Functions 
        bool hasIntranetTX() const { return this->intranetTX_ != nullptr;};
        void deleteIntranetTX() { this->intranetTX_ = nullptr;};
        inline int32_t getIntranetTX() const { DARABONBA_PTR_GET_DEFAULT(intranetTX_, 0) };
        inline InstanceMonitorData& setIntranetTX(int32_t intranetTX) { DARABONBA_PTR_SET_VALUE(intranetTX_, intranetTX) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline InstanceMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The read bandwidth of the cloud disks (system disk and data disks). Unit: Byte/s.
        shared_ptr<int32_t> BPSRead_ {};
        // The write bandwidth of the cloud disks (system disk and data disks). Unit: Byte/s.
        shared_ptr<int32_t> BPSWrite_ {};
        // The vCPU utilization of the instance. Unit: percent (%).
        shared_ptr<int32_t> CPU_ {};
        // The overdrawn CPU credits of the burstable instance.
        shared_ptr<float> CPUAdvanceCreditBalance_ {};
        // The total number of CPU credits of the burstable instance.
        shared_ptr<float> CPUCreditBalance_ {};
        // The number of CPU credits consumed by the burstable instance.
        shared_ptr<float> CPUCreditUsage_ {};
        // The unpaid overdrawn CPU credits.
        shared_ptr<float> CPUNotpaidSurplusCreditUsage_ {};
        // The number of read I/O operations per second on the cloud disks (system disk and data disks).
        shared_ptr<int32_t> IOPSRead_ {};
        // The number of write I/O operations per second on the cloud disks (system disk and data disks).
        shared_ptr<int32_t> IOPSWrite_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The public bandwidth of the instance. Unit: Kbit/s.
        shared_ptr<int32_t> internetBandwidth_ {};
        // The Internet traffic received by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
        shared_ptr<int32_t> internetRX_ {};
        // The Internet traffic sent by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
        shared_ptr<int32_t> internetTX_ {};
        // The internal bandwidth of the instance. Unit: Kbit/s.
        shared_ptr<int32_t> intranetBandwidth_ {};
        // The internal data traffic received by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
        shared_ptr<int32_t> intranetRX_ {};
        // The internal data traffic sent by the instance during the period that is specified by the `Period` parameter. The period starts from the point in time that is specified by the `TimeStamp` parameter. Unit: Kbit.
        shared_ptr<int32_t> intranetTX_ {};
        // The timestamp of the monitoring data.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->instanceMonitorData_ == nullptr; };
      // instanceMonitorData Field Functions 
      bool hasInstanceMonitorData() const { return this->instanceMonitorData_ != nullptr;};
      void deleteInstanceMonitorData() { this->instanceMonitorData_ = nullptr;};
      inline const vector<MonitorData::InstanceMonitorData> & getInstanceMonitorData() const { DARABONBA_PTR_GET_CONST(instanceMonitorData_, vector<MonitorData::InstanceMonitorData>) };
      inline vector<MonitorData::InstanceMonitorData> getInstanceMonitorData() { DARABONBA_PTR_GET(instanceMonitorData_, vector<MonitorData::InstanceMonitorData>) };
      inline MonitorData& setInstanceMonitorData(const vector<MonitorData::InstanceMonitorData> & instanceMonitorData) { DARABONBA_PTR_SET_VALUE(instanceMonitorData_, instanceMonitorData) };
      inline MonitorData& setInstanceMonitorData(vector<MonitorData::InstanceMonitorData> && instanceMonitorData) { DARABONBA_PTR_SET_RVALUE(instanceMonitorData_, instanceMonitorData) };


    protected:
      shared_ptr<vector<MonitorData::InstanceMonitorData>> instanceMonitorData_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeInstanceMonitorDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeInstanceMonitorDataResponseBody::MonitorData) };
    inline DescribeInstanceMonitorDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeInstanceMonitorDataResponseBody::MonitorData) };
    inline DescribeInstanceMonitorDataResponseBody& setMonitorData(const DescribeInstanceMonitorDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeInstanceMonitorDataResponseBody& setMonitorData(DescribeInstanceMonitorDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring data of the instance.
    shared_ptr<DescribeInstanceMonitorDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
