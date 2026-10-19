// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATENETWORKCIDRBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATENETWORKCIDRBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AssociateNetworkCidrBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateNetworkCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateNetworkCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateNetworkCidrBlockResponseBody() = default ;
    AssociateNetworkCidrBlockResponseBody(const AssociateNetworkCidrBlockResponseBody &) = default ;
    AssociateNetworkCidrBlockResponseBody(AssociateNetworkCidrBlockResponseBody &&) = default ;
    AssociateNetworkCidrBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateNetworkCidrBlockResponseBody() = default ;
    AssociateNetworkCidrBlockResponseBody& operator=(const AssociateNetworkCidrBlockResponseBody &) = default ;
    AssociateNetworkCidrBlockResponseBody& operator=(AssociateNetworkCidrBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->ipVersion_ == nullptr && this->requestId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline AssociateNetworkCidrBlockResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AssociateNetworkCidrBlockResponseBody& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateNetworkCidrBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The allocated secondary CIDR block.
    shared_ptr<string> cidrBlock_ {};
    // The IP address type of the secondary CIDR block. Valid values:
    // - IPV4: IPv4 address.
    // - IPV6: IPv6 address.
    shared_ptr<string> ipVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
