// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELISTVPCLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResourcesResponseBodyResourceListVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList(DescribeSecurityProxyResourcesResponseBodyResourceListVpcList &&) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBodyResourceListVpcList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& operator=(const DescribeSecurityProxyResourcesResponseBodyResourceListVpcList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& operator=(DescribeSecurityProxyResourcesResponseBodyResourceListVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->memberUid_ == nullptr && return this->natGateways_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways> & natGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways>) };
    inline vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways> natGateways() { DARABONBA_PTR_GET(natGateways_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways>) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setNatGateways(const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setNatGateways(vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceListVpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcListNatGateways>> natGateways_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
