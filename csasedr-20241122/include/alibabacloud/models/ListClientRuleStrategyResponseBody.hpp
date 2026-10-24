// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTRULESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTRULESTRATEGYRESPONSEBODY_HPP_
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
  class ListClientRuleStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientRuleStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientRuleStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClientRuleStrategyResponseBody() = default ;
    ListClientRuleStrategyResponseBody(const ListClientRuleStrategyResponseBody &) = default ;
    ListClientRuleStrategyResponseBody(ListClientRuleStrategyResponseBody &&) = default ;
    ListClientRuleStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientRuleStrategyResponseBody() = default ;
    ListClientRuleStrategyResponseBody& operator=(const ListClientRuleStrategyResponseBody &) = default ;
    ListClientRuleStrategyResponseBody& operator=(ListClientRuleStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the current page for the paged query with paging.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of entries returned per page for the paged query with paging.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(AllGroup, allGroup_);
        DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExcludeUserNameList, excludeUserNameList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InSwitch, inSwitch_);
        DARABONBA_PTR_TO_JSON(IncludeGroupIdList, includeGroupIdList_);
        DARABONBA_PTR_TO_JSON(MainButtonTextCh, mainButtonTextCh_);
        DARABONBA_PTR_TO_JSON(MainButtonTextEn, mainButtonTextEn_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
        DARABONBA_PTR_TO_JSON(MinorButtonTextCh, minorButtonTextCh_);
        DARABONBA_PTR_TO_JSON(MinorButtonTextEn, minorButtonTextEn_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OutSwitch, outSwitch_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(PortOnList, portOnList_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
        DARABONBA_PTR_TO_JSON(SoftWareOnList, softWareOnList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategySourceType, strategySourceType_);
        DARABONBA_PTR_TO_JSON(SupportsApproval, supportsApproval_);
        DARABONBA_PTR_TO_JSON(UsContent, usContent_);
        DARABONBA_PTR_TO_JSON(UsTitle, usTitle_);
        DARABONBA_PTR_TO_JSON(ZhContent, zhContent_);
        DARABONBA_PTR_TO_JSON(ZhTitle, zhTitle_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(AllGroup, allGroup_);
        DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExcludeUserNameList, excludeUserNameList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InSwitch, inSwitch_);
        DARABONBA_PTR_FROM_JSON(IncludeGroupIdList, includeGroupIdList_);
        DARABONBA_PTR_FROM_JSON(MainButtonTextCh, mainButtonTextCh_);
        DARABONBA_PTR_FROM_JSON(MainButtonTextEn, mainButtonTextEn_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
        DARABONBA_PTR_FROM_JSON(MinorButtonTextCh, minorButtonTextCh_);
        DARABONBA_PTR_FROM_JSON(MinorButtonTextEn, minorButtonTextEn_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OutSwitch, outSwitch_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(PortOnList, portOnList_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
        DARABONBA_PTR_FROM_JSON(SoftWareOnList, softWareOnList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategySourceType, strategySourceType_);
        DARABONBA_PTR_FROM_JSON(SupportsApproval, supportsApproval_);
        DARABONBA_PTR_FROM_JSON(UsContent, usContent_);
        DARABONBA_PTR_FROM_JSON(UsTitle, usTitle_);
        DARABONBA_PTR_FROM_JSON(ZhContent, zhContent_);
        DARABONBA_PTR_FROM_JSON(ZhTitle, zhTitle_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->allGroup_ == nullptr && this->approvalId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->excludeUserNameList_ == nullptr
        && this->id_ == nullptr && this->inSwitch_ == nullptr && this->includeGroupIdList_ == nullptr && this->mainButtonTextCh_ == nullptr && this->mainButtonTextEn_ == nullptr
        && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr && this->minorButtonTextCh_ == nullptr && this->minorButtonTextEn_ == nullptr && this->name_ == nullptr
        && this->outSwitch_ == nullptr && this->policyType_ == nullptr && this->portOnList_ == nullptr && this->priority_ == nullptr && this->selectionKey_ == nullptr
        && this->softWareOnList_ == nullptr && this->status_ == nullptr && this->strategySourceType_ == nullptr && this->supportsApproval_ == nullptr && this->usContent_ == nullptr
        && this->usTitle_ == nullptr && this->zhContent_ == nullptr && this->zhTitle_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
      inline List& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // allGroup Field Functions 
      bool hasAllGroup() const { return this->allGroup_ != nullptr;};
      void deleteAllGroup() { this->allGroup_ = nullptr;};
      inline int32_t getAllGroup() const { DARABONBA_PTR_GET_DEFAULT(allGroup_, 0) };
      inline List& setAllGroup(int32_t allGroup) { DARABONBA_PTR_SET_VALUE(allGroup_, allGroup) };


      // approvalId Field Functions 
      bool hasApprovalId() const { return this->approvalId_ != nullptr;};
      void deleteApprovalId() { this->approvalId_ = nullptr;};
      inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
      inline List& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // excludeUserNameList Field Functions 
      bool hasExcludeUserNameList() const { return this->excludeUserNameList_ != nullptr;};
      void deleteExcludeUserNameList() { this->excludeUserNameList_ = nullptr;};
      inline const vector<string> & getExcludeUserNameList() const { DARABONBA_PTR_GET_CONST(excludeUserNameList_, vector<string>) };
      inline vector<string> getExcludeUserNameList() { DARABONBA_PTR_GET(excludeUserNameList_, vector<string>) };
      inline List& setExcludeUserNameList(const vector<string> & excludeUserNameList) { DARABONBA_PTR_SET_VALUE(excludeUserNameList_, excludeUserNameList) };
      inline List& setExcludeUserNameList(vector<string> && excludeUserNameList) { DARABONBA_PTR_SET_RVALUE(excludeUserNameList_, excludeUserNameList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inSwitch Field Functions 
      bool hasInSwitch() const { return this->inSwitch_ != nullptr;};
      void deleteInSwitch() { this->inSwitch_ = nullptr;};
      inline bool getInSwitch() const { DARABONBA_PTR_GET_DEFAULT(inSwitch_, false) };
      inline List& setInSwitch(bool inSwitch) { DARABONBA_PTR_SET_VALUE(inSwitch_, inSwitch) };


      // includeGroupIdList Field Functions 
      bool hasIncludeGroupIdList() const { return this->includeGroupIdList_ != nullptr;};
      void deleteIncludeGroupIdList() { this->includeGroupIdList_ = nullptr;};
      inline const vector<string> & getIncludeGroupIdList() const { DARABONBA_PTR_GET_CONST(includeGroupIdList_, vector<string>) };
      inline vector<string> getIncludeGroupIdList() { DARABONBA_PTR_GET(includeGroupIdList_, vector<string>) };
      inline List& setIncludeGroupIdList(const vector<string> & includeGroupIdList) { DARABONBA_PTR_SET_VALUE(includeGroupIdList_, includeGroupIdList) };
      inline List& setIncludeGroupIdList(vector<string> && includeGroupIdList) { DARABONBA_PTR_SET_RVALUE(includeGroupIdList_, includeGroupIdList) };


      // mainButtonTextCh Field Functions 
      bool hasMainButtonTextCh() const { return this->mainButtonTextCh_ != nullptr;};
      void deleteMainButtonTextCh() { this->mainButtonTextCh_ = nullptr;};
      inline string getMainButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextCh_, "") };
      inline List& setMainButtonTextCh(string mainButtonTextCh) { DARABONBA_PTR_SET_VALUE(mainButtonTextCh_, mainButtonTextCh) };


      // mainButtonTextEn Field Functions 
      bool hasMainButtonTextEn() const { return this->mainButtonTextEn_ != nullptr;};
      void deleteMainButtonTextEn() { this->mainButtonTextEn_ = nullptr;};
      inline string getMainButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(mainButtonTextEn_, "") };
      inline List& setMainButtonTextEn(string mainButtonTextEn) { DARABONBA_PTR_SET_VALUE(mainButtonTextEn_, mainButtonTextEn) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline List& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


      // matchTargetIds Field Functions 
      bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
      void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
      inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
      inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
      inline List& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
      inline List& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


      // minorButtonTextCh Field Functions 
      bool hasMinorButtonTextCh() const { return this->minorButtonTextCh_ != nullptr;};
      void deleteMinorButtonTextCh() { this->minorButtonTextCh_ = nullptr;};
      inline string getMinorButtonTextCh() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextCh_, "") };
      inline List& setMinorButtonTextCh(string minorButtonTextCh) { DARABONBA_PTR_SET_VALUE(minorButtonTextCh_, minorButtonTextCh) };


      // minorButtonTextEn Field Functions 
      bool hasMinorButtonTextEn() const { return this->minorButtonTextEn_ != nullptr;};
      void deleteMinorButtonTextEn() { this->minorButtonTextEn_ = nullptr;};
      inline string getMinorButtonTextEn() const { DARABONBA_PTR_GET_DEFAULT(minorButtonTextEn_, "") };
      inline List& setMinorButtonTextEn(string minorButtonTextEn) { DARABONBA_PTR_SET_VALUE(minorButtonTextEn_, minorButtonTextEn) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outSwitch Field Functions 
      bool hasOutSwitch() const { return this->outSwitch_ != nullptr;};
      void deleteOutSwitch() { this->outSwitch_ = nullptr;};
      inline bool getOutSwitch() const { DARABONBA_PTR_GET_DEFAULT(outSwitch_, false) };
      inline List& setOutSwitch(bool outSwitch) { DARABONBA_PTR_SET_VALUE(outSwitch_, outSwitch) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline int32_t getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
      inline List& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // portOnList Field Functions 
      bool hasPortOnList() const { return this->portOnList_ != nullptr;};
      void deletePortOnList() { this->portOnList_ = nullptr;};
      inline const vector<string> & getPortOnList() const { DARABONBA_PTR_GET_CONST(portOnList_, vector<string>) };
      inline vector<string> getPortOnList() { DARABONBA_PTR_GET(portOnList_, vector<string>) };
      inline List& setPortOnList(const vector<string> & portOnList) { DARABONBA_PTR_SET_VALUE(portOnList_, portOnList) };
      inline List& setPortOnList(vector<string> && portOnList) { DARABONBA_PTR_SET_RVALUE(portOnList_, portOnList) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline List& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // selectionKey Field Functions 
      bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
      void deleteSelectionKey() { this->selectionKey_ = nullptr;};
      inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
      inline List& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


      // softWareOnList Field Functions 
      bool hasSoftWareOnList() const { return this->softWareOnList_ != nullptr;};
      void deleteSoftWareOnList() { this->softWareOnList_ = nullptr;};
      inline const vector<string> & getSoftWareOnList() const { DARABONBA_PTR_GET_CONST(softWareOnList_, vector<string>) };
      inline vector<string> getSoftWareOnList() { DARABONBA_PTR_GET(softWareOnList_, vector<string>) };
      inline List& setSoftWareOnList(const vector<string> & softWareOnList) { DARABONBA_PTR_SET_VALUE(softWareOnList_, softWareOnList) };
      inline List& setSoftWareOnList(vector<string> && softWareOnList) { DARABONBA_PTR_SET_RVALUE(softWareOnList_, softWareOnList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategySourceType Field Functions 
      bool hasStrategySourceType() const { return this->strategySourceType_ != nullptr;};
      void deleteStrategySourceType() { this->strategySourceType_ = nullptr;};
      inline string getStrategySourceType() const { DARABONBA_PTR_GET_DEFAULT(strategySourceType_, "") };
      inline List& setStrategySourceType(string strategySourceType) { DARABONBA_PTR_SET_VALUE(strategySourceType_, strategySourceType) };


      // supportsApproval Field Functions 
      bool hasSupportsApproval() const { return this->supportsApproval_ != nullptr;};
      void deleteSupportsApproval() { this->supportsApproval_ = nullptr;};
      inline int32_t getSupportsApproval() const { DARABONBA_PTR_GET_DEFAULT(supportsApproval_, 0) };
      inline List& setSupportsApproval(int32_t supportsApproval) { DARABONBA_PTR_SET_VALUE(supportsApproval_, supportsApproval) };


      // usContent Field Functions 
      bool hasUsContent() const { return this->usContent_ != nullptr;};
      void deleteUsContent() { this->usContent_ = nullptr;};
      inline string getUsContent() const { DARABONBA_PTR_GET_DEFAULT(usContent_, "") };
      inline List& setUsContent(string usContent) { DARABONBA_PTR_SET_VALUE(usContent_, usContent) };


      // usTitle Field Functions 
      bool hasUsTitle() const { return this->usTitle_ != nullptr;};
      void deleteUsTitle() { this->usTitle_ = nullptr;};
      inline string getUsTitle() const { DARABONBA_PTR_GET_DEFAULT(usTitle_, "") };
      inline List& setUsTitle(string usTitle) { DARABONBA_PTR_SET_VALUE(usTitle_, usTitle) };


      // zhContent Field Functions 
      bool hasZhContent() const { return this->zhContent_ != nullptr;};
      void deleteZhContent() { this->zhContent_ = nullptr;};
      inline string getZhContent() const { DARABONBA_PTR_GET_DEFAULT(zhContent_, "") };
      inline List& setZhContent(string zhContent) { DARABONBA_PTR_SET_VALUE(zhContent_, zhContent) };


      // zhTitle Field Functions 
      bool hasZhTitle() const { return this->zhTitle_ != nullptr;};
      void deleteZhTitle() { this->zhTitle_ = nullptr;};
      inline string getZhTitle() const { DARABONBA_PTR_GET_DEFAULT(zhTitle_, "") };
      inline List& setZhTitle(string zhTitle) { DARABONBA_PTR_SET_VALUE(zhTitle_, zhTitle) };


    protected:
      // The policy action. Valid values:
      // 
      // - **0**: Monitor mode.
      // - **1**: Block startup.
      // - **2**: Block mode.
      // 
      // Valid values for custom rules of proactive defense (PolicyType=2):
      // 
      // - **0**: Allow.
      // - **1**: Block.
      shared_ptr<int32_t> actionType_ {};
      // Specifies whether the policy applies to all user groups. Valid values:
      // 
      // - **0**: No.
      // - **1**: Yes.
      shared_ptr<int32_t> allGroup_ {};
      // The instance ID of the approval.
      shared_ptr<string> approvalId_ {};
      // The timestamp when the policy was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the policy.
      shared_ptr<string> description_ {};
      // The list of usernames to which the policy does not apply.
      shared_ptr<vector<string>> excludeUserNameList_ {};
      // The ID of the policy.
      shared_ptr<int64_t> id_ {};
      // The switch for inbound network traffic.
      shared_ptr<bool> inSwitch_ {};
      // The list of targets in the effective scope.
      shared_ptr<vector<string>> includeGroupIdList_ {};
      // The text of the primary button in Chinese.
      shared_ptr<string> mainButtonTextCh_ {};
      // The text of the primary button in English.
      shared_ptr<string> mainButtonTextEn_ {};
      // The effective scope mode. Valid values:
      // 
      // - **UserGroupAll**: All user groups.
      // - **UserGroupNormal**: Specified user groups.
      // - **DeviceGroupNormal**: Specified device groups.
      // - **DevTagNormal**: Specified device tags.
      // 
      // The meaning of MatchTargetIds is determined by this field.
      shared_ptr<string> matchMode_ {};
      // The list of targets in the effective scope. UserGroupNormal corresponds to user group IDs, DeviceGroupNormal corresponds to device group IDs, and DevTagNormal corresponds to device tags. If MatchMode is set to UserGroupAll, you do not need to specify targets.
      shared_ptr<vector<string>> matchTargetIds_ {};
      // The text of the secondary button in Chinese.
      shared_ptr<string> minorButtonTextCh_ {};
      // The text of the secondary button in English.
      shared_ptr<string> minorButtonTextEn_ {};
      // The Policy Name.
      shared_ptr<string> name_ {};
      // The switch for outbound network traffic.
      shared_ptr<bool> outSwitch_ {};
      // The policy type. Valid values:
      // 
      // - **0**: Software hardening.
      // - **1**: Firewall.
      // - **2**: Proactive defense.
      shared_ptr<int32_t> policyType_ {};
      // The list of enabled ports.
      shared_ptr<vector<string>> portOnList_ {};
      // The policy priority. A smaller value indicates a higher priority. Valid values: greater than 0.
      shared_ptr<int32_t> priority_ {};
      // The association key of the policy configuration, which is used to associate the policy with its process or switch configuration.
      shared_ptr<string> selectionKey_ {};
      // The list of main process names of the software for which integrity check is enabled. The elements correspond to the Process field returned by GetSwitchInfoListByType.
      shared_ptr<vector<string>> softWareOnList_ {};
      // The status of the policy. Valid values:
      // 
      // - **0**: Disabled.
      // - **1**: Enabled.
      shared_ptr<int32_t> status_ {};
      // The source of the rule for proactive defense (PolicyType=2). Valid values:
      // 
      // - **SYSTEM**: System rule.
      // - **CUSTOM**: Custom rule.
      shared_ptr<string> strategySourceType_ {};
      // Specifies whether reporting and approval are supported. Valid values:
      // 
      // - **0**: Not supported.
      // - **1**: Supported.
      shared_ptr<int32_t> supportsApproval_ {};
      // The content of the pop-up prompt in English.
      shared_ptr<string> usContent_ {};
      // The title of the pop-up prompt in English.
      shared_ptr<string> usTitle_ {};
      // The content of the pop-up prompt in Chinese.
      shared_ptr<string> zhContent_ {};
      // The title of the pop-up prompt in Chinese.
      shared_ptr<string> zhTitle_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListClientRuleStrategyResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListClientRuleStrategyResponseBody::List>) };
    inline vector<ListClientRuleStrategyResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListClientRuleStrategyResponseBody::List>) };
    inline ListClientRuleStrategyResponseBody& setList(const vector<ListClientRuleStrategyResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListClientRuleStrategyResponseBody& setList(vector<ListClientRuleStrategyResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClientRuleStrategyResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClientRuleStrategyResponseBody::PageInfo) };
    inline ListClientRuleStrategyResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClientRuleStrategyResponseBody::PageInfo) };
    inline ListClientRuleStrategyResponseBody& setPageInfo(const ListClientRuleStrategyResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClientRuleStrategyResponseBody& setPageInfo(ListClientRuleStrategyResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientRuleStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of policies.
    shared_ptr<vector<ListClientRuleStrategyResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListClientRuleStrategyResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
