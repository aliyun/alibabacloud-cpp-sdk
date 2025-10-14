// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGSDISKDEVICEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
    };
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping() = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& operator=(const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& operator=(DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->size_ == nullptr && return this->type_ == nullptr && return this->imageId_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The format of the image.
    std::shared_ptr<string> format_ = nullptr;
    // The size of the image. Unit: GB.
    std::shared_ptr<string> size_ = nullptr;
    // The type of the disk. Valid values: System and Data.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
