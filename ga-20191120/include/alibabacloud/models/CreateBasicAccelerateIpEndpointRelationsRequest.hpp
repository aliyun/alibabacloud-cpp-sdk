// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICACCELERATEIPENDPOINTRELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicAccelerateIpEndpointRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicAccelerateIpEndpointRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateIpEndpointRelations, accelerateIpEndpointRelations_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicAccelerateIpEndpointRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateIpEndpointRelations, accelerateIpEndpointRelations_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateBasicAccelerateIpEndpointRelationsRequest() = default ;
    CreateBasicAccelerateIpEndpointRelationsRequest(const CreateBasicAccelerateIpEndpointRelationsRequest &) = default ;
    CreateBasicAccelerateIpEndpointRelationsRequest(CreateBasicAccelerateIpEndpointRelationsRequest &&) = default ;
    CreateBasicAccelerateIpEndpointRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicAccelerateIpEndpointRelationsRequest() = default ;
    CreateBasicAccelerateIpEndpointRelationsRequest& operator=(const CreateBasicAccelerateIpEndpointRelationsRequest &) = default ;
    CreateBasicAccelerateIpEndpointRelationsRequest& operator=(CreateBasicAccelerateIpEndpointRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccelerateIpEndpointRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccelerateIpEndpointRelations& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateIpId, accelerateIpId_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      };
      friend void from_json(const Darabonba::Json& j, AccelerateIpEndpointRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateIpId, accelerateIpId_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      };
      AccelerateIpEndpointRelations() = default ;
      AccelerateIpEndpointRelations(const AccelerateIpEndpointRelations &) = default ;
      AccelerateIpEndpointRelations(AccelerateIpEndpointRelations &&) = default ;
      AccelerateIpEndpointRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccelerateIpEndpointRelations() = default ;
      AccelerateIpEndpointRelations& operator=(const AccelerateIpEndpointRelations &) = default ;
      AccelerateIpEndpointRelations& operator=(AccelerateIpEndpointRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerateIpId_ == nullptr
        && this->endpointId_ == nullptr; };
      // accelerateIpId Field Functions 
      bool hasAccelerateIpId() const { return this->accelerateIpId_ != nullptr;};
      void deleteAccelerateIpId() { this->accelerateIpId_ = nullptr;};
      inline string getAccelerateIpId() const { DARABONBA_PTR_GET_DEFAULT(accelerateIpId_, "") };
      inline AccelerateIpEndpointRelations& setAccelerateIpId(string accelerateIpId) { DARABONBA_PTR_SET_VALUE(accelerateIpId_, accelerateIpId) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline AccelerateIpEndpointRelations& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    protected:
      // The IDs of the accelerated IP addresses.
      // 
      // You can call the [ListBasicAccelerateIps](https://help.aliyun.com/document_detail/2253393.html) operation to query the IDs of the accelerated IP addresses.
      // 
      // You can specify up to 20 IP address IDs.
      shared_ptr<string> accelerateIpId_ {};
      // The IDs of the endpoints.
      // 
      // You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/2253406.html) to query the IDs of the endpoints.
      // 
      // You can specify up to 20 endpoint IDs.
      shared_ptr<string> endpointId_ {};
    };

    virtual bool empty() const override { return this->accelerateIpEndpointRelations_ == nullptr
        && this->acceleratorId_ == nullptr && this->clientToken_ == nullptr && this->regionId_ == nullptr; };
    // accelerateIpEndpointRelations Field Functions 
    bool hasAccelerateIpEndpointRelations() const { return this->accelerateIpEndpointRelations_ != nullptr;};
    void deleteAccelerateIpEndpointRelations() { this->accelerateIpEndpointRelations_ = nullptr;};
    inline const vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> & getAccelerateIpEndpointRelations() const { DARABONBA_PTR_GET_CONST(accelerateIpEndpointRelations_, vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations>) };
    inline vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> getAccelerateIpEndpointRelations() { DARABONBA_PTR_GET(accelerateIpEndpointRelations_, vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations>) };
    inline CreateBasicAccelerateIpEndpointRelationsRequest& setAccelerateIpEndpointRelations(const vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> & accelerateIpEndpointRelations) { DARABONBA_PTR_SET_VALUE(accelerateIpEndpointRelations_, accelerateIpEndpointRelations) };
    inline CreateBasicAccelerateIpEndpointRelationsRequest& setAccelerateIpEndpointRelations(vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations> && accelerateIpEndpointRelations) { DARABONBA_PTR_SET_RVALUE(accelerateIpEndpointRelations_, accelerateIpEndpointRelations) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicAccelerateIpEndpointRelationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicAccelerateIpEndpointRelationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A list of accelerated IP addresses and the endpoints with which the accelerated IP addresses are associated.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateBasicAccelerateIpEndpointRelationsRequest::AccelerateIpEndpointRelations>> accelerateIpEndpointRelations_ {};
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
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
