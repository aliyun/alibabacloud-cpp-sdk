// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKAVAILABLEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetNetworkAvailableZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkAvailableZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsPoc, isPoc_);
      DARABONBA_PTR_TO_JSON(NetworkRegionId, networkRegionId_);
      DARABONBA_PTR_TO_JSON(PrivateVpcConnectionMode, privateVpcConnectionMode_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceEndpointServiceType, serviceInstanceEndpointServiceType_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkAvailableZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPoc, isPoc_);
      DARABONBA_PTR_FROM_JSON(NetworkRegionId, networkRegionId_);
      DARABONBA_PTR_FROM_JSON(PrivateVpcConnectionMode, privateVpcConnectionMode_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceEndpointServiceType, serviceInstanceEndpointServiceType_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetNetworkAvailableZonesRequest() = default ;
    GetNetworkAvailableZonesRequest(const GetNetworkAvailableZonesRequest &) = default ;
    GetNetworkAvailableZonesRequest(GetNetworkAvailableZonesRequest &&) = default ;
    GetNetworkAvailableZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkAvailableZonesRequest() = default ;
    GetNetworkAvailableZonesRequest& operator=(const GetNetworkAvailableZonesRequest &) = default ;
    GetNetworkAvailableZonesRequest& operator=(GetNetworkAvailableZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isPoc_ != nullptr
        && this->networkRegionId_ != nullptr && this->privateVpcConnectionMode_ != nullptr && this->serviceId_ != nullptr && this->serviceInstanceEndpointServiceType_ != nullptr && this->serviceRegionId_ != nullptr
        && this->serviceVersion_ != nullptr && this->zoneId_ != nullptr; };
    // isPoc Field Functions 
    bool hasIsPoc() const { return this->isPoc_ != nullptr;};
    void deleteIsPoc() { this->isPoc_ = nullptr;};
    inline bool isPoc() const { DARABONBA_PTR_GET_DEFAULT(isPoc_, false) };
    inline GetNetworkAvailableZonesRequest& setIsPoc(bool isPoc) { DARABONBA_PTR_SET_VALUE(isPoc_, isPoc) };


    // networkRegionId Field Functions 
    bool hasNetworkRegionId() const { return this->networkRegionId_ != nullptr;};
    void deleteNetworkRegionId() { this->networkRegionId_ = nullptr;};
    inline string networkRegionId() const { DARABONBA_PTR_GET_DEFAULT(networkRegionId_, "") };
    inline GetNetworkAvailableZonesRequest& setNetworkRegionId(string networkRegionId) { DARABONBA_PTR_SET_VALUE(networkRegionId_, networkRegionId) };


    // privateVpcConnectionMode Field Functions 
    bool hasPrivateVpcConnectionMode() const { return this->privateVpcConnectionMode_ != nullptr;};
    void deletePrivateVpcConnectionMode() { this->privateVpcConnectionMode_ = nullptr;};
    inline string privateVpcConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(privateVpcConnectionMode_, "") };
    inline GetNetworkAvailableZonesRequest& setPrivateVpcConnectionMode(string privateVpcConnectionMode) { DARABONBA_PTR_SET_VALUE(privateVpcConnectionMode_, privateVpcConnectionMode) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetNetworkAvailableZonesRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceEndpointServiceType Field Functions 
    bool hasServiceInstanceEndpointServiceType() const { return this->serviceInstanceEndpointServiceType_ != nullptr;};
    void deleteServiceInstanceEndpointServiceType() { this->serviceInstanceEndpointServiceType_ = nullptr;};
    inline string serviceInstanceEndpointServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceEndpointServiceType_, "") };
    inline GetNetworkAvailableZonesRequest& setServiceInstanceEndpointServiceType(string serviceInstanceEndpointServiceType) { DARABONBA_PTR_SET_VALUE(serviceInstanceEndpointServiceType_, serviceInstanceEndpointServiceType) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline GetNetworkAvailableZonesRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetNetworkAvailableZonesRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetNetworkAvailableZonesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> isPoc_ = nullptr;
    std::shared_ptr<string> networkRegionId_ = nullptr;
    std::shared_ptr<string> privateVpcConnectionMode_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> serviceInstanceEndpointServiceType_ = nullptr;
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    std::shared_ptr<string> serviceVersion_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
