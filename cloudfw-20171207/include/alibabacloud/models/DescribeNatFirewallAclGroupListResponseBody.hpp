// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLACLGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallAclGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatFirewalls, natFirewalls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallAclGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatFirewalls, natFirewalls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallAclGroupListResponseBody() = default ;
    DescribeNatFirewallAclGroupListResponseBody(const DescribeNatFirewallAclGroupListResponseBody &) = default ;
    DescribeNatFirewallAclGroupListResponseBody(DescribeNatFirewallAclGroupListResponseBody &&) = default ;
    DescribeNatFirewallAclGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallAclGroupListResponseBody() = default ;
    DescribeNatFirewallAclGroupListResponseBody& operator=(const DescribeNatFirewallAclGroupListResponseBody &) = default ;
    DescribeNatFirewallAclGroupListResponseBody& operator=(DescribeNatFirewallAclGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatFirewalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatFirewalls& obj) { 
        DARABONBA_PTR_TO_JSON(AclRuleCount, aclRuleCount_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      };
      friend void from_json(const Darabonba::Json& j, NatFirewalls& obj) { 
        DARABONBA_PTR_FROM_JSON(AclRuleCount, aclRuleCount_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      };
      NatFirewalls() = default ;
      NatFirewalls(const NatFirewalls &) = default ;
      NatFirewalls(NatFirewalls &&) = default ;
      NatFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatFirewalls() = default ;
      NatFirewalls& operator=(const NatFirewalls &) = default ;
      NatFirewalls& operator=(NatFirewalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclRuleCount_ == nullptr
        && this->isDefault_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->regionNo_ == nullptr; };
      // aclRuleCount Field Functions 
      bool hasAclRuleCount() const { return this->aclRuleCount_ != nullptr;};
      void deleteAclRuleCount() { this->aclRuleCount_ = nullptr;};
      inline int32_t getAclRuleCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleCount_, 0) };
      inline NatFirewalls& setAclRuleCount(int32_t aclRuleCount) { DARABONBA_PTR_SET_VALUE(aclRuleCount_, aclRuleCount) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline NatFirewalls& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline NatFirewalls& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline NatFirewalls& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline NatFirewalls& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    protected:
      shared_ptr<int32_t> aclRuleCount_ {};
      shared_ptr<bool> isDefault_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<string> regionNo_ {};
    };

    virtual bool empty() const override { return this->natFirewalls_ == nullptr
        && this->requestId_ == nullptr; };
    // natFirewalls Field Functions 
    bool hasNatFirewalls() const { return this->natFirewalls_ != nullptr;};
    void deleteNatFirewalls() { this->natFirewalls_ = nullptr;};
    inline const vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls> & getNatFirewalls() const { DARABONBA_PTR_GET_CONST(natFirewalls_, vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls>) };
    inline vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls> getNatFirewalls() { DARABONBA_PTR_GET(natFirewalls_, vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls>) };
    inline DescribeNatFirewallAclGroupListResponseBody& setNatFirewalls(const vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls> & natFirewalls) { DARABONBA_PTR_SET_VALUE(natFirewalls_, natFirewalls) };
    inline DescribeNatFirewallAclGroupListResponseBody& setNatFirewalls(vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls> && natFirewalls) { DARABONBA_PTR_SET_RVALUE(natFirewalls_, natFirewalls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallAclGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeNatFirewallAclGroupListResponseBody::NatFirewalls>> natFirewalls_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
