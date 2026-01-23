// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateScanRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScanScope, scanScope_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScanScope, scanScope_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    CreateScanRuleRequest() = default ;
    CreateScanRuleRequest(const CreateScanRuleRequest &) = default ;
    CreateScanRuleRequest(CreateScanRuleRequest &&) = default ;
    CreateScanRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanRuleRequest() = default ;
    CreateScanRuleRequest& operator=(const CreateScanRuleRequest &) = default ;
    CreateScanRuleRequest& operator=(CreateScanRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->namespaces_ == nullptr && this->repoNames_ == nullptr && this->repoTagFilterPattern_ == nullptr && this->ruleName_ == nullptr && this->scanScope_ == nullptr
        && this->scanType_ == nullptr && this->triggerType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScanRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline CreateScanRuleRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline CreateScanRuleRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // repoNames Field Functions 
    bool hasRepoNames() const { return this->repoNames_ != nullptr;};
    void deleteRepoNames() { this->repoNames_ = nullptr;};
    inline const vector<string> & getRepoNames() const { DARABONBA_PTR_GET_CONST(repoNames_, vector<string>) };
    inline vector<string> getRepoNames() { DARABONBA_PTR_GET(repoNames_, vector<string>) };
    inline CreateScanRuleRequest& setRepoNames(const vector<string> & repoNames) { DARABONBA_PTR_SET_VALUE(repoNames_, repoNames) };
    inline CreateScanRuleRequest& setRepoNames(vector<string> && repoNames) { DARABONBA_PTR_SET_RVALUE(repoNames_, repoNames) };


    // repoTagFilterPattern Field Functions 
    bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
    void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
    inline string getRepoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
    inline CreateScanRuleRequest& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateScanRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scanScope Field Functions 
    bool hasScanScope() const { return this->scanScope_ != nullptr;};
    void deleteScanScope() { this->scanScope_ = nullptr;};
    inline string getScanScope() const { DARABONBA_PTR_GET_DEFAULT(scanScope_, "") };
    inline CreateScanRuleRequest& setScanScope(string scanScope) { DARABONBA_PTR_SET_VALUE(scanScope_, scanScope) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline CreateScanRuleRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline CreateScanRuleRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The instance ID
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of namespaces.
    // 
    // *   When the scan scope is NAMESPACE, this parameter cannot be empty.
    // *   If the scan scope is REPO, you must specify a unique Namespace for this parameter.
    shared_ptr<vector<string>> namespaces_ {};
    // The list of repositories.
    // 
    // *   When the scan scope is NAMESPACE, this parameter must be empty.
    // *   When the scan scope is REPO, this parameter cannot be empty.
    shared_ptr<vector<string>> repoNames_ {};
    // The tag that triggers the scan matches the regular expression
    // 
    // This parameter is required.
    shared_ptr<string> repoTagFilterPattern_ {};
    // The rule name
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The scan scope
    // 
    // Valid values:
    // 
    // *   NAMESPACE: namespace.
    // *   REPO: repository.
    // 
    // This parameter is required.
    shared_ptr<string> scanScope_ {};
    // The scan type. Valid values:
    // 
    // *   `VUL`: Products Cloud Security Scanner
    // *   `SBOM`: Product Content Analysis
    // 
    // Default value: `VUL`
    shared_ptr<string> scanType_ {};
    // Trigger type
    // 
    // Valid values:
    // 
    // *   AUTO: automatically trigger.
    // *   MANUAL: manually trigger.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
