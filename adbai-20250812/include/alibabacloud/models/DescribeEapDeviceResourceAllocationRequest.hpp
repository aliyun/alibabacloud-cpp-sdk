// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAPDEVICERESOURCEALLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAPDEVICERESOURCEALLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class DescribeEapDeviceResourceAllocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEapDeviceResourceAllocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEapDeviceResourceAllocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeEapDeviceResourceAllocationRequest() = default ;
    DescribeEapDeviceResourceAllocationRequest(const DescribeEapDeviceResourceAllocationRequest &) = default ;
    DescribeEapDeviceResourceAllocationRequest(DescribeEapDeviceResourceAllocationRequest &&) = default ;
    DescribeEapDeviceResourceAllocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEapDeviceResourceAllocationRequest() = default ;
    DescribeEapDeviceResourceAllocationRequest& operator=(const DescribeEapDeviceResourceAllocationRequest &) = default ;
    DescribeEapDeviceResourceAllocationRequest& operator=(DescribeEapDeviceResourceAllocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->deviceCount_ == nullptr && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeEapDeviceResourceAllocationRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline int32_t getDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
    inline DescribeEapDeviceResourceAllocationRequest& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEapDeviceResourceAllocationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<int32_t> deviceCount_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
