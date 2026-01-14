// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTSREQUEST_HPP_
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
  class CreateCustomRoutingEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCustomRoutingEndpointsRequest() = default ;
    CreateCustomRoutingEndpointsRequest(const CreateCustomRoutingEndpointsRequest &) = default ;
    CreateCustomRoutingEndpointsRequest(CreateCustomRoutingEndpointsRequest &&) = default ;
    CreateCustomRoutingEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointsRequest() = default ;
    CreateCustomRoutingEndpointsRequest& operator=(const CreateCustomRoutingEndpointsRequest &) = default ;
    CreateCustomRoutingEndpointsRequest& operator=(CreateCustomRoutingEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(PolicyConfigurations, policyConfigurations_);
        DARABONBA_PTR_TO_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(PolicyConfigurations, policyConfigurations_);
        DARABONBA_PTR_FROM_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      EndpointConfigurations() = default ;
      EndpointConfigurations(const EndpointConfigurations &) = default ;
      EndpointConfigurations(EndpointConfigurations &&) = default ;
      EndpointConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointConfigurations() = default ;
      EndpointConfigurations& operator=(const EndpointConfigurations &) = default ;
      EndpointConfigurations& operator=(EndpointConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolicyConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolicyConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
        };
        friend void from_json(const Darabonba::Json& j, PolicyConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
        };
        PolicyConfigurations() = default ;
        PolicyConfigurations(const PolicyConfigurations &) = default ;
        PolicyConfigurations(PolicyConfigurations &&) = default ;
        PolicyConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolicyConfigurations() = default ;
        PolicyConfigurations& operator=(const PolicyConfigurations &) = default ;
        PolicyConfigurations& operator=(PolicyConfigurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PortRanges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
            DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
            DARABONBA_PTR_TO_JSON(ToPort, toPort_);
          };
          friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
            DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
            DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
          };
          PortRanges() = default ;
          PortRanges(const PortRanges &) = default ;
          PortRanges(PortRanges &&) = default ;
          PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PortRanges() = default ;
          PortRanges& operator=(const PortRanges &) = default ;
          PortRanges& operator=(PortRanges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->toPort_ == nullptr; };
          // fromPort Field Functions 
          bool hasFromPort() const { return this->fromPort_ != nullptr;};
          void deleteFromPort() { this->fromPort_ = nullptr;};
          inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
          inline PortRanges& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


          // toPort Field Functions 
          bool hasToPort() const { return this->toPort_ != nullptr;};
          void deleteToPort() { this->toPort_ = nullptr;};
          inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
          inline PortRanges& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


        protected:
          // The first port of the destination port range. The value of this parameter must fall within the port range of the endpoint group.
          // 
          // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for up to 20 destinations for each endpoint and specify up to 20 first ports for each destination.
          shared_ptr<int32_t> fromPort_ {};
          // The last port of the destination port range. The value of this parameter must fall within the port range of the endpoint group.
          // 
          // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for up to 20 destinations for each endpoint and specify up to 20 last ports for each destination.
          shared_ptr<int32_t> toPort_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->portRanges_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline PolicyConfigurations& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // portRanges Field Functions 
        bool hasPortRanges() const { return this->portRanges_ != nullptr;};
        void deletePortRanges() { this->portRanges_ = nullptr;};
        inline const vector<PolicyConfigurations::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<PolicyConfigurations::PortRanges>) };
        inline vector<PolicyConfigurations::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<PolicyConfigurations::PortRanges>) };
        inline PolicyConfigurations& setPortRanges(const vector<PolicyConfigurations::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
        inline PolicyConfigurations& setPortRanges(vector<PolicyConfigurations::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


      protected:
        // The IP address of the destination to which traffic is forwarded.
        // 
        // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
        // 
        // You can specify up to 20 destination IP addresses for each endpoint.
        // 
        // This parameter is required.
        shared_ptr<string> address_ {};
        // The port range of the destination to which traffic is forwarded. The value of this parameter must fall within the port range of the endpoint group.
        // 
        // If you leave this parameter empty, traffic is forwarded to all destination ports.
        // 
        // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
        // 
        // You can specify port ranges for up to 20 destinations for each endpoint and specify up to 20 port ranges for each destination.
        shared_ptr<vector<PolicyConfigurations::PortRanges>> portRanges_ {};
      };

      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->policyConfigurations_ == nullptr && this->trafficToEndpointPolicy_ == nullptr && this->type_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline EndpointConfigurations& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // policyConfigurations Field Functions 
      bool hasPolicyConfigurations() const { return this->policyConfigurations_ != nullptr;};
      void deletePolicyConfigurations() { this->policyConfigurations_ = nullptr;};
      inline const vector<EndpointConfigurations::PolicyConfigurations> & getPolicyConfigurations() const { DARABONBA_PTR_GET_CONST(policyConfigurations_, vector<EndpointConfigurations::PolicyConfigurations>) };
      inline vector<EndpointConfigurations::PolicyConfigurations> getPolicyConfigurations() { DARABONBA_PTR_GET(policyConfigurations_, vector<EndpointConfigurations::PolicyConfigurations>) };
      inline EndpointConfigurations& setPolicyConfigurations(const vector<EndpointConfigurations::PolicyConfigurations> & policyConfigurations) { DARABONBA_PTR_SET_VALUE(policyConfigurations_, policyConfigurations) };
      inline EndpointConfigurations& setPolicyConfigurations(vector<EndpointConfigurations::PolicyConfigurations> && policyConfigurations) { DARABONBA_PTR_SET_RVALUE(policyConfigurations_, policyConfigurations) };


      // trafficToEndpointPolicy Field Functions 
      bool hasTrafficToEndpointPolicy() const { return this->trafficToEndpointPolicy_ != nullptr;};
      void deleteTrafficToEndpointPolicy() { this->trafficToEndpointPolicy_ = nullptr;};
      inline string getTrafficToEndpointPolicy() const { DARABONBA_PTR_GET_DEFAULT(trafficToEndpointPolicy_, "") };
      inline EndpointConfigurations& setTrafficToEndpointPolicy(string trafficToEndpointPolicy) { DARABONBA_PTR_SET_VALUE(trafficToEndpointPolicy_, trafficToEndpointPolicy) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EndpointConfigurations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the vSwitch that is specified as an endpoint.
      shared_ptr<string> endpoint_ {};
      // The destination to which traffic is forwarded.
      // 
      // You can specify up to 20 destinations for each endpoint.
      shared_ptr<vector<EndpointConfigurations::PolicyConfigurations>> policyConfigurations_ {};
      // The traffic policy that is used to process traffic to the endpoint. Valid values:
      // 
      // *   **DenyAll** (default): denies all traffic to the endpoint.
      // *   **AllowAll**: allows all traffic to the endpoint.
      // *   **AllowCustom**: allows traffic only to specified destinations in the endpoint.
      // 
      // If you set this parameter to AllowCustom, you must specify IP addresses and port ranges as the destinations to which traffic is distributed. If you specify only IP addresses and do not specify port ranges, GA can forward traffic to the specified IP addresses over all destination ports.
      shared_ptr<string> trafficToEndpointPolicy_ {};
      // The type of endpoint.
      // 
      // Set the value to **PrivateSubNet**, which specifies a private CIDR block. This is the default value.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointConfigurations_ == nullptr && this->endpointGroupId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomRoutingEndpointsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointConfigurations Field Functions 
    bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
    void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
    inline const vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations>) };
    inline vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations>) };
    inline CreateCustomRoutingEndpointsRequest& setEndpointConfigurations(const vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
    inline CreateCustomRoutingEndpointsRequest& setEndpointConfigurations(vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline CreateCustomRoutingEndpointsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomRoutingEndpointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // > If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request is different.
    shared_ptr<string> clientToken_ {};
    // The information about the endpoints.
    // 
    // You can specify information for up to 20 endpoints.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateCustomRoutingEndpointsRequest::EndpointConfigurations>> endpointConfigurations_ {};
    // The ID of the endpoint group in which to create endpoints.
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
