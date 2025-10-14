// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSRESPONSEBODYIMAGESIMAGEDISKDEVICEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& obj) { 
      DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
    };
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings() = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings(const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings &) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings(DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings &&) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings() = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& operator=(const DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings &) = default ;
    DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& operator=(DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskDeviceMapping_ == nullptr; };
    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping> & diskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping>) };
    inline vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping> diskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping>) };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& setDiskDeviceMapping(const vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline DescribeImageInfosResponseBodyImagesImageDiskDeviceMappings& setDiskDeviceMapping(vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageInfosResponseBodyImagesImageDiskDeviceMappingsDiskDeviceMapping>> diskDeviceMapping_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
