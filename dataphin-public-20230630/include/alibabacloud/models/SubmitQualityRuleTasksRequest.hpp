// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITQUALITYRULETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITQUALITYRULETASKSREQUEST_HPP_
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
  class SubmitQualityRuleTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitQualityRuleTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitQualityRuleTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitQualityRuleTasksRequest() = default ;
    SubmitQualityRuleTasksRequest(const SubmitQualityRuleTasksRequest &) = default ;
    SubmitQualityRuleTasksRequest(SubmitQualityRuleTasksRequest &&) = default ;
    SubmitQualityRuleTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitQualityRuleTasksRequest() = default ;
    SubmitQualityRuleTasksRequest& operator=(const SubmitQualityRuleTasksRequest &) = default ;
    SubmitQualityRuleTasksRequest& operator=(SubmitQualityRuleTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(IsTestRun, isTestRun_);
        DARABONBA_PTR_TO_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_TO_JSON(PartitionExpressionFrom, partitionExpressionFrom_);
        DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_TO_JSON(WatchRuleIdList, watchRuleIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(IsTestRun, isTestRun_);
        DARABONBA_PTR_FROM_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_FROM_JSON(PartitionExpressionFrom, partitionExpressionFrom_);
        DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_FROM_JSON(WatchRuleIdList, watchRuleIdList_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WatchRuleIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WatchRuleIdList& obj) { 
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(WatchId, watchId_);
        };
        friend void from_json(const Darabonba::Json& j, WatchRuleIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
        };
        WatchRuleIdList() = default ;
        WatchRuleIdList(const WatchRuleIdList &) = default ;
        WatchRuleIdList(WatchRuleIdList &&) = default ;
        WatchRuleIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WatchRuleIdList() = default ;
        WatchRuleIdList& operator=(const WatchRuleIdList &) = default ;
        WatchRuleIdList& operator=(WatchRuleIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->watchId_ == nullptr; };
        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline WatchRuleIdList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // watchId Field Functions 
        bool hasWatchId() const { return this->watchId_ != nullptr;};
        void deleteWatchId() { this->watchId_ = nullptr;};
        inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
        inline WatchRuleIdList& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> ruleId_ {};
        // This parameter is required.
        shared_ptr<int64_t> watchId_ {};
      };

      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->isTestRun_ == nullptr && this->partitionExpression_ == nullptr && this->partitionExpressionFrom_ == nullptr && this->scheduleId_ == nullptr && this->watchRuleIdList_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline SubmitCommand& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // isTestRun Field Functions 
      bool hasIsTestRun() const { return this->isTestRun_ != nullptr;};
      void deleteIsTestRun() { this->isTestRun_ = nullptr;};
      inline bool getIsTestRun() const { DARABONBA_PTR_GET_DEFAULT(isTestRun_, false) };
      inline SubmitCommand& setIsTestRun(bool isTestRun) { DARABONBA_PTR_SET_VALUE(isTestRun_, isTestRun) };


      // partitionExpression Field Functions 
      bool hasPartitionExpression() const { return this->partitionExpression_ != nullptr;};
      void deletePartitionExpression() { this->partitionExpression_ = nullptr;};
      inline string getPartitionExpression() const { DARABONBA_PTR_GET_DEFAULT(partitionExpression_, "") };
      inline SubmitCommand& setPartitionExpression(string partitionExpression) { DARABONBA_PTR_SET_VALUE(partitionExpression_, partitionExpression) };


      // partitionExpressionFrom Field Functions 
      bool hasPartitionExpressionFrom() const { return this->partitionExpressionFrom_ != nullptr;};
      void deletePartitionExpressionFrom() { this->partitionExpressionFrom_ = nullptr;};
      inline string getPartitionExpressionFrom() const { DARABONBA_PTR_GET_DEFAULT(partitionExpressionFrom_, "") };
      inline SubmitCommand& setPartitionExpressionFrom(string partitionExpressionFrom) { DARABONBA_PTR_SET_VALUE(partitionExpressionFrom_, partitionExpressionFrom) };


      // scheduleId Field Functions 
      bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
      void deleteScheduleId() { this->scheduleId_ = nullptr;};
      inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
      inline SubmitCommand& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


      // watchRuleIdList Field Functions 
      bool hasWatchRuleIdList() const { return this->watchRuleIdList_ != nullptr;};
      void deleteWatchRuleIdList() { this->watchRuleIdList_ = nullptr;};
      inline const vector<SubmitCommand::WatchRuleIdList> & getWatchRuleIdList() const { DARABONBA_PTR_GET_CONST(watchRuleIdList_, vector<SubmitCommand::WatchRuleIdList>) };
      inline vector<SubmitCommand::WatchRuleIdList> getWatchRuleIdList() { DARABONBA_PTR_GET(watchRuleIdList_, vector<SubmitCommand::WatchRuleIdList>) };
      inline SubmitCommand& setWatchRuleIdList(const vector<SubmitCommand::WatchRuleIdList> & watchRuleIdList) { DARABONBA_PTR_SET_VALUE(watchRuleIdList_, watchRuleIdList) };
      inline SubmitCommand& setWatchRuleIdList(vector<SubmitCommand::WatchRuleIdList> && watchRuleIdList) { DARABONBA_PTR_SET_RVALUE(watchRuleIdList_, watchRuleIdList) };


    protected:
      shared_ptr<string> bizDate_ {};
      // This parameter is required.
      shared_ptr<bool> isTestRun_ {};
      shared_ptr<string> partitionExpression_ {};
      shared_ptr<string> partitionExpressionFrom_ {};
      shared_ptr<int64_t> scheduleId_ {};
      // This parameter is required.
      shared_ptr<vector<SubmitCommand::WatchRuleIdList>> watchRuleIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitQualityRuleTasksRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitQualityRuleTasksRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitQualityRuleTasksRequest::SubmitCommand) };
    inline SubmitQualityRuleTasksRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitQualityRuleTasksRequest::SubmitCommand) };
    inline SubmitQualityRuleTasksRequest& setSubmitCommand(const SubmitQualityRuleTasksRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitQualityRuleTasksRequest& setSubmitCommand(SubmitQualityRuleTasksRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<SubmitQualityRuleTasksRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
