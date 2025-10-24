// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList.hpp>
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
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->peerVpcList_ == nullptr && return this->requestId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // peerVpcList Field Functions 
    bool hasPeerVpcList() const { return this->peerVpcList_ != nullptr;};
    void deletePeerVpcList() { this->peerVpcList_ = nullptr;};
    inline const vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList> & peerVpcList() const { DARABONBA_PTR_GET_CONST(peerVpcList_, vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList>) };
    inline vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList> peerVpcList() { DARABONBA_PTR_GET(peerVpcList_, vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList>) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setPeerVpcList(const vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList> & peerVpcList) { DARABONBA_PTR_SET_VALUE(peerVpcList_, peerVpcList) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setPeerVpcList(vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList> && peerVpcList) { DARABONBA_PTR_SET_RVALUE(peerVpcList_, peerVpcList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the private gateway.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The VPC peers.
    std::shared_ptr<vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList>> peerVpcList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
