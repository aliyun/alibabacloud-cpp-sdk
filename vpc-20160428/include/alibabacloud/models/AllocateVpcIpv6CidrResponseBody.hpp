// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEVPCIPV6CIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AllocateVpcIpv6CidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateVpcIpv6CidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateVpcIpv6CidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AllocateVpcIpv6CidrResponseBody() = default ;
    AllocateVpcIpv6CidrResponseBody(const AllocateVpcIpv6CidrResponseBody &) = default ;
    AllocateVpcIpv6CidrResponseBody(AllocateVpcIpv6CidrResponseBody &&) = default ;
    AllocateVpcIpv6CidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateVpcIpv6CidrResponseBody() = default ;
    AllocateVpcIpv6CidrResponseBody& operator=(const AllocateVpcIpv6CidrResponseBody &) = default ;
    AllocateVpcIpv6CidrResponseBody& operator=(AllocateVpcIpv6CidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr
        && return this->requestId_ == nullptr; };
    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline AllocateVpcIpv6CidrResponseBody& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateVpcIpv6CidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv6 CIDR block that is reserved.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
