// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYRESOURCEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos.hpp>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceInfosInternalIps.hpp>
#include <alibabacloud/models/DescribeDeviceServiceResponseBodyResourceInfosPublicIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyResourceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyResourceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InternalIps, internalIps_);
      DARABONBA_PTR_TO_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyResourceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InternalIps, internalIps_);
      DARABONBA_PTR_FROM_JSON(PublicIps, publicIps_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
    };
    DescribeDeviceServiceResponseBodyResourceInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceInfos(const DescribeDeviceServiceResponseBodyResourceInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfos(DescribeDeviceServiceResponseBodyResourceInfos &&) = default ;
    DescribeDeviceServiceResponseBodyResourceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyResourceInfos() = default ;
    DescribeDeviceServiceResponseBodyResourceInfos& operator=(const DescribeDeviceServiceResponseBodyResourceInfos &) = default ;
    DescribeDeviceServiceResponseBodyResourceInfos& operator=(DescribeDeviceServiceResponseBodyResourceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->areaCode_ != nullptr && this->areaName_ != nullptr && this->createTime_ != nullptr && this->deviceInfos_ != nullptr && this->instanceId_ != nullptr
        && this->instanceStatus_ != nullptr && this->internalIps_ != nullptr && this->publicIps_ != nullptr && this->regionCode_ != nullptr && this->regionId_ != nullptr
        && this->regionName_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string areaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deviceInfos Field Functions 
    bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
    void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
    inline const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos> & deviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos>) };
    inline vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos> deviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos>) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setDeviceInfos(const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setDeviceInfos(vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // internalIps Field Functions 
    bool hasInternalIps() const { return this->internalIps_ != nullptr;};
    void deleteInternalIps() { this->internalIps_ = nullptr;};
    inline const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps> & internalIps() const { DARABONBA_PTR_GET_CONST(internalIps_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps>) };
    inline vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps> internalIps() { DARABONBA_PTR_GET(internalIps_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps>) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setInternalIps(const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps> & internalIps) { DARABONBA_PTR_SET_VALUE(internalIps_, internalIps) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setInternalIps(vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps> && internalIps) { DARABONBA_PTR_SET_RVALUE(internalIps_, internalIps) };


    // publicIps Field Functions 
    bool hasPublicIps() const { return this->publicIps_ != nullptr;};
    void deletePublicIps() { this->publicIps_ = nullptr;};
    inline const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps> & publicIps() const { DARABONBA_PTR_GET_CONST(publicIps_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps>) };
    inline vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps> publicIps() { DARABONBA_PTR_GET(publicIps_, vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps>) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setPublicIps(const vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps> & publicIps) { DARABONBA_PTR_SET_VALUE(publicIps_, publicIps) };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setPublicIps(vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps> && publicIps) { DARABONBA_PTR_SET_RVALUE(publicIps_, publicIps) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline DescribeDeviceServiceResponseBodyResourceInfos& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    // The version of the application.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The area code.
    std::shared_ptr<string> areaCode_ = nullptr;
    // The region name.
    std::shared_ptr<string> areaName_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about the devices.
    std::shared_ptr<vector<Models::DescribeDeviceServiceResponseBodyResourceInfosDeviceInfos>> deviceInfos_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The status of the instance.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The internal IP addresses.
    std::shared_ptr<vector<Models::DescribeDeviceServiceResponseBodyResourceInfosInternalIps>> internalIps_ = nullptr;
    // The public IP addresses.
    std::shared_ptr<vector<Models::DescribeDeviceServiceResponseBodyResourceInfosPublicIps>> publicIps_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionCode_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
