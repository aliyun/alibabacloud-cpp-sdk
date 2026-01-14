// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetBasicEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(EndPointId, endPointId_);
      DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(EndPointId, endPointId_);
      DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetBasicEndpointResponseBody() = default ;
    GetBasicEndpointResponseBody(const GetBasicEndpointResponseBody &) = default ;
    GetBasicEndpointResponseBody(GetBasicEndpointResponseBody &&) = default ;
    GetBasicEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicEndpointResponseBody() = default ;
    GetBasicEndpointResponseBody& operator=(const GetBasicEndpointResponseBody &) = default ;
    GetBasicEndpointResponseBody& operator=(GetBasicEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->endPointId_ == nullptr && this->endpointAddress_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointSubAddress_ == nullptr && this->endpointSubAddressType_ == nullptr
        && this->endpointType_ == nullptr && this->endpointZoneId_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetBasicEndpointResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endPointId Field Functions 
    bool hasEndPointId() const { return this->endPointId_ != nullptr;};
    void deleteEndPointId() { this->endPointId_ = nullptr;};
    inline string getEndPointId() const { DARABONBA_PTR_GET_DEFAULT(endPointId_, "") };
    inline GetBasicEndpointResponseBody& setEndPointId(string endPointId) { DARABONBA_PTR_SET_VALUE(endPointId_, endPointId) };


    // endpointAddress Field Functions 
    bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
    void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
    inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
    inline GetBasicEndpointResponseBody& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline GetBasicEndpointResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointSubAddress Field Functions 
    bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
    void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
    inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
    inline GetBasicEndpointResponseBody& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


    // endpointSubAddressType Field Functions 
    bool hasEndpointSubAddressType() const { return this->endpointSubAddressType_ != nullptr;};
    void deleteEndpointSubAddressType() { this->endpointSubAddressType_ = nullptr;};
    inline string getEndpointSubAddressType() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddressType_, "") };
    inline GetBasicEndpointResponseBody& setEndpointSubAddressType(string endpointSubAddressType) { DARABONBA_PTR_SET_VALUE(endpointSubAddressType_, endpointSubAddressType) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetBasicEndpointResponseBody& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointZoneId Field Functions 
    bool hasEndpointZoneId() const { return this->endpointZoneId_ != nullptr;};
    void deleteEndpointZoneId() { this->endpointZoneId_ = nullptr;};
    inline string getEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(endpointZoneId_, "") };
    inline GetBasicEndpointResponseBody& setEndpointZoneId(string endpointZoneId) { DARABONBA_PTR_SET_VALUE(endpointZoneId_, endpointZoneId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBasicEndpointResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetBasicEndpointResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the endpoint that is associated with the basic GA instance.
    shared_ptr<string> endPointId_ {};
    // The address of the endpoint.
    shared_ptr<string> endpointAddress_ {};
    // The ID of the endpoint group to which the endpoint belongs.
    shared_ptr<string> endpointGroupId_ {};
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
    // This parameter is returned if the type of the endpoint is set to **ECS**, **ENI**, or **NLB**. If the endpoint type is set to **NLB**, **primary** is returned.
    shared_ptr<string> endpointSubAddressType_ {};
    // The type of endpoint. Valid values:
    // 
    // *   **ENI**: elastic network interface (ENI).
    // *   **SLB**: Classic Load Balancer (CLB) instance.
    // *   **ECS**: Elastic Compute Service (ECS) instance.
    // *   **NLB**: Network Load Balancer (NLB) instance.
    shared_ptr<string> endpointType_ {};
    // The ID of the zone where the endpoint is deployed.
    // 
    // This parameter is returned only when the endpoint type is set to **NLB**.
    shared_ptr<string> endpointZoneId_ {};
    // The name of the endpoint.
    shared_ptr<string> name_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the endpoint. Valid values:
    // 
    // *   **init**: The endpoint is being initialized.
    // *   **active**: The endpoint is available.
    // *   **updating**: The endpoint is being configured.
    // *   **binding**: The endpoint is being associated.
    // *   **unbinding**: The endpoint is being disassociated.
    // *   **deleting**: The endpoint is being deleted.
    // *   **bound**: The endpoint is associated.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
