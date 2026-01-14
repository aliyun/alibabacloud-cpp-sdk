// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicAccelerateIpEndpointRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicAccelerateIpEndpointRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicAccelerateIpEndpointRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBasicAccelerateIpEndpointRelationRequest() = default ;
    CreateBasicAccelerateIpEndpointRelationRequest(const CreateBasicAccelerateIpEndpointRelationRequest &) = default ;
    CreateBasicAccelerateIpEndpointRelationRequest(CreateBasicAccelerateIpEndpointRelationRequest &&) = default ;
    CreateBasicAccelerateIpEndpointRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicAccelerateIpEndpointRelationRequest() = default ;
    CreateBasicAccelerateIpEndpointRelationRequest& operator=(const CreateBasicAccelerateIpEndpointRelationRequest &) = default ;
    CreateBasicAccelerateIpEndpointRelationRequest& operator=(CreateBasicAccelerateIpEndpointRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateIpId_ == nullptr
        && this->acceleratorId_ == nullptr && this->clientToken_ == nullptr && this->endpointId_ == nullptr && this->regionId_ == nullptr; };
    // accelerateIpId Field Functions 
    bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
    void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
    inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationRequest& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicAccelerateIpEndpointRelationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the accelerated IP address.
    // 
    // You can call the [ListBasicAccelerateIps](https://help.aliyun.com/document_detail/2253393.html) operation to query the ID of the accelerated IP address.
    // 
    // This parameter is required.
    shared_ptr<string> accelerateIpId_ {};
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
    // The ID of the endpoint.
    // 
    // You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/2253406.html) operation to query the ID of the endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
