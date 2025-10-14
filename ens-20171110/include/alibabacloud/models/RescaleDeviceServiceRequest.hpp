// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEDEVICESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESCALEDEVICESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RescaleDeviceServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleDeviceServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(RescaleLevel, rescaleLevel_);
      DARABONBA_PTR_TO_JSON(RescaleType, rescaleType_);
      DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_TO_JSON(ResourceSelector, resourceSelector_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleDeviceServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(RescaleLevel, rescaleLevel_);
      DARABONBA_PTR_FROM_JSON(RescaleType, rescaleType_);
      DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(ResourceSelector, resourceSelector_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    RescaleDeviceServiceRequest() = default ;
    RescaleDeviceServiceRequest(const RescaleDeviceServiceRequest &) = default ;
    RescaleDeviceServiceRequest(RescaleDeviceServiceRequest &&) = default ;
    RescaleDeviceServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleDeviceServiceRequest() = default ;
    RescaleDeviceServiceRequest& operator=(const RescaleDeviceServiceRequest &) = default ;
    RescaleDeviceServiceRequest& operator=(RescaleDeviceServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->imageId_ == nullptr && return this->ipType_ == nullptr && return this->rescaleLevel_ == nullptr && return this->rescaleType_ == nullptr && return this->resourceInfo_ == nullptr
        && return this->resourceSelector_ == nullptr && return this->resourceSpec_ == nullptr && return this->serviceId_ == nullptr && return this->timeout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RescaleDeviceServiceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RescaleDeviceServiceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int32_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
    inline RescaleDeviceServiceRequest& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // rescaleLevel Field Functions 
    bool hasRescaleLevel() const { return this->rescaleLevel_ != nullptr;};
    void deleteRescaleLevel() { this->rescaleLevel_ = nullptr;};
    inline string rescaleLevel() const { DARABONBA_PTR_GET_DEFAULT(rescaleLevel_, "") };
    inline RescaleDeviceServiceRequest& setRescaleLevel(string rescaleLevel) { DARABONBA_PTR_SET_VALUE(rescaleLevel_, rescaleLevel) };


    // rescaleType Field Functions 
    bool hasRescaleType() const { return this->rescaleType_ != nullptr;};
    void deleteRescaleType() { this->rescaleType_ = nullptr;};
    inline string rescaleType() const { DARABONBA_PTR_GET_DEFAULT(rescaleType_, "") };
    inline RescaleDeviceServiceRequest& setRescaleType(string rescaleType) { DARABONBA_PTR_SET_VALUE(rescaleType_, rescaleType) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline string resourceInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceInfo_, "") };
    inline RescaleDeviceServiceRequest& setResourceInfo(string resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };


    // resourceSelector Field Functions 
    bool hasResourceSelector() const { return this->resourceSelector_ != nullptr;};
    void deleteResourceSelector() { this->resourceSelector_ = nullptr;};
    inline string resourceSelector() const { DARABONBA_PTR_GET_DEFAULT(resourceSelector_, "") };
    inline RescaleDeviceServiceRequest& setResourceSelector(string resourceSelector) { DARABONBA_PTR_SET_VALUE(resourceSelector_, resourceSelector) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline string resourceSpec() const { DARABONBA_PTR_GET_DEFAULT(resourceSpec_, "") };
    inline RescaleDeviceServiceRequest& setResourceSpec(string resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline RescaleDeviceServiceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RescaleDeviceServiceRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the network. The value must be of the enumerated data type. Valid values:
    // 
    // *   **1** (default): Internet
    // *   **2**: internal network
    std::shared_ptr<int32_t> ipType_ = nullptr;
    // The region level of the scale-out. Set the value to RegionId. RegionId specifies that resource scale-out is performed based on the ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> rescaleLevel_ = nullptr;
    // The scaling operation. Set the value to Add to add new resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> rescaleType_ = nullptr;
    // The information about the resource specification template. The value must be a JSON string.
    std::shared_ptr<string> resourceInfo_ = nullptr;
    // The required resources. The value must be a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceSelector_ = nullptr;
    // The resource specification.
    std::shared_ptr<string> resourceSpec_ = nullptr;
    // The ID of the service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The timeout period for asynchronous scale-out. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
