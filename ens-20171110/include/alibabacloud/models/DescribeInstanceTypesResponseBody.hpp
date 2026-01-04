// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
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
  class DescribeInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody(DescribeInstanceTypesResponseBody &&) = default ;
    DescribeInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody& operator=(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody& operator=(DescribeInstanceTypesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_TO_JSON(InstanceTypeName, instanceTypeName_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeName, instanceTypeName_);
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
        && this->instanceTypeId_ == nullptr && this->instanceTypeName_ == nullptr && this->memorySize_ == nullptr; };
        // cpuCoreCount Field Functions 
        bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
        void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
        inline int32_t getCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
        inline InstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


        // instanceTypeId Field Functions 
        bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
        void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
        inline string getInstanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
        inline InstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


        // instanceTypeName Field Functions 
        bool hasInstanceTypeName() const { return this->instanceTypeName_ != nullptr;};
        void deleteInstanceTypeName() { this->instanceTypeName_ = nullptr;};
        inline string getInstanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeName_, "") };
        inline InstanceType& setInstanceTypeName(string instanceTypeName) { DARABONBA_PTR_SET_VALUE(instanceTypeName_, instanceTypeName) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
        inline InstanceType& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      protected:
        // The number of vCPUs.
        shared_ptr<int32_t> cpuCoreCount_ {};
        // This parameter is unavailable.
        shared_ptr<string> instanceTypeId_ {};
        // The name of the instance type.
        shared_ptr<string> instanceTypeName_ {};
        // The memory size. Unit: MB.
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
      shared_ptr<vector<InstanceTypes::InstanceType>> instanceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceTypes_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceTypesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeInstanceTypesResponseBody::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeInstanceTypesResponseBody::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(const DescribeInstanceTypesResponseBody::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(DescribeInstanceTypesResponseBody::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. If the request is successful, 0 is returned. If the request fails, a non-zero error code is returned.
    shared_ptr<int32_t> code_ {};
    // Details about the instance types.
    shared_ptr<DescribeInstanceTypesResponseBody::InstanceTypes> instanceTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
