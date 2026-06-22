// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEPROTECTCLIENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEPROTECTCLIENTRULEREQUEST_HPP_
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
  class CreateFileProtectClientRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
      DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
      DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    CreateFileProtectClientRuleRequest() = default ;
    CreateFileProtectClientRuleRequest(const CreateFileProtectClientRuleRequest &) = default ;
    CreateFileProtectClientRuleRequest(CreateFileProtectClientRuleRequest &&) = default ;
    CreateFileProtectClientRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileProtectClientRuleRequest() = default ;
    CreateFileProtectClientRuleRequest& operator=(const CreateFileProtectClientRuleRequest &) = default ;
    CreateFileProtectClientRuleRequest& operator=(CreateFileProtectClientRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->clientToken_ == nullptr && this->excludeUsers_ == nullptr && this->fileOps_ == nullptr && this->filePaths_ == nullptr && this->fileTypes_ == nullptr
        && this->platform_ == nullptr && this->procPaths_ == nullptr && this->ruleAction_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr
        && this->switchId_ == nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline CreateFileProtectClientRuleRequest& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFileProtectClientRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // excludeUsers Field Functions 
    bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
    void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
    inline const vector<string> & getExcludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
    inline vector<string> getExcludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
    inline CreateFileProtectClientRuleRequest& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
    inline CreateFileProtectClientRuleRequest& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


    // fileOps Field Functions 
    bool hasFileOps() const { return this->fileOps_ != nullptr;};
    void deleteFileOps() { this->fileOps_ = nullptr;};
    inline const vector<string> & getFileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
    inline vector<string> getFileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
    inline CreateFileProtectClientRuleRequest& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
    inline CreateFileProtectClientRuleRequest& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


    // filePaths Field Functions 
    bool hasFilePaths() const { return this->filePaths_ != nullptr;};
    void deleteFilePaths() { this->filePaths_ = nullptr;};
    inline const vector<string> & getFilePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
    inline vector<string> getFilePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
    inline CreateFileProtectClientRuleRequest& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
    inline CreateFileProtectClientRuleRequest& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


    // fileTypes Field Functions 
    bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
    void deleteFileTypes() { this->fileTypes_ = nullptr;};
    inline const vector<string> & getFileTypes() const { DARABONBA_PTR_GET_CONST(fileTypes_, vector<string>) };
    inline vector<string> getFileTypes() { DARABONBA_PTR_GET(fileTypes_, vector<string>) };
    inline CreateFileProtectClientRuleRequest& setFileTypes(const vector<string> & fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };
    inline CreateFileProtectClientRuleRequest& setFileTypes(vector<string> && fileTypes) { DARABONBA_PTR_SET_RVALUE(fileTypes_, fileTypes) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateFileProtectClientRuleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // procPaths Field Functions 
    bool hasProcPaths() const { return this->procPaths_ != nullptr;};
    void deleteProcPaths() { this->procPaths_ = nullptr;};
    inline const vector<string> & getProcPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
    inline vector<string> getProcPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
    inline CreateFileProtectClientRuleRequest& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
    inline CreateFileProtectClientRuleRequest& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline CreateFileProtectClientRuleRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateFileProtectClientRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateFileProtectClientRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline CreateFileProtectClientRuleRequest& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The alert notification level. Valid values:
    // 
    // - 0: no alert
    // - 1: reminder
    // - 2: suspicious
    // - 3: high-risk.
    shared_ptr<int32_t> alertLevel_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The list of excluded users.
    shared_ptr<vector<string>> excludeUsers_ {};
    // The list of operations performed on files.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> fileOps_ {};
    // The list of monitored file paths. Wildcards are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> filePaths_ {};
    // The list of monitored file types.
    shared_ptr<vector<string>> fileTypes_ {};
    // The operating system type. Valid values:
    // 
    // - **windows**: Windows.
    // - **linux**: Linux.
    shared_ptr<string> platform_ {};
    // The list of process monitoring paths. Wildcards are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> procPaths_ {};
    // The action to take when the policy is hit. Valid values:
    // 
    // - **monitor**: Alert.
    // - **block**: Block.
    // - **pass**: Allow.
    // 
    // This parameter is required.
    shared_ptr<string> ruleAction_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The status of the rule. Valid values:
    // 
    // - **0**: Disabled.
    // - **1**: Enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // The switch ID associated with the rule.
    shared_ptr<string> switchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
