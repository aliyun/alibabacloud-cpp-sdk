// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageInfosResponseBodyImagesImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeType, computeType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(OSName, OSName_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosResponseBodyImagesImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeType, computeType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskDeviceMappings, diskDeviceMappings_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(OSName, OSName_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeImageInfosResponseBodyImagesImage() = default ;
    DescribeImageInfosResponseBodyImagesImage(const DescribeImageInfosResponseBodyImagesImage &) = default ;
    DescribeImageInfosResponseBodyImagesImage(DescribeImageInfosResponseBodyImagesImage &&) = default ;
    DescribeImageInfosResponseBodyImagesImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosResponseBodyImagesImage() = default ;
    DescribeImageInfosResponseBodyImagesImage& operator=(const DescribeImageInfosResponseBodyImagesImage &) = default ;
    DescribeImageInfosResponseBodyImagesImage& operator=(DescribeImageInfosResponseBodyImagesImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeType_ != nullptr
        && this->description_ != nullptr && this->diskDeviceMappings_ != nullptr && this->imageId_ != nullptr && this->imageSize_ != nullptr && this->imageVersion_ != nullptr
        && this->OSName_ != nullptr && this->OSType_ != nullptr && this->regionId_ != nullptr; };
    // computeType Field Functions 
    bool hasComputeType() const { return this->computeType_ != nullptr;};
    void deleteComputeType() { this->computeType_ = nullptr;};
    inline string computeType() const { DARABONBA_PTR_GET_DEFAULT(computeType_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setComputeType(string computeType) { DARABONBA_PTR_SET_VALUE(computeType_, computeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskDeviceMappings Field Functions 
    bool hasDiskDeviceMappings() const { return this->diskDeviceMappings_ != nullptr;};
    void deleteDiskDeviceMappings() { this->diskDeviceMappings_ = nullptr;};
    inline const Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings() const { DARABONBA_PTR_GET_CONST(diskDeviceMappings_, Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings) };
    inline Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings diskDeviceMappings() { DARABONBA_PTR_GET(diskDeviceMappings_, Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings) };
    inline DescribeImageInfosResponseBodyImagesImage& setDiskDeviceMappings(const Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings & diskDeviceMappings) { DARABONBA_PTR_SET_VALUE(diskDeviceMappings_, diskDeviceMappings) };
    inline DescribeImageInfosResponseBodyImagesImage& setDiskDeviceMappings(Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings && diskDeviceMappings) { DARABONBA_PTR_SET_RVALUE(diskDeviceMappings_, diskDeviceMappings) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline string imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setImageSize(string imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // OSName Field Functions 
    bool hasOSName() const { return this->OSName_ != nullptr;};
    void deleteOSName() { this->OSName_ = nullptr;};
    inline string OSName() const { DARABONBA_PTR_GET_DEFAULT(OSName_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setOSName(string OSName) { DARABONBA_PTR_SET_VALUE(OSName_, OSName) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageInfosResponseBodyImagesImage& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The computing type of the image. Valid values:
    // 
    // *   ens_vm: x86 computing.
    // *   arm_vm: ARM computing.
    // *   bare_metal: x86 bare machine.
    // *   pcfarm: heterogeneous computing.
    std::shared_ptr<string> computeType_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The mappings between disks and snapshots in the image.
    std::shared_ptr<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings> diskDeviceMappings_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image. Unit: GiB.
    std::shared_ptr<string> imageSize_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The type of the image. Valid values: **centos**, **debian**, **ubuntu**, and **windows**.
    std::shared_ptr<string> OSName_ = nullptr;
    // The type of the operating system.
    std::shared_ptr<string> OSType_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
