// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICENDPOINTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICENDPOINTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicEndpointGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicEndpointGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicEndpointGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointAddress, endpointAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(EndpointSubAddress, endpointSubAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBasicEndpointGroupRequest() = default ;
    CreateBasicEndpointGroupRequest(const CreateBasicEndpointGroupRequest &) = default ;
    CreateBasicEndpointGroupRequest(CreateBasicEndpointGroupRequest &&) = default ;
    CreateBasicEndpointGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicEndpointGroupRequest() = default ;
    CreateBasicEndpointGroupRequest& operator=(const CreateBasicEndpointGroupRequest &) = default ;
    CreateBasicEndpointGroupRequest& operator=(CreateBasicEndpointGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->endpointAddress_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointSubAddress_ == nullptr
        && this->endpointType_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicEndpointGroupRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicEndpointGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBasicEndpointGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointAddress Field Functions 
    bool hasEndpointAddress() const { return this->endpointAddress_ != nullptr;};
    void deleteEndpointAddress() { this->endpointAddress_ = nullptr;};
    inline string getEndpointAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointAddress_, "") };
    inline CreateBasicEndpointGroupRequest& setEndpointAddress(string endpointAddress) { DARABONBA_PTR_SET_VALUE(endpointAddress_, endpointAddress) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline CreateBasicEndpointGroupRequest& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // endpointSubAddress Field Functions 
    bool hasEndpointSubAddress() const { return this->endpointSubAddress_ != nullptr;};
    void deleteEndpointSubAddress() { this->endpointSubAddress_ = nullptr;};
    inline string getEndpointSubAddress() const { DARABONBA_PTR_GET_DEFAULT(endpointSubAddress_, "") };
    inline CreateBasicEndpointGroupRequest& setEndpointSubAddress(string endpointSubAddress) { DARABONBA_PTR_SET_VALUE(endpointSubAddress_, endpointSubAddress) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateBasicEndpointGroupRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBasicEndpointGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicEndpointGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    // The description of the endpoint group.
    // 
    // The description can be up to 200 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The endpoint address.
    shared_ptr<string> endpointAddress_ {};
    // The ID of the region to which the endpoint group belongs.
    // 
    // You can call the [ListAvailableBusiRegions](https://help.aliyun.com/document_detail/2253223.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupRegion_ {};
    // The secondary address of the endpoint.
    // 
    // You must specify this parameter when the accelerated IP address is associated with the secondary private IP address of an Elastic Compute Service (ECS) instance or an elastic network interface (ENI).
    // 
    // *   When the endpoint type is **ECS**, you can set **EndpointSubAddress** to the secondary private IP address of the primary ENI. If the parameter is left empty, the primary private IP address of the primary ENI is used.
    // *   If the endpoint type is **ENI**, you can set **EndpointSubAddress** to the secondary private IP address of the secondary ENI. If the parameter is left empty, the primary private IP address of the secondary ENI is used.
    shared_ptr<string> endpointSubAddress_ {};
    // The type of the endpoint. Valid values:
    // 
    // *   **ENI**
    // *   **SLB**
    // *   **ECS**
    shared_ptr<string> endpointType_ {};
    // The name of the endpoint group.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
