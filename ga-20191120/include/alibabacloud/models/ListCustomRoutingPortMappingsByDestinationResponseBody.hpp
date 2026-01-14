// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONRESPONSEBODY_HPP_
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
  class ListCustomRoutingPortMappingsByDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingPortMappingsByDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingPortMappingsByDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomRoutingPortMappingsByDestinationResponseBody() = default ;
    ListCustomRoutingPortMappingsByDestinationResponseBody(const ListCustomRoutingPortMappingsByDestinationResponseBody &) = default ;
    ListCustomRoutingPortMappingsByDestinationResponseBody(ListCustomRoutingPortMappingsByDestinationResponseBody &&) = default ;
    ListCustomRoutingPortMappingsByDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingPortMappingsByDestinationResponseBody() = default ;
    ListCustomRoutingPortMappingsByDestinationResponseBody& operator=(const ListCustomRoutingPortMappingsByDestinationResponseBody &) = default ;
    ListCustomRoutingPortMappingsByDestinationResponseBody& operator=(ListCustomRoutingPortMappingsByDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortMappings& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(AcceleratorPort, acceleratorPort_);
        DARABONBA_PTR_TO_JSON(DestinationSocketAddress, destinationSocketAddress_);
        DARABONBA_PTR_TO_JSON(DestinationTrafficState, destinationTrafficState_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      };
      friend void from_json(const Darabonba::Json& j, PortMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(AcceleratorPort, acceleratorPort_);
        DARABONBA_PTR_FROM_JSON(DestinationSocketAddress, destinationSocketAddress_);
        DARABONBA_PTR_FROM_JSON(DestinationTrafficState, destinationTrafficState_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
        DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
      };
      PortMappings() = default ;
      PortMappings(const PortMappings &) = default ;
      PortMappings(PortMappings &&) = default ;
      PortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortMappings() = default ;
      PortMappings& operator=(const PortMappings &) = default ;
      PortMappings& operator=(PortMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DestinationSocketAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationSocketAddress& obj) { 
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationSocketAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        DestinationSocketAddress() = default ;
        DestinationSocketAddress(const DestinationSocketAddress &) = default ;
        DestinationSocketAddress(DestinationSocketAddress &&) = default ;
        DestinationSocketAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationSocketAddress() = default ;
        DestinationSocketAddress& operator=(const DestinationSocketAddress &) = default ;
        DestinationSocketAddress& operator=(DestinationSocketAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipAddress_ == nullptr
        && this->port_ == nullptr; };
        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline DestinationSocketAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DestinationSocketAddress& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The service IP address of the backend instance.
        shared_ptr<string> ipAddress_ {};
        // The service port of the backend instance.
        shared_ptr<int32_t> port_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->acceleratorPort_ == nullptr && this->destinationSocketAddress_ == nullptr && this->destinationTrafficState_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupRegion_ == nullptr
        && this->endpointId_ == nullptr && this->listenerId_ == nullptr && this->protocols_ == nullptr && this->vswitch_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline PortMappings& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // acceleratorPort Field Functions 
      bool hasAcceleratorPort() const { return this->acceleratorPort_ != nullptr;};
      void deleteAcceleratorPort() { this->acceleratorPort_ = nullptr;};
      inline int32_t getAcceleratorPort() const { DARABONBA_PTR_GET_DEFAULT(acceleratorPort_, 0) };
      inline PortMappings& setAcceleratorPort(int32_t acceleratorPort) { DARABONBA_PTR_SET_VALUE(acceleratorPort_, acceleratorPort) };


      // destinationSocketAddress Field Functions 
      bool hasDestinationSocketAddress() const { return this->destinationSocketAddress_ != nullptr;};
      void deleteDestinationSocketAddress() { this->destinationSocketAddress_ = nullptr;};
      inline const PortMappings::DestinationSocketAddress & getDestinationSocketAddress() const { DARABONBA_PTR_GET_CONST(destinationSocketAddress_, PortMappings::DestinationSocketAddress) };
      inline PortMappings::DestinationSocketAddress getDestinationSocketAddress() { DARABONBA_PTR_GET(destinationSocketAddress_, PortMappings::DestinationSocketAddress) };
      inline PortMappings& setDestinationSocketAddress(const PortMappings::DestinationSocketAddress & destinationSocketAddress) { DARABONBA_PTR_SET_VALUE(destinationSocketAddress_, destinationSocketAddress) };
      inline PortMappings& setDestinationSocketAddress(PortMappings::DestinationSocketAddress && destinationSocketAddress) { DARABONBA_PTR_SET_RVALUE(destinationSocketAddress_, destinationSocketAddress) };


      // destinationTrafficState Field Functions 
      bool hasDestinationTrafficState() const { return this->destinationTrafficState_ != nullptr;};
      void deleteDestinationTrafficState() { this->destinationTrafficState_ = nullptr;};
      inline string getDestinationTrafficState() const { DARABONBA_PTR_GET_DEFAULT(destinationTrafficState_, "") };
      inline PortMappings& setDestinationTrafficState(string destinationTrafficState) { DARABONBA_PTR_SET_VALUE(destinationTrafficState_, destinationTrafficState) };


      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline PortMappings& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline PortMappings& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline PortMappings& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline PortMappings& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
      inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
      inline PortMappings& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline PortMappings& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      // vswitch Field Functions 
      bool hasVswitch() const { return this->vswitch_ != nullptr;};
      void deleteVswitch() { this->vswitch_ = nullptr;};
      inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
      inline PortMappings& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


    protected:
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The acceleration port.
      shared_ptr<int32_t> acceleratorPort_ {};
      // The service IP address and port of the backend instance.
      shared_ptr<PortMappings::DestinationSocketAddress> destinationSocketAddress_ {};
      // The access policy of traffic for the backend instance.
      // 
      // *   **allow**: allows traffic to the backend instance.
      // *   **deny**: denies all traffic to the backend instance.
      shared_ptr<string> destinationTrafficState_ {};
      // The ID of the endpoint group.
      shared_ptr<string> endpointGroupId_ {};
      // The ID of the region in which the endpoint group resides.
      shared_ptr<string> endpointGroupRegion_ {};
      // The ID of the endpoint.
      shared_ptr<string> endpointId_ {};
      // The ID of the listener.
      shared_ptr<string> listenerId_ {};
      // The protocol of the backend service.
      // 
      // *   **tcp**: TCP
      // *   **udp**: UDP
      shared_ptr<vector<string>> protocols_ {};
      // The name of the endpoint (vSwitch).
      shared_ptr<string> vswitch_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->portMappings_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings> & getPortMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings>) };
    inline vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings> getPortMappings() { DARABONBA_PTR_GET(portMappings_, vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings>) };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setPortMappings(const vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setPortMappings(vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomRoutingPortMappingsByDestinationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // Details about the port mapping table.
    shared_ptr<vector<ListCustomRoutingPortMappingsByDestinationResponseBody::PortMappings>> portMappings_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
