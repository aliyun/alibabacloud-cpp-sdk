// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLMANUALVSWITCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLMANUALVSWITCHLISTRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallManualVSwitchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallManualVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchList, vSwitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallManualVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchList, vSwitchList_);
    };
    DescribeVpcFirewallManualVSwitchListResponseBody() = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(const DescribeVpcFirewallManualVSwitchListResponseBody &) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(DescribeVpcFirewallManualVSwitchListResponseBody &&) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallManualVSwitchListResponseBody() = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody& operator=(const DescribeVpcFirewallManualVSwitchListResponseBody &) = default ;
    DescribeVpcFirewallManualVSwitchListResponseBody& operator=(DescribeVpcFirewallManualVSwitchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      VSwitchList() = default ;
      VSwitchList(const VSwitchList &) = default ;
      VSwitchList(VSwitchList &&) = default ;
      VSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchList() = default ;
      VSwitchList& operator=(const VSwitchList &) = default ;
      VSwitchList& operator=(VSwitchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->availableIpAddressCount_ == nullptr && this->cidrBlock_ == nullptr && this->ownerId_ == nullptr && this->regionNo_ == nullptr && this->routeTableId_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline VSwitchList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // availableIpAddressCount Field Functions 
      bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
      void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
      inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
      inline VSwitchList& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VSwitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline VSwitchList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline VSwitchList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline VSwitchList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VSwitchList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline VSwitchList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchName Field Functions 
      bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
      void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
      inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
      inline VSwitchList& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VSwitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VSwitchList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<int64_t> availableIpAddressCount_ {};
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<int64_t> ownerId_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> routeTableId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vSwitchName_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vSwitchList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchList Field Functions 
    bool hasVSwitchList() const { return this->vSwitchList_ != nullptr;};
    void deleteVSwitchList() { this->vSwitchList_ = nullptr;};
    inline const vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList> & getVSwitchList() const { DARABONBA_PTR_GET_CONST(vSwitchList_, vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList>) };
    inline vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList> getVSwitchList() { DARABONBA_PTR_GET(vSwitchList_, vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList>) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setVSwitchList(const vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList> & vSwitchList) { DARABONBA_PTR_SET_VALUE(vSwitchList_, vSwitchList) };
    inline DescribeVpcFirewallManualVSwitchListResponseBody& setVSwitchList(vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList> && vSwitchList) { DARABONBA_PTR_SET_RVALUE(vSwitchList_, vSwitchList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeVpcFirewallManualVSwitchListResponseBody::VSwitchList>> vSwitchList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
