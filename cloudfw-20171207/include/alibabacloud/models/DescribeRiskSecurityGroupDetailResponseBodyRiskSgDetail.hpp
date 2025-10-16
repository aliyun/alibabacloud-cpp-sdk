// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo.hpp>
#include <alibabacloud/models/DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsInfo, ecsInfo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsInfo, ecsInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail &&) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& operator=(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& operator=(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsCount_ == nullptr
        && return this->ecsInfo_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->regionNo_ == nullptr && return this->riskLevel_ == nullptr
        && return this->ruleInfo_ == nullptr && return this->vpcId_ == nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsInfo Field Functions 
    bool hasEcsInfo() const { return this->ecsInfo_ != nullptr;};
    void deleteEcsInfo() { this->ecsInfo_ = nullptr;};
    inline const vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo> & ecsInfo() const { DARABONBA_PTR_GET_CONST(ecsInfo_, vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo>) };
    inline vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo> ecsInfo() { DARABONBA_PTR_GET(ecsInfo_, vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo>) };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setEcsInfo(const vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo> & ecsInfo) { DARABONBA_PTR_SET_VALUE(ecsInfo_, ecsInfo) };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setEcsInfo(vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo> && ecsInfo) { DARABONBA_PTR_SET_RVALUE(ecsInfo_, ecsInfo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleInfo Field Functions 
    bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
    void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
    inline const vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo> & ruleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo>) };
    inline vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo> ruleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo>) };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setRuleInfo(const vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setRuleInfo(vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo>> ecsInfo_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo>> ruleInfo_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
