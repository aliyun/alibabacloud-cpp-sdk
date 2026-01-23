// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEQUALITYRULESCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEQUALITYRULESCHEDULESREQUEST_HPP_
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
  class RemoveQualityRuleSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveQualityRuleSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveQualityRuleSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveQualityRuleSchedulesRequest() = default ;
    RemoveQualityRuleSchedulesRequest(const RemoveQualityRuleSchedulesRequest &) = default ;
    RemoveQualityRuleSchedulesRequest(RemoveQualityRuleSchedulesRequest &&) = default ;
    RemoveQualityRuleSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveQualityRuleSchedulesRequest() = default ;
    RemoveQualityRuleSchedulesRequest& operator=(const RemoveQualityRuleSchedulesRequest &) = default ;
    RemoveQualityRuleSchedulesRequest& operator=(RemoveQualityRuleSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ScheduleIdList, scheduleIdList_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ScheduleIdList, scheduleIdList_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      RemoveCommand() = default ;
      RemoveCommand(const RemoveCommand &) = default ;
      RemoveCommand(RemoveCommand &&) = default ;
      RemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveCommand() = default ;
      RemoveCommand& operator=(const RemoveCommand &) = default ;
      RemoveCommand& operator=(RemoveCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->scheduleIdList_ == nullptr && this->watchId_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline RemoveCommand& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // scheduleIdList Field Functions 
      bool hasScheduleIdList() const { return this->scheduleIdList_ != nullptr;};
      void deleteScheduleIdList() { this->scheduleIdList_ = nullptr;};
      inline const vector<int64_t> & getScheduleIdList() const { DARABONBA_PTR_GET_CONST(scheduleIdList_, vector<int64_t>) };
      inline vector<int64_t> getScheduleIdList() { DARABONBA_PTR_GET(scheduleIdList_, vector<int64_t>) };
      inline RemoveCommand& setScheduleIdList(const vector<int64_t> & scheduleIdList) { DARABONBA_PTR_SET_VALUE(scheduleIdList_, scheduleIdList) };
      inline RemoveCommand& setScheduleIdList(vector<int64_t> && scheduleIdList) { DARABONBA_PTR_SET_RVALUE(scheduleIdList_, scheduleIdList) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline RemoveCommand& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> ruleId_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> scheduleIdList_ {};
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveQualityRuleSchedulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveQualityRuleSchedulesRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveQualityRuleSchedulesRequest::RemoveCommand) };
    inline RemoveQualityRuleSchedulesRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveQualityRuleSchedulesRequest::RemoveCommand) };
    inline RemoveQualityRuleSchedulesRequest& setRemoveCommand(const RemoveQualityRuleSchedulesRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveQualityRuleSchedulesRequest& setRemoveCommand(RemoveQualityRuleSchedulesRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RemoveQualityRuleSchedulesRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
