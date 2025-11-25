// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESRESPONSEBODYVSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESRESPONSEBODYVSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVswitchResourcesResponseBodyVswitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVswitchResourcesResponseBodyVswitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(FirewallList, firewallList_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(VswitchName, vswitchName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVswitchResourcesResponseBodyVswitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(FirewallList, firewallList_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(VswitchName, vswitchName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeFirewallVswitchResourcesResponseBodyVswitchList() = default ;
    DescribeFirewallVswitchResourcesResponseBodyVswitchList(const DescribeFirewallVswitchResourcesResponseBodyVswitchList &) = default ;
    DescribeFirewallVswitchResourcesResponseBodyVswitchList(DescribeFirewallVswitchResourcesResponseBodyVswitchList &&) = default ;
    DescribeFirewallVswitchResourcesResponseBodyVswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVswitchResourcesResponseBodyVswitchList() = default ;
    DescribeFirewallVswitchResourcesResponseBodyVswitchList& operator=(const DescribeFirewallVswitchResourcesResponseBodyVswitchList &) = default ;
    DescribeFirewallVswitchResourcesResponseBodyVswitchList& operator=(DescribeFirewallVswitchResourcesResponseBodyVswitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->detail_ == nullptr && return this->firewallList_ == nullptr && return this->routeTableId_ == nullptr && return this->routeTableType_ == nullptr
        && return this->status_ == nullptr && return this->vswitchId_ == nullptr && return this->vswitchName_ == nullptr && return this->zoneId_ == nullptr; };
    // availableIpCount Field Functions 
    bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
    void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
    inline string availableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setAvailableIpCount(string availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // firewallList Field Functions 
    bool hasFirewallList() const { return this->firewallList_ != nullptr;};
    void deleteFirewallList() { this->firewallList_ = nullptr;};
    inline const vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList> & firewallList() const { DARABONBA_PTR_GET_CONST(firewallList_, vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList>) };
    inline vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList> firewallList() { DARABONBA_PTR_GET(firewallList_, vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList>) };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setFirewallList(const vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList> & firewallList) { DARABONBA_PTR_SET_VALUE(firewallList_, firewallList) };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setFirewallList(vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList> && firewallList) { DARABONBA_PTR_SET_RVALUE(firewallList_, firewallList) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableType Field Functions 
    bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
    void deleteRouteTableType() { this->routeTableType_ = nullptr;};
    inline string routeTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchName Field Functions 
    bool hasVswitchName() const { return this->vswitchName_ != nullptr;};
    void deleteVswitchName() { this->vswitchName_ = nullptr;};
    inline string vswitchName() const { DARABONBA_PTR_GET_DEFAULT(vswitchName_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setVswitchName(string vswitchName) { DARABONBA_PTR_SET_VALUE(vswitchName_, vswitchName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeFirewallVswitchResourcesResponseBodyVswitchList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> availableIpCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFirewallVswitchResourcesResponseBodyVswitchListFirewallList>> firewallList_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
    std::shared_ptr<string> routeTableType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<string> vswitchName_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
