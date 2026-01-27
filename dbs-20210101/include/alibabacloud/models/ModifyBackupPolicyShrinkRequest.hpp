// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class ModifyBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceDataPolicies, advanceDataPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(AdvanceIncPolicies, advanceIncPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(AdvanceLogPolicies, advanceLogPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnableIncBackup, enableIncBackup_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceDataPolicies, advanceDataPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(AdvanceIncPolicies, advanceIncPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(AdvanceLogPolicies, advanceLogPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupPriority, backupPriority_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnableIncBackup, enableIncBackup_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupWindowBegin, preferredBackupWindowBegin_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
    };
    ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest(ModifyBackupPolicyShrinkRequest &&) = default ;
    ModifyBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest& operator=(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest& operator=(ModifyBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanceDataPoliciesShrink_ == nullptr
        && this->advanceIncPoliciesShrink_ == nullptr && this->advanceLogPoliciesShrink_ == nullptr && this->backupMethod_ == nullptr && this->backupPriority_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr
        && this->category_ == nullptr && this->enableIncBackup_ == nullptr && this->instanceName_ == nullptr && this->preferredBackupWindowBegin_ == nullptr && this->regionCode_ == nullptr; };
    // advanceDataPoliciesShrink Field Functions 
    bool hasAdvanceDataPoliciesShrink() const { return this->advanceDataPoliciesShrink_ != nullptr;};
    void deleteAdvanceDataPoliciesShrink() { this->advanceDataPoliciesShrink_ = nullptr;};
    inline string getAdvanceDataPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advanceDataPoliciesShrink_, "") };
    inline ModifyBackupPolicyShrinkRequest& setAdvanceDataPoliciesShrink(string advanceDataPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advanceDataPoliciesShrink_, advanceDataPoliciesShrink) };


    // advanceIncPoliciesShrink Field Functions 
    bool hasAdvanceIncPoliciesShrink() const { return this->advanceIncPoliciesShrink_ != nullptr;};
    void deleteAdvanceIncPoliciesShrink() { this->advanceIncPoliciesShrink_ = nullptr;};
    inline string getAdvanceIncPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advanceIncPoliciesShrink_, "") };
    inline ModifyBackupPolicyShrinkRequest& setAdvanceIncPoliciesShrink(string advanceIncPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advanceIncPoliciesShrink_, advanceIncPoliciesShrink) };


    // advanceLogPoliciesShrink Field Functions 
    bool hasAdvanceLogPoliciesShrink() const { return this->advanceLogPoliciesShrink_ != nullptr;};
    void deleteAdvanceLogPoliciesShrink() { this->advanceLogPoliciesShrink_ = nullptr;};
    inline string getAdvanceLogPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advanceLogPoliciesShrink_, "") };
    inline ModifyBackupPolicyShrinkRequest& setAdvanceLogPoliciesShrink(string advanceLogPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advanceLogPoliciesShrink_, advanceLogPoliciesShrink) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline ModifyBackupPolicyShrinkRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupPriority Field Functions 
    bool hasBackupPriority() const { return this->backupPriority_ != nullptr;};
    void deleteBackupPriority() { this->backupPriority_ = nullptr;};
    inline int32_t getBackupPriority() const { DARABONBA_PTR_GET_DEFAULT(backupPriority_, 0) };
    inline ModifyBackupPolicyShrinkRequest& setBackupPriority(int32_t backupPriority) { DARABONBA_PTR_SET_VALUE(backupPriority_, backupPriority) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline ModifyBackupPolicyShrinkRequest& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyBackupPolicyShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableIncBackup Field Functions 
    bool hasEnableIncBackup() const { return this->enableIncBackup_ != nullptr;};
    void deleteEnableIncBackup() { this->enableIncBackup_ = nullptr;};
    inline bool getEnableIncBackup() const { DARABONBA_PTR_GET_DEFAULT(enableIncBackup_, false) };
    inline ModifyBackupPolicyShrinkRequest& setEnableIncBackup(bool enableIncBackup) { DARABONBA_PTR_SET_VALUE(enableIncBackup_, enableIncBackup) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyBackupPolicyShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // preferredBackupWindowBegin Field Functions 
    bool hasPreferredBackupWindowBegin() const { return this->preferredBackupWindowBegin_ != nullptr;};
    void deletePreferredBackupWindowBegin() { this->preferredBackupWindowBegin_ = nullptr;};
    inline string getPreferredBackupWindowBegin() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupWindowBegin_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPreferredBackupWindowBegin(string preferredBackupWindowBegin) { DARABONBA_PTR_SET_VALUE(preferredBackupWindowBegin_, preferredBackupWindowBegin) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ModifyBackupPolicyShrinkRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


  protected:
    // The details of data backup policies.
    shared_ptr<string> advanceDataPoliciesShrink_ {};
    shared_ptr<string> advanceIncPoliciesShrink_ {};
    shared_ptr<string> advanceLogPoliciesShrink_ {};
    shared_ptr<string> backupMethod_ {};
    shared_ptr<int32_t> backupPriority_ {};
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    shared_ptr<string> category_ {};
    shared_ptr<bool> enableIncBackup_ {};
    // The ID of the PolarDB instance.
    shared_ptr<string> instanceName_ {};
    // The start time of a basic backup.
    shared_ptr<string> preferredBackupWindowBegin_ {};
    // The region in which backup sets reside.
    shared_ptr<string> regionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
