// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
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
  class CreateCustomRoutingEndpointGroupDestinationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DestinationConfigurations, destinationConfigurations_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DestinationConfigurations, destinationConfigurations_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCustomRoutingEndpointGroupDestinationsRequest() = default ;
    CreateCustomRoutingEndpointGroupDestinationsRequest(const CreateCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    CreateCustomRoutingEndpointGroupDestinationsRequest(CreateCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    CreateCustomRoutingEndpointGroupDestinationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointGroupDestinationsRequest() = default ;
    CreateCustomRoutingEndpointGroupDestinationsRequest& operator=(const CreateCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    CreateCustomRoutingEndpointGroupDestinationsRequest& operator=(CreateCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DestinationConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(ToPort, toPort_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
        DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
        DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
      };
      DestinationConfigurations() = default ;
      DestinationConfigurations(const DestinationConfigurations &) = default ;
      DestinationConfigurations(DestinationConfigurations &&) = default ;
      DestinationConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestinationConfigurations() = default ;
      DestinationConfigurations& operator=(const DestinationConfigurations &) = default ;
      DestinationConfigurations& operator=(DestinationConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->protocols_ == nullptr && this->toPort_ == nullptr; };
      // fromPort Field Functions 
      bool hasFromPort() const { return this->fromPort_ != nullptr;};
      void deleteFromPort() { this->fromPort_ = nullptr;};
      inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
      inline DestinationConfigurations& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
      inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
      inline DestinationConfigurations& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline DestinationConfigurations& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      // toPort Field Functions 
      bool hasToPort() const { return this->toPort_ != nullptr;};
      void deleteToPort() { this->toPort_ = nullptr;};
      inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
      inline DestinationConfigurations& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


    protected:
      // The start port of the backend service port range for the endpoint group.
      // 
      // Valid values: **1** to **65499**. The value of **FromPort** must be less than or equal to the value of **ToPort**.
      // 
      // You can specify up to 20 start ports in a single request.
      // 
      // This parameter is required.
      shared_ptr<int32_t> fromPort_ {};
      // The protocol types of the backend services for the endpoint group. Valid values:
      // 
      // - **TCP**: TCP protocol.
      // 
      // - **UDP**: UDP protocol.
      // 
      // - **TCP,UDP**: TCP and UDP protocols.
      // 
      // The Terms of Service apply to the selected protocols.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> protocols_ {};
      // The end port of the backend service port range for the endpoint group.
      // 
      // Valid values: **1** to **65499**. The value of **FromPort** must be less than or equal to the value of **ToPort**.
      // 
      // You can specify up to 20 end ports in a single request.
      // 
      // This parameter is required.
      shared_ptr<int32_t> toPort_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->destinationConfigurations_ == nullptr && this->dryRun_ == nullptr && this->endpointGroupId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationConfigurations Field Functions 
    bool hasDestinationConfigurations() const { return this->destinationConfigurations_ != nullptr;};
    void deleteDestinationConfigurations() { this->destinationConfigurations_ = nullptr;};
    inline const vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> & getDestinationConfigurations() const { DARABONBA_PTR_GET_CONST(destinationConfigurations_, vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>) };
    inline vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> getDestinationConfigurations() { DARABONBA_PTR_GET(destinationConfigurations_, vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>) };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setDestinationConfigurations(const vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> & destinationConfigurations) { DARABONBA_PTR_SET_VALUE(destinationConfigurations_, destinationConfigurations) };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setDestinationConfigurations(vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> && destinationConfigurations) { DARABONBA_PTR_SET_RVALUE(destinationConfigurations_, destinationConfigurations) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomRoutingEndpointGroupDestinationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The mapping configurations of the endpoint group.
    // 
    // Specify the service port ranges and protocol types of the backend services for the endpoint group. The specified information is mapped to the associated listener port ranges.
    // 
    // You can specify up to 20 port ranges and protocol types in a single invoke of this operation.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>> destinationConfigurations_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run. The system checks the required parameters, request syntax, and business limitations without actually creating the mapping configurations create an endpoint group. If the request fails the dry run, the corresponding error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, an HTTP 2xx status code is returned and the mapping configurations create an endpoint group are created.
    shared_ptr<bool> dryRun_ {};
    // The endpoint group ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The region ID of the Alibaba Cloud Global Accelerator (GA) instance. Set the value to **ap-southeast-1**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
