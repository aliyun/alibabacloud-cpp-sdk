// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNQUALITYRULEOFALLRULESCOPESCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNQUALITYRULEOFALLRULESCOPESCHEDULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AssignQualityRuleOfAllRuleScopeSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignQualityRuleOfAllRuleScopeSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssignCommand, assignCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignQualityRuleOfAllRuleScopeSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignCommand, assignCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AssignQualityRuleOfAllRuleScopeSchedulesRequest() = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesRequest(const AssignQualityRuleOfAllRuleScopeSchedulesRequest &) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesRequest(AssignQualityRuleOfAllRuleScopeSchedulesRequest &&) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignQualityRuleOfAllRuleScopeSchedulesRequest() = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesRequest& operator=(const AssignQualityRuleOfAllRuleScopeSchedulesRequest &) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesRequest& operator=(AssignQualityRuleOfAllRuleScopeSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssignCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssignCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
        DARABONBA_PTR_TO_JSON(ScheduleIdList, scheduleIdList_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, AssignCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
        DARABONBA_PTR_FROM_JSON(ScheduleIdList, scheduleIdList_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      AssignCommand() = default ;
      AssignCommand(const AssignCommand &) = default ;
      AssignCommand(AssignCommand &&) = default ;
      AssignCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssignCommand() = default ;
      AssignCommand& operator=(const AssignCommand &) = default ;
      AssignCommand& operator=(AssignCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleIdList_ == nullptr
        && this->scheduleIdList_ == nullptr && this->watchId_ == nullptr; };
      // ruleIdList Field Functions 
      bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
      void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
      inline const vector<int64_t> & getRuleIdList() const { DARABONBA_PTR_GET_CONST(ruleIdList_, vector<int64_t>) };
      inline vector<int64_t> getRuleIdList() { DARABONBA_PTR_GET(ruleIdList_, vector<int64_t>) };
      inline AssignCommand& setRuleIdList(const vector<int64_t> & ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };
      inline AssignCommand& setRuleIdList(vector<int64_t> && ruleIdList) { DARABONBA_PTR_SET_RVALUE(ruleIdList_, ruleIdList) };


      // scheduleIdList Field Functions 
      bool hasScheduleIdList() const { return this->scheduleIdList_ != nullptr;};
      void deleteScheduleIdList() { this->scheduleIdList_ = nullptr;};
      inline const vector<int64_t> & getScheduleIdList() const { DARABONBA_PTR_GET_CONST(scheduleIdList_, vector<int64_t>) };
      inline vector<int64_t> getScheduleIdList() { DARABONBA_PTR_GET(scheduleIdList_, vector<int64_t>) };
      inline AssignCommand& setScheduleIdList(const vector<int64_t> & scheduleIdList) { DARABONBA_PTR_SET_VALUE(scheduleIdList_, scheduleIdList) };
      inline AssignCommand& setScheduleIdList(vector<int64_t> && scheduleIdList) { DARABONBA_PTR_SET_RVALUE(scheduleIdList_, scheduleIdList) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline AssignCommand& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<int64_t>> ruleIdList_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> scheduleIdList_ {};
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->assignCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // assignCommand Field Functions 
    bool hasAssignCommand() const { return this->assignCommand_ != nullptr;};
    void deleteAssignCommand() { this->assignCommand_ = nullptr;};
    inline const AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand & getAssignCommand() const { DARABONBA_PTR_GET_CONST(assignCommand_, AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand) };
    inline AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand getAssignCommand() { DARABONBA_PTR_GET(assignCommand_, AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand) };
    inline AssignQualityRuleOfAllRuleScopeSchedulesRequest& setAssignCommand(const AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand & assignCommand) { DARABONBA_PTR_SET_VALUE(assignCommand_, assignCommand) };
    inline AssignQualityRuleOfAllRuleScopeSchedulesRequest& setAssignCommand(AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand && assignCommand) { DARABONBA_PTR_SET_RVALUE(assignCommand_, assignCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AssignQualityRuleOfAllRuleScopeSchedulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<AssignQualityRuleOfAllRuleScopeSchedulesRequest::AssignCommand> assignCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
