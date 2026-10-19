// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATENETWORKCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATENETWORKCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnassociateNetworkCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateNetworkCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateNetworkCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    UnassociateNetworkCidrBlockRequest() = default ;
    UnassociateNetworkCidrBlockRequest(const UnassociateNetworkCidrBlockRequest &) = default ;
    UnassociateNetworkCidrBlockRequest(UnassociateNetworkCidrBlockRequest &&) = default ;
    UnassociateNetworkCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateNetworkCidrBlockRequest() = default ;
    UnassociateNetworkCidrBlockRequest& operator=(const UnassociateNetworkCidrBlockRequest &) = default ;
    UnassociateNetworkCidrBlockRequest& operator=(UnassociateNetworkCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr
        && this->networkId_ == nullptr && this->secondaryCidrBlock_ == nullptr; };
    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline UnassociateNetworkCidrBlockRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline UnassociateNetworkCidrBlockRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline string getSecondaryCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrBlock_, "") };
    inline UnassociateNetworkCidrBlockRequest& setSecondaryCidrBlock(string secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };


  protected:
    // The secondary IPv6 CIDR block to delete.
    shared_ptr<string> ipv6CidrBlock_ {};
    // The network ID.
    // 
    // This parameter is required.
    shared_ptr<string> networkId_ {};
    // The secondary IPv4 CIDR block to delete.
    shared_ptr<string> secondaryCidrBlock_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
