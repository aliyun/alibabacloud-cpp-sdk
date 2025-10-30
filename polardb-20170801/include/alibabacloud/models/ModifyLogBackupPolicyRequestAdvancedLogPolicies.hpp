// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYREQUESTADVANCEDLOGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYREQUESTADVANCEDLOGPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyLogBackupPolicyRequestAdvancedLogPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogBackupPolicyRequestAdvancedLogPolicies& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyLogBackupPolicyRequestAdvancedLogPolicies& obj) { 
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
    ModifyLogBackupPolicyRequestAdvancedLogPolicies() = default ;
    ModifyLogBackupPolicyRequestAdvancedLogPolicies(const ModifyLogBackupPolicyRequestAdvancedLogPolicies &) = default ;
    ModifyLogBackupPolicyRequestAdvancedLogPolicies(ModifyLogBackupPolicyRequestAdvancedLogPolicies &&) = default ;
    ModifyLogBackupPolicyRequestAdvancedLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogBackupPolicyRequestAdvancedLogPolicies() = default ;
    ModifyLogBackupPolicyRequestAdvancedLogPolicies& operator=(const ModifyLogBackupPolicyRequestAdvancedLogPolicies &) = default ;
    ModifyLogBackupPolicyRequestAdvancedLogPolicies& operator=(ModifyLogBackupPolicyRequestAdvancedLogPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->destRegion_ == nullptr && return this->destType_ == nullptr && return this->enableLogBackup_ == nullptr && return this->logRetentionType_ == nullptr && return this->logRetentionValue_ == nullptr
        && return this->policyId_ == nullptr && return this->srcRegion_ == nullptr && return this->srcType_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string destRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // destType Field Functions 
    bool hasDestType() const { return this->destType_ != nullptr;};
    void deleteDestType() { this->destType_ = nullptr;};
    inline string destType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


    // enableLogBackup Field Functions 
    bool hasEnableLogBackup() const { return this->enableLogBackup_ != nullptr;};
    void deleteEnableLogBackup() { this->enableLogBackup_ = nullptr;};
    inline int32_t enableLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableLogBackup_, 0) };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setEnableLogBackup(int32_t enableLogBackup) { DARABONBA_PTR_SET_VALUE(enableLogBackup_, enableLogBackup) };


    // logRetentionType Field Functions 
    bool hasLogRetentionType() const { return this->logRetentionType_ != nullptr;};
    void deleteLogRetentionType() { this->logRetentionType_ = nullptr;};
    inline string logRetentionType() const { DARABONBA_PTR_GET_DEFAULT(logRetentionType_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setLogRetentionType(string logRetentionType) { DARABONBA_PTR_SET_VALUE(logRetentionType_, logRetentionType) };


    // logRetentionValue Field Functions 
    bool hasLogRetentionValue() const { return this->logRetentionValue_ != nullptr;};
    void deleteLogRetentionValue() { this->logRetentionValue_ = nullptr;};
    inline string logRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(logRetentionValue_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setLogRetentionValue(string logRetentionValue) { DARABONBA_PTR_SET_VALUE(logRetentionValue_, logRetentionValue) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string srcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline string srcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
    inline ModifyLogBackupPolicyRequestAdvancedLogPolicies& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<string> destRegion_ = nullptr;
    std::shared_ptr<string> destType_ = nullptr;
    std::shared_ptr<int32_t> enableLogBackup_ = nullptr;
    std::shared_ptr<string> logRetentionType_ = nullptr;
    std::shared_ptr<string> logRetentionValue_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> srcRegion_ = nullptr;
    std::shared_ptr<string> srcType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
