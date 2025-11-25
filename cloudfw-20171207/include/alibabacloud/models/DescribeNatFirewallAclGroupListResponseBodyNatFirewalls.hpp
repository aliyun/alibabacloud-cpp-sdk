// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODYNATFIREWALLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODYNATFIREWALLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallAclGroupListResponseBodyNatFirewalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& obj) { 
      DARABONBA_PTR_TO_JSON(AclRuleCount, aclRuleCount_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRuleCount, aclRuleCount_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls() = default ;
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls(const DescribeNatFirewallAclGroupListResponseBodyNatFirewalls &) = default ;
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls(DescribeNatFirewallAclGroupListResponseBodyNatFirewalls &&) = default ;
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallAclGroupListResponseBodyNatFirewalls() = default ;
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& operator=(const DescribeNatFirewallAclGroupListResponseBodyNatFirewalls &) = default ;
    DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& operator=(DescribeNatFirewallAclGroupListResponseBodyNatFirewalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclRuleCount_ == nullptr
        && return this->isDefault_ == nullptr && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr && return this->regionNo_ == nullptr; };
    // aclRuleCount Field Functions 
    bool hasAclRuleCount() const { return this->aclRuleCount_ != nullptr;};
    void deleteAclRuleCount() { this->aclRuleCount_ = nullptr;};
    inline int32_t aclRuleCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleCount_, 0) };
    inline DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& setAclRuleCount(int32_t aclRuleCount) { DARABONBA_PTR_SET_VALUE(aclRuleCount_, aclRuleCount) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNatFirewallAclGroupListResponseBodyNatFirewalls& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<int32_t> aclRuleCount_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
