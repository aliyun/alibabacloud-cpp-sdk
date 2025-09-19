// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTRULERESPONSEBODYDATA_HPP_
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
  class GetFileProtectRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
      DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
      DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    GetFileProtectRuleResponseBodyData() = default ;
    GetFileProtectRuleResponseBodyData(const GetFileProtectRuleResponseBodyData &) = default ;
    GetFileProtectRuleResponseBodyData(GetFileProtectRuleResponseBodyData &&) = default ;
    GetFileProtectRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectRuleResponseBodyData() = default ;
    GetFileProtectRuleResponseBodyData& operator=(const GetFileProtectRuleResponseBodyData &) = default ;
    GetFileProtectRuleResponseBodyData& operator=(GetFileProtectRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->alertLevel_ != nullptr && this->fileOps_ != nullptr && this->filePaths_ != nullptr && this->id_ != nullptr && this->platform_ != nullptr
        && this->procPaths_ != nullptr && this->ruleName_ != nullptr && this->status_ != nullptr && this->switchId_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetFileProtectRuleResponseBodyData& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline GetFileProtectRuleResponseBodyData& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // fileOps Field Functions 
    bool hasFileOps() const { return this->fileOps_ != nullptr;};
    void deleteFileOps() { this->fileOps_ = nullptr;};
    inline const vector<string> & fileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
    inline vector<string> fileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
    inline GetFileProtectRuleResponseBodyData& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
    inline GetFileProtectRuleResponseBodyData& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


    // filePaths Field Functions 
    bool hasFilePaths() const { return this->filePaths_ != nullptr;};
    void deleteFilePaths() { this->filePaths_ = nullptr;};
    inline const vector<string> & filePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
    inline vector<string> filePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
    inline GetFileProtectRuleResponseBodyData& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
    inline GetFileProtectRuleResponseBodyData& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetFileProtectRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetFileProtectRuleResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // procPaths Field Functions 
    bool hasProcPaths() const { return this->procPaths_ != nullptr;};
    void deleteProcPaths() { this->procPaths_ = nullptr;};
    inline const vector<string> & procPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
    inline vector<string> procPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
    inline GetFileProtectRuleResponseBodyData& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
    inline GetFileProtectRuleResponseBodyData& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetFileProtectRuleResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetFileProtectRuleResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline GetFileProtectRuleResponseBodyData& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The handling method of the rule. Valid values:
    // 
    // 1.  pass: allow
    // 2.  alert
    std::shared_ptr<string> action_ = nullptr;
    // The severity of alerts. Valid values:
    // 
    // *   0: does not generate alerts
    // *   1: sends notifications
    // *   2: suspicious
    // *   3: high-risk
    std::shared_ptr<int32_t> alertLevel_ = nullptr;
    // The operations performed on the files.
    std::shared_ptr<vector<string>> fileOps_ = nullptr;
    // The paths to the monitored files.
    std::shared_ptr<vector<string>> filePaths_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    std::shared_ptr<string> platform_ = nullptr;
    // The paths to the monitored processes.
    std::shared_ptr<vector<string>> procPaths_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // 1.  0: disabled
    // 2.  1: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The switch ID of the rule.
    std::shared_ptr<string> switchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
