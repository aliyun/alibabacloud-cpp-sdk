// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEPROTECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEPROTECTRULEREQUEST_HPP_
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
  class CreateFileProtectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
      DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
      DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    CreateFileProtectRuleRequest() = default ;
    CreateFileProtectRuleRequest(const CreateFileProtectRuleRequest &) = default ;
    CreateFileProtectRuleRequest(CreateFileProtectRuleRequest &&) = default ;
    CreateFileProtectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileProtectRuleRequest() = default ;
    CreateFileProtectRuleRequest& operator=(const CreateFileProtectRuleRequest &) = default ;
    CreateFileProtectRuleRequest& operator=(CreateFileProtectRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertLevel_ != nullptr
        && this->fileOps_ != nullptr && this->filePaths_ != nullptr && this->platform_ != nullptr && this->procPaths_ != nullptr && this->ruleAction_ != nullptr
        && this->ruleName_ != nullptr && this->status_ != nullptr && this->switchId_ != nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline CreateFileProtectRuleRequest& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // fileOps Field Functions 
    bool hasFileOps() const { return this->fileOps_ != nullptr;};
    void deleteFileOps() { this->fileOps_ = nullptr;};
    inline const vector<string> & fileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
    inline vector<string> fileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
    inline CreateFileProtectRuleRequest& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
    inline CreateFileProtectRuleRequest& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


    // filePaths Field Functions 
    bool hasFilePaths() const { return this->filePaths_ != nullptr;};
    void deleteFilePaths() { this->filePaths_ = nullptr;};
    inline const vector<string> & filePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
    inline vector<string> filePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
    inline CreateFileProtectRuleRequest& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
    inline CreateFileProtectRuleRequest& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateFileProtectRuleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // procPaths Field Functions 
    bool hasProcPaths() const { return this->procPaths_ != nullptr;};
    void deleteProcPaths() { this->procPaths_ = nullptr;};
    inline const vector<string> & procPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
    inline vector<string> procPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
    inline CreateFileProtectRuleRequest& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
    inline CreateFileProtectRuleRequest& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline CreateFileProtectRuleRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateFileProtectRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateFileProtectRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline CreateFileProtectRuleRequest& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The severity of alerts. Valid values:
    // 
    // *   0: does not generate alerts
    // *   1: sends notifications
    // *   2: suspicious
    // *   3: high-risk
    std::shared_ptr<int32_t> alertLevel_ = nullptr;
    // The operations that you want to perform on the files.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> fileOps_ = nullptr;
    // The paths to the files that you want to monitor. Wildcard characters are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> filePaths_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    std::shared_ptr<string> platform_ = nullptr;
    // The paths to the processes that you want to monitor. Wildcard characters are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> procPaths_ = nullptr;
    // The handling method of the rule. Valid values:
    // 
    // *   pass: allow
    // *   alert
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleAction_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Specifies whether to enable the rule. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> status_ = nullptr;
    // The switch ID of the rule.
    std::shared_ptr<string> switchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
