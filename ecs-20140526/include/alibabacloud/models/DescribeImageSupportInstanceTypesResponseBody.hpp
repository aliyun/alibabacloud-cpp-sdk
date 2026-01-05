// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODY_HPP_
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
  class DescribeImageSupportInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSupportInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSupportInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageSupportInstanceTypesResponseBody() = default ;
    DescribeImageSupportInstanceTypesResponseBody(const DescribeImageSupportInstanceTypesResponseBody &) = default ;
    DescribeImageSupportInstanceTypesResponseBody(DescribeImageSupportInstanceTypesResponseBody &&) = default ;
    DescribeImageSupportInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSupportInstanceTypesResponseBody() = default ;
    DescribeImageSupportInstanceTypesResponseBody& operator=(const DescribeImageSupportInstanceTypesResponseBody &) = default ;
    DescribeImageSupportInstanceTypesResponseBody& operator=(DescribeImageSupportInstanceTypesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
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
        && this->instanceTypeFamily_ == nullptr && this->instanceTypeId_ == nullptr && this->memorySize_ == nullptr; };
        // cpuCoreCount Field Functions 
        bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
        void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
        inline int32_t getCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
        inline InstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


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
        inline float getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
        inline InstanceType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      protected:
        // The number of vCPUs of the instance type.
        shared_ptr<int32_t> cpuCoreCount_ {};
        // DescribeImageSupportInstanceTypes
        shared_ptr<string> instanceTypeFamily_ {};
        // Queries the instance types supported by an image.
        shared_ptr<string> instanceTypeId_ {};
        // The memory size of the instance type. Unit: GiB.
        shared_ptr<float> memorySize_ {};
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

    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->instanceTypes_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeImageSupportInstanceTypesResponseBody::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeImageSupportInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBody::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeImageSupportInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBody& setInstanceTypes(const DescribeImageSupportInstanceTypesResponseBody::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBody& setInstanceTypes(DescribeImageSupportInstanceTypesResponseBody::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The key of filter N. Only the image ID can be used to filter instance types. Valid values:
    // 
    // *   imagId: image ID
    // *   filter: image ID
    shared_ptr<string> imageId_ {};
    // {
    //     "RequestId": "CF661E2D-4AFE-4BCD-959A-A65E14416B44",
    //     "RegionId": "cn-hangzhou",
    //     "ImageId": "ubuntu_16_0402_64_20G_alibase_20180409.vhd",
    //     "InstanceTypes": {
    //         "InstanceType": [{
    //             "InstanceTypeId": "ecs.t1.xsmall",
    //             "CpuCoreCount": 1,
    //             "MemorySize": 0.5,
    //             "InstanceTypeFamily": "ecs.t1"
    //         },
    //         {
    //             "InstanceTypeId": "ecs.t1.small",
    //             "CpuCoreCount": 1,
    //             "MemorySize": 1,
    //             "InstanceTypeFamily": "ecs.t1"
    //         }]
    //     }
    // }
    shared_ptr<DescribeImageSupportInstanceTypesResponseBody::InstanceTypes> instanceTypes_ {};
    // {
    //     "RequestId": "CF661E2D-4AFE-4BCD-959A-A65E14416B44",
    //     "RegionId": "cn-hangzhou",
    //     "ImageId": "ubuntu_16_0402_64_20G_alibase_20180409.vhd",
    //     "InstanceTypes": {
    //         "InstanceType": [{
    //             "InstanceTypeId": "ecs.t1.xsmall",
    //             "CpuCoreCount": 1,
    //             "MemorySize": 0.5,
    //             "InstanceTypeFamily": "ecs.t1"
    //         },
    //         {
    //             "InstanceTypeId": "ecs.t1.small",
    //             "CpuCoreCount": 1,
    //             "MemorySize": 1,
    //             "InstanceTypeFamily": "ecs.t1"
    //         }]
    //     }
    // }
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
