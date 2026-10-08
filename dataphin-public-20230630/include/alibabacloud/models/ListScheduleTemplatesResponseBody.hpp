// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESRESPONSEBODY_HPP_
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
  class ListScheduleTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ListScheduleTemplatesResponse, listScheduleTemplatesResponse_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ListScheduleTemplatesResponse, listScheduleTemplatesResponse_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScheduleTemplatesResponseBody() = default ;
    ListScheduleTemplatesResponseBody(const ListScheduleTemplatesResponseBody &) = default ;
    ListScheduleTemplatesResponseBody(ListScheduleTemplatesResponseBody &&) = default ;
    ListScheduleTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleTemplatesResponseBody() = default ;
    ListScheduleTemplatesResponseBody& operator=(const ListScheduleTemplatesResponseBody &) = default ;
    ListScheduleTemplatesResponseBody& operator=(ListScheduleTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListScheduleTemplatesResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListScheduleTemplatesResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      };
      friend void from_json(const Darabonba::Json& j, ListScheduleTemplatesResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      };
      ListScheduleTemplatesResponse() = default ;
      ListScheduleTemplatesResponse(const ListScheduleTemplatesResponse &) = default ;
      ListScheduleTemplatesResponse(ListScheduleTemplatesResponse &&) = default ;
      ListScheduleTemplatesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListScheduleTemplatesResponse() = default ;
      ListScheduleTemplatesResponse& operator=(const ListScheduleTemplatesResponse &) = default ;
      ListScheduleTemplatesResponse& operator=(ListScheduleTemplatesResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionScheduleParamList, conditionScheduleParamList_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(CustomCronExpression, customCronExpression_);
          DARABONBA_PTR_TO_JSON(CustomIntervalConfig, customIntervalConfig_);
          DARABONBA_PTR_TO_JSON(CustomIntervalConfigType, customIntervalConfigType_);
          DARABONBA_PTR_TO_JSON(CustomIntervalConfigs, customIntervalConfigs_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
          DARABONBA_PTR_TO_JSON(HasReference, hasReference_);
          DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_TO_JSON(ScheduleIntervalType, scheduleIntervalType_);
          DARABONBA_PTR_TO_JSON(ScheduleTemplateDesc, scheduleTemplateDesc_);
          DARABONBA_PTR_TO_JSON(ScheduleTemplateId, scheduleTemplateId_);
          DARABONBA_PTR_TO_JSON(ScheduleTemplateName, scheduleTemplateName_);
          DARABONBA_PTR_TO_JSON(ScheduleTemplateType, scheduleTemplateType_);
          DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
          DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
        };
        friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionScheduleParamList, conditionScheduleParamList_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(CustomCronExpression, customCronExpression_);
          DARABONBA_PTR_FROM_JSON(CustomIntervalConfig, customIntervalConfig_);
          DARABONBA_PTR_FROM_JSON(CustomIntervalConfigType, customIntervalConfigType_);
          DARABONBA_PTR_FROM_JSON(CustomIntervalConfigs, customIntervalConfigs_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(HasReference, hasReference_);
          DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_FROM_JSON(ScheduleIntervalType, scheduleIntervalType_);
          DARABONBA_PTR_FROM_JSON(ScheduleTemplateDesc, scheduleTemplateDesc_);
          DARABONBA_PTR_FROM_JSON(ScheduleTemplateId, scheduleTemplateId_);
          DARABONBA_PTR_FROM_JSON(ScheduleTemplateName, scheduleTemplateName_);
          DARABONBA_PTR_FROM_JSON(ScheduleTemplateType, scheduleTemplateType_);
          DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
          DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
        };
        ResultData() = default ;
        ResultData(const ResultData &) = default ;
        ResultData(ResultData &&) = default ;
        ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultData() = default ;
        ResultData& operator=(const ResultData &) = default ;
        ResultData& operator=(ResultData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomIntervalConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomIntervalConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
            DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, CustomIntervalConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
            DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          CustomIntervalConfigs() = default ;
          CustomIntervalConfigs(const CustomIntervalConfigs &) = default ;
          CustomIntervalConfigs(CustomIntervalConfigs &&) = default ;
          CustomIntervalConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomIntervalConfigs() = default ;
          CustomIntervalConfigs& operator=(const CustomIntervalConfigs &) = default ;
          CustomIntervalConfigs& operator=(CustomIntervalConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->intervalUnit_ == nullptr && this->schedulePeriod_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline CustomIntervalConfigs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
          inline CustomIntervalConfigs& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // intervalUnit Field Functions 
          bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
          void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
          inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
          inline CustomIntervalConfigs& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


          // schedulePeriod Field Functions 
          bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
          void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
          inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
          inline CustomIntervalConfigs& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline CustomIntervalConfigs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<int32_t> interval_ {};
          shared_ptr<string> intervalUnit_ {};
          shared_ptr<string> schedulePeriod_ {};
          shared_ptr<string> startTime_ {};
        };

        class CustomIntervalConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomIntervalConfig& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
            DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, CustomIntervalConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
            DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          CustomIntervalConfig() = default ;
          CustomIntervalConfig(const CustomIntervalConfig &) = default ;
          CustomIntervalConfig(CustomIntervalConfig &&) = default ;
          CustomIntervalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomIntervalConfig() = default ;
          CustomIntervalConfig& operator=(const CustomIntervalConfig &) = default ;
          CustomIntervalConfig& operator=(CustomIntervalConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->intervalUnit_ == nullptr && this->schedulePeriod_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline CustomIntervalConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
          inline CustomIntervalConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // intervalUnit Field Functions 
          bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
          void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
          inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
          inline CustomIntervalConfig& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


          // schedulePeriod Field Functions 
          bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
          void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
          inline string getSchedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
          inline CustomIntervalConfig& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline CustomIntervalConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<int32_t> interval_ {};
          shared_ptr<string> intervalUnit_ {};
          shared_ptr<string> schedulePeriod_ {};
          shared_ptr<string> startTime_ {};
        };

        class ConditionScheduleParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConditionScheduleParamList& obj) { 
            DARABONBA_PTR_TO_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(FollowScheduleParam, followScheduleParam_);
            DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_TO_JSON(ScheduleConditionJson, scheduleConditionJson_);
            DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
          };
          friend void from_json(const Darabonba::Json& j, ConditionScheduleParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(ConditionName, conditionName_);
            DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(FollowScheduleParam, followScheduleParam_);
            DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_FROM_JSON(ScheduleConditionJson, scheduleConditionJson_);
            DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
          };
          ConditionScheduleParamList() = default ;
          ConditionScheduleParamList(const ConditionScheduleParamList &) = default ;
          ConditionScheduleParamList(ConditionScheduleParamList &&) = default ;
          ConditionScheduleParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConditionScheduleParamList() = default ;
          ConditionScheduleParamList& operator=(const ConditionScheduleParamList &) = default ;
          ConditionScheduleParamList& operator=(ConditionScheduleParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->conditionName_ == nullptr
        && this->cronExpression_ == nullptr && this->enable_ == nullptr && this->followScheduleParam_ == nullptr && this->nodeStatus_ == nullptr && this->scheduleConditionJson_ == nullptr
        && this->scheduleTime_ == nullptr; };
          // conditionName Field Functions 
          bool hasConditionName() const { return this->conditionName_ != nullptr;};
          void deleteConditionName() { this->conditionName_ = nullptr;};
          inline string getConditionName() const { DARABONBA_PTR_GET_DEFAULT(conditionName_, "") };
          inline ConditionScheduleParamList& setConditionName(string conditionName) { DARABONBA_PTR_SET_VALUE(conditionName_, conditionName) };


          // cronExpression Field Functions 
          bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
          void deleteCronExpression() { this->cronExpression_ = nullptr;};
          inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
          inline ConditionScheduleParamList& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline ConditionScheduleParamList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // followScheduleParam Field Functions 
          bool hasFollowScheduleParam() const { return this->followScheduleParam_ != nullptr;};
          void deleteFollowScheduleParam() { this->followScheduleParam_ = nullptr;};
          inline bool getFollowScheduleParam() const { DARABONBA_PTR_GET_DEFAULT(followScheduleParam_, false) };
          inline ConditionScheduleParamList& setFollowScheduleParam(bool followScheduleParam) { DARABONBA_PTR_SET_VALUE(followScheduleParam_, followScheduleParam) };


          // nodeStatus Field Functions 
          bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
          void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
          inline int32_t getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, 0) };
          inline ConditionScheduleParamList& setNodeStatus(int32_t nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


          // scheduleConditionJson Field Functions 
          bool hasScheduleConditionJson() const { return this->scheduleConditionJson_ != nullptr;};
          void deleteScheduleConditionJson() { this->scheduleConditionJson_ = nullptr;};
          inline string getScheduleConditionJson() const { DARABONBA_PTR_GET_DEFAULT(scheduleConditionJson_, "") };
          inline ConditionScheduleParamList& setScheduleConditionJson(string scheduleConditionJson) { DARABONBA_PTR_SET_VALUE(scheduleConditionJson_, scheduleConditionJson) };


          // scheduleTime Field Functions 
          bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
          void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
          inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
          inline ConditionScheduleParamList& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


        protected:
          shared_ptr<string> conditionName_ {};
          shared_ptr<string> cronExpression_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<bool> followScheduleParam_ {};
          shared_ptr<int32_t> nodeStatus_ {};
          shared_ptr<string> scheduleConditionJson_ {};
          shared_ptr<string> scheduleTime_ {};
        };

        virtual bool empty() const override { return this->conditionScheduleParamList_ == nullptr
        && this->cronExpression_ == nullptr && this->customCronExpression_ == nullptr && this->customIntervalConfig_ == nullptr && this->customIntervalConfigType_ == nullptr && this->customIntervalConfigs_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr && this->hasReference_ == nullptr && this->modifierId_ == nullptr && this->modifierName_ == nullptr
        && this->scheduleIntervalType_ == nullptr && this->scheduleTemplateDesc_ == nullptr && this->scheduleTemplateId_ == nullptr && this->scheduleTemplateName_ == nullptr && this->scheduleTemplateType_ == nullptr
        && this->scheduleType_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->validEndDate_ == nullptr
        && this->validStartDate_ == nullptr; };
        // conditionScheduleParamList Field Functions 
        bool hasConditionScheduleParamList() const { return this->conditionScheduleParamList_ != nullptr;};
        void deleteConditionScheduleParamList() { this->conditionScheduleParamList_ = nullptr;};
        inline const vector<ResultData::ConditionScheduleParamList> & getConditionScheduleParamList() const { DARABONBA_PTR_GET_CONST(conditionScheduleParamList_, vector<ResultData::ConditionScheduleParamList>) };
        inline vector<ResultData::ConditionScheduleParamList> getConditionScheduleParamList() { DARABONBA_PTR_GET(conditionScheduleParamList_, vector<ResultData::ConditionScheduleParamList>) };
        inline ResultData& setConditionScheduleParamList(const vector<ResultData::ConditionScheduleParamList> & conditionScheduleParamList) { DARABONBA_PTR_SET_VALUE(conditionScheduleParamList_, conditionScheduleParamList) };
        inline ResultData& setConditionScheduleParamList(vector<ResultData::ConditionScheduleParamList> && conditionScheduleParamList) { DARABONBA_PTR_SET_RVALUE(conditionScheduleParamList_, conditionScheduleParamList) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline ResultData& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // customCronExpression Field Functions 
        bool hasCustomCronExpression() const { return this->customCronExpression_ != nullptr;};
        void deleteCustomCronExpression() { this->customCronExpression_ = nullptr;};
        inline bool getCustomCronExpression() const { DARABONBA_PTR_GET_DEFAULT(customCronExpression_, false) };
        inline ResultData& setCustomCronExpression(bool customCronExpression) { DARABONBA_PTR_SET_VALUE(customCronExpression_, customCronExpression) };


        // customIntervalConfig Field Functions 
        bool hasCustomIntervalConfig() const { return this->customIntervalConfig_ != nullptr;};
        void deleteCustomIntervalConfig() { this->customIntervalConfig_ = nullptr;};
        inline const ResultData::CustomIntervalConfig & getCustomIntervalConfig() const { DARABONBA_PTR_GET_CONST(customIntervalConfig_, ResultData::CustomIntervalConfig) };
        inline ResultData::CustomIntervalConfig getCustomIntervalConfig() { DARABONBA_PTR_GET(customIntervalConfig_, ResultData::CustomIntervalConfig) };
        inline ResultData& setCustomIntervalConfig(const ResultData::CustomIntervalConfig & customIntervalConfig) { DARABONBA_PTR_SET_VALUE(customIntervalConfig_, customIntervalConfig) };
        inline ResultData& setCustomIntervalConfig(ResultData::CustomIntervalConfig && customIntervalConfig) { DARABONBA_PTR_SET_RVALUE(customIntervalConfig_, customIntervalConfig) };


        // customIntervalConfigType Field Functions 
        bool hasCustomIntervalConfigType() const { return this->customIntervalConfigType_ != nullptr;};
        void deleteCustomIntervalConfigType() { this->customIntervalConfigType_ = nullptr;};
        inline string getCustomIntervalConfigType() const { DARABONBA_PTR_GET_DEFAULT(customIntervalConfigType_, "") };
        inline ResultData& setCustomIntervalConfigType(string customIntervalConfigType) { DARABONBA_PTR_SET_VALUE(customIntervalConfigType_, customIntervalConfigType) };


        // customIntervalConfigs Field Functions 
        bool hasCustomIntervalConfigs() const { return this->customIntervalConfigs_ != nullptr;};
        void deleteCustomIntervalConfigs() { this->customIntervalConfigs_ = nullptr;};
        inline const vector<ResultData::CustomIntervalConfigs> & getCustomIntervalConfigs() const { DARABONBA_PTR_GET_CONST(customIntervalConfigs_, vector<ResultData::CustomIntervalConfigs>) };
        inline vector<ResultData::CustomIntervalConfigs> getCustomIntervalConfigs() { DARABONBA_PTR_GET(customIntervalConfigs_, vector<ResultData::CustomIntervalConfigs>) };
        inline ResultData& setCustomIntervalConfigs(const vector<ResultData::CustomIntervalConfigs> & customIntervalConfigs) { DARABONBA_PTR_SET_VALUE(customIntervalConfigs_, customIntervalConfigs) };
        inline ResultData& setCustomIntervalConfigs(vector<ResultData::CustomIntervalConfigs> && customIntervalConfigs) { DARABONBA_PTR_SET_RVALUE(customIntervalConfigs_, customIntervalConfigs) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline ResultData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline int64_t getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, 0L) };
        inline ResultData& setGmtModify(int64_t gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // hasReference Field Functions 
        bool hasHasReference() const { return this->hasReference_ != nullptr;};
        void deleteHasReference() { this->hasReference_ = nullptr;};
        inline bool getHasReference() const { DARABONBA_PTR_GET_DEFAULT(hasReference_, false) };
        inline ResultData& setHasReference(bool hasReference) { DARABONBA_PTR_SET_VALUE(hasReference_, hasReference) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline ResultData& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // modifierName Field Functions 
        bool hasModifierName() const { return this->modifierName_ != nullptr;};
        void deleteModifierName() { this->modifierName_ = nullptr;};
        inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
        inline ResultData& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


        // scheduleIntervalType Field Functions 
        bool hasScheduleIntervalType() const { return this->scheduleIntervalType_ != nullptr;};
        void deleteScheduleIntervalType() { this->scheduleIntervalType_ = nullptr;};
        inline string getScheduleIntervalType() const { DARABONBA_PTR_GET_DEFAULT(scheduleIntervalType_, "") };
        inline ResultData& setScheduleIntervalType(string scheduleIntervalType) { DARABONBA_PTR_SET_VALUE(scheduleIntervalType_, scheduleIntervalType) };


        // scheduleTemplateDesc Field Functions 
        bool hasScheduleTemplateDesc() const { return this->scheduleTemplateDesc_ != nullptr;};
        void deleteScheduleTemplateDesc() { this->scheduleTemplateDesc_ = nullptr;};
        inline string getScheduleTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(scheduleTemplateDesc_, "") };
        inline ResultData& setScheduleTemplateDesc(string scheduleTemplateDesc) { DARABONBA_PTR_SET_VALUE(scheduleTemplateDesc_, scheduleTemplateDesc) };


        // scheduleTemplateId Field Functions 
        bool hasScheduleTemplateId() const { return this->scheduleTemplateId_ != nullptr;};
        void deleteScheduleTemplateId() { this->scheduleTemplateId_ = nullptr;};
        inline int64_t getScheduleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scheduleTemplateId_, 0L) };
        inline ResultData& setScheduleTemplateId(int64_t scheduleTemplateId) { DARABONBA_PTR_SET_VALUE(scheduleTemplateId_, scheduleTemplateId) };


        // scheduleTemplateName Field Functions 
        bool hasScheduleTemplateName() const { return this->scheduleTemplateName_ != nullptr;};
        void deleteScheduleTemplateName() { this->scheduleTemplateName_ = nullptr;};
        inline string getScheduleTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scheduleTemplateName_, "") };
        inline ResultData& setScheduleTemplateName(string scheduleTemplateName) { DARABONBA_PTR_SET_VALUE(scheduleTemplateName_, scheduleTemplateName) };


        // scheduleTemplateType Field Functions 
        bool hasScheduleTemplateType() const { return this->scheduleTemplateType_ != nullptr;};
        void deleteScheduleTemplateType() { this->scheduleTemplateType_ = nullptr;};
        inline string getScheduleTemplateType() const { DARABONBA_PTR_GET_DEFAULT(scheduleTemplateType_, "") };
        inline ResultData& setScheduleTemplateType(string scheduleTemplateType) { DARABONBA_PTR_SET_VALUE(scheduleTemplateType_, scheduleTemplateType) };


        // scheduleType Field Functions 
        bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
        void deleteScheduleType() { this->scheduleType_ = nullptr;};
        inline int32_t getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
        inline ResultData& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline ResultData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ResultData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ResultData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // validEndDate Field Functions 
        bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
        void deleteValidEndDate() { this->validEndDate_ = nullptr;};
        inline string getValidEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, "") };
        inline ResultData& setValidEndDate(string validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


        // validStartDate Field Functions 
        bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
        void deleteValidStartDate() { this->validStartDate_ = nullptr;};
        inline string getValidStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, "") };
        inline ResultData& setValidStartDate(string validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


      protected:
        shared_ptr<vector<ResultData::ConditionScheduleParamList>> conditionScheduleParamList_ {};
        shared_ptr<string> cronExpression_ {};
        shared_ptr<bool> customCronExpression_ {};
        shared_ptr<ResultData::CustomIntervalConfig> customIntervalConfig_ {};
        shared_ptr<string> customIntervalConfigType_ {};
        shared_ptr<vector<ResultData::CustomIntervalConfigs>> customIntervalConfigs_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModify_ {};
        shared_ptr<bool> hasReference_ {};
        shared_ptr<string> modifierId_ {};
        shared_ptr<string> modifierName_ {};
        shared_ptr<string> scheduleIntervalType_ {};
        shared_ptr<string> scheduleTemplateDesc_ {};
        shared_ptr<int64_t> scheduleTemplateId_ {};
        shared_ptr<string> scheduleTemplateName_ {};
        shared_ptr<string> scheduleTemplateType_ {};
        shared_ptr<int32_t> scheduleType_ {};
        shared_ptr<int64_t> tenantId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<string> validEndDate_ {};
        shared_ptr<string> validStartDate_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->resultData_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline ListScheduleTemplatesResponse& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // resultData Field Functions 
      bool hasResultData() const { return this->resultData_ != nullptr;};
      void deleteResultData() { this->resultData_ = nullptr;};
      inline const vector<ListScheduleTemplatesResponse::ResultData> & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, vector<ListScheduleTemplatesResponse::ResultData>) };
      inline vector<ListScheduleTemplatesResponse::ResultData> getResultData() { DARABONBA_PTR_GET(resultData_, vector<ListScheduleTemplatesResponse::ResultData>) };
      inline ListScheduleTemplatesResponse& setResultData(const vector<ListScheduleTemplatesResponse::ResultData> & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
      inline ListScheduleTemplatesResponse& setResultData(vector<ListScheduleTemplatesResponse::ResultData> && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<vector<ListScheduleTemplatesResponse::ResultData>> resultData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->listScheduleTemplatesResponse_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScheduleTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScheduleTemplatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // listScheduleTemplatesResponse Field Functions 
    bool hasListScheduleTemplatesResponse() const { return this->listScheduleTemplatesResponse_ != nullptr;};
    void deleteListScheduleTemplatesResponse() { this->listScheduleTemplatesResponse_ = nullptr;};
    inline const ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse & getListScheduleTemplatesResponse() const { DARABONBA_PTR_GET_CONST(listScheduleTemplatesResponse_, ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse) };
    inline ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse getListScheduleTemplatesResponse() { DARABONBA_PTR_GET(listScheduleTemplatesResponse_, ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse) };
    inline ListScheduleTemplatesResponseBody& setListScheduleTemplatesResponse(const ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse & listScheduleTemplatesResponse) { DARABONBA_PTR_SET_VALUE(listScheduleTemplatesResponse_, listScheduleTemplatesResponse) };
    inline ListScheduleTemplatesResponseBody& setListScheduleTemplatesResponse(ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse && listScheduleTemplatesResponse) { DARABONBA_PTR_SET_RVALUE(listScheduleTemplatesResponse_, listScheduleTemplatesResponse) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScheduleTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduleTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScheduleTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ListScheduleTemplatesResponseBody::ListScheduleTemplatesResponse> listScheduleTemplatesResponse_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
