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
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewDuration_ == nullptr && this->autoRenewDurationUnit_ == nullptr && this->dataDisks_ == nullptr && this->instanceTypes_ == nullptr && this->nodeCount_ == nullptr
        && this->nodeGroupName_ == nullptr && this->nodeGroupType_ == nullptr && this->nodeKeyPairName_ == nullptr && this->nodeRamRole_ == nullptr && this->nodeRootPassword_ == nullptr
        && this->paymentDuration_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr && this->securityGroupId_ == nullptr && this->spotStrategy_ == nullptr
        && this->systemDisk_ == nullptr && this->vSwitchIds_ == nullptr && this->withPublicIp_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateNodeGroupParam& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateNodeGroupParam& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string getAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline CreateNodeGroupParam& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<DiskInfo> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DiskInfo>) };
    inline vector<DiskInfo> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DiskInfo>) };
    inline CreateNodeGroupParam& setDataDisks(const vector<DiskInfo> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateNodeGroupParam& setDataDisks(vector<DiskInfo> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateNodeGroupParam& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateNodeGroupParam& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateNodeGroupParam& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CreateNodeGroupParam& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline CreateNodeGroupParam& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // nodeKeyPairName Field Functions 
    bool hasNodeKeyPairName() const { return this->nodeKeyPairName_ != nullptr;};
    void deleteNodeKeyPairName() { this->nodeKeyPairName_ = nullptr;};
    inline string getNodeKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(nodeKeyPairName_, "") };
    inline CreateNodeGroupParam& setNodeKeyPairName(string nodeKeyPairName) { DARABONBA_PTR_SET_VALUE(nodeKeyPairName_, nodeKeyPairName) };


    // nodeRamRole Field Functions 
    bool hasNodeRamRole() const { return this->nodeRamRole_ != nullptr;};
    void deleteNodeRamRole() { this->nodeRamRole_ = nullptr;};
    inline string getNodeRamRole() const { DARABONBA_PTR_GET_DEFAULT(nodeRamRole_, "") };
    inline CreateNodeGroupParam& setNodeRamRole(string nodeRamRole) { DARABONBA_PTR_SET_VALUE(nodeRamRole_, nodeRamRole) };


    // nodeRootPassword Field Functions 
    bool hasNodeRootPassword() const { return this->nodeRootPassword_ != nullptr;};
    void deleteNodeRootPassword() { this->nodeRootPassword_ = nullptr;};
    inline string getNodeRootPassword() const { DARABONBA_PTR_GET_DEFAULT(nodeRootPassword_, "") };
    inline CreateNodeGroupParam& setNodeRootPassword(string nodeRootPassword) { DARABONBA_PTR_SET_VALUE(nodeRootPassword_, nodeRootPassword) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline CreateNodeGroupParam& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline CreateNodeGroupParam& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateNodeGroupParam& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateNodeGroupParam& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateNodeGroupParam& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDiskParam & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDiskParam) };
    inline SystemDiskParam getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDiskParam) };
    inline CreateNodeGroupParam& setSystemDisk(const SystemDiskParam & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateNodeGroupParam& setSystemDisk(SystemDiskParam && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateNodeGroupParam& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateNodeGroupParam& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // withPublicIp Field Functions 
    bool hasWithPublicIp() const { return this->withPublicIp_ != nullptr;};
    void deleteWithPublicIp() { this->withPublicIp_ = nullptr;};
    inline bool getWithPublicIp() const { DARABONBA_PTR_GET_DEFAULT(withPublicIp_, false) };
    inline CreateNodeGroupParam& setWithPublicIp(bool withPublicIp) { DARABONBA_PTR_SET_VALUE(withPublicIp_, withPublicIp) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateNodeGroupParam& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<int32_t> autoRenewDuration_ {};
    shared_ptr<string> autoRenewDurationUnit_ {};
    shared_ptr<vector<DiskInfo>> dataDisks_ {};
    shared_ptr<vector<string>> instanceTypes_ {};
    shared_ptr<int32_t> nodeCount_ {};
    shared_ptr<string> nodeGroupName_ {};
    shared_ptr<string> nodeGroupType_ {};
    shared_ptr<string> nodeKeyPairName_ {};
    shared_ptr<string> nodeRamRole_ {};
    shared_ptr<string> nodeRootPassword_ {};
    shared_ptr<int32_t> paymentDuration_ {};
    shared_ptr<string> paymentDurationUnit_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> spotStrategy_ {};
    shared_ptr<SystemDiskParam> systemDisk_ {};
    shared_ptr<vector<string>> vSwitchIds_ {};
    shared_ptr<bool> withPublicIp_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
