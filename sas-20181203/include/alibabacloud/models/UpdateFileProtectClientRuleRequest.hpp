// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTCLIENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTCLIENTRULEREQUEST_HPP_
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
  class UpdateFileProtectClientRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_TO_JSON(FileOps, fileOps_);
      DARABONBA_PTR_TO_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(ExcludeUsers, excludeUsers_);
      DARABONBA_PTR_FROM_JSON(FileOps, fileOps_);
      DARABONBA_PTR_FROM_JSON(FilePaths, filePaths_);
      DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProcPaths, procPaths_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateFileProtectClientRuleRequest() = default ;
    UpdateFileProtectClientRuleRequest(const UpdateFileProtectClientRuleRequest &) = default ;
    UpdateFileProtectClientRuleRequest(UpdateFileProtectClientRuleRequest &&) = default ;
    UpdateFileProtectClientRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectClientRuleRequest() = default ;
    UpdateFileProtectClientRuleRequest& operator=(const UpdateFileProtectClientRuleRequest &) = default ;
    UpdateFileProtectClientRuleRequest& operator=(UpdateFileProtectClientRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->excludeUsers_ == nullptr && this->fileOps_ == nullptr && this->filePaths_ == nullptr && this->fileTypes_ == nullptr && this->id_ == nullptr
        && this->procPaths_ == nullptr && this->ruleAction_ == nullptr && this->ruleName_ == nullptr && this->status_ == nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline UpdateFileProtectClientRuleRequest& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // excludeUsers Field Functions 
    bool hasExcludeUsers() const { return this->excludeUsers_ != nullptr;};
    void deleteExcludeUsers() { this->excludeUsers_ = nullptr;};
    inline const vector<string> & getExcludeUsers() const { DARABONBA_PTR_GET_CONST(excludeUsers_, vector<string>) };
    inline vector<string> getExcludeUsers() { DARABONBA_PTR_GET(excludeUsers_, vector<string>) };
    inline UpdateFileProtectClientRuleRequest& setExcludeUsers(const vector<string> & excludeUsers) { DARABONBA_PTR_SET_VALUE(excludeUsers_, excludeUsers) };
    inline UpdateFileProtectClientRuleRequest& setExcludeUsers(vector<string> && excludeUsers) { DARABONBA_PTR_SET_RVALUE(excludeUsers_, excludeUsers) };


    // fileOps Field Functions 
    bool hasFileOps() const { return this->fileOps_ != nullptr;};
    void deleteFileOps() { this->fileOps_ = nullptr;};
    inline const vector<string> & getFileOps() const { DARABONBA_PTR_GET_CONST(fileOps_, vector<string>) };
    inline vector<string> getFileOps() { DARABONBA_PTR_GET(fileOps_, vector<string>) };
    inline UpdateFileProtectClientRuleRequest& setFileOps(const vector<string> & fileOps) { DARABONBA_PTR_SET_VALUE(fileOps_, fileOps) };
    inline UpdateFileProtectClientRuleRequest& setFileOps(vector<string> && fileOps) { DARABONBA_PTR_SET_RVALUE(fileOps_, fileOps) };


    // filePaths Field Functions 
    bool hasFilePaths() const { return this->filePaths_ != nullptr;};
    void deleteFilePaths() { this->filePaths_ = nullptr;};
    inline const vector<string> & getFilePaths() const { DARABONBA_PTR_GET_CONST(filePaths_, vector<string>) };
    inline vector<string> getFilePaths() { DARABONBA_PTR_GET(filePaths_, vector<string>) };
    inline UpdateFileProtectClientRuleRequest& setFilePaths(const vector<string> & filePaths) { DARABONBA_PTR_SET_VALUE(filePaths_, filePaths) };
    inline UpdateFileProtectClientRuleRequest& setFilePaths(vector<string> && filePaths) { DARABONBA_PTR_SET_RVALUE(filePaths_, filePaths) };


    // fileTypes Field Functions 
    bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
    void deleteFileTypes() { this->fileTypes_ = nullptr;};
    inline const vector<string> & getFileTypes() const { DARABONBA_PTR_GET_CONST(fileTypes_, vector<string>) };
    inline vector<string> getFileTypes() { DARABONBA_PTR_GET(fileTypes_, vector<string>) };
    inline UpdateFileProtectClientRuleRequest& setFileTypes(const vector<string> & fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };
    inline UpdateFileProtectClientRuleRequest& setFileTypes(vector<string> && fileTypes) { DARABONBA_PTR_SET_RVALUE(fileTypes_, fileTypes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateFileProtectClientRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // procPaths Field Functions 
    bool hasProcPaths() const { return this->procPaths_ != nullptr;};
    void deleteProcPaths() { this->procPaths_ = nullptr;};
    inline const vector<string> & getProcPaths() const { DARABONBA_PTR_GET_CONST(procPaths_, vector<string>) };
    inline vector<string> getProcPaths() { DARABONBA_PTR_GET(procPaths_, vector<string>) };
    inline UpdateFileProtectClientRuleRequest& setProcPaths(const vector<string> & procPaths) { DARABONBA_PTR_SET_VALUE(procPaths_, procPaths) };
    inline UpdateFileProtectClientRuleRequest& setProcPaths(vector<string> && procPaths) { DARABONBA_PTR_SET_RVALUE(procPaths_, procPaths) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline UpdateFileProtectClientRuleRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateFileProtectClientRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateFileProtectClientRuleRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int32_t> alertLevel_ {};
    shared_ptr<vector<string>> excludeUsers_ {};
    // This parameter is required.
    shared_ptr<vector<string>> fileOps_ {};
    // This parameter is required.
    shared_ptr<vector<string>> filePaths_ {};
    shared_ptr<vector<string>> fileTypes_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<vector<string>> procPaths_ {};
    // This parameter is required.
    shared_ptr<string> ruleAction_ {};
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
