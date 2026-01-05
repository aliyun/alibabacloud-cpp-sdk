// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyLogBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLogBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicies, advancedLogPolicies_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLogBackupPolicyRequest() = default ;
    ModifyLogBackupPolicyRequest(const ModifyLogBackupPolicyRequest &) = default ;
    ModifyLogBackupPolicyRequest(ModifyLogBackupPolicyRequest &&) = default ;
    ModifyLogBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogBackupPolicyRequest() = default ;
    ModifyLogBackupPolicyRequest& operator=(const ModifyLogBackupPolicyRequest &) = default ;
    ModifyLogBackupPolicyRequest& operator=(ModifyLogBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedLogPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestType, destType_);
        DARABONBA_PTR_TO_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_TO_JSON(LogRetentionType, logRetentionType_);
        DARABONBA_PTR_TO_JSON(LogRetentionValue, logRetentionValue_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedLogPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestType, destType_);
        DARABONBA_PTR_FROM_JSON(EnableLogBackup, enableLogBackup_);
        DARABONBA_PTR_FROM_JSON(LogRetentionType, logRetentionType_);
        DARABONBA_PTR_FROM_JSON(LogRetentionValue, logRetentionValue_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      AdvancedLogPolicies() = default ;
      AdvancedLogPolicies(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies(AdvancedLogPolicies &&) = default ;
      AdvancedLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedLogPolicies() = default ;
      AdvancedLogPolicies& operator=(const AdvancedLogPolicies &) = default ;
      AdvancedLogPolicies& operator=(AdvancedLogPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->destRegion_ == nullptr && this->destType_ == nullptr && this->enableLogBackup_ == nullptr && this->logRetentionType_ == nullptr && this->logRetentionValue_ == nullptr
        && this->policyId_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline AdvancedLogPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline AdvancedLogPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destType Field Functions 
      bool hasDestType() const { return this->destType_ != nullptr;};
      void deleteDestType() { this->destType_ = nullptr;};
      inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
      inline AdvancedLogPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


      // enableLogBackup Field Functions 
      bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
      void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
      inline int32_t getEnableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
      inline AdvancedLogPolicies& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


      // logRetentionType Field Functions 
      bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
      void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
      inline string getLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
      inline AdvancedLogPolicies& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


      // logRetentionValue Field Functions 
      bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
      void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
      inline string getLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, "") };
      inline AdvancedLogPolicies& setLogRetentionValue(string logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AdvancedLogPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline AdvancedLogPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline AdvancedLogPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      shared_ptr<string> actionType_ {};
      shared_ptr<string> destRegion_ {};
      shared_ptr<string> destType_ {};
      shared_ptr<int32_t> enableLogBackup_ {};
      shared_ptr<string> logRetentionType_ {};
      shared_ptr<string> logRetentionValue_ {};
      shared_ptr<string> policyId_ {};
      shared_ptr<string> srcRegion_ {};
      shared_ptr<string> srcType_ {};
    };

    virtual bool empty() const override { return this->advancedLogPolicies_ == nullptr
        && this->DBClusterId_ == nullptr && this->logBackupAnotherRegionRegion_ == nullptr && this->logBackupAnotherRegionRetentionPeriod_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // advancedLogPolicies Field Functions 
    bool hasAdvancedLogPolicies() const { return this->advancedLogPolicies_ != nullptr;};
    void deleteAdvancedLogPolicies() { this->advancedLogPolicies_ = nullptr;};
    inline const vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> & getAdvancedLogPolicies() const { DARABONBA_PTR_GET_CONST(advancedLogPolicies_, vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies>) };
    inline vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> getAdvancedLogPolicies() { DARABONBA_PTR_GET(advancedLogPolicies_, vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies>) };
    inline ModifyLogBackupPolicyRequest& setAdvancedLogPolicies(const vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> & advancedLogPolicies) { DARABONBA_PTR_SET_VALUE(advancedLogPolicies_, advancedLogPolicies) };
    inline ModifyLogBackupPolicyRequest& setAdvancedLogPolicies(vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> && advancedLogPolicies) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicies_, advancedLogPolicies) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyLogBackupPolicyRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // logBackupAnotherRegionRegion Field Functions 
    bool hasLogBackupAnotherRegionRegion() const { return this->logBackupAnotherRegionRegion_ != nullptr;};
    void deleteLogBackupAnotherRegionRegion() { this->logBackupAnotherRegionRegion_ = nullptr;};
    inline string getLogBackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRegion_, "") };
    inline ModifyLogBackupPolicyRequest& setLogBackupAnotherRegionRegion(string logBackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRegion_, logBackupAnotherRegionRegion) };


    // logBackupAnotherRegionRetentionPeriod Field Functions 
    bool hasLogBackupAnotherRegionRetentionPeriod() const { return this->logBackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteLogBackupAnotherRegionRetentionPeriod() { this->logBackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string getLogBackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRetentionPeriod_, "") };
    inline ModifyLogBackupPolicyRequest& setLogBackupAnotherRegionRetentionPeriod(string logBackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRetentionPeriod_, logBackupAnotherRegionRetentionPeriod) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline ModifyLogBackupPolicyRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLogBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLogBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLogBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLogBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies>> advancedLogPolicies_ {};
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the information of all clusters that are deployed in a specific region, such as the cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region in which you want to store cross-region log backups. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> logBackupAnotherRegionRegion_ {};
    // The retention period of cross-region log backups. Valid values:
    // 
    // *   **0**: The cross-region backup feature is disabled.
    // *   **30 to 7300**: Cross-region log backups are retained for 30 to 7,300 days.
    // *   **-1**: The log backups are permanently retained.
    // 
    // >  When you create a cluster, the default value of this parameter is **0**.
    shared_ptr<string> logBackupAnotherRegionRetentionPeriod_ {};
    // The retention period of the log backups. Valid values:
    // 
    // *   3 to 7300: The log backups are retained for 3 to 7,300 days.
    // *   \\-1: The log backups are permanently retained.
    shared_ptr<string> logBackupRetentionPeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
