// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODY_HPP_
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
  class DescribeFirewallVSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VswitchList, vswitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VswitchList, vswitchList_);
    };
    DescribeFirewallVSwitchResponseBody() = default ;
    DescribeFirewallVSwitchResponseBody(const DescribeFirewallVSwitchResponseBody &) = default ;
    DescribeFirewallVSwitchResponseBody(DescribeFirewallVSwitchResponseBody &&) = default ;
    DescribeFirewallVSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVSwitchResponseBody() = default ;
    DescribeFirewallVSwitchResponseBody& operator=(const DescribeFirewallVSwitchResponseBody &) = default ;
    DescribeFirewallVSwitchResponseBody& operator=(DescribeFirewallVSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VswitchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VswitchList& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(FirewallCount, firewallCount_);
        DARABONBA_PTR_TO_JSON(FirewallList, firewallList_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(VswitchName, vswitchName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VswitchList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(FirewallCount, firewallCount_);
        DARABONBA_PTR_FROM_JSON(FirewallList, firewallList_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(VswitchName, vswitchName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      VswitchList() = default ;
      VswitchList(const VswitchList &) = default ;
      VswitchList(VswitchList &&) = default ;
      VswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VswitchList() = default ;
      VswitchList& operator=(const VswitchList &) = default ;
      VswitchList& operator=(VswitchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FirewallList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FirewallList& obj) { 
          DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
          DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
        };
        friend void from_json(const Darabonba::Json& j, FirewallList& obj) { 
          DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
          DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
        };
        FirewallList() = default ;
        FirewallList(const FirewallList &) = default ;
        FirewallList(FirewallList &&) = default ;
        FirewallList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FirewallList() = default ;
        FirewallList& operator=(const FirewallList &) = default ;
        FirewallList& operator=(FirewallList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->firewallName_ == nullptr; };
        // firewallId Field Functions 
        bool hasFirewallId() const { return this->firewallId_ != nullptr;};
        void deleteFirewallId() { this->firewallId_ = nullptr;};
        inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
        inline FirewallList& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


        // firewallName Field Functions 
        bool hasFirewallName() const { return this->firewallName_ != nullptr;};
        void deleteFirewallName() { this->firewallName_ = nullptr;};
        inline string getFirewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
        inline FirewallList& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


      protected:
        shared_ptr<string> firewallId_ {};
        shared_ptr<string> firewallName_ {};
      };

      virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->firewallCount_ == nullptr && this->firewallList_ == nullptr && this->memberUid_ == nullptr && this->regionNo_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchId_ == nullptr && this->vswitchName_ == nullptr && this->zoneId_ == nullptr; };
      // availableIpCount Field Functions 
      bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
      void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
      inline string getAvailableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, "") };
      inline VswitchList& setAvailableIpCount(string availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // firewallCount Field Functions 
      bool hasFirewallCount() const { return this->firewallCount_ != nullptr;};
      void deleteFirewallCount() { this->firewallCount_ = nullptr;};
      inline string getFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(firewallCount_, "") };
      inline VswitchList& setFirewallCount(string firewallCount) { DARABONBA_PTR_SET_VALUE(firewallCount_, firewallCount) };


      // firewallList Field Functions 
      bool hasFirewallList() const { return this->firewallList_ != nullptr;};
      void deleteFirewallList() { this->firewallList_ = nullptr;};
      inline const vector<VswitchList::FirewallList> & getFirewallList() const { DARABONBA_PTR_GET_CONST(firewallList_, vector<VswitchList::FirewallList>) };
      inline vector<VswitchList::FirewallList> getFirewallList() { DARABONBA_PTR_GET(firewallList_, vector<VswitchList::FirewallList>) };
      inline VswitchList& setFirewallList(const vector<VswitchList::FirewallList> & firewallList) { DARABONBA_PTR_SET_VALUE(firewallList_, firewallList) };
      inline VswitchList& setFirewallList(vector<VswitchList::FirewallList> && firewallList) { DARABONBA_PTR_SET_RVALUE(firewallList_, firewallList) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline VswitchList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline VswitchList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VswitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline VswitchList& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // vswitchName Field Functions 
      bool hasVswitchName() const { return this->vswitchName_ != nullptr;};
      void deleteVswitchName() { this->vswitchName_ = nullptr;};
      inline string getVswitchName() const { DARABONBA_PTR_GET_DEFAULT(vswitchName_, "") };
      inline VswitchList& setVswitchName(string vswitchName) { DARABONBA_PTR_SET_VALUE(vswitchName_, vswitchName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VswitchList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> availableIpCount_ {};
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> firewallCount_ {};
      shared_ptr<vector<VswitchList::FirewallList>> firewallList_ {};
      shared_ptr<string> memberUid_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vswitchId_ {};
      shared_ptr<string> vswitchName_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vswitchList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallVSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFirewallVSwitchResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vswitchList Field Functions 
    bool hasVswitchList() const { return this->vswitchList_ != nullptr;};
    void deleteVswitchList() { this->vswitchList_ = nullptr;};
    inline const vector<DescribeFirewallVSwitchResponseBody::VswitchList> & getVswitchList() const { DARABONBA_PTR_GET_CONST(vswitchList_, vector<DescribeFirewallVSwitchResponseBody::VswitchList>) };
    inline vector<DescribeFirewallVSwitchResponseBody::VswitchList> getVswitchList() { DARABONBA_PTR_GET(vswitchList_, vector<DescribeFirewallVSwitchResponseBody::VswitchList>) };
    inline DescribeFirewallVSwitchResponseBody& setVswitchList(const vector<DescribeFirewallVSwitchResponseBody::VswitchList> & vswitchList) { DARABONBA_PTR_SET_VALUE(vswitchList_, vswitchList) };
    inline DescribeFirewallVSwitchResponseBody& setVswitchList(vector<DescribeFirewallVSwitchResponseBody::VswitchList> && vswitchList) { DARABONBA_PTR_SET_RVALUE(vswitchList_, vswitchList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeFirewallVSwitchResponseBody::VswitchList>> vswitchList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
