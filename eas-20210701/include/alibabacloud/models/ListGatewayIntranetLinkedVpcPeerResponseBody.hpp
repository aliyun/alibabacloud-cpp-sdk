// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcPeerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcPeerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(PeerVpcList, peerVpcList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcPeerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(PeerVpcList, peerVpcList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayIntranetLinkedVpcPeerResponseBody() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBody(const ListGatewayIntranetLinkedVpcPeerResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBody(ListGatewayIntranetLinkedVpcPeerResponseBody &&) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcPeerResponseBody() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBody& operator=(const ListGatewayIntranetLinkedVpcPeerResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBody& operator=(ListGatewayIntranetLinkedVpcPeerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PeerVpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PeerVpcList& obj) { 
        DARABONBA_PTR_TO_JSON(PeerVpcs, peerVpcs_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, PeerVpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(PeerVpcs, peerVpcs_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      PeerVpcList() = default ;
      PeerVpcList(const PeerVpcList &) = default ;
      PeerVpcList(PeerVpcList &&) = default ;
      PeerVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PeerVpcList() = default ;
      PeerVpcList& operator=(const PeerVpcList &) = default ;
      PeerVpcList& operator=(PeerVpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PeerVpcs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeerVpcs& obj) { 
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, PeerVpcs& obj) { 
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        PeerVpcs() = default ;
        PeerVpcs(const PeerVpcs &) = default ;
        PeerVpcs(PeerVpcs &&) = default ;
        PeerVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeerVpcs() = default ;
        PeerVpcs& operator=(const PeerVpcs &) = default ;
        PeerVpcs& operator=(PeerVpcs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->region_ == nullptr
        && this->status_ == nullptr && this->vpcId_ == nullptr; };
        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PeerVpcs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PeerVpcs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline PeerVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The region where the VPC peer resides.
        shared_ptr<string> region_ {};
        shared_ptr<string> status_ {};
        // The ID of the VPC peer.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->peerVpcs_ == nullptr
        && this->vpcId_ == nullptr; };
      // peerVpcs Field Functions 
      bool hasPeerVpcs() const { return this->peerVpcs_ != nullptr;};
      void deletePeerVpcs() { this->peerVpcs_ = nullptr;};
      inline const vector<PeerVpcList::PeerVpcs> & getPeerVpcs() const { DARABONBA_PTR_GET_CONST(peerVpcs_, vector<PeerVpcList::PeerVpcs>) };
      inline vector<PeerVpcList::PeerVpcs> getPeerVpcs() { DARABONBA_PTR_GET(peerVpcs_, vector<PeerVpcList::PeerVpcs>) };
      inline PeerVpcList& setPeerVpcs(const vector<PeerVpcList::PeerVpcs> & peerVpcs) { DARABONBA_PTR_SET_VALUE(peerVpcs_, peerVpcs) };
      inline PeerVpcList& setPeerVpcs(vector<PeerVpcList::PeerVpcs> && peerVpcs) { DARABONBA_PTR_SET_RVALUE(peerVpcs_, peerVpcs) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline PeerVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The IDs of the VPC peers.
      shared_ptr<vector<PeerVpcList::PeerVpcs>> peerVpcs_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->peerVpcList_ == nullptr && this->requestId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // peerVpcList Field Functions 
    bool hasPeerVpcList() const { return this->peerVpcList_ != nullptr;};
    void deletePeerVpcList() { this->peerVpcList_ = nullptr;};
    inline const vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList> & getPeerVpcList() const { DARABONBA_PTR_GET_CONST(peerVpcList_, vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList>) };
    inline vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList> getPeerVpcList() { DARABONBA_PTR_GET(peerVpcList_, vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList>) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setPeerVpcList(const vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList> & peerVpcList) { DARABONBA_PTR_SET_VALUE(peerVpcList_, peerVpcList) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setPeerVpcList(vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList> && peerVpcList) { DARABONBA_PTR_SET_RVALUE(peerVpcList_, peerVpcList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the private gateway.
    shared_ptr<string> gatewayId_ {};
    // The VPC peers.
    shared_ptr<vector<ListGatewayIntranetLinkedVpcPeerResponseBody::PeerVpcList>> peerVpcList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
