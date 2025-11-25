// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODYPRECHECKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODYPRECHECKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(PrecheckEntityGroups, precheckEntityGroups_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(PrecheckTimestamp, precheckTimestamp_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrecheckEntityGroups, precheckEntityGroups_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(PrecheckTimestamp, precheckTimestamp_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail() = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail(const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail(DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail &&) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail() = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& operator=(const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& operator=(DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && return this->networkInstanceId_ == nullptr && return this->precheckEntityGroups_ == nullptr && return this->precheckStatus_ == nullptr && return this->precheckTimestamp_ == nullptr && return this->regionNo_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // precheckEntityGroups Field Functions 
    bool hasPrecheckEntityGroups() const { return this->precheckEntityGroups_ != nullptr;};
    void deletePrecheckEntityGroups() { this->precheckEntityGroups_ = nullptr;};
    inline const vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups> & precheckEntityGroups() const { DARABONBA_PTR_GET_CONST(precheckEntityGroups_, vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups>) };
    inline vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups> precheckEntityGroups() { DARABONBA_PTR_GET(precheckEntityGroups_, vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups>) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setPrecheckEntityGroups(const vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups> & precheckEntityGroups) { DARABONBA_PTR_SET_VALUE(precheckEntityGroups_, precheckEntityGroups) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setPrecheckEntityGroups(vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups> && precheckEntityGroups) { DARABONBA_PTR_SET_RVALUE(precheckEntityGroups_, precheckEntityGroups) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline string precheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


    // precheckTimestamp Field Functions 
    bool hasPrecheckTimestamp() const { return this->precheckTimestamp_ != nullptr;};
    void deletePrecheckTimestamp() { this->precheckTimestamp_ = nullptr;};
    inline string precheckTimestamp() const { DARABONBA_PTR_GET_DEFAULT(precheckTimestamp_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setPrecheckTimestamp(string precheckTimestamp) { DARABONBA_PTR_SET_VALUE(precheckTimestamp_, precheckTimestamp) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<string> firewallId_ = nullptr;
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups>> precheckEntityGroups_ = nullptr;
    std::shared_ptr<string> precheckStatus_ = nullptr;
    std::shared_ptr<string> precheckTimestamp_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
