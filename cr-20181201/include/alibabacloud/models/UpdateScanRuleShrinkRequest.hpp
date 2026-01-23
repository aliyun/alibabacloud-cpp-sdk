// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCANRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCANRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateScanRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScanRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_TO_JSON(RepoNames, repoNamesShrink_);
      DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScanRuleId, scanRuleId_);
      DARABONBA_PTR_TO_JSON(ScanScope, scanScope_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScanRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_FROM_JSON(RepoNames, repoNamesShrink_);
      DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScanRuleId, scanRuleId_);
      DARABONBA_PTR_FROM_JSON(ScanScope, scanScope_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    UpdateScanRuleShrinkRequest() = default ;
    UpdateScanRuleShrinkRequest(const UpdateScanRuleShrinkRequest &) = default ;
    UpdateScanRuleShrinkRequest(UpdateScanRuleShrinkRequest &&) = default ;
    UpdateScanRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScanRuleShrinkRequest() = default ;
    UpdateScanRuleShrinkRequest& operator=(const UpdateScanRuleShrinkRequest &) = default ;
    UpdateScanRuleShrinkRequest& operator=(UpdateScanRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->namespacesShrink_ == nullptr && this->repoNamesShrink_ == nullptr && this->repoTagFilterPattern_ == nullptr && this->ruleName_ == nullptr && this->scanRuleId_ == nullptr
        && this->scanScope_ == nullptr && this->triggerType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateScanRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespacesShrink Field Functions 
    bool hasNamespacesShrink() const { return this->namespacesShrink_ != nullptr;};
    void deleteNamespacesShrink() { this->namespacesShrink_ = nullptr;};
    inline string getNamespacesShrink() const { DARABONBA_PTR_GET_DEFAULT(namespacesShrink_, "") };
    inline UpdateScanRuleShrinkRequest& setNamespacesShrink(string namespacesShrink) { DARABONBA_PTR_SET_VALUE(namespacesShrink_, namespacesShrink) };


    // repoNamesShrink Field Functions 
    bool hasRepoNamesShrink() const { return this->repoNamesShrink_ != nullptr;};
    void deleteRepoNamesShrink() { this->repoNamesShrink_ = nullptr;};
    inline string getRepoNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(repoNamesShrink_, "") };
    inline UpdateScanRuleShrinkRequest& setRepoNamesShrink(string repoNamesShrink) { DARABONBA_PTR_SET_VALUE(repoNamesShrink_, repoNamesShrink) };


    // repoTagFilterPattern Field Functions 
    bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
    void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
    inline string getRepoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
    inline UpdateScanRuleShrinkRequest& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateScanRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scanRuleId Field Functions 
    bool hasScanRuleId() const { return this->scanRuleId_ != nullptr;};
    void deleteScanRuleId() { this->scanRuleId_ = nullptr;};
    inline string getScanRuleId() const { DARABONBA_PTR_GET_DEFAULT(scanRuleId_, "") };
    inline UpdateScanRuleShrinkRequest& setScanRuleId(string scanRuleId) { DARABONBA_PTR_SET_VALUE(scanRuleId_, scanRuleId) };


    // scanScope Field Functions 
    bool hasScanScope() const { return this->scanScope_ != nullptr;};
    void deleteScanScope() { this->scanScope_ = nullptr;};
    inline string getScanScope() const { DARABONBA_PTR_GET_DEFAULT(scanScope_, "") };
    inline UpdateScanRuleShrinkRequest& setScanScope(string scanScope) { DARABONBA_PTR_SET_VALUE(scanScope_, scanScope) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline UpdateScanRuleShrinkRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of namespaces.
    // 
    // *   When the scan scope is NAMESPACE, this parameter cannot be empty.
    // *   If the scan scope is REPO, you must specify a unique Namespace for this parameter.
    shared_ptr<string> namespacesShrink_ {};
    // The list of repositories.
    // 
    // *   When the scan scope is NAMESPACE, this parameter must be empty.
    // *   When the scan scope is REPO, this parameter cannot be empty.
    shared_ptr<string> repoNamesShrink_ {};
    // The tag filtering rules.
    // 
    // This parameter is required.
    shared_ptr<string> repoTagFilterPattern_ {};
    // The rule name.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> scanRuleId_ {};
    // The scan scope.
    // 
    // Valid values:
    // 
    // *   NAMESPACE: namespace.
    // *   REPO: repository.
    // 
    // This parameter is required.
    shared_ptr<string> scanScope_ {};
    // The trigger type.
    // 
    // Valid values:
    // 
    // *   AUTO: automatically triggers.
    // *   MANUAL: manually triggers.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
