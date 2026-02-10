// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CustomCheckConfig, customCheckConfig_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CustomCheckConfig, customCheckConfig_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    VerifyCheckCustomConfigRequest() = default ;
    VerifyCheckCustomConfigRequest(const VerifyCheckCustomConfigRequest &) = default ;
    VerifyCheckCustomConfigRequest(VerifyCheckCustomConfigRequest &&) = default ;
    VerifyCheckCustomConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigRequest() = default ;
    VerifyCheckCustomConfigRequest& operator=(const VerifyCheckCustomConfigRequest &) = default ;
    VerifyCheckCustomConfigRequest& operator=(VerifyCheckCustomConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RepairConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepairConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RepairConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RepairConfigs() = default ;
      RepairConfigs(const RepairConfigs &) = default ;
      RepairConfigs(RepairConfigs &&) = default ;
      RepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepairConfigs() = default ;
      RepairConfigs& operator=(const RepairConfigs &) = default ;
      RepairConfigs& operator=(RepairConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowId_ == nullptr
        && this->name_ == nullptr && this->operation_ == nullptr && this->value_ == nullptr; };
      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline RepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline RepairConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // ID of the repair process during the repair.
      shared_ptr<string> flowId_ {};
      // Name of the repair parameter for the check item, unique within the same check item.
      shared_ptr<string> name_ {};
      // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
      shared_ptr<string> operation_ {};
      // User-configured value string for the repair parameter of the check item.
      shared_ptr<string> value_ {};
    };

    class CustomConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CustomConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CustomConfigs() = default ;
      CustomConfigs(const CustomConfigs &) = default ;
      CustomConfigs(CustomConfigs &&) = default ;
      CustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomConfigs() = default ;
      CustomConfigs& operator=(const CustomConfigs &) = default ;
      CustomConfigs& operator=(CustomConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline CustomConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Name of the custom configuration item for the check item, unique within the same check item.
      shared_ptr<string> name_ {};
      // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
      shared_ptr<string> operation_ {};
      // User-configured value string for the custom configuration item of the check item.
      shared_ptr<string> value_ {};
    };

    class CustomCheckConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomCheckConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
        DARABONBA_PTR_TO_JSON(CloudAssetInstance, cloudAssetInstance_);
        DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CustomCheckConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
        DARABONBA_PTR_FROM_JSON(CloudAssetInstance, cloudAssetInstance_);
        DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CustomCheckConfig() = default ;
      CustomCheckConfig(const CustomCheckConfig &) = default ;
      CustomCheckConfig(CustomCheckConfig &&) = default ;
      CustomCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomCheckConfig() = default ;
      CustomCheckConfig& operator=(const CustomCheckConfig &) = default ;
      CustomCheckConfig& operator=(CustomCheckConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudAssetInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudAssetInstance& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, CloudAssetInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        CloudAssetInstance() = default ;
        CloudAssetInstance(const CloudAssetInstance &) = default ;
        CloudAssetInstance(CloudAssetInstance &&) = default ;
        CloudAssetInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudAssetInstance() = default ;
        CloudAssetInstance& operator=(const CloudAssetInstance &) = default ;
        CloudAssetInstance& operator=(CloudAssetInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CloudAssetInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CloudAssetInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Instance ID of the asset.
        shared_ptr<string> instanceId_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->checkRule_ == nullptr
        && this->cloudAssetInstance_ == nullptr && this->instanceSubType_ == nullptr && this->instanceType_ == nullptr && this->vendor_ == nullptr; };
      // checkRule Field Functions 
      bool hasCheckRule() const { return this->checkRule_ != nullptr;};
      void deleteCheckRule() { this->checkRule_ = nullptr;};
      inline string getCheckRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
      inline CustomCheckConfig& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


      // cloudAssetInstance Field Functions 
      bool hasCloudAssetInstance() const { return this->cloudAssetInstance_ != nullptr;};
      void deleteCloudAssetInstance() { this->cloudAssetInstance_ = nullptr;};
      inline const CustomCheckConfig::CloudAssetInstance & getCloudAssetInstance() const { DARABONBA_PTR_GET_CONST(cloudAssetInstance_, CustomCheckConfig::CloudAssetInstance) };
      inline CustomCheckConfig::CloudAssetInstance getCloudAssetInstance() { DARABONBA_PTR_GET(cloudAssetInstance_, CustomCheckConfig::CloudAssetInstance) };
      inline CustomCheckConfig& setCloudAssetInstance(const CustomCheckConfig::CloudAssetInstance & cloudAssetInstance) { DARABONBA_PTR_SET_VALUE(cloudAssetInstance_, cloudAssetInstance) };
      inline CustomCheckConfig& setCloudAssetInstance(CustomCheckConfig::CloudAssetInstance && cloudAssetInstance) { DARABONBA_PTR_SET_RVALUE(cloudAssetInstance_, cloudAssetInstance) };


      // instanceSubType Field Functions 
      bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
      void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
      inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
      inline CustomCheckConfig& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline CustomCheckConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline CustomCheckConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Define rules for custom inspection items.
      shared_ptr<string> checkRule_ {};
      // Asset instance that requires testing rules
      shared_ptr<CustomCheckConfig::CloudAssetInstance> cloudAssetInstance_ {};
      // Asset subtype of the cloud product
      shared_ptr<string> instanceSubType_ {};
      // Asset types of cloud products. Values:
      // - **ECS**: Elastic Compute Service 
      // - **SLB**: Server Load Balancer 
      // - **RDS**: Relational Database Service 
      // - **MONGODB**: MongoDB Database 
      // - **KVSTORE**: Redis Database 
      // - **ACR**: Container Registry 
      // - **CSK**: CSK 
      // - **VPC**: Virtual Private Cloud 
      // - **ACTIONTRAIL**: Action Trail 
      // - **CDN**: Content Delivery Network 
      // - **CAS**: Digital Certificate Management Service [formerly SSL Certificates] 
      // - **RDC**: DevOps 
      // - **RAM**: Resource Access Management 
      // - **DDOS**: Distributed Denial of Service 
      // - **WAF**: Web Application Firewall 
      // - **OSS**: Object Storage Service 
      // - **POLARDB**: POLARDB 
      // - **POSTGRESQL**: PostgreSQL 
      // - **MSE**: MSE 
      // - **NAS**: Network Attached Storage 
      // - **SDDP**: Sensitive Data Discovery and Protection 
      // - **EIP**: Elastic IP
      shared_ptr<string> instanceType_ {};
      // Cloud asset vendor. Values: 
      // - **ALIYUN**: Alibaba Cloud 
      // - **Tencent**: Tencent Cloud 
      // - **HUAWEICLOUD**: Huawei Cloud 
      // - **Azure**: Microsoft 
      // - **AWS**: Amazon Web Services (AWS)
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->customCheckConfig_ == nullptr && this->customConfigs_ == nullptr && this->repairConfigs_ == nullptr && this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline VerifyCheckCustomConfigRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // customCheckConfig Field Functions 
    bool hasCustomCheckConfig() const { return this->customCheckConfig_ != nullptr;};
    void deleteCustomCheckConfig() { this->customCheckConfig_ = nullptr;};
    inline const VerifyCheckCustomConfigRequest::CustomCheckConfig & getCustomCheckConfig() const { DARABONBA_PTR_GET_CONST(customCheckConfig_, VerifyCheckCustomConfigRequest::CustomCheckConfig) };
    inline VerifyCheckCustomConfigRequest::CustomCheckConfig getCustomCheckConfig() { DARABONBA_PTR_GET(customCheckConfig_, VerifyCheckCustomConfigRequest::CustomCheckConfig) };
    inline VerifyCheckCustomConfigRequest& setCustomCheckConfig(const VerifyCheckCustomConfigRequest::CustomCheckConfig & customCheckConfig) { DARABONBA_PTR_SET_VALUE(customCheckConfig_, customCheckConfig) };
    inline VerifyCheckCustomConfigRequest& setCustomCheckConfig(VerifyCheckCustomConfigRequest::CustomCheckConfig && customCheckConfig) { DARABONBA_PTR_SET_RVALUE(customCheckConfig_, customCheckConfig) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigRequest::CustomConfigs> & getCustomConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<VerifyCheckCustomConfigRequest::CustomConfigs>) };
    inline vector<VerifyCheckCustomConfigRequest::CustomConfigs> getCustomConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<VerifyCheckCustomConfigRequest::CustomConfigs>) };
    inline VerifyCheckCustomConfigRequest& setCustomConfigs(const vector<VerifyCheckCustomConfigRequest::CustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline VerifyCheckCustomConfigRequest& setCustomConfigs(vector<VerifyCheckCustomConfigRequest::CustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // repairConfigs Field Functions 
    bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
    void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
    inline const vector<VerifyCheckCustomConfigRequest::RepairConfigs> & getRepairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<VerifyCheckCustomConfigRequest::RepairConfigs>) };
    inline vector<VerifyCheckCustomConfigRequest::RepairConfigs> getRepairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<VerifyCheckCustomConfigRequest::RepairConfigs>) };
    inline VerifyCheckCustomConfigRequest& setRepairConfigs(const vector<VerifyCheckCustomConfigRequest::RepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
    inline VerifyCheckCustomConfigRequest& setRepairConfigs(vector<VerifyCheckCustomConfigRequest::RepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VerifyCheckCustomConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Check item ID.
    shared_ptr<int64_t> checkId_ {};
    // Custom check item to validate input parameters.
    shared_ptr<VerifyCheckCustomConfigRequest::CustomCheckConfig> customCheckConfig_ {};
    // List of custom configuration items for the check item.
    shared_ptr<vector<VerifyCheckCustomConfigRequest::CustomConfigs>> customConfigs_ {};
    // Repair parameters supported by the check item\\"s repair function.
    shared_ptr<vector<VerifyCheckCustomConfigRequest::RepairConfigs>> repairConfigs_ {};
    // Situation Awareness parameter validation types: 
    // - **REPAIR_CONFIG**: Repair and custom parameter validation (default) 
    // - **CHECK_ITEM_CONFIG**: Custom check item validation
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
