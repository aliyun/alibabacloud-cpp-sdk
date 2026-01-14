// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddressType, endpointSubAddressType_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointZoneId, endpointZoneId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBasicEndpointRequest() = default ;
    CreateBasicEndpointRequest(const CreateBasicEndpointRequest &) = default ;
    CreateBasicEndpointRequest(CreateBasicEndpointRequest &&) = default ;
    CreateBasicEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicEndpointRequest() = default ;
    CreateBasicEndpointRequest& operator=(const CreateBasicEndpointRequest &) = default ;
    CreateBasicEndpointRequest& operator=(CreateBasicEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->endpointAddress_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointSubAddress_ == nullptr && this->endpointSubAddressType_ == nullptr
        && this->endpointType_ == nullptr && this->endpointZoneId_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicEndpointRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointAddress Field Functions 
    bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
    void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
    inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
    inline CreateBasicEndpointRequest& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline CreateBasicEndpointRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointSubAddress Field Functions 
    bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
    void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
    inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
    inline CreateBasicEndpointRequest& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


    // endpointSubAddressType Field Functions 
    bool hasEndpointSubAddressType() const { return this->endpointSubAddressType_ != nullptr;};
    void deleteEndpointSubAddressType() { this->endpointSubAddressType_ = nullptr;};
    inline string getEndpointSubAddressType() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddressType_, "") };
    inline CreateBasicEndpointRequest& setEndpointSubAddressType(string endpointSubAddressType) { DARABONBA_PTR_SET_VALUE(endpointSubAddressType_, endpointSubAddressType) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateBasicEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointZoneId Field Functions 
    bool hasEndpointZoneId() const { return this->endpointZoneId_ != nullptr;};
    void deleteEndpointZoneId() { this->endpointZoneId_ = nullptr;};
    inline string getEndpointZoneId() const { DARABONBA_PTR_GET_DEFAULT(endpointZoneId_, "") };
    inline CreateBasicEndpointRequest& setEndpointZoneId(string endpointZoneId) { DARABONBA_PTR_SET_VALUE(endpointZoneId_, endpointZoneId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBasicEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the basic GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The address of the endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> endpointAddress_ {};
    // The ID of the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The secondary address of the endpoint.
    // 
    // This parameter is required if the endpoint type is **ECS**, **ENI**, or **NLB**.
    // 
    // *   If the endpoint type is **ECS**, you can set **EndpointSubAddress** to the secondary private IP address of the primary ENI. If the parameter is left empty, the primary private IP address of the primary ENI is used.
    // *   If the endpoint type is **ENI**, you can set **EndpointSubAddress** to the secondary private IP address of the secondary ENI. If the parameter is left empty, the primary private IP address of the secondary ENI is used.
    // *   This parameter is required if the endpoint type is **NLB**. **EndpointSubAddress** is the primary private IP address of the NLB backend server.
    shared_ptr<string> endpointSubAddress_ {};
    // The type of the secondary address of the endpoint. Valid values:
    // 
    // *   **primary**: a primary private IP address.
    // *   **secondary**: a secondary private IP address.
    // 
    // This parameter is required if the endpoint type is **ECS**, **ENI**, or **NLB**. If the endpoint type is **NLB**, only **primary** is supported.
    shared_ptr<string> endpointSubAddressType_ {};
    // The type of endpoint. Valid values:
    // 
    // *   **ENI**: elastic network interface (ENI)
    // *   **SLB**: Classic Load Balancer (CLB)
    // *   **ECS**: Elastic Compute Service (ECS)
    // *   **NLB**: Network Load Balancer (NLB)
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The zone ID of the endpoint.
    // 
    // This parameter is required only if the endpoint type is **NLB**.
    shared_ptr<string> endpointZoneId_ {};
    // The name of the endpoint that is associated with the basic GA instance.
    // 
    // The name must be 1 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> name_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
