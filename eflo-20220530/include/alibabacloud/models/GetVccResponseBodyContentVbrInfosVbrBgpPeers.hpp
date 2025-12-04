// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVBRINFOSVBRBGPPEERS_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENTVBRINFOSVBRBGPPEERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContentVbrInfosVbrBgpPeers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContentVbrInfosVbrBgpPeers& obj) { 
      DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_TO_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContentVbrInfosVbrBgpPeers& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_FROM_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetVccResponseBodyContentVbrInfosVbrBgpPeers() = default ;
    GetVccResponseBodyContentVbrInfosVbrBgpPeers(const GetVccResponseBodyContentVbrInfosVbrBgpPeers &) = default ;
    GetVccResponseBodyContentVbrInfosVbrBgpPeers(GetVccResponseBodyContentVbrInfosVbrBgpPeers &&) = default ;
    GetVccResponseBodyContentVbrInfosVbrBgpPeers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContentVbrInfosVbrBgpPeers() = default ;
    GetVccResponseBodyContentVbrInfosVbrBgpPeers& operator=(const GetVccResponseBodyContentVbrInfosVbrBgpPeers &) = default ;
    GetVccResponseBodyContentVbrInfosVbrBgpPeers& operator=(GetVccResponseBodyContentVbrInfosVbrBgpPeers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpGroupId_ == nullptr
        && return this->bgpPeerId_ == nullptr && return this->peerAsn_ == nullptr && return this->peerIpAddress_ == nullptr && return this->status_ == nullptr; };
    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string bgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline GetVccResponseBodyContentVbrInfosVbrBgpPeers& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // bgpPeerId Field Functions 
    bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
    void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
    inline string bgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
    inline GetVccResponseBodyContentVbrInfosVbrBgpPeers& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline string peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
    inline GetVccResponseBodyContentVbrInfosVbrBgpPeers& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerIpAddress Field Functions 
    bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
    void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
    inline string peerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
    inline GetVccResponseBodyContentVbrInfosVbrBgpPeers& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVccResponseBodyContentVbrInfosVbrBgpPeers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // BGP Group ID
    std::shared_ptr<string> bgpGroupId_ = nullptr;
    // BGP peer ID
    std::shared_ptr<string> bgpPeerId_ = nullptr;
    // Peer AS No.
    std::shared_ptr<string> peerAsn_ = nullptr;
    // BGP peer IP address
    std::shared_ptr<string> peerIpAddress_ = nullptr;
    // The status of the BGP peer. Valid values:
    // 
    // *   Pending: pending
    // *   Available: The route is available.
    // *   Modifying: being modified
    // *   Deleting: The IPv4 gateway is being deleted.
    // *   Deleted
    // *   Not Available
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
