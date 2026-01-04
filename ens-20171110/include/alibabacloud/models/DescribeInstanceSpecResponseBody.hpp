// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODY_HPP_
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
  class DescribeInstanceSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_TO_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_TO_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_FROM_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_FROM_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
    };
    DescribeInstanceSpecResponseBody() = default ;
    DescribeInstanceSpecResponseBody(const DescribeInstanceSpecResponseBody &) = default ;
    DescribeInstanceSpecResponseBody(DescribeInstanceSpecResponseBody &&) = default ;
    DescribeInstanceSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecResponseBody() = default ;
    DescribeInstanceSpecResponseBody& operator=(const DescribeInstanceSpecResponseBody &) = default ;
    DescribeInstanceSpecResponseBody& operator=(DescribeInstanceSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      };
      InstanceSpecs() = default ;
      InstanceSpecs(const InstanceSpecs &) = default ;
      InstanceSpecs(InstanceSpecs &&) = default ;
      InstanceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceSpecs() = default ;
      InstanceSpecs& operator=(const InstanceSpecs &) = default ;
      InstanceSpecs& operator=(InstanceSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Core, core_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Core, core_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        InstanceSpec() = default ;
        InstanceSpec(const InstanceSpec &) = default ;
        InstanceSpec(InstanceSpec &&) = default ;
        InstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceSpec() = default ;
        InstanceSpec& operator=(const InstanceSpec &) = default ;
        InstanceSpec& operator=(InstanceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->core_ == nullptr
        && this->displayName_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr; };
        // core Field Functions 
        bool hasCore() const { return this->core_ != nullptr;};
        void deleteCore() { this->core_ = nullptr;};
        inline string getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, "") };
        inline InstanceSpec& setCore(string core) { DARABONBA_PTR_SET_VALUE(core_, core) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline InstanceSpec& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline InstanceSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline InstanceSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The number of CPU cores.
        shared_ptr<string> core_ {};
        // The display name of the instance type.
        shared_ptr<string> displayName_ {};
        // The type of the instance.
        shared_ptr<string> instanceType_ {};
        // The memory size. Unit: MB.
        shared_ptr<string> memory_ {};
      };

      virtual bool empty() const override { return this->instanceSpec_ == nullptr; };
      // instanceSpec Field Functions 
      bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
      void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
      inline const vector<InstanceSpecs::InstanceSpec> & getInstanceSpec() const { DARABONBA_PTR_GET_CONST(instanceSpec_, vector<InstanceSpecs::InstanceSpec>) };
      inline vector<InstanceSpecs::InstanceSpec> getInstanceSpec() { DARABONBA_PTR_GET(instanceSpec_, vector<InstanceSpecs::InstanceSpec>) };
      inline InstanceSpecs& setInstanceSpec(const vector<InstanceSpecs::InstanceSpec> & instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };
      inline InstanceSpecs& setInstanceSpec(vector<InstanceSpecs::InstanceSpec> && instanceSpec) { DARABONBA_PTR_SET_RVALUE(instanceSpec_, instanceSpec) };


    protected:
      shared_ptr<vector<InstanceSpecs::InstanceSpec>> instanceSpec_ {};
    };

    virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->code_ == nullptr && this->dataDiskMaxSize_ == nullptr && this->dataDiskMinSize_ == nullptr && this->instanceSpecs_ == nullptr && this->requestId_ == nullptr
        && this->systemDiskMaxSize_ == nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline int32_t getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0) };
    inline DescribeInstanceSpecResponseBody& setBandwidthLimit(int32_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceSpecResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataDiskMaxSize Field Functions 
    bool hasDataDiskMaxSize() const { return this->dataDiskMaxSize_ != nullptr;};
    void deleteDataDiskMaxSize() { this->dataDiskMaxSize_ = nullptr;};
    inline int32_t getDataDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMaxSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setDataDiskMaxSize(int32_t dataDiskMaxSize) { DARABONBA_PTR_SET_VALUE(dataDiskMaxSize_, dataDiskMaxSize) };


    // dataDiskMinSize Field Functions 
    bool hasDataDiskMinSize() const { return this->dataDiskMinSize_ != nullptr;};
    void deleteDataDiskMinSize() { this->dataDiskMinSize_ = nullptr;};
    inline int32_t getDataDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMinSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setDataDiskMinSize(int32_t dataDiskMinSize) { DARABONBA_PTR_SET_VALUE(dataDiskMinSize_, dataDiskMinSize) };


    // instanceSpecs Field Functions 
    bool hasInstanceSpecs() const { return this->instanceSpecs_ != nullptr;};
    void deleteInstanceSpecs() { this->instanceSpecs_ = nullptr;};
    inline const DescribeInstanceSpecResponseBody::InstanceSpecs & getInstanceSpecs() const { DARABONBA_PTR_GET_CONST(instanceSpecs_, DescribeInstanceSpecResponseBody::InstanceSpecs) };
    inline DescribeInstanceSpecResponseBody::InstanceSpecs getInstanceSpecs() { DARABONBA_PTR_GET(instanceSpecs_, DescribeInstanceSpecResponseBody::InstanceSpecs) };
    inline DescribeInstanceSpecResponseBody& setInstanceSpecs(const DescribeInstanceSpecResponseBody::InstanceSpecs & instanceSpecs) { DARABONBA_PTR_SET_VALUE(instanceSpecs_, instanceSpecs) };
    inline DescribeInstanceSpecResponseBody& setInstanceSpecs(DescribeInstanceSpecResponseBody::InstanceSpecs && instanceSpecs) { DARABONBA_PTR_SET_RVALUE(instanceSpecs_, instanceSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemDiskMaxSize Field Functions 
    bool hasSystemDiskMaxSize() const { return this->systemDiskMaxSize_ != nullptr;};
    void deleteSystemDiskMaxSize() { this->systemDiskMaxSize_ = nullptr;};
    inline int32_t getSystemDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMaxSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setSystemDiskMaxSize(int32_t systemDiskMaxSize) { DARABONBA_PTR_SET_VALUE(systemDiskMaxSize_, systemDiskMaxSize) };


  protected:
    // The bandwidth limit for a single instance. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidthLimit_ {};
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The maximum capacity of a data disk. Unit: GB.
    shared_ptr<int32_t> dataDiskMaxSize_ {};
    // The minimum capacity of a data disk. Unit: GB.
    shared_ptr<int32_t> dataDiskMinSize_ {};
    // The information about instance specifications.
    shared_ptr<DescribeInstanceSpecResponseBody::InstanceSpecs> instanceSpecs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The maximum capacity of the system disk. Unit: GiB.
    shared_ptr<int32_t> systemDiskMaxSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
