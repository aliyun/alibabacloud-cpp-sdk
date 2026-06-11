// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTCONNECTIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTCONNECTIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class UpdateVpcEndpointConnectionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(TrafficControlMode, trafficControlMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlMode, trafficControlMode_);
    };
    UpdateVpcEndpointConnectionAttributeRequest() = default ;
    UpdateVpcEndpointConnectionAttributeRequest(const UpdateVpcEndpointConnectionAttributeRequest &) = default ;
    UpdateVpcEndpointConnectionAttributeRequest(UpdateVpcEndpointConnectionAttributeRequest &&) = default ;
    UpdateVpcEndpointConnectionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcEndpointConnectionAttributeRequest() = default ;
    UpdateVpcEndpointConnectionAttributeRequest& operator=(const UpdateVpcEndpointConnectionAttributeRequest &) = default ;
    UpdateVpcEndpointConnectionAttributeRequest& operator=(UpdateVpcEndpointConnectionAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->endpointId_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr
        && this->trafficControlMode_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline UpdateVpcEndpointConnectionAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointConnectionAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointConnectionAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateVpcEndpointConnectionAttributeRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointConnectionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateVpcEndpointConnectionAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // trafficControlMode Field Functions 
    bool hasTrafficControlMode() const { return this->trafficControlMode_ != nullptr;};
    void deleteTrafficControlMode() { this->trafficControlMode_ = nullptr;};
    inline string getTrafficControlMode() const { DARABONBA_PTR_GET_DEFAULT(trafficControlMode_, "") };
    inline UpdateVpcEndpointConnectionAttributeRequest& setTrafficControlMode(string trafficControlMode) { DARABONBA_PTR_SET_VALUE(trafficControlMode_, trafficControlMode) };


  protected:
    // The bandwidth of the endpoint connection. Unit: Mbit/s.
    // 
    // > The valid values vary based on the type of service resource:
    // > - NLB: 100 to 50000.
    // > - ALB: 100 to 25000.
    // > - CLB: 100 to 10240. Default value: 3072.
    // > - GWLB: 100 to 25000.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The **ClientToken** value can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // - **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The endpoint ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The region ID of the endpoint connection bandwidth that you want to modify.
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The endpoint service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // - Scalability: auto scaling. In this mode, the bandwidth configured for the endpoint connection does not take effect.
    // 
    // - BandwidthLimit: supports setting a bandwidth upper limit for the endpoint connection. The bandwidth upper limit is the value of Bandwidth.
    //  
    // >- When the service resource is NLB, TrafficControlMode is set to Scalability by default. You can set it to BandwidthLimit and modify the Bandwidth value to provide a bandwidth upper limit.
    // >- When the service resource is CLB, TrafficControlMode can only be set to BandwidthLimit, which indicates that the service consumer provides a default rate limit for each endpoint.
    // > - When the service resource is GWLB, TrafficControlMode can only be set to Scalability.
    shared_ptr<string> trafficControlMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
