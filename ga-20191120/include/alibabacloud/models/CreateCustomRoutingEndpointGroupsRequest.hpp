// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMROUTINGENDPOINTGROUPSREQUEST_HPP_
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
  class CreateCustomRoutingEndpointGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomRoutingEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomRoutingEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCustomRoutingEndpointGroupsRequest() = default ;
    CreateCustomRoutingEndpointGroupsRequest(const CreateCustomRoutingEndpointGroupsRequest &) = default ;
    CreateCustomRoutingEndpointGroupsRequest(CreateCustomRoutingEndpointGroupsRequest &&) = default ;
    CreateCustomRoutingEndpointGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomRoutingEndpointGroupsRequest() = default ;
    CreateCustomRoutingEndpointGroupsRequest& operator=(const CreateCustomRoutingEndpointGroupsRequest &) = default ;
    CreateCustomRoutingEndpointGroupsRequest& operator=(CreateCustomRoutingEndpointGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointGroupConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationConfigurations, destinationConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationConfigurations, destinationConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations(EndpointGroupConfigurations &&) = default ;
      EndpointGroupConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations& operator=(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations& operator=(EndpointGroupConfigurations &&) = default ;
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
            // You can specify port ranges for at most 20 destinations in each endpoint and specify at most five first ports for each destination.
            shared_ptr<int32_t> fromPort_ {};
            // The last port of the destination port range. The value of this parameter must fall within the port range of the endpoint group.
            // 
            // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
            // 
            // You can specify port ranges for at most 20 destinations in each endpoint and specify at most five last ports for each destination.
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
          // You can specify at most 20 destination IP addresses for each endpoint.
          shared_ptr<string> address_ {};
          // The port range of the destination to which traffic is forwarded. The value of this parameter must fall within the port range of the endpoint group.
          // 
          // If you leave this parameter empty, traffic is forwarded to all destination ports.
          // 
          // This parameter takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for at most 20 destinations in each endpoint and specify at most five port ranges for each destination.
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
        // The name of the vSwitch that is specified as an endpoint.
        shared_ptr<string> endpoint_ {};
        // The destination to which traffic is forwarded.
        // 
        // You can specify at most 20 destinations for each endpoint.
        shared_ptr<vector<EndpointConfigurations::PolicyConfigurations>> policyConfigurations_ {};
        // The traffic policy that is used to process traffic to the endpoint. Valid values:
        // 
        // *   **AllowAll**: allows all traffic to the endpoint.
        // *   **DenyAll** (default): denies all traffic to the endpoint.
        // *   **AllowCustom**: allows traffic only to specified destinations in the endpoint.
        // 
        // If you set this parameter to AllowCustom, you must specify IP addresses and port ranges as the destinations to which traffic is distributed. If you specify only IP addresses and do not specify port ranges, GA can forward traffic to the specified IP addresses over all destination ports.
        shared_ptr<string> trafficToEndpointPolicy_ {};
        // The type of endpoint.
        // 
        // Set the value to **PrivateSubNet**, which specifies a private CIDR block. This is the default value.
        shared_ptr<string> type_ {};
      };

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
        // The first backend service port for the endpoint group.
        // 
        // Valid values: **1** to **65499**. The value of **FromPort** must be smaller than or equal to the value of **ToPort**.
        // 
        // You can specify at most 20 first backend service ports for each endpoint group.
        shared_ptr<int32_t> fromPort_ {};
        // The backend service protocol.
        // 
        // You can specify up to four backend service protocols in each mapping configuration.
        shared_ptr<vector<string>> protocols_ {};
        // The last backend service port for the endpoint group.
        // 
        // Valid values: **1** to **65499**. The value of **FromPort** must be smaller than or equal to the value of **ToPort**.
        // 
        // You can specify at most 20 last backend service ports for each endpoint group.
        shared_ptr<int32_t> toPort_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationConfigurations_ == nullptr && this->endpointConfigurations_ == nullptr && this->endpointGroupRegion_ == nullptr && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EndpointGroupConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationConfigurations Field Functions 
      bool hasDestinationConfigurations() const { return this->destinationConfigurations_ != nullptr;};
      void deleteDestinationConfigurations() { this->destinationConfigurations_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::DestinationConfigurations> & getDestinationConfigurations() const { DARABONBA_PTR_GET_CONST(destinationConfigurations_, vector<EndpointGroupConfigurations::DestinationConfigurations>) };
      inline vector<EndpointGroupConfigurations::DestinationConfigurations> getDestinationConfigurations() { DARABONBA_PTR_GET(destinationConfigurations_, vector<EndpointGroupConfigurations::DestinationConfigurations>) };
      inline EndpointGroupConfigurations& setDestinationConfigurations(const vector<EndpointGroupConfigurations::DestinationConfigurations> & destinationConfigurations) { DARABONBA_PTR_SET_VALUE(destinationConfigurations_, destinationConfigurations) };
      inline EndpointGroupConfigurations& setDestinationConfigurations(vector<EndpointGroupConfigurations::DestinationConfigurations> && destinationConfigurations) { DARABONBA_PTR_SET_RVALUE(destinationConfigurations_, destinationConfigurations) };


      // endpointConfigurations Field Functions 
      bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
      void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline vector<EndpointGroupConfigurations::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(const vector<EndpointGroupConfigurations::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(vector<EndpointGroupConfigurations::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EndpointGroupConfigurations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The description of the endpoint group.
      // 
      // The description cannot exceed 256 characters in length and cannot contain `http://` or `https://`.
      // 
      // You can specify at most five endpoint group descriptions.
      shared_ptr<string> description_ {};
      // The mapping configuration of the endpoint group.
      // 
      // You need to specify the backend service ports and protocols for the endpoint group. The ports are mapped to listener ports.
      // 
      // You can specify at most 20 mapping configurations for each endpoint group.
      shared_ptr<vector<EndpointGroupConfigurations::DestinationConfigurations>> destinationConfigurations_ {};
      // The information about the endpoints.
      // 
      // You can specify at most 10 endpoints for each endpoint group.
      shared_ptr<vector<EndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The ID of the region in which the endpoint group resides.
      // 
      // You can specify at most five region IDs.
      // 
      // This parameter is required.
      shared_ptr<string> endpointGroupRegion_ {};
      // The name of the endpoint group.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
      // 
      // You can specify at most five endpoint group names.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->endpointGroupConfigurations_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateCustomRoutingEndpointGroupsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomRoutingEndpointGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCustomRoutingEndpointGroupsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupConfigurations Field Functions 
    bool hasEndpointGroupConfigurations() const { return this->endpointGroupConfigurations_ != nullptr;};
    void deleteEndpointGroupConfigurations() { this->endpointGroupConfigurations_ = nullptr;};
    inline const vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> & getEndpointGroupConfigurations() const { DARABONBA_PTR_GET_CONST(endpointGroupConfigurations_, vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> getEndpointGroupConfigurations() { DARABONBA_PTR_GET(endpointGroupConfigurations_, vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline CreateCustomRoutingEndpointGroupsRequest& setEndpointGroupConfigurations(const vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> & endpointGroupConfigurations) { DARABONBA_PTR_SET_VALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };
    inline CreateCustomRoutingEndpointGroupsRequest& setEndpointGroupConfigurations(vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations> && endpointGroupConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateCustomRoutingEndpointGroupsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomRoutingEndpointGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // > If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The information about the endpoint groups.
    // 
    // You can specify at most five endpoint groups.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateCustomRoutingEndpointGroupsRequest::EndpointGroupConfigurations>> endpointGroupConfigurations_ {};
    // The ID of the custom routing listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
