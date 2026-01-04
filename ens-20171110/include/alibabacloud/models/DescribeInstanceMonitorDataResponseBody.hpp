// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
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
          DARABONBA_PTR_TO_JSON(CPU, CPU_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceMonitorData& obj) { 
          DARABONBA_PTR_FROM_JSON(CPU, CPU_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
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
        virtual bool empty() const override { return this->CPU_ == nullptr
        && this->instanceId_ == nullptr && this->memory_ == nullptr; };
        // CPU Field Functions 
        bool hasCPU() const { return this->CPU_ != nullptr;};
        void deleteCPU() { this->CPU_ = nullptr;};
        inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
        inline InstanceMonitorData& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceMonitorData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline InstanceMonitorData& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The vCPU usage of the instance, which is raw data. For example, a value of 0.02 indicates that the usage is 2%.
        shared_ptr<string> CPU_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // This parameter is not yet supported.
        shared_ptr<string> memory_ {};
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

    virtual bool empty() const override { return this->code_ == nullptr
        && this->monitorData_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceMonitorDataResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


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
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The set of InstanceMonitorDataType data.
    shared_ptr<DescribeInstanceMonitorDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
