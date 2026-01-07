// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    CreateResourceRequest() = default ;
    CreateResourceRequest(const CreateResourceRequest &) = default ;
    CreateResourceRequest(CreateResourceRequest &&) = default ;
    CreateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequest() = default ;
    CreateResourceRequest& operator=(const CreateResourceRequest &) = default ;
    CreateResourceRequest& operator=(CreateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelfManagedResourceOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelfManagedResourceOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalClusterId, externalClusterId_);
        DARABONBA_PTR_TO_JSON(NodeMatchLabels, nodeMatchLabels_);
        DARABONBA_PTR_TO_JSON(NodeTolerations, nodeTolerations_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      };
      friend void from_json(const Darabonba::Json& j, SelfManagedResourceOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalClusterId, externalClusterId_);
        DARABONBA_PTR_FROM_JSON(NodeMatchLabels, nodeMatchLabels_);
        DARABONBA_PTR_FROM_JSON(NodeTolerations, nodeTolerations_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      };
      SelfManagedResourceOptions() = default ;
      SelfManagedResourceOptions(const SelfManagedResourceOptions &) = default ;
      SelfManagedResourceOptions(SelfManagedResourceOptions &&) = default ;
      SelfManagedResourceOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelfManagedResourceOptions() = default ;
      SelfManagedResourceOptions& operator=(const SelfManagedResourceOptions &) = default ;
      SelfManagedResourceOptions& operator=(SelfManagedResourceOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeTolerations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTolerations& obj) { 
          DARABONBA_PTR_TO_JSON(effect, effect_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTolerations& obj) { 
          DARABONBA_PTR_FROM_JSON(effect, effect_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        NodeTolerations() = default ;
        NodeTolerations(const NodeTolerations &) = default ;
        NodeTolerations(NodeTolerations &&) = default ;
        NodeTolerations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTolerations() = default ;
        NodeTolerations& operator=(const NodeTolerations &) = default ;
        NodeTolerations& operator=(NodeTolerations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effect_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline NodeTolerations& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline NodeTolerations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline NodeTolerations& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline NodeTolerations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The effect.
        // 
        // Valid values:
        // 
        // *   PreferNoSchedule
        // *   NoSchedule
        // *   NoExecute
        shared_ptr<string> effect_ {};
        // The key name.
        shared_ptr<string> key_ {};
        // The relationship between key names and key values.
        // 
        // Valid values:
        // 
        // *   Equal
        // *   Exists
        shared_ptr<string> operator_ {};
        // The key value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->externalClusterId_ == nullptr
        && this->nodeMatchLabels_ == nullptr && this->nodeTolerations_ == nullptr && this->roleName_ == nullptr; };
      // externalClusterId Field Functions 
      bool hasExternalClusterId() const { return this->externalClusterId_ != nullptr;};
      void deleteExternalClusterId() { this->externalClusterId_ = nullptr;};
      inline string getExternalClusterId() const { DARABONBA_PTR_GET_DEFAULT(externalClusterId_, "") };
      inline SelfManagedResourceOptions& setExternalClusterId(string externalClusterId) { DARABONBA_PTR_SET_VALUE(externalClusterId_, externalClusterId) };


      // nodeMatchLabels Field Functions 
      bool hasNodeMatchLabels() const { return this->nodeMatchLabels_ != nullptr;};
      void deleteNodeMatchLabels() { this->nodeMatchLabels_ = nullptr;};
      inline const map<string, string> & getNodeMatchLabels() const { DARABONBA_PTR_GET_CONST(nodeMatchLabels_, map<string, string>) };
      inline map<string, string> getNodeMatchLabels() { DARABONBA_PTR_GET(nodeMatchLabels_, map<string, string>) };
      inline SelfManagedResourceOptions& setNodeMatchLabels(const map<string, string> & nodeMatchLabels) { DARABONBA_PTR_SET_VALUE(nodeMatchLabels_, nodeMatchLabels) };
      inline SelfManagedResourceOptions& setNodeMatchLabels(map<string, string> && nodeMatchLabels) { DARABONBA_PTR_SET_RVALUE(nodeMatchLabels_, nodeMatchLabels) };


      // nodeTolerations Field Functions 
      bool hasNodeTolerations() const { return this->nodeTolerations_ != nullptr;};
      void deleteNodeTolerations() { this->nodeTolerations_ = nullptr;};
      inline const vector<SelfManagedResourceOptions::NodeTolerations> & getNodeTolerations() const { DARABONBA_PTR_GET_CONST(nodeTolerations_, vector<SelfManagedResourceOptions::NodeTolerations>) };
      inline vector<SelfManagedResourceOptions::NodeTolerations> getNodeTolerations() { DARABONBA_PTR_GET(nodeTolerations_, vector<SelfManagedResourceOptions::NodeTolerations>) };
      inline SelfManagedResourceOptions& setNodeTolerations(const vector<SelfManagedResourceOptions::NodeTolerations> & nodeTolerations) { DARABONBA_PTR_SET_VALUE(nodeTolerations_, nodeTolerations) };
      inline SelfManagedResourceOptions& setNodeTolerations(vector<SelfManagedResourceOptions::NodeTolerations> && nodeTolerations) { DARABONBA_PTR_SET_RVALUE(nodeTolerations_, nodeTolerations) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline SelfManagedResourceOptions& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    protected:
      // The ID of the self-managed cluster.
      shared_ptr<string> externalClusterId_ {};
      // The tag key-value pairs of the node.
      shared_ptr<map<string, string>> nodeMatchLabels_ {};
      // The tolerations for the node taint.
      shared_ptr<vector<SelfManagedResourceOptions::NodeTolerations>> nodeTolerations_ {};
      // The name of the RAM user to which the permissions on Elastic Algorithm Service (EAS) of Platform for AI (PAI) are granted.
      shared_ptr<string> roleName_ {};
    };

    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->chargeType_ == nullptr && this->ecsInstanceCount_ == nullptr && this->ecsInstanceType_ == nullptr && this->labels_ == nullptr && this->resourceName_ == nullptr
        && this->resourceType_ == nullptr && this->selfManagedResourceOptions_ == nullptr && this->systemDiskSize_ == nullptr && this->zone_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateResourceRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateResourceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // ecsInstanceCount Field Functions 
    bool hasEcsInstanceCount() const { return this->ecsInstanceCount_ != nullptr;};
    void deleteEcsInstanceCount() { this->ecsInstanceCount_ = nullptr;};
    inline int32_t getEcsInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceCount_, 0) };
    inline CreateResourceRequest& setEcsInstanceCount(int32_t ecsInstanceCount) { DARABONBA_PTR_SET_VALUE(ecsInstanceCount_, ecsInstanceCount) };


    // ecsInstanceType Field Functions 
    bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
    void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
    inline string getEcsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
    inline CreateResourceRequest& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CreateResourceRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateResourceRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // selfManagedResourceOptions Field Functions 
    bool hasSelfManagedResourceOptions() const { return this->selfManagedResourceOptions_ != nullptr;};
    void deleteSelfManagedResourceOptions() { this->selfManagedResourceOptions_ = nullptr;};
    inline const CreateResourceRequest::SelfManagedResourceOptions & getSelfManagedResourceOptions() const { DARABONBA_PTR_GET_CONST(selfManagedResourceOptions_, CreateResourceRequest::SelfManagedResourceOptions) };
    inline CreateResourceRequest::SelfManagedResourceOptions getSelfManagedResourceOptions() { DARABONBA_PTR_GET(selfManagedResourceOptions_, CreateResourceRequest::SelfManagedResourceOptions) };
    inline CreateResourceRequest& setSelfManagedResourceOptions(const CreateResourceRequest::SelfManagedResourceOptions & selfManagedResourceOptions) { DARABONBA_PTR_SET_VALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };
    inline CreateResourceRequest& setSelfManagedResourceOptions(CreateResourceRequest::SelfManagedResourceOptions && selfManagedResourceOptions) { DARABONBA_PTR_SET_RVALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateResourceRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline CreateResourceRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   false (default)
    // *   true
    shared_ptr<bool> autoRenewal_ {};
    // The billing method. Valid values:
    // 
    // *   PrePaid: the subscription billing method.
    // *   PostPaid: the pay-as-you-go billing method.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    shared_ptr<string> chargeType_ {};
    // The number of ECS instances.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    shared_ptr<int32_t> ecsInstanceCount_ {};
    // The type of the Elastic Compute Service (ECS) instance.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    shared_ptr<string> ecsInstanceType_ {};
    // The labels.
    shared_ptr<map<string, string>> labels_ {};
    shared_ptr<string> resourceName_ {};
    // The type of the resource group. Valid values:
    // 
    // *   Dedicated: the dedicated resource group.
    // *   SelfManaged: the self-managed resource group.
    // 
    // >  If you use a self-managed resource group, you must configure a whitelist.
    shared_ptr<string> resourceType_ {};
    // The configurations of the self-managed resource group.
    shared_ptr<CreateResourceRequest::SelfManagedResourceOptions> selfManagedResourceOptions_ {};
    // The size of the system disk. Unit: GiB. Valid values: 200 to 2000. Default value: 200.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The ID of the zone in which the instance resides.
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
