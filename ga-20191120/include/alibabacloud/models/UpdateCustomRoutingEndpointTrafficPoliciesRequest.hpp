// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROUTINGENDPOINTTRAFFICPOLICIESREQUEST_HPP_
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
  class UpdateCustomRoutingEndpointTrafficPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoutingEndpointTrafficPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(PolicyConfigurations, policyConfigurations_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoutingEndpointTrafficPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(PolicyConfigurations, policyConfigurations_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateCustomRoutingEndpointTrafficPoliciesRequest() = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesRequest(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesRequest(UpdateCustomRoutingEndpointTrafficPoliciesRequest &&) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoutingEndpointTrafficPoliciesRequest() = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesRequest& operator=(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &) = default ;
    UpdateCustomRoutingEndpointTrafficPoliciesRequest& operator=(UpdateCustomRoutingEndpointTrafficPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
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
        // The first port of the destination port range. The value of this parameter must fall within the port range of the backend service.
        // 
        // This parameter takes effect only when you set the **TrafficToEndpointPolicy** parameter to **AllowCustom**. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic policy of an endpoint.
        // 
        // If the start port and end port values are empty, traffic on all ports of the destination is allowed.
        // 
        // You can specify a maximum of 500 port ranges for each endpoint and a maximum of 10 port ranges for each traffic policy.
        shared_ptr<int32_t> fromPort_ {};
        // The last port of the destination port range. The value of this parameter must fall within the port range of the backend service.
        // 
        // This parameter takes effect only when you set the **TrafficToEndpointPolicy** parameter to **AllowCustom**. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic policy of an endpoint.
        // 
        // If the start port and end port values are empty, traffic on all ports of the destination is allowed.
        // 
        // You can specify a maximum of 500 port ranges for each endpoint and a maximum of 10 port ranges for each traffic policy.
        shared_ptr<int32_t> toPort_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->policyId_ == nullptr && this->portRanges_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline PolicyConfigurations& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline PolicyConfigurations& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // portRanges Field Functions 
      bool hasPortRanges() const { return this->portRanges_ != nullptr;};
      void deletePortRanges() { this->portRanges_ = nullptr;};
      inline const vector<PolicyConfigurations::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<PolicyConfigurations::PortRanges>) };
      inline vector<PolicyConfigurations::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<PolicyConfigurations::PortRanges>) };
      inline PolicyConfigurations& setPortRanges(const vector<PolicyConfigurations::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
      inline PolicyConfigurations& setPortRanges(vector<PolicyConfigurations::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    protected:
      // The IP address of the destination which to allow traffic.
      // 
      // This parameter takes effect only when you set the **TrafficToEndpointPolicy** parameter to **AllowCustom**. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic policy of an endpoint.
      // 
      // You can specify a maximum of 500 traffic policies for each endpoint.
      // 
      // >  This parameter is required.
      shared_ptr<string> address_ {};
      // The ID of the traffic policy that you want to modify.
      // 
      // >  This parameter is required.
      shared_ptr<string> policyId_ {};
      // The port range of the destination to which traffic is forwarded. The value of this parameter must fall within the port range of the endpoint group.
      // 
      // If you do not specify object, traffic is forwarded to all ports.
      // 
      // This parameter takes effect only when you set the **TrafficToEndpointPolicy** parameter to **AllowCustom**. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic policy of an endpoint.
      // 
      // You can specify a maximum of 500 port ranges for each endpoint and a maximum of 10 port ranges for each traffic policy.
      shared_ptr<vector<PolicyConfigurations::PortRanges>> portRanges_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointId_ == nullptr && this->policyConfigurations_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCustomRoutingEndpointTrafficPoliciesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateCustomRoutingEndpointTrafficPoliciesRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // policyConfigurations Field Functions 
    bool hasPolicyConfigurations() const { return this->policyConfigurations_ != nullptr;};
    void deletePolicyConfigurations() { this->policyConfigurations_ = nullptr;};
    inline const vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> & getPolicyConfigurations() const { DARABONBA_PTR_GET_CONST(policyConfigurations_, vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations>) };
    inline vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> getPolicyConfigurations() { DARABONBA_PTR_GET(policyConfigurations_, vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations>) };
    inline UpdateCustomRoutingEndpointTrafficPoliciesRequest& setPolicyConfigurations(const vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> & policyConfigurations) { DARABONBA_PTR_SET_VALUE(policyConfigurations_, policyConfigurations) };
    inline UpdateCustomRoutingEndpointTrafficPoliciesRequest& setPolicyConfigurations(vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations> && policyConfigurations) { DARABONBA_PTR_SET_RVALUE(policyConfigurations_, policyConfigurations) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCustomRoutingEndpointTrafficPoliciesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the endpoint for which you want to modify the traffic policies.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The access policies.
    // 
    // You can specify a maximum of 500 traffic policies for each endpoint.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateCustomRoutingEndpointTrafficPoliciesRequest::PolicyConfigurations>> policyConfigurations_ {};
    // The region ID of the Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
