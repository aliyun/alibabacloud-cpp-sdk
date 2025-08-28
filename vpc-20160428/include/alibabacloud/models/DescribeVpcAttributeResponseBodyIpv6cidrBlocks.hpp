// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYIPV6CIDRBLOCKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYIPV6CIDRBLOCKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyIpv6CidrBlocks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyIpv6CidrBlocks& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyIpv6CidrBlocks& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
    };
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks() = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks(const DescribeVpcAttributeResponseBodyIpv6CidrBlocks &) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks(DescribeVpcAttributeResponseBodyIpv6CidrBlocks &&) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyIpv6CidrBlocks() = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks& operator=(const DescribeVpcAttributeResponseBodyIpv6CidrBlocks &) = default ;
    DescribeVpcAttributeResponseBodyIpv6CidrBlocks& operator=(DescribeVpcAttributeResponseBodyIpv6CidrBlocks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6CidrBlock_ != nullptr; };
    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline const vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock> & ipv6CidrBlock() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlock_, vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock>) };
    inline vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock> ipv6CidrBlock() { DARABONBA_PTR_GET(ipv6CidrBlock_, vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock>) };
    inline DescribeVpcAttributeResponseBodyIpv6CidrBlocks& setIpv6CidrBlock(const vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock> & ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };
    inline DescribeVpcAttributeResponseBodyIpv6CidrBlocks& setIpv6CidrBlock(vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock> && ipv6CidrBlock) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlock_, ipv6CidrBlock) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAttributeResponseBodyIpv6CidrBlocksIpv6CidrBlock>> ipv6CidrBlock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
