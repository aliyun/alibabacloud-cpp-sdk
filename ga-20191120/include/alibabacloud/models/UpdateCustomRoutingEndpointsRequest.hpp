// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTSREQUEST_HPP_
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
  class UpdateCustomRoutingEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateCustomRoutingEndpointsRequest() = default ;
    UpdateCustomRoutingEndpointsRequest(const UpdateCustomRoutingEndpointsRequest &) = default ;
    UpdateCustomRoutingEndpointsRequest(UpdateCustomRoutingEndpointsRequest &&) = default ;
    UpdateCustomRoutingEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoutingEndpointsRequest() = default ;
    UpdateCustomRoutingEndpointsRequest& operator=(const UpdateCustomRoutingEndpointsRequest &) = default ;
    UpdateCustomRoutingEndpointsRequest& operator=(UpdateCustomRoutingEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(PolicyConfigurations, policyConfigurations_);
        DARABONBA_PTR_TO_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(PolicyConfigurations, policyConfigurations_);
        DARABONBA_PTR_FROM_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
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
          inline string getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, "") };
          inline PortRanges& setFromPort(string fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


          // toPort Field Functions 
          bool hasToPort() const { return this->toPort_ != nullptr;};
          void deleteToPort() { this->toPort_ = nullptr;};
          inline string getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, "") };
          inline PortRanges& setToPort(string toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


        protected:
          // The start port of the port range in the destination to which to allow traffic. The specified port must fall within the port range of the specified endpoint group.
          // 
          // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for up to 20 destinations for each endpoint and specify up to 20 start ports for each destination.
          shared_ptr<string> fromPort_ {};
          // The end port of the port range in the destination to which to allow traffic. The specified port must fall within the port range of the specified endpoint group.
          // 
          // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for up to 20 destinations for each endpoint and specify up to 20 end ports for each destination.
          shared_ptr<string> toPort_ {};
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
        // The IP address of the destination to which to allow traffic.
        // 
        // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
        // 
        // You can specify up to 20 destination IP addresses for each endpoint.
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

      virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->policyConfigurations_ == nullptr && this->trafficToEndpointPolicy_ == nullptr; };
      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline EndpointConfigurations& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


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


    protected:
      // The ID of the endpoint.
      // 
      // You can specify up to 20 endpoint IDs.
      shared_ptr<string> endpointId_ {};
      // The configurations of the policy.
      shared_ptr<vector<EndpointConfigurations::PolicyConfigurations>> policyConfigurations_ {};
      // The access policy of traffic for the specified endpoint. Default value: DenyAll. Valid values:
      // 
      // *   **DenyAll**: denies all traffic to the endpoint.
      // 
      // *   **AllowAll**: allows all traffic to the endpoint.
      // 
      // *   **AllowCustom**: allows traffic only to specified destinations.
      // 
      //     If you set this parameter to AllowCustom, you must specify IP addresses and port ranges of destinations to which to allow traffic. If you specify only IP addresses and do not specify port ranges, GA can forward traffic to all ports and the specified IP addresses in the destinations.
      // 
      // You can specify up to 20 access policies of traffic for the specified endpoint.
      shared_ptr<string> trafficToEndpointPolicy_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointConfigurations_ == nullptr && this->endpointGroupId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCustomRoutingEndpointsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointConfigurations Field Functions 
    bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
    void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
    inline const vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations>) };
    inline vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations>) };
    inline UpdateCustomRoutingEndpointsRequest& setEndpointConfigurations(const vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
    inline UpdateCustomRoutingEndpointsRequest& setEndpointConfigurations(vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline UpdateCustomRoutingEndpointsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCustomRoutingEndpointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The configurations of the endpoint.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateCustomRoutingEndpointsRequest::EndpointConfigurations>> endpointConfigurations_ {};
    // The ID of the endpoint group to which the endpoints that you want to modify belong.
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
