// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODYBGPPEERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODYBGPPEERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBgpPeersResponseBodyBgpPeersBgpPeer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpPeersResponseBodyBgpPeers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPeersResponseBodyBgpPeers& obj) { 
      DARABONBA_PTR_TO_JSON(BgpPeer, bgpPeer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPeersResponseBodyBgpPeers& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpPeer, bgpPeer_);
    };
    DescribeBgpPeersResponseBodyBgpPeers() = default ;
    DescribeBgpPeersResponseBodyBgpPeers(const DescribeBgpPeersResponseBodyBgpPeers &) = default ;
    DescribeBgpPeersResponseBodyBgpPeers(DescribeBgpPeersResponseBodyBgpPeers &&) = default ;
    DescribeBgpPeersResponseBodyBgpPeers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPeersResponseBodyBgpPeers() = default ;
    DescribeBgpPeersResponseBodyBgpPeers& operator=(const DescribeBgpPeersResponseBodyBgpPeers &) = default ;
    DescribeBgpPeersResponseBodyBgpPeers& operator=(DescribeBgpPeersResponseBodyBgpPeers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpPeer_ == nullptr; };
    // bgpPeer Field Functions 
    bool hasBgpPeer() const { return this->bgpPeer_ != nullptr;};
    void deleteBgpPeer() { this->bgpPeer_ = nullptr;};
    inline const vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer> & bgpPeer() const { DARABONBA_PTR_GET_CONST(bgpPeer_, vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer>) };
    inline vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer> bgpPeer() { DARABONBA_PTR_GET(bgpPeer_, vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer>) };
    inline DescribeBgpPeersResponseBodyBgpPeers& setBgpPeer(const vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer> & bgpPeer) { DARABONBA_PTR_SET_VALUE(bgpPeer_, bgpPeer) };
    inline DescribeBgpPeersResponseBodyBgpPeers& setBgpPeer(vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer> && bgpPeer) { DARABONBA_PTR_SET_RVALUE(bgpPeer_, bgpPeer) };


  protected:
    std::shared_ptr<vector<Models::DescribeBgpPeersResponseBodyBgpPeersBgpPeer>> bgpPeer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
