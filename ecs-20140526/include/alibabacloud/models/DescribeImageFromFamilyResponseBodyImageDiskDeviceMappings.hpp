// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGEDISKDEVICEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFROMFAMILYRESPONSEBODYIMAGEDISKDEVICEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& obj) { 
      DARABONBA_PTR_TO_JSON(DiskDeviceMapping, diskDeviceMapping_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskDeviceMapping, diskDeviceMapping_);
    };
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings() = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings(const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings &) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings(DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings &&) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings() = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& operator=(const DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings &) = default ;
    DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& operator=(DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskDeviceMapping_ != nullptr; };
    // diskDeviceMapping Field Functions 
    bool hasDiskDeviceMapping() const { return this->diskDeviceMapping_ != nullptr;};
    void deleteDiskDeviceMapping() { this->diskDeviceMapping_ = nullptr;};
    inline const vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping> & diskDeviceMapping() const { DARABONBA_PTR_GET_CONST(diskDeviceMapping_, vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping>) };
    inline vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping> diskDeviceMapping() { DARABONBA_PTR_GET(diskDeviceMapping_, vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping>) };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& setDiskDeviceMapping(const vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping> & diskDeviceMapping) { DARABONBA_PTR_SET_VALUE(diskDeviceMapping_, diskDeviceMapping) };
    inline DescribeImageFromFamilyResponseBodyImageDiskDeviceMappings& setDiskDeviceMapping(vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping> && diskDeviceMapping) { DARABONBA_PTR_SET_RVALUE(diskDeviceMapping_, diskDeviceMapping) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageFromFamilyResponseBodyImageDiskDeviceMappingsDiskDeviceMapping>> diskDeviceMapping_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
