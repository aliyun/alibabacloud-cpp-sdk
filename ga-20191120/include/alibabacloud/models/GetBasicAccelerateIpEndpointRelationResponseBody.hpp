// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICACCELERATEIPENDPOINTRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICACCELERATEIPENDPOINTRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetBasicAccelerateIpEndpointRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicAccelerateIpEndpointRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicAccelerateIpEndpointRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetBasicAccelerateIpEndpointRelationResponseBody() = default ;
    GetBasicAccelerateIpEndpointRelationResponseBody(const GetBasicAccelerateIpEndpointRelationResponseBody &) = default ;
    GetBasicAccelerateIpEndpointRelationResponseBody(GetBasicAccelerateIpEndpointRelationResponseBody &&) = default ;
    GetBasicAccelerateIpEndpointRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicAccelerateIpEndpointRelationResponseBody() = default ;
    GetBasicAccelerateIpEndpointRelationResponseBody& operator=(const GetBasicAccelerateIpEndpointRelationResponseBody &) = default ;
    GetBasicAccelerateIpEndpointRelationResponseBody& operator=(GetBasicAccelerateIpEndpointRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpId_ == nullptr
        && this->acceleratorId_ == nullptr && this->endpointAddress_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointSubAddress_ == nullptr
        && this->endpointSubAddressType_ == nullptr && this->endpointType_ == nullptr && this->endpointZoneId_ == nullptr && this->ipAddress_ == nullptr && this->requestId_ == nullptr
        && this->state_ == nullptr; };
    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endpointAddress Field Functions 
    bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
    void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
    inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointSubAddress Field Functions 
    bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
    void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
    inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


    // endpointSubAddressType Field Functions 
    bool hasEndpointSubAddressType() const { return this->endpointSubAddressType_ != nullptr;};
    void deleteEndpointSubAddressType() { this->endpointSubAddressType_ = nullptr;};
    inline string getEndpointSubAddressType() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddressType_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointSubAddressType(string endpointSubAddressType) { DARABONBA_PTR_SET_VALUE(endpointSubAddressType_, endpointSubAddressType) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointZoneId Field Functions 
    bool hasEndpointZoneId() const { return this->endpointZoneId_ != nullptr;};
    void deleteEndpointZoneId() { this->endpointZoneId_ = nullptr;};
    inline string getEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(endpointZoneId_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setEndpointZoneId(string endpointZoneId) { DARABONBA_PTR_SET_VALUE(endpointZoneId_, endpointZoneId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetBasicAccelerateIpEndpointRelationResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the accelerated IP address.
    shared_ptr<string> accelerateIpId_ {};
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The address of the endpoint.
    shared_ptr<string> endpointAddress_ {};
    // The ID of the endpoint.
    shared_ptr<string> endpointId_ {};
    // The name of the endpoint.
    shared_ptr<string> endpointName_ {};
    // The secondary address of the endpoint.
    // 
    // This parameter is returned if the endpoint type is **ECS**, **ENI**, or **NLB**.
    // 
    // *   If the endpoint type is **ECS**, **EndpointSubAddress** returns the primary or secondary private IP address of the primary ENI.
    // *   If the endpoint type is **ENI**, **EndpointSubAddress** returns the primary or secondary private IP address of the secondary ENI.
    // *   If the endpoint type is **NLB**, **EndpointSubAddress** returns the primary private IP address of the NLB backend server.
    shared_ptr<string> endpointSubAddress_ {};
    // The type of the secondary address of the endpoint.
    // 
    // *   **primary**: a primary private IP address.
    // *   **secondary**: a secondary private IP address.
    // 
    // This parameter is returned if the endpoint type is **ECS**, **ENI**, or **NLB**. If the endpoint type is set to **NLB**, **primary** is returned.
    shared_ptr<string> endpointSubAddressType_ {};
    // The type of endpoint. Valid values:
    // 
    // *   **ENI**: elastic network interface (ENI).
    // *   **SLB**: Classic Load Balancer (CLB) instance.
    // *   **ECS**: Elastic Compute Service (ECS) instance.
    // *   **NLB**: Network Load Balancer (NLB) instance.
    shared_ptr<string> endpointType_ {};
    // The ID of the zone where the endpoint is created.
    // 
    // This parameter is returned only when the endpoint type is **NLB**.
    shared_ptr<string> endpointZoneId_ {};
    // The accelerated IP address of the basic GA instance.
    shared_ptr<string> ipAddress_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The association status between the accelerated IP address and endpoint.
    // 
    // A value of **active** indicates that the accelerated IP address is associated with the endpoint.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
