// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHSTATUSRESPONSEBODY_HPP_
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
  class GetHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroups, endpointGroups_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroups, endpointGroups_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHealthStatusResponseBody() = default ;
    GetHealthStatusResponseBody(const GetHealthStatusResponseBody &) = default ;
    GetHealthStatusResponseBody(GetHealthStatusResponseBody &&) = default ;
    GetHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthStatusResponseBody() = default ;
    GetHealthStatusResponseBody& operator=(const GetHealthStatusResponseBody &) = default ;
    GetHealthStatusResponseBody& operator=(GetHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroups& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointGroupType, endpointGroupType_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(ForwardingRuleIds, forwardingRuleIds_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupType, endpointGroupType_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(ForwardingRuleIds, forwardingRuleIds_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      };
      EndpointGroups() = default ;
      EndpointGroups(const EndpointGroups &) = default ;
      EndpointGroups(EndpointGroups &&) = default ;
      EndpointGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointGroups() = default ;
      EndpointGroups& operator=(const EndpointGroups &) = default ;
      EndpointGroups& operator=(EndpointGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
          DARABONBA_PTR_TO_JSON(HealthDetail, healthDetail_);
          DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
          DARABONBA_PTR_FROM_JSON(HealthDetail, healthDetail_);
          DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->endpointId_ == nullptr && this->healthDetail_ == nullptr && this->healthStatus_ == nullptr && this->port_ == nullptr && this->type_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Endpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // endpointId Field Functions 
        bool hasEndpointId() const { return this->endpointId_ != nullptr;};
        void deleteEndpointId() { this->endpointId_ = nullptr;};
        inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
        inline Endpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


        // healthDetail Field Functions 
        bool hasHealthDetail() const { return this->healthDetail_ != nullptr;};
        void deleteHealthDetail() { this->healthDetail_ = nullptr;};
        inline string getHealthDetail() const { DARABONBA_PTR_GET_DEFAULT(healthDetail_, "") };
        inline Endpoints& setHealthDetail(string healthDetail) { DARABONBA_PTR_SET_VALUE(healthDetail_, healthDetail) };


        // healthStatus Field Functions 
        bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
        void deleteHealthStatus() { this->healthStatus_ = nullptr;};
        inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
        inline Endpoints& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline Endpoints& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Endpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The IP address of the endpoint.
        shared_ptr<string> address_ {};
        // The ID of the endpoint.
        shared_ptr<string> endpointId_ {};
        // The health check details of the endpoint.
        // 
        // >  This parameter is unavailable.
        shared_ptr<string> healthDetail_ {};
        // The health status of the endpoint. Valid values:
        // 
        // *   **init:** The endpoint is being initialized.
        // *   **normal:** The endpoint is normal.
        // *   **abnormal:** The endpoint is abnormal.
        shared_ptr<string> healthStatus_ {};
        // The port that is used to connect to the endpoint.
        shared_ptr<int64_t> port_ {};
        // The type of the endpoint. Valid values:
        // 
        // *   **Domain:** a custom domain name.
        // *   **Ip:** a custom IP address.
        // *   **PublicIp:** a public IP address provided by Alibaba Cloud.
        // *   **ECS:** an Elastic Compute Service (ECS) instance.
        // *   **SLB:** a Classic Load Balancer (CLB) instance.
        // *   **ALB:** an Application Load Balancer (ALB) instance.
        // *   **OSS:** an Object Storage Service (OSS) bucket.
        // *   **ENI:** an elastic network interface (ENI).
        // *   **NLB:** a Network Load Balancer (NLB) instance.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->endpointGroupId_ == nullptr
        && this->endpointGroupType_ == nullptr && this->endpoints_ == nullptr && this->forwardingRuleIds_ == nullptr && this->healthStatus_ == nullptr; };
      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline EndpointGroups& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // endpointGroupType Field Functions 
      bool hasEndpointGroupType() const { return this->endpointGroupType_ != nullptr;};
      void deleteEndpointGroupType() { this->endpointGroupType_ = nullptr;};
      inline string getEndpointGroupType() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupType_, "") };
      inline EndpointGroups& setEndpointGroupType(string endpointGroupType) { DARABONBA_PTR_SET_VALUE(endpointGroupType_, endpointGroupType) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<EndpointGroups::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<EndpointGroups::Endpoints>) };
      inline vector<EndpointGroups::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<EndpointGroups::Endpoints>) };
      inline EndpointGroups& setEndpoints(const vector<EndpointGroups::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline EndpointGroups& setEndpoints(vector<EndpointGroups::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // forwardingRuleIds Field Functions 
      bool hasForwardingRuleIds() const { return this->forwardingRuleIds_ != nullptr;};
      void deleteForwardingRuleIds() { this->forwardingRuleIds_ = nullptr;};
      inline const vector<string> & getForwardingRuleIds() const { DARABONBA_PTR_GET_CONST(forwardingRuleIds_, vector<string>) };
      inline vector<string> getForwardingRuleIds() { DARABONBA_PTR_GET(forwardingRuleIds_, vector<string>) };
      inline EndpointGroups& setForwardingRuleIds(const vector<string> & forwardingRuleIds) { DARABONBA_PTR_SET_VALUE(forwardingRuleIds_, forwardingRuleIds) };
      inline EndpointGroups& setForwardingRuleIds(vector<string> && forwardingRuleIds) { DARABONBA_PTR_SET_RVALUE(forwardingRuleIds_, forwardingRuleIds) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline EndpointGroups& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    protected:
      // The ID of the endpoint group.
      shared_ptr<string> endpointGroupId_ {};
      // The type of the endpoint group. Valid values:
      // 
      // *   **default:** the default endpoint group.
      // *   **virtual:** a virtual endpoint group.
      shared_ptr<string> endpointGroupType_ {};
      // The information about the endpoints.
      shared_ptr<vector<EndpointGroups::Endpoints>> endpoints_ {};
      // The IDs of the forwarding rules.
      shared_ptr<vector<string>> forwardingRuleIds_ {};
      // The health status of the endpoint group. Valid values:
      // 
      // *   **init:** The endpoint group is being initialized.
      // *   **normal:** The endpoint group is normal.
      // *   **abnormal:** The endpoint group is abnormal.
      // *   **partiallyAbnormal:** The endpoint group is partially abnormal.
      shared_ptr<string> healthStatus_ {};
    };

    virtual bool empty() const override { return this->endpointGroups_ == nullptr
        && this->healthStatus_ == nullptr && this->listenerId_ == nullptr && this->requestId_ == nullptr; };
    // endpointGroups Field Functions 
    bool hasEndpointGroups() const { return this->endpointGroups_ != nullptr;};
    void deleteEndpointGroups() { this->endpointGroups_ = nullptr;};
    inline const vector<GetHealthStatusResponseBody::EndpointGroups> & getEndpointGroups() const { DARABONBA_PTR_GET_CONST(endpointGroups_, vector<GetHealthStatusResponseBody::EndpointGroups>) };
    inline vector<GetHealthStatusResponseBody::EndpointGroups> getEndpointGroups() { DARABONBA_PTR_GET(endpointGroups_, vector<GetHealthStatusResponseBody::EndpointGroups>) };
    inline GetHealthStatusResponseBody& setEndpointGroups(const vector<GetHealthStatusResponseBody::EndpointGroups> & endpointGroups) { DARABONBA_PTR_SET_VALUE(endpointGroups_, endpointGroups) };
    inline GetHealthStatusResponseBody& setEndpointGroups(vector<GetHealthStatusResponseBody::EndpointGroups> && endpointGroups) { DARABONBA_PTR_SET_RVALUE(endpointGroups_, endpointGroups) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline GetHealthStatusResponseBody& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetHealthStatusResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the endpoint groups.
    shared_ptr<vector<GetHealthStatusResponseBody::EndpointGroups>> endpointGroups_ {};
    // The health status of endpoints and endpoint groups. Valid values:
    // 
    // *   **normal**
    // *   **abnormal**
    // *   **partiallyAbnormal**
    shared_ptr<string> healthStatus_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
