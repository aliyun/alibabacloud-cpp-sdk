// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTRULESTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTRULESTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class UpdateClientRuleStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientRuleStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(AllGroup, allGroup_);
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcludeUserNameList, excludeUserNameListShrink_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InSwitch, inSwitch_);
      DARABONBA_PTR_TO_JSON(IncludeGroupIdList, includeGroupIdListShrink_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(MainButtonTextCh, mainButtonTextCh_);
      DARABONBA_PTR_TO_JSON(MainButtonTextEn, mainButtonTextEn_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_TO_JSON(Md5List, md5List_);
      DARABONBA_PTR_TO_JSON(MinorButtonTextCh, minorButtonTextCh_);
      DARABONBA_PTR_TO_JSON(MinorButtonTextEn, minorButtonTextEn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewFilePath, newFilePath_);
      DARABONBA_PTR_TO_JSON(OutSwitch, outSwitch_);
      DARABONBA_PTR_TO_JSON(ParentCmdline, parentCmdline_);
      DARABONBA_PTR_TO_JSON(ParentProcPath, parentProcPath_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PortOnList, portOnListShrink_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
      DARABONBA_PTR_TO_JSON(RegistryContent, registryContent_);
      DARABONBA_PTR_TO_JSON(RegistryKey, registryKey_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SoftWareOnList, softWareOnListShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategySourceType, strategySourceType_);
      DARABONBA_PTR_TO_JSON(SupportsApproval, supportsApproval_);
      DARABONBA_PTR_TO_JSON(UsContent, usContent_);
      DARABONBA_PTR_TO_JSON(UsTitle, usTitle_);
      DARABONBA_PTR_TO_JSON(ZhContent, zhContent_);
      DARABONBA_PTR_TO_JSON(ZhTitle, zhTitle_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientRuleStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(AllGroup, allGroup_);
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcludeUserNameList, excludeUserNameListShrink_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InSwitch, inSwitch_);
      DARABONBA_PTR_FROM_JSON(IncludeGroupIdList, includeGroupIdListShrink_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(MainButtonTextCh, mainButtonTextCh_);
      DARABONBA_PTR_FROM_JSON(MainButtonTextEn, mainButtonTextEn_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
      DARABONBA_PTR_FROM_JSON(Md5List, md5List_);
      DARABONBA_PTR_FROM_JSON(MinorButtonTextCh, minorButtonTextCh_);
      DARABONBA_PTR_FROM_JSON(MinorButtonTextEn, minorButtonTextEn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewFilePath, newFilePath_);
      DARABONBA_PTR_FROM_JSON(OutSwitch, outSwitch_);
      DARABONBA_PTR_FROM_JSON(ParentCmdline, parentCmdline_);
      DARABONBA_PTR_FROM_JSON(ParentProcPath, parentProcPath_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PortOnList, portOnListShrink_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
      DARABONBA_PTR_FROM_JSON(RegistryContent, registryContent_);
      DARABONBA_PTR_FROM_JSON(RegistryKey, registryKey_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SoftWareOnList, softWareOnListShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategySourceType, strategySourceType_);
      DARABONBA_PTR_FROM_JSON(SupportsApproval, supportsApproval_);
      DARABONBA_PTR_FROM_JSON(UsContent, usContent_);
      DARABONBA_PTR_FROM_JSON(UsTitle, usTitle_);
      DARABONBA_PTR_FROM_JSON(ZhContent, zhContent_);
      DARABONBA_PTR_FROM_JSON(ZhTitle, zhTitle_);
    };
    UpdateClientRuleStrategyShrinkRequest() = default ;
    UpdateClientRuleStrategyShrinkRequest(const UpdateClientRuleStrategyShrinkRequest &) = default ;
    UpdateClientRuleStrategyShrinkRequest(UpdateClientRuleStrategyShrinkRequest &&) = default ;
    UpdateClientRuleStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientRuleStrategyShrinkRequest() = default ;
    UpdateClientRuleStrategyShrinkRequest& operator=(const UpdateClientRuleStrategyShrinkRequest &) = default ;
    UpdateClientRuleStrategyShrinkRequest& operator=(UpdateClientRuleStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->allGroup_ == nullptr && this->approvalId_ == nullptr && this->cmdline_ == nullptr && this->description_ == nullptr && this->excludeUserNameListShrink_ == nullptr
        && this->filePath_ == nullptr && this->id_ == nullptr && this->inSwitch_ == nullptr && this->includeGroupIdListShrink_ == nullptr && this->ip_ == nullptr
        && this->mainButtonTextCh_ == nullptr && this->mainButtonTextEn_ == nullptr && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr && this->md5List_ == nullptr
        && this->minorButtonTextCh_ == nullptr && this->minorButtonTextEn_ == nullptr && this->name_ == nullptr && this->newFilePath_ == nullptr && this->outSwitch_ == nullptr
        && this->parentCmdline_ == nullptr && this->parentProcPath_ == nullptr && this->platform_ == nullptr && this->policyType_ == nullptr && this->port_ == nullptr
        && this->portOnListShrink_ == nullptr && this->priority_ == nullptr && this->procPath_ == nullptr && this->registryContent_ == nullptr && this->registryKey_ == nullptr
        && this->ruleType_ == nullptr && this->softWareOnListShrink_ == nullptr && this->status_ == nullptr && this->strategySourceType_ == nullptr && this->supportsApproval_ == nullptr
        && this->usContent_ == nullptr && this->usTitle_ == nullptr && this->zhContent_ == nullptr && this->zhTitle_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // allGroup Field Functions 
    bool hasAllGroup() const { return this->allGroup_ != nullptr;};
    void deleteAllGroup() { this->allGroup_ = nullptr;};
    inline int32_t getAllGroup() const { DARABONBA_PTR_GET_DEFAULT(allGroup_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setAllGroup(int32_t allGroup) { DARABONBA_PTR_SET_VALUE(allGroup_, allGroup) };


    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeUserNameListShrink Field Functions 
    bool hasExcludeUserNameListShrink() const { return this->excludeUserNameListShrink_ != nullptr;};
    void deleteExcludeUserNameListShrink() { this->excludeUserNameListShrink_ = nullptr;};
    inline string getExcludeUserNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeUserNameListShrink_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setExcludeUserNameListShrink(string excludeUserNameListShrink) { DARABONBA_PTR_SET_VALUE(excludeUserNameListShrink_, excludeUserNameListShrink) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateClientRuleStrategyShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inSwitch Field Functions 
    bool hasInSwitch() const { return this->inSwitch_ != nullptr;};
    void deleteInSwitch() { this->inSwitch_ = nullptr;};
    inline bool getInSwitch() const { DARABONBA_PTR_GET_DEFAULT(inSwitch_, false) };
    inline UpdateClientRuleStrategyShrinkRequest& setInSwitch(bool inSwitch) { DARABONBA_PTR_SET_VALUE(inSwitch_, inSwitch) };


    // includeGroupIdListShrink Field Functions 
    bool hasIncludeGroupIdListShrink() const { return this->includeGroupIdListShrink_ != nullptr;};
    void deleteIncludeGroupIdListShrink() { this->includeGroupIdListShrink_ = nullptr;};
    inline string getIncludeGroupIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(includeGroupIdListShrink_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setIncludeGroupIdListShrink(string includeGroupIdListShrink) { DARABONBA_PTR_SET_VALUE(includeGroupIdListShrink_, includeGroupIdListShrink) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mainButtonTextCh Field Functions 
    bool hasMainButtonTextCh() const { return this->mainButtonTextCh_ != nullptr;};
    void deleteMainButtonTextCh() { this->mainButtonTextCh_ = nullptr;};
    inline string getMainButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextCh_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMainButtonTextCh(string mainButtonTextCh) { DARABONBA_PTR_SET_VALUE(mainButtonTextCh_, mainButtonTextCh) };


    // mainButtonTextEn Field Functions 
    bool hasMainButtonTextEn() const { return this->mainButtonTextEn_ != nullptr;};
    void deleteMainButtonTextEn() { this->mainButtonTextEn_ = nullptr;};
    inline string getMainButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextEn_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMainButtonTextEn(string mainButtonTextEn) { DARABONBA_PTR_SET_VALUE(mainButtonTextEn_, mainButtonTextEn) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // matchTargetIds Field Functions 
    bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
    void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
    inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
    inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
    inline UpdateClientRuleStrategyShrinkRequest& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
    inline UpdateClientRuleStrategyShrinkRequest& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


    // md5List Field Functions 
    bool hasMd5List() const { return this->md5List_ != nullptr;};
    void deleteMd5List() { this->md5List_ = nullptr;};
    inline string getMd5List() const { DARABONBA_PTR_GET_DEFAULT(md5List_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMd5List(string md5List) { DARABONBA_PTR_SET_VALUE(md5List_, md5List) };


    // minorButtonTextCh Field Functions 
    bool hasMinorButtonTextCh() const { return this->minorButtonTextCh_ != nullptr;};
    void deleteMinorButtonTextCh() { this->minorButtonTextCh_ = nullptr;};
    inline string getMinorButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextCh_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMinorButtonTextCh(string minorButtonTextCh) { DARABONBA_PTR_SET_VALUE(minorButtonTextCh_, minorButtonTextCh) };


    // minorButtonTextEn Field Functions 
    bool hasMinorButtonTextEn() const { return this->minorButtonTextEn_ != nullptr;};
    void deleteMinorButtonTextEn() { this->minorButtonTextEn_ = nullptr;};
    inline string getMinorButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextEn_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setMinorButtonTextEn(string minorButtonTextEn) { DARABONBA_PTR_SET_VALUE(minorButtonTextEn_, minorButtonTextEn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newFilePath Field Functions 
    bool hasNewFilePath() const { return this->newFilePath_ != nullptr;};
    void deleteNewFilePath() { this->newFilePath_ = nullptr;};
    inline string getNewFilePath() const { DARABONBA_PTR_GET_DEFAULT(newFilePath_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setNewFilePath(string newFilePath) { DARABONBA_PTR_SET_VALUE(newFilePath_, newFilePath) };


    // outSwitch Field Functions 
    bool hasOutSwitch() const { return this->outSwitch_ != nullptr;};
    void deleteOutSwitch() { this->outSwitch_ = nullptr;};
    inline bool getOutSwitch() const { DARABONBA_PTR_GET_DEFAULT(outSwitch_, false) };
    inline UpdateClientRuleStrategyShrinkRequest& setOutSwitch(bool outSwitch) { DARABONBA_PTR_SET_VALUE(outSwitch_, outSwitch) };


    // parentCmdline Field Functions 
    bool hasParentCmdline() const { return this->parentCmdline_ != nullptr;};
    void deleteParentCmdline() { this->parentCmdline_ = nullptr;};
    inline string getParentCmdline() const { DARABONBA_PTR_GET_DEFAULT(parentCmdline_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setParentCmdline(string parentCmdline) { DARABONBA_PTR_SET_VALUE(parentCmdline_, parentCmdline) };


    // parentProcPath Field Functions 
    bool hasParentProcPath() const { return this->parentProcPath_ != nullptr;};
    void deleteParentProcPath() { this->parentProcPath_ = nullptr;};
    inline string getParentProcPath() const { DARABONBA_PTR_GET_DEFAULT(parentProcPath_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setParentProcPath(string parentProcPath) { DARABONBA_PTR_SET_VALUE(parentProcPath_, parentProcPath) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline int32_t getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // portOnListShrink Field Functions 
    bool hasPortOnListShrink() const { return this->portOnListShrink_ != nullptr;};
    void deletePortOnListShrink() { this->portOnListShrink_ = nullptr;};
    inline string getPortOnListShrink() const { DARABONBA_PTR_GET_DEFAULT(portOnListShrink_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setPortOnListShrink(string portOnListShrink) { DARABONBA_PTR_SET_VALUE(portOnListShrink_, portOnListShrink) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // procPath Field Functions 
    bool hasProcPath() const { return this->procPath_ != nullptr;};
    void deleteProcPath() { this->procPath_ = nullptr;};
    inline string getProcPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


    // registryContent Field Functions 
    bool hasRegistryContent() const { return this->registryContent_ != nullptr;};
    void deleteRegistryContent() { this->registryContent_ = nullptr;};
    inline string getRegistryContent() const { DARABONBA_PTR_GET_DEFAULT(registryContent_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setRegistryContent(string registryContent) { DARABONBA_PTR_SET_VALUE(registryContent_, registryContent) };


    // registryKey Field Functions 
    bool hasRegistryKey() const { return this->registryKey_ != nullptr;};
    void deleteRegistryKey() { this->registryKey_ = nullptr;};
    inline string getRegistryKey() const { DARABONBA_PTR_GET_DEFAULT(registryKey_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setRegistryKey(string registryKey) { DARABONBA_PTR_SET_VALUE(registryKey_, registryKey) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // softWareOnListShrink Field Functions 
    bool hasSoftWareOnListShrink() const { return this->softWareOnListShrink_ != nullptr;};
    void deleteSoftWareOnListShrink() { this->softWareOnListShrink_ = nullptr;};
    inline string getSoftWareOnListShrink() const { DARABONBA_PTR_GET_DEFAULT(softWareOnListShrink_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setSoftWareOnListShrink(string softWareOnListShrink) { DARABONBA_PTR_SET_VALUE(softWareOnListShrink_, softWareOnListShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategySourceType Field Functions 
    bool hasStrategySourceType() const { return this->strategySourceType_ != nullptr;};
    void deleteStrategySourceType() { this->strategySourceType_ = nullptr;};
    inline string getStrategySourceType() const { DARABONBA_PTR_GET_DEFAULT(strategySourceType_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setStrategySourceType(string strategySourceType) { DARABONBA_PTR_SET_VALUE(strategySourceType_, strategySourceType) };


    // supportsApproval Field Functions 
    bool hasSupportsApproval() const { return this->supportsApproval_ != nullptr;};
    void deleteSupportsApproval() { this->supportsApproval_ = nullptr;};
    inline int32_t getSupportsApproval() const { DARABONBA_PTR_GET_DEFAULT(supportsApproval_, 0) };
    inline UpdateClientRuleStrategyShrinkRequest& setSupportsApproval(int32_t supportsApproval) { DARABONBA_PTR_SET_VALUE(supportsApproval_, supportsApproval) };


    // usContent Field Functions 
    bool hasUsContent() const { return this->usContent_ != nullptr;};
    void deleteUsContent() { this->usContent_ = nullptr;};
    inline string getUsContent() const { DARABONBA_PTR_GET_DEFAULT(usContent_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setUsContent(string usContent) { DARABONBA_PTR_SET_VALUE(usContent_, usContent) };


    // usTitle Field Functions 
    bool hasUsTitle() const { return this->usTitle_ != nullptr;};
    void deleteUsTitle() { this->usTitle_ = nullptr;};
    inline string getUsTitle() const { DARABONBA_PTR_GET_DEFAULT(usTitle_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setUsTitle(string usTitle) { DARABONBA_PTR_SET_VALUE(usTitle_, usTitle) };


    // zhContent Field Functions 
    bool hasZhContent() const { return this->zhContent_ != nullptr;};
    void deleteZhContent() { this->zhContent_ = nullptr;};
    inline string getZhContent() const { DARABONBA_PTR_GET_DEFAULT(zhContent_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setZhContent(string zhContent) { DARABONBA_PTR_SET_VALUE(zhContent_, zhContent) };


    // zhTitle Field Functions 
    bool hasZhTitle() const { return this->zhTitle_ != nullptr;};
    void deleteZhTitle() { this->zhTitle_ = nullptr;};
    inline string getZhTitle() const { DARABONBA_PTR_GET_DEFAULT(zhTitle_, "") };
    inline UpdateClientRuleStrategyShrinkRequest& setZhTitle(string zhTitle) { DARABONBA_PTR_SET_VALUE(zhTitle_, zhTitle) };


  protected:
    // The policy action. Valid values:
    // 
    // - **0**: monitor mode
    // - **1**: prevent startup
    // - **2**: block mode
    // 
    // Valid values for custom rules of proactive defense (PolicyType=2):
    // 
    // - **0**: whitelist and allow
    // - **1**: blacklist and block
    shared_ptr<int32_t> actionType_ {};
    // Specifies whether the policy takes effect for all user groups. Valid values:
    // 
    // - **0**: no
    // - **1**: yes
    shared_ptr<int32_t> allGroup_ {};
    // The ID of the approval process.
    shared_ptr<string> approvalId_ {};
    // The matched process command line.
    shared_ptr<string> cmdline_ {};
    // The policy description.
    // > The maximum length is 128 characters.
    shared_ptr<string> description_ {};
    // The list of usernames for which the policy does not take effect.
    shared_ptr<string> excludeUserNameListShrink_ {};
    // The matched file path.
    shared_ptr<string> filePath_ {};
    // The policy ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The inbound network switch.
    shared_ptr<bool> inSwitch_ {};
    // The list of IDs of the user groups for which the policy takes effect.
    shared_ptr<string> includeGroupIdListShrink_ {};
    // The matched IP address.
    shared_ptr<string> ip_ {};
    // The text of the primary button in the Chinese button configuration.
    shared_ptr<string> mainButtonTextCh_ {};
    // The text of the primary button in the English button configuration.
    shared_ptr<string> mainButtonTextEn_ {};
    // The effective scope mode. Valid values:
    // 
    // - **UserGroupAll**: all user groups
    // - **UserGroupNormal**: specified user groups
    // - **DeviceGroupNormal**: specified device groups
    // - **DevTagNormal**: specified device tags
    shared_ptr<string> matchMode_ {};
    // The list of targets in the effective scope. The meaning of the targets is determined by MatchMode.
    shared_ptr<vector<string>> matchTargetIds_ {};
    // The MD5 match string for the file.
    shared_ptr<string> md5List_ {};
    // The text of the secondary button in the Chinese button configuration.
    shared_ptr<string> minorButtonTextCh_ {};
    // The text of the secondary button in the English button configuration.
    shared_ptr<string> minorButtonTextEn_ {};
    // The policy name.
    // > The maximum length is 128 characters.
    shared_ptr<string> name_ {};
    // The matched new file path.
    shared_ptr<string> newFilePath_ {};
    // The outbound network switch.
    shared_ptr<bool> outSwitch_ {};
    // The matched parent process command line.
    shared_ptr<string> parentCmdline_ {};
    // The matched parent process path.
    shared_ptr<string> parentProcPath_ {};
    // The platform to which the rule applies. Valid values:
    // 
    // - **linux**
    // - **windows**
    // - **mac**
    // - **all**: all platforms
    shared_ptr<string> platform_ {};
    // The policy type. Valid values:
    // 
    // - **0**: software hardening
    // - **1**: firewall
    // - **2**: proactive defense
    // 
    // This parameter is required.
    shared_ptr<int32_t> policyType_ {};
    // The matched port.
    shared_ptr<string> port_ {};
    // The list of enabled ports.
    // > This parameter is valid only when the policy type is firewall.
    shared_ptr<string> portOnListShrink_ {};
    // The policy priority. A smaller value indicates a higher priority. Valid values: greater than 0.
    shared_ptr<int32_t> priority_ {};
    // The matched process path.
    shared_ptr<string> procPath_ {};
    // The matched registry content.
    shared_ptr<string> registryContent_ {};
    // The matched registry key.
    shared_ptr<string> registryKey_ {};
    // The defense rule type. Valid values: 1 to 7.
    shared_ptr<int32_t> ruleType_ {};
    // The list of main process names of the software for which integrity check is enabled. The elements correspond to the Process returned by GetSwitchInfoListByType.
    shared_ptr<string> softWareOnListShrink_ {};
    // The policy status. Valid values:
    // 
    // - **0**: disabled
    // - **1**: enabled
    shared_ptr<int32_t> status_ {};
    // The rule source for proactive defense (PolicyType=2). Valid values:
    // 
    // - **SYSTEM**: system rules
    // - **CUSTOM**: custom rules
    shared_ptr<string> strategySourceType_ {};
    // Specifies whether approval requests are supported. Valid values:
    // 
    // - **0**: not supported
    // - **1**: supported
    shared_ptr<int32_t> supportsApproval_ {};
    // The English content in the pop-up prompt configuration.
    shared_ptr<string> usContent_ {};
    // The English title in the pop-up prompt configuration.
    shared_ptr<string> usTitle_ {};
    // The Chinese content in the pop-up prompt configuration.
    shared_ptr<string> zhContent_ {};
    // The Chinese title in the pop-up prompt configuration.
    shared_ptr<string> zhTitle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
