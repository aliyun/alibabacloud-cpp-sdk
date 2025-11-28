// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERAUTHORIZEDBIZCHAINRESPONSEBODYDATAPEERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERAUTHORIZEDBIZCHAINRESPONSEBODYDATAPEERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListMemberAuthorizedBizChainResponseBodyDataPeerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemberAuthorizedBizChainResponseBodyDataPeerList& obj) { 
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(PeerName, peerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemberAuthorizedBizChainResponseBodyDataPeerList& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(PeerName, peerName_);
    };
    ListMemberAuthorizedBizChainResponseBodyDataPeerList() = default ;
    ListMemberAuthorizedBizChainResponseBodyDataPeerList(const ListMemberAuthorizedBizChainResponseBodyDataPeerList &) = default ;
    ListMemberAuthorizedBizChainResponseBodyDataPeerList(ListMemberAuthorizedBizChainResponseBodyDataPeerList &&) = default ;
    ListMemberAuthorizedBizChainResponseBodyDataPeerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemberAuthorizedBizChainResponseBodyDataPeerList() = default ;
    ListMemberAuthorizedBizChainResponseBodyDataPeerList& operator=(const ListMemberAuthorizedBizChainResponseBodyDataPeerList &) = default ;
    ListMemberAuthorizedBizChainResponseBodyDataPeerList& operator=(ListMemberAuthorizedBizChainResponseBodyDataPeerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorized_ == nullptr
        && return this->peerName_ == nullptr; };
    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline bool authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
    inline ListMemberAuthorizedBizChainResponseBodyDataPeerList& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // peerName Field Functions 
    bool hasPeerName() const { return this->peerName_ != nullptr;};
    void deletePeerName() { this->peerName_ = nullptr;};
    inline string peerName() const { DARABONBA_PTR_GET_DEFAULT(peerName_, "") };
    inline ListMemberAuthorizedBizChainResponseBodyDataPeerList& setPeerName(string peerName) { DARABONBA_PTR_SET_VALUE(peerName_, peerName) };


  protected:
    std::shared_ptr<bool> authorized_ = nullptr;
    std::shared_ptr<string> peerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
