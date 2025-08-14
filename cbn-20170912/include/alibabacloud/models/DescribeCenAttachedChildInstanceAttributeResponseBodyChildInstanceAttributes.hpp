// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODYCHILDINSTANCEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENATTACHEDCHILDINSTANCEATTRIBUTERESPONSEBODYCHILDINSTANCEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks.hpp>
#include <alibabacloud/models/DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
    };
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes(const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes(DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes &&) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes() = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& operator=(const DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes &) = default ;
    DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& operator=(DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->ipv6CidrBlock_ != nullptr && this->ipv6CidrBlocks_ != nullptr && this->secondaryCidrBlocks_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6CidrBlocks Field Functions 
    bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
    void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
    inline const Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks & ipv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks) };
    inline Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks ipv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setIpv6CidrBlocks(const Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setIpv6CidrBlocks(Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks) };
    inline Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setSecondaryCidrBlocks(const Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributes& setSecondaryCidrBlocks(Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


  protected:
    // The IPv4 CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // The IPv6 CIDR blocks of the VPC.
    std::shared_ptr<Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesIpv6CidrBlocks> ipv6CidrBlocks_ = nullptr;
    // The information about the VPC secondary CIDR block.
    std::shared_ptr<Models::DescribeCenAttachedChildInstanceAttributeResponseBodyChildInstanceAttributesSecondaryCidrBlocks> secondaryCidrBlocks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
