// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODYBGPNETWORKSBGPNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPNETWORKSRESPONSEBODYBGPNETWORKSBGPNETWORK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork() = default ;
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork(const DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork &) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork(DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork &&) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork() = default ;
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& operator=(const DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork &) = default ;
    DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& operator=(DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstCidrBlock_ != nullptr
        && this->routerId_ != nullptr && this->status_ != nullptr && this->vpcId_ != nullptr; };
    // dstCidrBlock Field Functions 
    bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
    void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
    inline string dstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
    inline DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeBgpNetworksResponseBodyBgpNetworksBgpNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The CIDR block of the advertised BGP network.
    std::shared_ptr<string> dstCidrBlock_ = nullptr;
    // The ID of the VBR.
    std::shared_ptr<string> routerId_ = nullptr;
    // The status of the advertised BGP network.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the master instance resides.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
