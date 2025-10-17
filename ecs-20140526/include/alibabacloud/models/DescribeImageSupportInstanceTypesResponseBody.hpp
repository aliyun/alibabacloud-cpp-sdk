// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESUPPORTINSTANCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageSupportInstanceTypesResponseBodyInstanceTypes.hpp>
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
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->instanceTypes_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeImageSupportInstanceTypesResponseBodyInstanceTypes & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeImageSupportInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBodyInstanceTypes instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeImageSupportInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBody& setInstanceTypes(const DescribeImageSupportInstanceTypesResponseBodyInstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeImageSupportInstanceTypesResponseBody& setInstanceTypes(DescribeImageSupportInstanceTypesResponseBodyInstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSupportInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The key of filter N. Only the image ID can be used to filter instance types. Valid values:
    // 
    // *   imagId: image ID
    // *   filter: image ID
    std::shared_ptr<string> imageId_ = nullptr;
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
    std::shared_ptr<DescribeImageSupportInstanceTypesResponseBodyInstanceTypes> instanceTypes_ = nullptr;
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
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
