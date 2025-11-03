// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEVPCCIDRBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEVPCCIDRBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociateVpcCidrBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateVpcCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateVpcCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateVpcCidrBlockResponseBody() = default ;
    AssociateVpcCidrBlockResponseBody(const AssociateVpcCidrBlockResponseBody &) = default ;
    AssociateVpcCidrBlockResponseBody(AssociateVpcCidrBlockResponseBody &&) = default ;
    AssociateVpcCidrBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateVpcCidrBlockResponseBody() = default ;
    AssociateVpcCidrBlockResponseBody& operator=(const AssociateVpcCidrBlockResponseBody &) = default ;
    AssociateVpcCidrBlockResponseBody& operator=(AssociateVpcCidrBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->ipVersion_ == nullptr && return this->requestId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline AssociateVpcCidrBlockResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AssociateVpcCidrBlockResponseBody& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateVpcCidrBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv4 CIDR block to be added.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The version of the IP address. Valid values:
    // 
    // *   **IPV4**: the IPv4 address.
    // *   **IPV6**: the IPv6 address.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
