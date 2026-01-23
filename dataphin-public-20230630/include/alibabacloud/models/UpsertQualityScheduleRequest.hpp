// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYSCHEDULEREQUEST_HPP_
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
  class UpsertQualityScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommand_);
    };
    UpsertQualityScheduleRequest() = default ;
    UpsertQualityScheduleRequest(const UpsertQualityScheduleRequest &) = default ;
    UpsertQualityScheduleRequest(UpsertQualityScheduleRequest &&) = default ;
    UpsertQualityScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityScheduleRequest() = default ;
    UpsertQualityScheduleRequest& operator=(const UpsertQualityScheduleRequest &) = default ;
    UpsertQualityScheduleRequest& operator=(UpsertQualityScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpsertCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpsertCommand& obj) { 
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_TO_JSON(PeriodScheduleIntervalType, periodScheduleIntervalType_);
        DARABONBA_PTR_TO_JSON(PeriodScheduleParamList, periodScheduleParamList_);
        DARABONBA_PTR_TO_JSON(StaticTaskTriggerType, staticTaskTriggerType_);
        DARABONBA_PTR_TO_JSON(TriggerNodeList, triggerNodeList_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(ValidatePartitionType, validatePartitionType_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, UpsertCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PartitionExpression, partitionExpression_);
        DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
        DARABONBA_PTR_FROM_JSON(PeriodScheduleIntervalType, periodScheduleIntervalType_);
        DARABONBA_PTR_FROM_JSON(PeriodScheduleParamList, periodScheduleParamList_);
        DARABONBA_PTR_FROM_JSON(StaticTaskTriggerType, staticTaskTriggerType_);
        DARABONBA_PTR_FROM_JSON(TriggerNodeList, triggerNodeList_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(ValidatePartitionType, validatePartitionType_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      UpsertCommand() = default ;
      UpsertCommand(const UpsertCommand &) = default ;
      UpsertCommand(UpsertCommand &&) = default ;
      UpsertCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpsertCommand() = default ;
      UpsertCommand& operator=(const UpsertCommand &) = default ;
      UpsertCommand& operator=(UpsertCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->partitionExpression_ == nullptr && this->partitionType_ == nullptr && this->periodScheduleIntervalType_ == nullptr
        && this->periodScheduleParamList_ == nullptr && this->staticTaskTriggerType_ == nullptr && this->triggerNodeList_ == nullptr && this->triggerType_ == nullptr && this->type_ == nullptr
        && this->validatePartitionType_ == nullptr && this->watchId_ == nullptr; };
      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline UpsertCommand& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpsertCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpsertCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // partitionExpression Field Functions 
      bool hasPartitionExpression() const { return this->partitionExpression_ != nullptr;};
      void deletePartitionExpression() { this->partitionExpression_ = nullptr;};
      inline string getPartitionExpression() const { DARABONBA_PTR_GET_DEFAULT(partitionExpression_, "") };
      inline UpsertCommand& setPartitionExpression(string partitionExpression) { DARABONBA_PTR_SET_VALUE(partitionExpression_, partitionExpression) };


      // partitionType Field Functions 
      bool hasPartitionType() const { return this->partitionType_ != nullptr;};
      void deletePartitionType() { this->partitionType_ = nullptr;};
      inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
      inline UpsertCommand& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


      // periodScheduleIntervalType Field Functions 
      bool hasPeriodScheduleIntervalType() const { return this->periodScheduleIntervalType_ != nullptr;};
      void deletePeriodScheduleIntervalType() { this->periodScheduleIntervalType_ = nullptr;};
      inline string getPeriodScheduleIntervalType() const { DARABONBA_PTR_GET_DEFAULT(periodScheduleIntervalType_, "") };
      inline UpsertCommand& setPeriodScheduleIntervalType(string periodScheduleIntervalType) { DARABONBA_PTR_SET_VALUE(periodScheduleIntervalType_, periodScheduleIntervalType) };


      // periodScheduleParamList Field Functions 
      bool hasPeriodScheduleParamList() const { return this->periodScheduleParamList_ != nullptr;};
      void deletePeriodScheduleParamList() { this->periodScheduleParamList_ = nullptr;};
      inline const vector<string> & getPeriodScheduleParamList() const { DARABONBA_PTR_GET_CONST(periodScheduleParamList_, vector<string>) };
      inline vector<string> getPeriodScheduleParamList() { DARABONBA_PTR_GET(periodScheduleParamList_, vector<string>) };
      inline UpsertCommand& setPeriodScheduleParamList(const vector<string> & periodScheduleParamList) { DARABONBA_PTR_SET_VALUE(periodScheduleParamList_, periodScheduleParamList) };
      inline UpsertCommand& setPeriodScheduleParamList(vector<string> && periodScheduleParamList) { DARABONBA_PTR_SET_RVALUE(periodScheduleParamList_, periodScheduleParamList) };


      // staticTaskTriggerType Field Functions 
      bool hasStaticTaskTriggerType() const { return this->staticTaskTriggerType_ != nullptr;};
      void deleteStaticTaskTriggerType() { this->staticTaskTriggerType_ = nullptr;};
      inline string getStaticTaskTriggerType() const { DARABONBA_PTR_GET_DEFAULT(staticTaskTriggerType_, "") };
      inline UpsertCommand& setStaticTaskTriggerType(string staticTaskTriggerType) { DARABONBA_PTR_SET_VALUE(staticTaskTriggerType_, staticTaskTriggerType) };


      // triggerNodeList Field Functions 
      bool hasTriggerNodeList() const { return this->triggerNodeList_ != nullptr;};
      void deleteTriggerNodeList() { this->triggerNodeList_ = nullptr;};
      inline const vector<string> & getTriggerNodeList() const { DARABONBA_PTR_GET_CONST(triggerNodeList_, vector<string>) };
      inline vector<string> getTriggerNodeList() { DARABONBA_PTR_GET(triggerNodeList_, vector<string>) };
      inline UpsertCommand& setTriggerNodeList(const vector<string> & triggerNodeList) { DARABONBA_PTR_SET_VALUE(triggerNodeList_, triggerNodeList) };
      inline UpsertCommand& setTriggerNodeList(vector<string> && triggerNodeList) { DARABONBA_PTR_SET_RVALUE(triggerNodeList_, triggerNodeList) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline UpsertCommand& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpsertCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // validatePartitionType Field Functions 
      bool hasValidatePartitionType() const { return this->validatePartitionType_ != nullptr;};
      void deleteValidatePartitionType() { this->validatePartitionType_ = nullptr;};
      inline string getValidatePartitionType() const { DARABONBA_PTR_GET_DEFAULT(validatePartitionType_, "") };
      inline UpsertCommand& setValidatePartitionType(string validatePartitionType) { DARABONBA_PTR_SET_VALUE(validatePartitionType_, validatePartitionType) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline UpsertCommand& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<string> cronExpression_ {};
      shared_ptr<int64_t> id_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> partitionExpression_ {};
      shared_ptr<string> partitionType_ {};
      shared_ptr<string> periodScheduleIntervalType_ {};
      shared_ptr<vector<string>> periodScheduleParamList_ {};
      shared_ptr<string> staticTaskTriggerType_ {};
      shared_ptr<vector<string>> triggerNodeList_ {};
      shared_ptr<string> triggerType_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
      shared_ptr<string> validatePartitionType_ {};
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->upsertCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityScheduleRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // upsertCommand Field Functions 
    bool hasUpsertCommand() const { return this->upsertCommand_ != nullptr;};
    void deleteUpsertCommand() { this->upsertCommand_ = nullptr;};
    inline const UpsertQualityScheduleRequest::UpsertCommand & getUpsertCommand() const { DARABONBA_PTR_GET_CONST(upsertCommand_, UpsertQualityScheduleRequest::UpsertCommand) };
    inline UpsertQualityScheduleRequest::UpsertCommand getUpsertCommand() { DARABONBA_PTR_GET(upsertCommand_, UpsertQualityScheduleRequest::UpsertCommand) };
    inline UpsertQualityScheduleRequest& setUpsertCommand(const UpsertQualityScheduleRequest::UpsertCommand & upsertCommand) { DARABONBA_PTR_SET_VALUE(upsertCommand_, upsertCommand) };
    inline UpsertQualityScheduleRequest& setUpsertCommand(UpsertQualityScheduleRequest::UpsertCommand && upsertCommand) { DARABONBA_PTR_SET_RVALUE(upsertCommand_, upsertCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpsertQualityScheduleRequest::UpsertCommand> upsertCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
