// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODYBGPNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODYBGPNETWORKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpNetworksResponseBodyBgpNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpNetworksResponseBodyBgpNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(BgpNetwork, bgpNetwork_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpNetworksResponseBodyBgpNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpNetwork, bgpNetwork_);
    };
    DescribeBgpNetworksResponseBodyBgpNetworks() = default ;
    DescribeBgpNetworksResponseBodyBgpNetworks(const DescribeBgpNetworksResponseBodyBgpNetworks &) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworks(DescribeBgpNetworksResponseBodyBgpNetworks &&) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpNetworksResponseBodyBgpNetworks() = default ;
    DescribeBgpNetworksResponseBodyBgpNetworks& operator=(const DescribeBgpNetworksResponseBodyBgpNetworks &) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworks& operator=(DescribeBgpNetworksResponseBodyBgpNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgpNetwork_ != nullptr; };
    // bgpNetwork Field Functions 
    bool hasBgpNetwork() const { return this->bgpNetwork_ != nullptr;};
    void deleteBgpNetwork() { this->bgpNetwork_ = nullptr;};
    inline const vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork> & bgpNetwork() const { DARABONBA_PTR_GET_CONST(bgpNetwork_, vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork>) };
    inline vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork> bgpNetwork() { DARABONBA_PTR_GET(bgpNetwork_, vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork>) };
    inline DescribeBgpNetworksResponseBodyBgpNetworks& setBgpNetwork(const vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork> & bgpNetwork) { DARABONBA_PTR_SET_VALUE(bgpNetwork_, bgpNetwork) };
    inline DescribeBgpNetworksResponseBodyBgpNetworks& setBgpNetwork(vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork> && bgpNetwork) { DARABONBA_PTR_SET_RVALUE(bgpNetwork_, bgpNetwork) };


  protected:
    std::shared_ptr<vector<Models::DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork>> bgpNetwork_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
