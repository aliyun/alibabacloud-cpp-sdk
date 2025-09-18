// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DiskInfo.hpp>
#include <alibabacloud/models/SystemDiskParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(NodeKeyPairName, nodeKeyPairName_);
      DARABONBA_PTR_TO_JSON(NodeRamRole, nodeRamRole_);
      DARABONBA_PTR_TO_JSON(NodeRootPassword, nodeRootPassword_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(WithPublicIp, withPublicIp_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(NodeKeyPairName, nodeKeyPairName_);
      DARABONBA_PTR_FROM_JSON(NodeRamRole, nodeRamRole_);
      DARABONBA_PTR_FROM_JSON(NodeRootPassword, nodeRootPassword_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(WithPublicIp, withPublicIp_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateNodeGroupParam() = default ;
    CreateNodeGroupParam(const CreateNodeGroupParam &) = default ;
    CreateNodeGroupParam(CreateNodeGroupParam &&) = default ;
    CreateNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupParam() = default ;
    CreateNodeGroupParam& operator=(const CreateNodeGroupParam &) = default ;
    CreateNodeGroupParam& operator=(CreateNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewDuration_ != nullptr && this->autoRenewDurationUnit_ != nullptr && this->dataDisks_ != nullptr && this->instanceTypes_ != nullptr && this->nodeCount_ != nullptr
        && this->nodeGroupName_ != nullptr && this->nodeGroupType_ != nullptr && this->nodeKeyPairName_ != nullptr && this->nodeRamRole_ != nullptr && this->nodeRootPassword_ != nullptr
        && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->paymentType_ != nullptr && this->securityGroupId_ != nullptr && this->spotStrategy_ != nullptr
        && this->systemDisk_ != nullptr && this->vSwitchIds_ != nullptr && this->withPublicIp_ != nullptr && this->zoneId_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateNodeGroupParam& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateNodeGroupParam& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string autoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline CreateNodeGroupParam& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<DiskInfo> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DiskInfo>) };
    inline vector<DiskInfo> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DiskInfo>) };
    inline CreateNodeGroupParam& setDataDisks(const vector<DiskInfo> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateNodeGroupParam& setDataDisks(vector<DiskInfo> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateNodeGroupParam& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateNodeGroupParam& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateNodeGroupParam& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CreateNodeGroupParam& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string nodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline CreateNodeGroupParam& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeKeyPairName Field Functions 
    bool hasNodeKeyPairName() const { return this->nodeKeyPairName_ != nullptr;};
    void deleteNodeKeyPairName() { this->nodeKeyPairName_ = nullptr;};
    inline string nodeKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(nodeKeyPairName_, "") };
    inline CreateNodeGroupParam& setNodeKeyPairName(string nodeKeyPairName) { DARABONBA_PTR_SET_VALUE(nodeKeyPairName_, nodeKeyPairName) };


    // nodeRamRole Field Functions 
    bool hasNodeRamRole() const { return this->nodeRamRole_ != nullptr;};
    void deleteNodeRamRole() { this->nodeRamRole_ = nullptr;};
    inline string nodeRamRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRamRole_, "") };
    inline CreateNodeGroupParam& setNodeRamRole(string nodeRamRole) { DARABONBA_PTR_SET_VALUE(nodeRamRole_, nodeRamRole) };


    // nodeRootPassword Field Functions 
    bool hasNodeRootPassword() const { return this->nodeRootPassword_ != nullptr;};
    void deleteNodeRootPassword() { this->nodeRootPassword_ = nullptr;};
    inline string nodeRootPassword() const { DARABONBA_PTR_GET_DEFAULT(nodeRootPassword_, "") };
    inline CreateNodeGroupParam& setNodeRootPassword(string nodeRootPassword) { DARABONBA_PTR_SET_VALUE(nodeRootPassword_, nodeRootPassword) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline CreateNodeGroupParam& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateNodeGroupParam& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateNodeGroupParam& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateNodeGroupParam& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateNodeGroupParam& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDiskParam & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDiskParam) };
    inline SystemDiskParam systemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDiskParam) };
    inline CreateNodeGroupParam& setSystemDisk(const SystemDiskParam & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateNodeGroupParam& setSystemDisk(SystemDiskParam && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateNodeGroupParam& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateNodeGroupParam& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // withPublicIp Field Functions 
    bool hasWithPublicIp() const { return this->withPublicIp_ != nullptr;};
    void deleteWithPublicIp() { this->withPublicIp_ = nullptr;};
    inline bool withPublicIp() const { DARABONBA_PTR_GET_DEFAULT(withPublicIp_, false) };
    inline CreateNodeGroupParam& setWithPublicIp(bool withPublicIp) { DARABONBA_PTR_SET_VALUE(withPublicIp_, withPublicIp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateNodeGroupParam& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int32_t> autoRenewDuration_ = nullptr;
    std::shared_ptr<string> autoRenewDurationUnit_ = nullptr;
    std::shared_ptr<vector<DiskInfo>> dataDisks_ = nullptr;
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    std::shared_ptr<string> nodeGroupType_ = nullptr;
    std::shared_ptr<string> nodeKeyPairName_ = nullptr;
    std::shared_ptr<string> nodeRamRole_ = nullptr;
    std::shared_ptr<string> nodeRootPassword_ = nullptr;
    std::shared_ptr<int32_t> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<SystemDiskParam> systemDisk_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<bool> withPublicIp_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
