// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYIPV6CIDRBLOCKSIPV6CIDRBLOCK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYIPV6CIDRBLOCKSIPV6CIDRBLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
    };
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock() = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock(const DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock &) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock(DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock &&) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock() = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& operator=(const DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock &) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& operator=(DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6CidrBlock_ != nullptr
        && this->ipv6Isp_ != nullptr; };
    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string ipv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string ipv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


  protected:
    // The IPv6 CIDR block of the VPC.
    std::shared_ptr<string> ipv6CidrBlock_ = nullptr;
    // The IPv6 CIDR block type of the VPC. Valid values:
    // 
    // *   **BGP** (default)
    // *   **ChinaMobile**
    // *   **ChinaUnicom**
    // *   **ChinaTelecom**
    // 
    // >  If you are allowed to use single-ISP bandwidth, valid values are **ChinaTelecom**, **ChinaUnicom**, and **ChinaMobile**
    std::shared_ptr<string> ipv6Isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
