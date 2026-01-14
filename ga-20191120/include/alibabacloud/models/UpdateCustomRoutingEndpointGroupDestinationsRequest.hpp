// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
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
  class UpdateCustomRoutingEndpointGroupDestinationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DestinationConfigurations, destinationConfigurations_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DestinationConfigurations, destinationConfigurations_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateCustomRoutingEndpointGroupDestinationsRequest() = default ;
    UpdateCustomRoutingEndpointGroupDestinationsRequest(const UpdateCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    UpdateCustomRoutingEndpointGroupDestinationsRequest(UpdateCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    UpdateCustomRoutingEndpointGroupDestinationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoutingEndpointGroupDestinationsRequest() = default ;
    UpdateCustomRoutingEndpointGroupDestinationsRequest& operator=(const UpdateCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    UpdateCustomRoutingEndpointGroupDestinationsRequest& operator=(UpdateCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DestinationConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
        DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(ToPort, toPort_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
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
      virtual bool empty() const override { return this->destinationId_ == nullptr
        && this->fromPort_ == nullptr && this->protocols_ == nullptr && this->toPort_ == nullptr; };
      // destinationId Field Functions 
      bool hasDestinationId() const { return this->destinationId_ != nullptr;};
      void deleteDestinationId() { this->destinationId_ = nullptr;};
      inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
      inline DestinationConfigurations& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


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
      // The ID of the mapping configuration of the endpoint group.
      // 
      // This parameter is required.
      shared_ptr<string> destinationId_ {};
      // The start port of the backend service port range of the endpoint group.
      // 
      // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
      // 
      // You can specify up to 20 start ports in each request.
      shared_ptr<int32_t> fromPort_ {};
      // The backend service protocol of the endpoint group. Valid values:
      // 
      // *   **tcp**: TCP
      // *   **udp**: UDP
      // *   **tcp,udp**: TCP and UDP
      // 
      // You can specify up to four backend service protocols in each configuration.
      shared_ptr<vector<string>> protocols_ {};
      // The end port of the backend service port range of the endpoint group.
      // 
      // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
      // 
      // You can specify up to 20 end ports in each request.
      shared_ptr<int32_t> toPort_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->destinationConfigurations_ == nullptr && this->dryRun_ == nullptr && this->endpointGroupId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationConfigurations Field Functions 
    bool hasDestinationConfigurations() const { return this->destinationConfigurations_ != nullptr;};
    void deleteDestinationConfigurations() { this->destinationConfigurations_ = nullptr;};
    inline const vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> & getDestinationConfigurations() const { DARABONBA_PTR_GET_CONST(destinationConfigurations_, vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>) };
    inline vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> getDestinationConfigurations() { DARABONBA_PTR_GET(destinationConfigurations_, vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>) };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setDestinationConfigurations(const vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> & destinationConfigurations) { DARABONBA_PTR_SET_VALUE(destinationConfigurations_, destinationConfigurations) };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setDestinationConfigurations(vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations> && destinationConfigurations) { DARABONBA_PTR_SET_RVALUE(destinationConfigurations_, destinationConfigurations) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCustomRoutingEndpointGroupDestinationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among all requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The value of **RequestId** for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The mapping configurations of endpoint group.
    // 
    // You must specify the backend service port range and protocol of the endpoint group. The specified information is used to map the port range of the associated listener.
    // 
    // You can specify at most 20 mapping configurations, which include port ranges and protocol types.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateCustomRoutingEndpointGroupDestinationsRequest::DestinationConfigurations>> destinationConfigurations_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
