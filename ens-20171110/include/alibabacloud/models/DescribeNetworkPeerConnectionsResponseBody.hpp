// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPEERCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPEERCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkPeerConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPeerConnects, networkPeerConnects_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPeerConnects, networkPeerConnects_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkPeerConnectionsResponseBody() = default ;
    DescribeNetworkPeerConnectionsResponseBody(const DescribeNetworkPeerConnectionsResponseBody &) = default ;
    DescribeNetworkPeerConnectionsResponseBody(DescribeNetworkPeerConnectionsResponseBody &&) = default ;
    DescribeNetworkPeerConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPeerConnectionsResponseBody() = default ;
    DescribeNetworkPeerConnectionsResponseBody& operator=(const DescribeNetworkPeerConnectionsResponseBody &) = default ;
    DescribeNetworkPeerConnectionsResponseBody& operator=(DescribeNetworkPeerConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkPeerConnects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkPeerConnects& obj) { 
        DARABONBA_PTR_TO_JSON(AcceptingNetwork, acceptingNetwork_);
        DARABONBA_PTR_TO_JSON(AcceptingNetworkId, acceptingNetworkId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkPeerConnects& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceptingNetwork, acceptingNetwork_);
        DARABONBA_PTR_FROM_JSON(AcceptingNetworkId, acceptingNetworkId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      NetworkPeerConnects() = default ;
      NetworkPeerConnects(const NetworkPeerConnects &) = default ;
      NetworkPeerConnects(NetworkPeerConnects &&) = default ;
      NetworkPeerConnects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkPeerConnects() = default ;
      NetworkPeerConnects& operator=(const NetworkPeerConnects &) = default ;
      NetworkPeerConnects& operator=(NetworkPeerConnects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        };
        Network() = default ;
        Network(const Network &) = default ;
        Network(Network &&) = default ;
        Network(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Network() = default ;
        Network& operator=(const Network &) = default ;
        Network& operator=(Network &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Cidrs_ == nullptr
        && this->networkId_ == nullptr; };
        // ipv4Cidrs Field Functions 
        bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
        void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
        inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
        inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
        inline Network& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
        inline Network& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline Network& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      protected:
        shared_ptr<vector<string>> ipv4Cidrs_ {};
        shared_ptr<string> networkId_ {};
      };

      class AcceptingNetwork : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AcceptingNetwork& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        };
        friend void from_json(const Darabonba::Json& j, AcceptingNetwork& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        };
        AcceptingNetwork() = default ;
        AcceptingNetwork(const AcceptingNetwork &) = default ;
        AcceptingNetwork(AcceptingNetwork &&) = default ;
        AcceptingNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AcceptingNetwork() = default ;
        AcceptingNetwork& operator=(const AcceptingNetwork &) = default ;
        AcceptingNetwork& operator=(AcceptingNetwork &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Cidrs_ == nullptr
        && this->networkId_ == nullptr; };
        // ipv4Cidrs Field Functions 
        bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
        void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
        inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
        inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
        inline AcceptingNetwork& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
        inline AcceptingNetwork& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline AcceptingNetwork& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      protected:
        shared_ptr<vector<string>> ipv4Cidrs_ {};
        shared_ptr<string> networkId_ {};
      };

      virtual bool empty() const override { return this->acceptingNetwork_ == nullptr
        && this->acceptingNetworkId_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->instanceId_ == nullptr
        && this->name_ == nullptr && this->network_ == nullptr && this->networkId_ == nullptr && this->status_ == nullptr; };
      // acceptingNetwork Field Functions 
      bool hasAcceptingNetwork() const { return this->acceptingNetwork_ != nullptr;};
      void deleteAcceptingNetwork() { this->acceptingNetwork_ = nullptr;};
      inline const NetworkPeerConnects::AcceptingNetwork & getAcceptingNetwork() const { DARABONBA_PTR_GET_CONST(acceptingNetwork_, NetworkPeerConnects::AcceptingNetwork) };
      inline NetworkPeerConnects::AcceptingNetwork getAcceptingNetwork() { DARABONBA_PTR_GET(acceptingNetwork_, NetworkPeerConnects::AcceptingNetwork) };
      inline NetworkPeerConnects& setAcceptingNetwork(const NetworkPeerConnects::AcceptingNetwork & acceptingNetwork) { DARABONBA_PTR_SET_VALUE(acceptingNetwork_, acceptingNetwork) };
      inline NetworkPeerConnects& setAcceptingNetwork(NetworkPeerConnects::AcceptingNetwork && acceptingNetwork) { DARABONBA_PTR_SET_RVALUE(acceptingNetwork_, acceptingNetwork) };


      // acceptingNetworkId Field Functions 
      bool hasAcceptingNetworkId() const { return this->acceptingNetworkId_ != nullptr;};
      void deleteAcceptingNetworkId() { this->acceptingNetworkId_ = nullptr;};
      inline string getAcceptingNetworkId() const { DARABONBA_PTR_GET_DEFAULT(acceptingNetworkId_, "") };
      inline NetworkPeerConnects& setAcceptingNetworkId(string acceptingNetworkId) { DARABONBA_PTR_SET_VALUE(acceptingNetworkId_, acceptingNetworkId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline NetworkPeerConnects& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkPeerConnects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline NetworkPeerConnects& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkPeerConnects& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NetworkPeerConnects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const NetworkPeerConnects::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, NetworkPeerConnects::Network) };
      inline NetworkPeerConnects::Network getNetwork() { DARABONBA_PTR_GET(network_, NetworkPeerConnects::Network) };
      inline NetworkPeerConnects& setNetwork(const NetworkPeerConnects::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline NetworkPeerConnects& setNetwork(NetworkPeerConnects::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline NetworkPeerConnects& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkPeerConnects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<NetworkPeerConnects::AcceptingNetwork> acceptingNetwork_ {};
      shared_ptr<string> acceptingNetworkId_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> ensRegionId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<NetworkPeerConnects::Network> network_ {};
      shared_ptr<string> networkId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->networkPeerConnects_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkPeerConnects Field Functions 
    bool hasNetworkPeerConnects() const { return this->networkPeerConnects_ != nullptr;};
    void deleteNetworkPeerConnects() { this->networkPeerConnects_ = nullptr;};
    inline const vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects> & getNetworkPeerConnects() const { DARABONBA_PTR_GET_CONST(networkPeerConnects_, vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects>) };
    inline vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects> getNetworkPeerConnects() { DARABONBA_PTR_GET(networkPeerConnects_, vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects>) };
    inline DescribeNetworkPeerConnectionsResponseBody& setNetworkPeerConnects(const vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects> & networkPeerConnects) { DARABONBA_PTR_SET_VALUE(networkPeerConnects_, networkPeerConnects) };
    inline DescribeNetworkPeerConnectionsResponseBody& setNetworkPeerConnects(vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects> && networkPeerConnects) { DARABONBA_PTR_SET_RVALUE(networkPeerConnects_, networkPeerConnects) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeNetworkPeerConnectionsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeNetworkPeerConnectionsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkPeerConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeNetworkPeerConnectionsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeNetworkPeerConnectionsResponseBody::NetworkPeerConnects>> networkPeerConnects_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
