// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODY_HPP_
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
  class DescribeRCInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceTypesResponseBody() = default ;
    DescribeRCInstanceTypesResponseBody(const DescribeRCInstanceTypesResponseBody &) = default ;
    DescribeRCInstanceTypesResponseBody(DescribeRCInstanceTypesResponseBody &&) = default ;
    DescribeRCInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypesResponseBody() = default ;
    DescribeRCInstanceTypesResponseBody& operator=(const DescribeRCInstanceTypesResponseBody &) = default ;
    DescribeRCInstanceTypesResponseBody& operator=(DescribeRCInstanceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      InstanceTypes() = default ;
      InstanceTypes(const InstanceTypes &) = default ;
      InstanceTypes(InstanceTypes &&) = default ;
      InstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypes() = default ;
      InstanceTypes& operator=(const InstanceTypes &) = default ;
      InstanceTypes& operator=(InstanceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
          DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_TO_JSON(DiskQuantity, diskQuantity_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(DiskQuantity, diskQuantity_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        };
        InstanceType() = default ;
        InstanceType(const InstanceType &) = default ;
        InstanceType(InstanceType &&) = default ;
        InstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceType() = default ;
        InstanceType& operator=(const InstanceType &) = default ;
        InstanceType& operator=(InstanceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCoreCount_ == nullptr
        && this->diskQuantity_ == nullptr && this->instanceTypeFamily_ == nullptr && this->instanceTypeId_ == nullptr && this->memorySize_ == nullptr; };
        // cpuCoreCount Field Functions 
        bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
        void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
        inline int32_t getCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
        inline InstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


        // diskQuantity Field Functions 
        bool hasDiskQuantity() const { return this->diskQuantity_ != nullptr;};
        void deleteDiskQuantity() { this->diskQuantity_ = nullptr;};
        inline int64_t getDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(diskQuantity_, 0L) };
        inline InstanceType& setDiskQuantity(int64_t diskQuantity) { DARABONBA_PTR_SET_VALUE(diskQuantity_, diskQuantity) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline InstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // instanceTypeId Field Functions 
        bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
        void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
        inline string getInstanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
        inline InstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
        inline InstanceType& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      protected:
        // The maximum number of CPU cores.
        shared_ptr<int32_t> cpuCoreCount_ {};
        shared_ptr<int64_t> diskQuantity_ {};
        // The ID of the instance family.
        shared_ptr<string> instanceTypeFamily_ {};
        // The instance type of the instance.
        shared_ptr<string> instanceTypeId_ {};
        // The memory size of the instance type. Unit: GiB.
        shared_ptr<int32_t> memorySize_ {};
      };

      virtual bool empty() const override { return this->instanceType_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline const vector<InstanceTypes::InstanceType> & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<InstanceTypes::InstanceType>) };
      inline vector<InstanceTypes::InstanceType> getInstanceType() { DARABONBA_PTR_GET(instanceType_, vector<InstanceTypes::InstanceType>) };
      inline InstanceTypes& setInstanceType(const vector<InstanceTypes::InstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
      inline InstanceTypes& setInstanceType(vector<InstanceTypes::InstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    protected:
      // The instance types.
      shared_ptr<vector<InstanceTypes::InstanceType>> instanceType_ {};
    };

    virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeRCInstanceTypesResponseBody::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeRCInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeRCInstanceTypesResponseBody::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeRCInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeRCInstanceTypesResponseBody& setInstanceTypes(const DescribeRCInstanceTypesResponseBody::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeRCInstanceTypesResponseBody& setInstanceTypes(DescribeRCInstanceTypesResponseBody::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instance types.
    shared_ptr<DescribeRCInstanceTypesResponseBody::InstanceTypes> instanceTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
