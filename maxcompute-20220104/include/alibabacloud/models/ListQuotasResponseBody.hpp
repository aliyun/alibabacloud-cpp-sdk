// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(quotaInfoList, quotaInfoList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(quotaInfoList, quotaInfoList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListQuotasResponseBody() = default ;
    ListQuotasResponseBody(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody(ListQuotasResponseBody &&) = default ;
    ListQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBody() = default ;
    ListQuotasResponseBody& operator=(const ListQuotasResponseBody &) = default ;
    ListQuotasResponseBody& operator=(ListQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
        DARABONBA_PTR_TO_JSON(cluster, cluster_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nickName, nickName_);
        DARABONBA_ANY_TO_JSON(parameter, parameter_);
        DARABONBA_PTR_TO_JSON(parentId, parentId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
        DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
        DARABONBA_PTR_TO_JSON(tag, tag_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
        DARABONBA_PTR_FROM_JSON(cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nickName, nickName_);
        DARABONBA_ANY_FROM_JSON(parameter, parameter_);
        DARABONBA_PTR_FROM_JSON(parentId, parentId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
        DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
        DARABONBA_PTR_FROM_JSON(tag, tag_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      QuotaInfoList() = default ;
      QuotaInfoList(const QuotaInfoList &) = default ;
      QuotaInfoList(QuotaInfoList &&) = default ;
      QuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaInfoList() = default ;
      QuotaInfoList& operator=(const QuotaInfoList &) = default ;
      QuotaInfoList& operator=(QuotaInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubQuotaInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
          DARABONBA_PTR_TO_JSON(parameter, parameter_);
          DARABONBA_PTR_TO_JSON(parentId, parentId_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
          DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, SubQuotaInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
          DARABONBA_PTR_FROM_JSON(cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
          DARABONBA_PTR_FROM_JSON(parameter, parameter_);
          DARABONBA_PTR_FROM_JSON(parentId, parentId_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
          DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        SubQuotaInfoList() = default ;
        SubQuotaInfoList(const SubQuotaInfoList &) = default ;
        SubQuotaInfoList(SubQuotaInfoList &&) = default ;
        SubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubQuotaInfoList() = default ;
        SubQuotaInfoList& operator=(const SubQuotaInfoList &) = default ;
        SubQuotaInfoList& operator=(SubQuotaInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
            DARABONBA_PTR_TO_JSON(currPlan, currPlan_);
            DARABONBA_PTR_TO_JSON(currTime, currTime_);
            DARABONBA_PTR_TO_JSON(nextPlan, nextPlan_);
            DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
            DARABONBA_PTR_TO_JSON(oncePlan, oncePlan_);
            DARABONBA_PTR_TO_JSON(onceTime, onceTime_);
            DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
            DARABONBA_PTR_TO_JSON(timezone, timezone_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
            DARABONBA_PTR_FROM_JSON(currTime, currTime_);
            DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
            DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
            DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
            DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
            DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
            DARABONBA_PTR_FROM_JSON(timezone, timezone_);
          };
          ScheduleInfo() = default ;
          ScheduleInfo(const ScheduleInfo &) = default ;
          ScheduleInfo(ScheduleInfo &&) = default ;
          ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleInfo() = default ;
          ScheduleInfo& operator=(const ScheduleInfo &) = default ;
          ScheduleInfo& operator=(ScheduleInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currPlan_ == nullptr
        && this->currTime_ == nullptr && this->nextPlan_ == nullptr && this->nextTime_ == nullptr && this->oncePlan_ == nullptr && this->onceTime_ == nullptr
        && this->operatorName_ == nullptr && this->timezone_ == nullptr; };
          // currPlan Field Functions 
          bool hasCurrPlan() const { return this->currPlan_ != nullptr;};
          void deleteCurrPlan() { this->currPlan_ = nullptr;};
          inline string getCurrPlan() const { DARABONBA_PTR_GET_DEFAULT(currPlan_, "") };
          inline ScheduleInfo& setCurrPlan(string currPlan) { DARABONBA_PTR_SET_VALUE(currPlan_, currPlan) };


          // currTime Field Functions 
          bool hasCurrTime() const { return this->currTime_ != nullptr;};
          void deleteCurrTime() { this->currTime_ = nullptr;};
          inline string getCurrTime() const { DARABONBA_PTR_GET_DEFAULT(currTime_, "") };
          inline ScheduleInfo& setCurrTime(string currTime) { DARABONBA_PTR_SET_VALUE(currTime_, currTime) };


          // nextPlan Field Functions 
          bool hasNextPlan() const { return this->nextPlan_ != nullptr;};
          void deleteNextPlan() { this->nextPlan_ = nullptr;};
          inline string getNextPlan() const { DARABONBA_PTR_GET_DEFAULT(nextPlan_, "") };
          inline ScheduleInfo& setNextPlan(string nextPlan) { DARABONBA_PTR_SET_VALUE(nextPlan_, nextPlan) };


          // nextTime Field Functions 
          bool hasNextTime() const { return this->nextTime_ != nullptr;};
          void deleteNextTime() { this->nextTime_ = nullptr;};
          inline string getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
          inline ScheduleInfo& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


          // oncePlan Field Functions 
          bool hasOncePlan() const { return this->oncePlan_ != nullptr;};
          void deleteOncePlan() { this->oncePlan_ = nullptr;};
          inline string getOncePlan() const { DARABONBA_PTR_GET_DEFAULT(oncePlan_, "") };
          inline ScheduleInfo& setOncePlan(string oncePlan) { DARABONBA_PTR_SET_VALUE(oncePlan_, oncePlan) };


          // onceTime Field Functions 
          bool hasOnceTime() const { return this->onceTime_ != nullptr;};
          void deleteOnceTime() { this->onceTime_ = nullptr;};
          inline string getOnceTime() const { DARABONBA_PTR_GET_DEFAULT(onceTime_, "") };
          inline ScheduleInfo& setOnceTime(string onceTime) { DARABONBA_PTR_SET_VALUE(onceTime_, onceTime) };


          // operatorName Field Functions 
          bool hasOperatorName() const { return this->operatorName_ != nullptr;};
          void deleteOperatorName() { this->operatorName_ = nullptr;};
          inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
          inline ScheduleInfo& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


          // timezone Field Functions 
          bool hasTimezone() const { return this->timezone_ != nullptr;};
          void deleteTimezone() { this->timezone_ = nullptr;};
          inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
          inline ScheduleInfo& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        protected:
          // The quota plan that is currently in effect.
          shared_ptr<string> currPlan_ {};
          // The time when the current plan took effect.
          shared_ptr<string> currTime_ {};
          // The next quota plan that is scheduled to take effect.
          shared_ptr<string> nextPlan_ {};
          // The time when the next plan is scheduled to take effect.
          shared_ptr<string> nextTime_ {};
          // The quota plan that takes effect immediately. This parameter is returned only when a user triggers an immediate plan that is different from the current plan.
          shared_ptr<string> oncePlan_ {};
          // The time when the immediate plan was triggered.
          shared_ptr<string> onceTime_ {};
          // The name of the operator.
          shared_ptr<string> operatorName_ {};
          // The time zone.
          shared_ptr<string> timezone_ {};
        };

        class SaleTag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SaleTag& obj) { 
            DARABONBA_PTR_TO_JSON(resourceIds, resourceIds_);
            DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          };
          friend void from_json(const Darabonba::Json& j, SaleTag& obj) { 
            DARABONBA_PTR_FROM_JSON(resourceIds, resourceIds_);
            DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          };
          SaleTag() = default ;
          SaleTag(const SaleTag &) = default ;
          SaleTag(SaleTag &&) = default ;
          SaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SaleTag() = default ;
          SaleTag& operator=(const SaleTag &) = default ;
          SaleTag& operator=(SaleTag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr; };
          // resourceIds Field Functions 
          bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
          void deleteResourceIds() { this->resourceIds_ = nullptr;};
          inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
          inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
          inline SaleTag& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
          inline SaleTag& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline SaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        protected:
          // The IDs of the resources. This ID is also used in the billing system. You can use this ID to associate the costs of a quota with a tag.
          shared_ptr<vector<string>> resourceIds_ {};
          // The type of the resource. Valid values: quota and project.
          shared_ptr<string> resourceType_ {};
        };

        class Parameter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
            DARABONBA_PTR_TO_JSON(adhocSlot, adhocSlot_);
            DARABONBA_PTR_TO_JSON(autoScaleCPULimit, autoScaleCPULimit_);
            DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
            DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
            DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
            DARABONBA_PTR_TO_JSON(maxGu, maxGu_);
            DARABONBA_PTR_TO_JSON(minCU, minCU_);
            DARABONBA_PTR_TO_JSON(minGu, minGu_);
            DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
            DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
            DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
          };
          friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
            DARABONBA_PTR_FROM_JSON(adhocSlot, adhocSlot_);
            DARABONBA_PTR_FROM_JSON(autoScaleCPULimit, autoScaleCPULimit_);
            DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
            DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
            DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
            DARABONBA_PTR_FROM_JSON(maxGu, maxGu_);
            DARABONBA_PTR_FROM_JSON(minCU, minCU_);
            DARABONBA_PTR_FROM_JSON(minGu, minGu_);
            DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
            DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
            DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
          };
          Parameter() = default ;
          Parameter(const Parameter &) = default ;
          Parameter(Parameter &&) = default ;
          Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameter() = default ;
          Parameter& operator=(const Parameter &) = default ;
          Parameter& operator=(Parameter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adhocSlot_ == nullptr
        && this->autoScaleCPULimit_ == nullptr && this->elasticReservedCU_ == nullptr && this->enablePriority_ == nullptr && this->forceReservedMin_ == nullptr && this->maxCU_ == nullptr
        && this->maxGu_ == nullptr && this->minCU_ == nullptr && this->minGu_ == nullptr && this->schedulerType_ == nullptr && this->singleJobCULimit_ == nullptr
        && this->slotNum_ == nullptr; };
          // adhocSlot Field Functions 
          bool hasAdhocSlot() const { return this->adhocSlot_ != nullptr;};
          void deleteAdhocSlot() { this->adhocSlot_ = nullptr;};
          inline int64_t getAdhocSlot() const { DARABONBA_PTR_GET_DEFAULT(adhocSlot_, 0L) };
          inline Parameter& setAdhocSlot(int64_t adhocSlot) { DARABONBA_PTR_SET_VALUE(adhocSlot_, adhocSlot) };


          // autoScaleCPULimit Field Functions 
          bool hasAutoScaleCPULimit() const { return this->autoScaleCPULimit_ != nullptr;};
          void deleteAutoScaleCPULimit() { this->autoScaleCPULimit_ = nullptr;};
          inline int64_t getAutoScaleCPULimit() const { DARABONBA_PTR_GET_DEFAULT(autoScaleCPULimit_, 0L) };
          inline Parameter& setAutoScaleCPULimit(int64_t autoScaleCPULimit) { DARABONBA_PTR_SET_VALUE(autoScaleCPULimit_, autoScaleCPULimit) };


          // elasticReservedCU Field Functions 
          bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
          void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
          inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
          inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


          // enablePriority Field Functions 
          bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
          void deleteEnablePriority() { this->enablePriority_ = nullptr;};
          inline bool getEnablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
          inline Parameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


          // forceReservedMin Field Functions 
          bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
          void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
          inline bool getForceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
          inline Parameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


          // maxCU Field Functions 
          bool hasMaxCU() const { return this->maxCU_ != nullptr;};
          void deleteMaxCU() { this->maxCU_ = nullptr;};
          inline int64_t getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
          inline Parameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


          // maxGu Field Functions 
          bool hasMaxGu() const { return this->maxGu_ != nullptr;};
          void deleteMaxGu() { this->maxGu_ = nullptr;};
          inline int64_t getMaxGu() const { DARABONBA_PTR_GET_DEFAULT(maxGu_, 0L) };
          inline Parameter& setMaxGu(int64_t maxGu) { DARABONBA_PTR_SET_VALUE(maxGu_, maxGu) };


          // minCU Field Functions 
          bool hasMinCU() const { return this->minCU_ != nullptr;};
          void deleteMinCU() { this->minCU_ = nullptr;};
          inline int64_t getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
          inline Parameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


          // minGu Field Functions 
          bool hasMinGu() const { return this->minGu_ != nullptr;};
          void deleteMinGu() { this->minGu_ = nullptr;};
          inline int64_t getMinGu() const { DARABONBA_PTR_GET_DEFAULT(minGu_, 0L) };
          inline Parameter& setMinGu(int64_t minGu) { DARABONBA_PTR_SET_VALUE(minGu_, minGu) };


          // schedulerType Field Functions 
          bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
          void deleteSchedulerType() { this->schedulerType_ = nullptr;};
          inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
          inline Parameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


          // singleJobCULimit Field Functions 
          bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
          void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
          inline int64_t getSingleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
          inline Parameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


          // slotNum Field Functions 
          bool hasSlotNum() const { return this->slotNum_ != nullptr;};
          void deleteSlotNum() { this->slotNum_ = nullptr;};
          inline int64_t getSlotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
          inline Parameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


        protected:
          shared_ptr<int64_t> adhocSlot_ {};
          shared_ptr<int64_t> autoScaleCPULimit_ {};
          // The elastically reserved CUs.
          shared_ptr<int64_t> elasticReservedCU_ {};
          // Indicates whether to enable priority-based scheduling.
          shared_ptr<bool> enablePriority_ {};
          // Indicates whether the resource is exclusive.
          shared_ptr<bool> forceReservedMin_ {};
          // The maximum reserved computing units (CUs).
          // 
          // This parameter is required.
          shared_ptr<int64_t> maxCU_ {};
          shared_ptr<int64_t> maxGu_ {};
          // The minimum reserved CUs.
          // 
          // This parameter is required.
          shared_ptr<int64_t> minCU_ {};
          shared_ptr<int64_t> minGu_ {};
          // The scheduling policy.
          shared_ptr<string> schedulerType_ {};
          // The maximum CUs for a single job.
          shared_ptr<int64_t> singleJobCULimit_ {};
          shared_ptr<int64_t> slotNum_ {};
        };

        class BillingPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
          };
          friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
          };
          BillingPolicy() = default ;
          BillingPolicy(const BillingPolicy &) = default ;
          BillingPolicy(BillingPolicy &&) = default ;
          BillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BillingPolicy() = default ;
          BillingPolicy& operator=(const BillingPolicy &) = default ;
          BillingPolicy& operator=(BillingPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
          // billingMethod Field Functions 
          bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
          void deleteBillingMethod() { this->billingMethod_ = nullptr;};
          inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
          inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


          // odpsSpecCode Field Functions 
          bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
          void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
          inline string getOdpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
          inline BillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline BillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        protected:
          // The billing method.
          // 
          // - subscription: The subscription billing method.
          // 
          // - payasyougo: The pay-as-you-go billing method.
          shared_ptr<string> billingMethod_ {};
          // The specifications of the order.
          shared_ptr<string> odpsSpecCode_ {};
          // The ID of the order.
          shared_ptr<string> orderId_ {};
        };

        virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr && this->saleTag_ == nullptr
        && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
        // billingPolicy Field Functions 
        bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
        void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
        inline const SubQuotaInfoList::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, SubQuotaInfoList::BillingPolicy) };
        inline SubQuotaInfoList::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, SubQuotaInfoList::BillingPolicy) };
        inline SubQuotaInfoList& setBillingPolicy(const SubQuotaInfoList::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
        inline SubQuotaInfoList& setBillingPolicy(SubQuotaInfoList::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline SubQuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SubQuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline SubQuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SubQuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubQuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline SubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // parameter Field Functions 
        bool hasParameter() const { return this->parameter_ != nullptr;};
        void deleteParameter() { this->parameter_ = nullptr;};
        inline const SubQuotaInfoList::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, SubQuotaInfoList::Parameter) };
        inline SubQuotaInfoList::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, SubQuotaInfoList::Parameter) };
        inline SubQuotaInfoList& setParameter(const SubQuotaInfoList::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
        inline SubQuotaInfoList& setParameter(SubQuotaInfoList::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline SubQuotaInfoList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SubQuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // saleTag Field Functions 
        bool hasSaleTag() const { return this->saleTag_ != nullptr;};
        void deleteSaleTag() { this->saleTag_ = nullptr;};
        inline const SubQuotaInfoList::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, SubQuotaInfoList::SaleTag) };
        inline SubQuotaInfoList::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, SubQuotaInfoList::SaleTag) };
        inline SubQuotaInfoList& setSaleTag(const SubQuotaInfoList::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
        inline SubQuotaInfoList& setSaleTag(SubQuotaInfoList::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


        // scheduleInfo Field Functions 
        bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
        void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
        inline const SubQuotaInfoList::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, SubQuotaInfoList::ScheduleInfo) };
        inline SubQuotaInfoList::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, SubQuotaInfoList::ScheduleInfo) };
        inline SubQuotaInfoList& setScheduleInfo(const SubQuotaInfoList::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
        inline SubQuotaInfoList& setScheduleInfo(SubQuotaInfoList::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SubQuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline SubQuotaInfoList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline SubQuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline SubQuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The billing information.
        shared_ptr<SubQuotaInfoList::BillingPolicy> billingPolicy_ {};
        // The ID of the cluster.
        shared_ptr<string> cluster_ {};
        // The time when the quota was created.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the account that created the quota. This ID is an Alibaba Cloud account UID.
        shared_ptr<string> creatorId_ {};
        // The ID of the sub-quota.
        shared_ptr<string> id_ {};
        // The name of the sub-quota.
        shared_ptr<string> name_ {};
        // The alias of the sub-quota.
        shared_ptr<string> nickName_ {};
        // The quota description.
        shared_ptr<SubQuotaInfoList::Parameter> parameter_ {};
        // The ID of the parent resource.
        shared_ptr<string> parentId_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The sales tag of the quota. This tag is the same as the billing identifier and is used for cost allocation.
        shared_ptr<SubQuotaInfoList::SaleTag> saleTag_ {};
        // The time-based scheduling information.
        shared_ptr<SubQuotaInfoList::ScheduleInfo> scheduleInfo_ {};
        // The status of the quota.
        shared_ptr<string> status_ {};
        // The tag of the quota.
        shared_ptr<string> tag_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the control cluster.
        shared_ptr<string> type_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      class ScheduleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(currPlan, currPlan_);
          DARABONBA_PTR_TO_JSON(currTime, currTime_);
          DARABONBA_PTR_TO_JSON(nextPlan, nextPlan_);
          DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
          DARABONBA_PTR_TO_JSON(oncePlan, oncePlan_);
          DARABONBA_PTR_TO_JSON(onceTime, onceTime_);
          DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
          DARABONBA_PTR_TO_JSON(timezone, timezone_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
          DARABONBA_PTR_FROM_JSON(currTime, currTime_);
          DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
          DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
          DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
          DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
          DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
          DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        };
        ScheduleInfo() = default ;
        ScheduleInfo(const ScheduleInfo &) = default ;
        ScheduleInfo(ScheduleInfo &&) = default ;
        ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleInfo() = default ;
        ScheduleInfo& operator=(const ScheduleInfo &) = default ;
        ScheduleInfo& operator=(ScheduleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currPlan_ == nullptr
        && this->currTime_ == nullptr && this->nextPlan_ == nullptr && this->nextTime_ == nullptr && this->oncePlan_ == nullptr && this->onceTime_ == nullptr
        && this->operatorName_ == nullptr && this->timezone_ == nullptr; };
        // currPlan Field Functions 
        bool hasCurrPlan() const { return this->currPlan_ != nullptr;};
        void deleteCurrPlan() { this->currPlan_ = nullptr;};
        inline string getCurrPlan() const { DARABONBA_PTR_GET_DEFAULT(currPlan_, "") };
        inline ScheduleInfo& setCurrPlan(string currPlan) { DARABONBA_PTR_SET_VALUE(currPlan_, currPlan) };


        // currTime Field Functions 
        bool hasCurrTime() const { return this->currTime_ != nullptr;};
        void deleteCurrTime() { this->currTime_ = nullptr;};
        inline string getCurrTime() const { DARABONBA_PTR_GET_DEFAULT(currTime_, "") };
        inline ScheduleInfo& setCurrTime(string currTime) { DARABONBA_PTR_SET_VALUE(currTime_, currTime) };


        // nextPlan Field Functions 
        bool hasNextPlan() const { return this->nextPlan_ != nullptr;};
        void deleteNextPlan() { this->nextPlan_ = nullptr;};
        inline string getNextPlan() const { DARABONBA_PTR_GET_DEFAULT(nextPlan_, "") };
        inline ScheduleInfo& setNextPlan(string nextPlan) { DARABONBA_PTR_SET_VALUE(nextPlan_, nextPlan) };


        // nextTime Field Functions 
        bool hasNextTime() const { return this->nextTime_ != nullptr;};
        void deleteNextTime() { this->nextTime_ = nullptr;};
        inline string getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
        inline ScheduleInfo& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


        // oncePlan Field Functions 
        bool hasOncePlan() const { return this->oncePlan_ != nullptr;};
        void deleteOncePlan() { this->oncePlan_ = nullptr;};
        inline string getOncePlan() const { DARABONBA_PTR_GET_DEFAULT(oncePlan_, "") };
        inline ScheduleInfo& setOncePlan(string oncePlan) { DARABONBA_PTR_SET_VALUE(oncePlan_, oncePlan) };


        // onceTime Field Functions 
        bool hasOnceTime() const { return this->onceTime_ != nullptr;};
        void deleteOnceTime() { this->onceTime_ = nullptr;};
        inline string getOnceTime() const { DARABONBA_PTR_GET_DEFAULT(onceTime_, "") };
        inline ScheduleInfo& setOnceTime(string onceTime) { DARABONBA_PTR_SET_VALUE(onceTime_, onceTime) };


        // operatorName Field Functions 
        bool hasOperatorName() const { return this->operatorName_ != nullptr;};
        void deleteOperatorName() { this->operatorName_ = nullptr;};
        inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
        inline ScheduleInfo& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline ScheduleInfo& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      protected:
        // The quota plan that is currently in effect.
        shared_ptr<string> currPlan_ {};
        // The time when the current plan took effect.
        shared_ptr<string> currTime_ {};
        // The next quota plan that is scheduled to take effect.
        shared_ptr<string> nextPlan_ {};
        // The time when the next plan is scheduled to take effect.
        shared_ptr<string> nextTime_ {};
        // The quota plan that takes effect immediately. This parameter is returned only when a user triggers an immediate plan that is different from the current plan.
        shared_ptr<string> oncePlan_ {};
        // The time when the immediate plan was triggered.
        shared_ptr<string> onceTime_ {};
        // The name of the operator.
        shared_ptr<string> operatorName_ {};
        // The time zone.
        shared_ptr<string> timezone_ {};
      };

      class SaleTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaleTag& obj) { 
          DARABONBA_PTR_TO_JSON(resourceIds, resourceIds_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, SaleTag& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceIds, resourceIds_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        SaleTag() = default ;
        SaleTag(const SaleTag &) = default ;
        SaleTag(SaleTag &&) = default ;
        SaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaleTag() = default ;
        SaleTag& operator=(const SaleTag &) = default ;
        SaleTag& operator=(SaleTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceIds Field Functions 
        bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
        void deleteResourceIds() { this->resourceIds_ = nullptr;};
        inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
        inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
        inline SaleTag& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
        inline SaleTag& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline SaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The IDs of the resources. This ID is also used in the billing system. You can use this ID to associate the costs of a quota with a tag.
        shared_ptr<vector<string>> resourceIds_ {};
        // The type of the resource. Valid values: quota and project.
        shared_ptr<string> resourceType_ {};
      };

      class BillingPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
          DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
          DARABONBA_PTR_TO_JSON(orderId, orderId_);
        };
        friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
          DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
          DARABONBA_PTR_FROM_JSON(orderId, orderId_);
        };
        BillingPolicy() = default ;
        BillingPolicy(const BillingPolicy &) = default ;
        BillingPolicy(BillingPolicy &&) = default ;
        BillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillingPolicy() = default ;
        BillingPolicy& operator=(const BillingPolicy &) = default ;
        BillingPolicy& operator=(BillingPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
        // billingMethod Field Functions 
        bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
        void deleteBillingMethod() { this->billingMethod_ = nullptr;};
        inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
        inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


        // odpsSpecCode Field Functions 
        bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
        void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
        inline string getOdpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
        inline BillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline BillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      protected:
        // The billing method.
        // 
        // - subscription: The subscription billing method.
        // 
        // - payasyougo: The pay-as-you-go billing method.
        shared_ptr<string> billingMethod_ {};
        // The specifications of the order.
        shared_ptr<string> odpsSpecCode_ {};
        // The ID of the order.
        shared_ptr<string> orderId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tags_ == nullptr
        && this->billingPolicy_ == nullptr && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr
        && this->saleTag_ == nullptr && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->subQuotaInfoList_ == nullptr && this->tag_ == nullptr
        && this->tenantId_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<QuotaInfoList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<QuotaInfoList::Tags>) };
      inline vector<QuotaInfoList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<QuotaInfoList::Tags>) };
      inline QuotaInfoList& setTags(const vector<QuotaInfoList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline QuotaInfoList& setTags(vector<QuotaInfoList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // billingPolicy Field Functions 
      bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
      void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
      inline const QuotaInfoList::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, QuotaInfoList::BillingPolicy) };
      inline QuotaInfoList::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, QuotaInfoList::BillingPolicy) };
      inline QuotaInfoList& setBillingPolicy(const QuotaInfoList::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
      inline QuotaInfoList& setBillingPolicy(QuotaInfoList::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
      inline QuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline QuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline QuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline QuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline QuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline       const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
      Darabonba::Json & getParameter() { DARABONBA_GET(parameter_) };
      inline QuotaInfoList& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
      inline QuotaInfoList& setParameter(Darabonba::Json && parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline QuotaInfoList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline QuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // saleTag Field Functions 
      bool hasSaleTag() const { return this->saleTag_ != nullptr;};
      void deleteSaleTag() { this->saleTag_ = nullptr;};
      inline const QuotaInfoList::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, QuotaInfoList::SaleTag) };
      inline QuotaInfoList::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, QuotaInfoList::SaleTag) };
      inline QuotaInfoList& setSaleTag(const QuotaInfoList::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
      inline QuotaInfoList& setSaleTag(QuotaInfoList::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const QuotaInfoList::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, QuotaInfoList::ScheduleInfo) };
      inline QuotaInfoList::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, QuotaInfoList::ScheduleInfo) };
      inline QuotaInfoList& setScheduleInfo(const QuotaInfoList::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline QuotaInfoList& setScheduleInfo(QuotaInfoList::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline QuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subQuotaInfoList Field Functions 
      bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
      void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
      inline const vector<QuotaInfoList::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<QuotaInfoList::SubQuotaInfoList>) };
      inline vector<QuotaInfoList::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<QuotaInfoList::SubQuotaInfoList>) };
      inline QuotaInfoList& setSubQuotaInfoList(const vector<QuotaInfoList::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
      inline QuotaInfoList& setSubQuotaInfoList(vector<QuotaInfoList::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline QuotaInfoList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline QuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline QuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The tags.
      shared_ptr<vector<QuotaInfoList::Tags>> tags_ {};
      // The billing information.
      shared_ptr<QuotaInfoList::BillingPolicy> billingPolicy_ {};
      // The ID of the cluster.
      shared_ptr<string> cluster_ {};
      // The time when the quota was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the account that created the quota. This ID is an Alibaba Cloud account UID.
      shared_ptr<string> creatorId_ {};
      // The ID of the quota.
      shared_ptr<string> id_ {};
      // The name of the quota.
      shared_ptr<string> name_ {};
      // The alias of the quota.
      shared_ptr<string> nickName_ {};
      // The parameters of the quota.
      Darabonba::Json parameter_ {};
      // The ID of the parent resource.
      shared_ptr<string> parentId_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The sales tag of the quota. This tag is the same as the billing identifier and is used for cost allocation.
      shared_ptr<QuotaInfoList::SaleTag> saleTag_ {};
      // The time-based scheduling information.
      shared_ptr<QuotaInfoList::ScheduleInfo> scheduleInfo_ {};
      // The status of the quota.
      shared_ptr<string> status_ {};
      // The information about the sub-quotas.
      shared_ptr<vector<QuotaInfoList::SubQuotaInfoList>> subQuotaInfoList_ {};
      // The tag of the quota.
      shared_ptr<string> tag_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the control cluster.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(marker, marker_);
        DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
        DARABONBA_PTR_TO_JSON(quotaInfoList, quotaInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(marker, marker_);
        DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
        DARABONBA_PTR_FROM_JSON(quotaInfoList, quotaInfoList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QuotaInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QuotaInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
          DARABONBA_ANY_TO_JSON(parameter, parameter_);
          DARABONBA_PTR_TO_JSON(parentId, parentId_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
          DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, QuotaInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
          DARABONBA_PTR_FROM_JSON(cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
          DARABONBA_ANY_FROM_JSON(parameter, parameter_);
          DARABONBA_PTR_FROM_JSON(parentId, parentId_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
          DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        QuotaInfoList() = default ;
        QuotaInfoList(const QuotaInfoList &) = default ;
        QuotaInfoList(QuotaInfoList &&) = default ;
        QuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QuotaInfoList() = default ;
        QuotaInfoList& operator=(const QuotaInfoList &) = default ;
        QuotaInfoList& operator=(QuotaInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubQuotaInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
            DARABONBA_PTR_TO_JSON(cluster, cluster_);
            DARABONBA_PTR_TO_JSON(createTime, createTime_);
            DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nickName, nickName_);
            DARABONBA_PTR_TO_JSON(parameter, parameter_);
            DARABONBA_PTR_TO_JSON(parentId, parentId_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
            DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
            DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(tag, tag_);
            DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, SubQuotaInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
            DARABONBA_PTR_FROM_JSON(cluster, cluster_);
            DARABONBA_PTR_FROM_JSON(createTime, createTime_);
            DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nickName, nickName_);
            DARABONBA_PTR_FROM_JSON(parameter, parameter_);
            DARABONBA_PTR_FROM_JSON(parentId, parentId_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
            DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
            DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(tag, tag_);
            DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          SubQuotaInfoList() = default ;
          SubQuotaInfoList(const SubQuotaInfoList &) = default ;
          SubQuotaInfoList(SubQuotaInfoList &&) = default ;
          SubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubQuotaInfoList() = default ;
          SubQuotaInfoList& operator=(const SubQuotaInfoList &) = default ;
          SubQuotaInfoList& operator=(SubQuotaInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScheduleInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
              DARABONBA_PTR_TO_JSON(currPlan, currPlan_);
              DARABONBA_PTR_TO_JSON(currTime, currTime_);
              DARABONBA_PTR_TO_JSON(nextPlan, nextPlan_);
              DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
              DARABONBA_PTR_TO_JSON(oncePlan, oncePlan_);
              DARABONBA_PTR_TO_JSON(onceTime, onceTime_);
              DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
              DARABONBA_PTR_TO_JSON(timezone, timezone_);
            };
            friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
              DARABONBA_PTR_FROM_JSON(currTime, currTime_);
              DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
              DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
              DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
              DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
              DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
              DARABONBA_PTR_FROM_JSON(timezone, timezone_);
            };
            ScheduleInfo() = default ;
            ScheduleInfo(const ScheduleInfo &) = default ;
            ScheduleInfo(ScheduleInfo &&) = default ;
            ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScheduleInfo() = default ;
            ScheduleInfo& operator=(const ScheduleInfo &) = default ;
            ScheduleInfo& operator=(ScheduleInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->currPlan_ == nullptr
        && this->currTime_ == nullptr && this->nextPlan_ == nullptr && this->nextTime_ == nullptr && this->oncePlan_ == nullptr && this->onceTime_ == nullptr
        && this->operatorName_ == nullptr && this->timezone_ == nullptr; };
            // currPlan Field Functions 
            bool hasCurrPlan() const { return this->currPlan_ != nullptr;};
            void deleteCurrPlan() { this->currPlan_ = nullptr;};
            inline string getCurrPlan() const { DARABONBA_PTR_GET_DEFAULT(currPlan_, "") };
            inline ScheduleInfo& setCurrPlan(string currPlan) { DARABONBA_PTR_SET_VALUE(currPlan_, currPlan) };


            // currTime Field Functions 
            bool hasCurrTime() const { return this->currTime_ != nullptr;};
            void deleteCurrTime() { this->currTime_ = nullptr;};
            inline string getCurrTime() const { DARABONBA_PTR_GET_DEFAULT(currTime_, "") };
            inline ScheduleInfo& setCurrTime(string currTime) { DARABONBA_PTR_SET_VALUE(currTime_, currTime) };


            // nextPlan Field Functions 
            bool hasNextPlan() const { return this->nextPlan_ != nullptr;};
            void deleteNextPlan() { this->nextPlan_ = nullptr;};
            inline string getNextPlan() const { DARABONBA_PTR_GET_DEFAULT(nextPlan_, "") };
            inline ScheduleInfo& setNextPlan(string nextPlan) { DARABONBA_PTR_SET_VALUE(nextPlan_, nextPlan) };


            // nextTime Field Functions 
            bool hasNextTime() const { return this->nextTime_ != nullptr;};
            void deleteNextTime() { this->nextTime_ = nullptr;};
            inline string getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
            inline ScheduleInfo& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


            // oncePlan Field Functions 
            bool hasOncePlan() const { return this->oncePlan_ != nullptr;};
            void deleteOncePlan() { this->oncePlan_ = nullptr;};
            inline string getOncePlan() const { DARABONBA_PTR_GET_DEFAULT(oncePlan_, "") };
            inline ScheduleInfo& setOncePlan(string oncePlan) { DARABONBA_PTR_SET_VALUE(oncePlan_, oncePlan) };


            // onceTime Field Functions 
            bool hasOnceTime() const { return this->onceTime_ != nullptr;};
            void deleteOnceTime() { this->onceTime_ = nullptr;};
            inline string getOnceTime() const { DARABONBA_PTR_GET_DEFAULT(onceTime_, "") };
            inline ScheduleInfo& setOnceTime(string onceTime) { DARABONBA_PTR_SET_VALUE(onceTime_, onceTime) };


            // operatorName Field Functions 
            bool hasOperatorName() const { return this->operatorName_ != nullptr;};
            void deleteOperatorName() { this->operatorName_ = nullptr;};
            inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
            inline ScheduleInfo& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


            // timezone Field Functions 
            bool hasTimezone() const { return this->timezone_ != nullptr;};
            void deleteTimezone() { this->timezone_ = nullptr;};
            inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
            inline ScheduleInfo& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


          protected:
            // The quota plan that is currently in effect.
            shared_ptr<string> currPlan_ {};
            // The time when the current plan took effect.
            shared_ptr<string> currTime_ {};
            // The next quota plan that is scheduled to take effect.
            shared_ptr<string> nextPlan_ {};
            // The time when the next plan is scheduled to take effect.
            shared_ptr<string> nextTime_ {};
            // The quota plan that takes effect immediately. This parameter is returned only if a user triggers an immediate plan that is different from `currPlan`.
            shared_ptr<string> oncePlan_ {};
            // The time when the immediate-effect plan was triggered.
            shared_ptr<string> onceTime_ {};
            // The name of the operator.
            shared_ptr<string> operatorName_ {};
            // The time zone.
            shared_ptr<string> timezone_ {};
          };

          class SaleTag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SaleTag& obj) { 
              DARABONBA_PTR_TO_JSON(resourceIds, resourceIds_);
              DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
            };
            friend void from_json(const Darabonba::Json& j, SaleTag& obj) { 
              DARABONBA_PTR_FROM_JSON(resourceIds, resourceIds_);
              DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
            };
            SaleTag() = default ;
            SaleTag(const SaleTag &) = default ;
            SaleTag(SaleTag &&) = default ;
            SaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SaleTag() = default ;
            SaleTag& operator=(const SaleTag &) = default ;
            SaleTag& operator=(SaleTag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr; };
            // resourceIds Field Functions 
            bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
            void deleteResourceIds() { this->resourceIds_ = nullptr;};
            inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
            inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
            inline SaleTag& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
            inline SaleTag& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline SaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          protected:
            // The identifier of the MaxCompute quota object. This identifier also exists in the Alibaba Cloud sales subsystem. It associates the costs of the quota object with a tag.
            shared_ptr<vector<string>> resourceIds_ {};
            // The type of the object. Only \\`quota\\` and \\`project\\` are supported.
            shared_ptr<string> resourceType_ {};
          };

          class Parameter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
              DARABONBA_PTR_TO_JSON(adhocSlot, adhocSlot_);
              DARABONBA_PTR_TO_JSON(autoScaleCPULimit, autoScaleCPULimit_);
              DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
              DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
              DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
              DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
              DARABONBA_PTR_TO_JSON(maxGu, maxGu_);
              DARABONBA_PTR_TO_JSON(minCU, minCU_);
              DARABONBA_PTR_TO_JSON(minGu, minGu_);
              DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
              DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
              DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
            };
            friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
              DARABONBA_PTR_FROM_JSON(adhocSlot, adhocSlot_);
              DARABONBA_PTR_FROM_JSON(autoScaleCPULimit, autoScaleCPULimit_);
              DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
              DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
              DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
              DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
              DARABONBA_PTR_FROM_JSON(maxGu, maxGu_);
              DARABONBA_PTR_FROM_JSON(minCU, minCU_);
              DARABONBA_PTR_FROM_JSON(minGu, minGu_);
              DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
              DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
              DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
            };
            Parameter() = default ;
            Parameter(const Parameter &) = default ;
            Parameter(Parameter &&) = default ;
            Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parameter() = default ;
            Parameter& operator=(const Parameter &) = default ;
            Parameter& operator=(Parameter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->adhocSlot_ == nullptr
        && this->autoScaleCPULimit_ == nullptr && this->elasticReservedCU_ == nullptr && this->enablePriority_ == nullptr && this->forceReservedMin_ == nullptr && this->maxCU_ == nullptr
        && this->maxGu_ == nullptr && this->minCU_ == nullptr && this->minGu_ == nullptr && this->schedulerType_ == nullptr && this->singleJobCULimit_ == nullptr
        && this->slotNum_ == nullptr; };
            // adhocSlot Field Functions 
            bool hasAdhocSlot() const { return this->adhocSlot_ != nullptr;};
            void deleteAdhocSlot() { this->adhocSlot_ = nullptr;};
            inline int64_t getAdhocSlot() const { DARABONBA_PTR_GET_DEFAULT(adhocSlot_, 0L) };
            inline Parameter& setAdhocSlot(int64_t adhocSlot) { DARABONBA_PTR_SET_VALUE(adhocSlot_, adhocSlot) };


            // autoScaleCPULimit Field Functions 
            bool hasAutoScaleCPULimit() const { return this->autoScaleCPULimit_ != nullptr;};
            void deleteAutoScaleCPULimit() { this->autoScaleCPULimit_ = nullptr;};
            inline int64_t getAutoScaleCPULimit() const { DARABONBA_PTR_GET_DEFAULT(autoScaleCPULimit_, 0L) };
            inline Parameter& setAutoScaleCPULimit(int64_t autoScaleCPULimit) { DARABONBA_PTR_SET_VALUE(autoScaleCPULimit_, autoScaleCPULimit) };


            // elasticReservedCU Field Functions 
            bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
            void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
            inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
            inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


            // enablePriority Field Functions 
            bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
            void deleteEnablePriority() { this->enablePriority_ = nullptr;};
            inline bool getEnablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
            inline Parameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


            // forceReservedMin Field Functions 
            bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
            void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
            inline bool getForceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
            inline Parameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


            // maxCU Field Functions 
            bool hasMaxCU() const { return this->maxCU_ != nullptr;};
            void deleteMaxCU() { this->maxCU_ = nullptr;};
            inline int64_t getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
            inline Parameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


            // maxGu Field Functions 
            bool hasMaxGu() const { return this->maxGu_ != nullptr;};
            void deleteMaxGu() { this->maxGu_ = nullptr;};
            inline int64_t getMaxGu() const { DARABONBA_PTR_GET_DEFAULT(maxGu_, 0L) };
            inline Parameter& setMaxGu(int64_t maxGu) { DARABONBA_PTR_SET_VALUE(maxGu_, maxGu) };


            // minCU Field Functions 
            bool hasMinCU() const { return this->minCU_ != nullptr;};
            void deleteMinCU() { this->minCU_ = nullptr;};
            inline int64_t getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
            inline Parameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


            // minGu Field Functions 
            bool hasMinGu() const { return this->minGu_ != nullptr;};
            void deleteMinGu() { this->minGu_ = nullptr;};
            inline int64_t getMinGu() const { DARABONBA_PTR_GET_DEFAULT(minGu_, 0L) };
            inline Parameter& setMinGu(int64_t minGu) { DARABONBA_PTR_SET_VALUE(minGu_, minGu) };


            // schedulerType Field Functions 
            bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
            void deleteSchedulerType() { this->schedulerType_ = nullptr;};
            inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
            inline Parameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


            // singleJobCULimit Field Functions 
            bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
            void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
            inline int64_t getSingleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
            inline Parameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


            // slotNum Field Functions 
            bool hasSlotNum() const { return this->slotNum_ != nullptr;};
            void deleteSlotNum() { this->slotNum_ = nullptr;};
            inline int64_t getSlotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
            inline Parameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


          protected:
            shared_ptr<int64_t> adhocSlot_ {};
            shared_ptr<int64_t> autoScaleCPULimit_ {};
            // The value of elastically reserved CUs.
            shared_ptr<int64_t> elasticReservedCU_ {};
            // Specifies whether to enable priority-based scheduling.
            shared_ptr<bool> enablePriority_ {};
            // Specifies whether the resource is exclusive.
            shared_ptr<bool> forceReservedMin_ {};
            // The upper limit of reserved CUs.
            // 
            // This parameter is required.
            shared_ptr<int64_t> maxCU_ {};
            shared_ptr<int64_t> maxGu_ {};
            // The minimum number of guaranteed reserved CUs.
            // 
            // This parameter is required.
            shared_ptr<int64_t> minCU_ {};
            shared_ptr<int64_t> minGu_ {};
            // The scheduling policy.
            shared_ptr<string> schedulerType_ {};
            // The upper limit of CUs for a single job.
            shared_ptr<int64_t> singleJobCULimit_ {};
            shared_ptr<int64_t> slotNum_ {};
          };

          class BillingPolicy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
              DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
              DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
              DARABONBA_PTR_TO_JSON(orderId, orderId_);
            };
            friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
              DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
              DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
              DARABONBA_PTR_FROM_JSON(orderId, orderId_);
            };
            BillingPolicy() = default ;
            BillingPolicy(const BillingPolicy &) = default ;
            BillingPolicy(BillingPolicy &&) = default ;
            BillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BillingPolicy() = default ;
            BillingPolicy& operator=(const BillingPolicy &) = default ;
            BillingPolicy& operator=(BillingPolicy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
            // billingMethod Field Functions 
            bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
            void deleteBillingMethod() { this->billingMethod_ = nullptr;};
            inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
            inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


            // odpsSpecCode Field Functions 
            bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
            void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
            inline string getOdpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
            inline BillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


            // orderId Field Functions 
            bool hasOrderId() const { return this->orderId_ != nullptr;};
            void deleteOrderId() { this->orderId_ = nullptr;};
            inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
            inline BillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          protected:
            // The billing method.
            // 
            // - subscription: The subscription billing method.
            // 
            // - payasyougo: The pay-as-you-go billing method.
            shared_ptr<string> billingMethod_ {};
            // The specifications of the order.
            shared_ptr<string> odpsSpecCode_ {};
            // The ID of the order.
            shared_ptr<string> orderId_ {};
          };

          virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr && this->saleTag_ == nullptr
        && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
          // billingPolicy Field Functions 
          bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
          void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
          inline const SubQuotaInfoList::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, SubQuotaInfoList::BillingPolicy) };
          inline SubQuotaInfoList::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, SubQuotaInfoList::BillingPolicy) };
          inline SubQuotaInfoList& setBillingPolicy(const SubQuotaInfoList::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
          inline SubQuotaInfoList& setBillingPolicy(SubQuotaInfoList::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


          // cluster Field Functions 
          bool hasCluster() const { return this->cluster_ != nullptr;};
          void deleteCluster() { this->cluster_ = nullptr;};
          inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
          inline SubQuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline SubQuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creatorId Field Functions 
          bool hasCreatorId() const { return this->creatorId_ != nullptr;};
          void deleteCreatorId() { this->creatorId_ = nullptr;};
          inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
          inline SubQuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline SubQuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SubQuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nickName Field Functions 
          bool hasNickName() const { return this->nickName_ != nullptr;};
          void deleteNickName() { this->nickName_ = nullptr;};
          inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
          inline SubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


          // parameter Field Functions 
          bool hasParameter() const { return this->parameter_ != nullptr;};
          void deleteParameter() { this->parameter_ = nullptr;};
          inline const SubQuotaInfoList::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, SubQuotaInfoList::Parameter) };
          inline SubQuotaInfoList::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, SubQuotaInfoList::Parameter) };
          inline SubQuotaInfoList& setParameter(const SubQuotaInfoList::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
          inline SubQuotaInfoList& setParameter(SubQuotaInfoList::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


          // parentId Field Functions 
          bool hasParentId() const { return this->parentId_ != nullptr;};
          void deleteParentId() { this->parentId_ = nullptr;};
          inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
          inline SubQuotaInfoList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline SubQuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // saleTag Field Functions 
          bool hasSaleTag() const { return this->saleTag_ != nullptr;};
          void deleteSaleTag() { this->saleTag_ = nullptr;};
          inline const SubQuotaInfoList::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, SubQuotaInfoList::SaleTag) };
          inline SubQuotaInfoList::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, SubQuotaInfoList::SaleTag) };
          inline SubQuotaInfoList& setSaleTag(const SubQuotaInfoList::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
          inline SubQuotaInfoList& setSaleTag(SubQuotaInfoList::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


          // scheduleInfo Field Functions 
          bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
          void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
          inline const SubQuotaInfoList::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, SubQuotaInfoList::ScheduleInfo) };
          inline SubQuotaInfoList::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, SubQuotaInfoList::ScheduleInfo) };
          inline SubQuotaInfoList& setScheduleInfo(const SubQuotaInfoList::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
          inline SubQuotaInfoList& setScheduleInfo(SubQuotaInfoList::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline SubQuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline SubQuotaInfoList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline SubQuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline SubQuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The billing information.
          shared_ptr<SubQuotaInfoList::BillingPolicy> billingPolicy_ {};
          // The ID of the cluster.
          shared_ptr<string> cluster_ {};
          // The time when the resource was created.
          shared_ptr<int64_t> createTime_ {};
          // The creator of the resource. This is the UID of an Alibaba Cloud account.
          shared_ptr<string> creatorId_ {};
          // The ID of the sub-quota.
          shared_ptr<string> id_ {};
          // The name of the sub-quota.
          shared_ptr<string> name_ {};
          // The alias of the sub-quota.
          shared_ptr<string> nickName_ {};
          // The description of the quota.
          shared_ptr<SubQuotaInfoList::Parameter> parameter_ {};
          // The ID of the parent resource.
          shared_ptr<string> parentId_ {};
          // The ID of the region.
          shared_ptr<string> regionId_ {};
          // The identifier of the MaxCompute quota object. This identifier is the same as the one in the Alibaba Cloud bill and is used in tagging scenarios.
          shared_ptr<SubQuotaInfoList::SaleTag> saleTag_ {};
          // The time-based scheduling information.
          shared_ptr<SubQuotaInfoList::ScheduleInfo> scheduleInfo_ {};
          // The status of the quota.
          shared_ptr<string> status_ {};
          // The resource tag of the quota.
          shared_ptr<string> tag_ {};
          // The ID of the tenant.
          shared_ptr<string> tenantId_ {};
          // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the control cluster.
          shared_ptr<string> type_ {};
          // The version number.
          shared_ptr<string> version_ {};
        };

        class ScheduleInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
            DARABONBA_PTR_TO_JSON(currPlan, currPlan_);
            DARABONBA_PTR_TO_JSON(currTime, currTime_);
            DARABONBA_PTR_TO_JSON(nextPlan, nextPlan_);
            DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
            DARABONBA_PTR_TO_JSON(oncePlan, oncePlan_);
            DARABONBA_PTR_TO_JSON(onceTime, onceTime_);
            DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
            DARABONBA_PTR_TO_JSON(timezone, timezone_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
            DARABONBA_PTR_FROM_JSON(currTime, currTime_);
            DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
            DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
            DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
            DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
            DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
            DARABONBA_PTR_FROM_JSON(timezone, timezone_);
          };
          ScheduleInfo() = default ;
          ScheduleInfo(const ScheduleInfo &) = default ;
          ScheduleInfo(ScheduleInfo &&) = default ;
          ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleInfo() = default ;
          ScheduleInfo& operator=(const ScheduleInfo &) = default ;
          ScheduleInfo& operator=(ScheduleInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currPlan_ == nullptr
        && this->currTime_ == nullptr && this->nextPlan_ == nullptr && this->nextTime_ == nullptr && this->oncePlan_ == nullptr && this->onceTime_ == nullptr
        && this->operatorName_ == nullptr && this->timezone_ == nullptr; };
          // currPlan Field Functions 
          bool hasCurrPlan() const { return this->currPlan_ != nullptr;};
          void deleteCurrPlan() { this->currPlan_ = nullptr;};
          inline string getCurrPlan() const { DARABONBA_PTR_GET_DEFAULT(currPlan_, "") };
          inline ScheduleInfo& setCurrPlan(string currPlan) { DARABONBA_PTR_SET_VALUE(currPlan_, currPlan) };


          // currTime Field Functions 
          bool hasCurrTime() const { return this->currTime_ != nullptr;};
          void deleteCurrTime() { this->currTime_ = nullptr;};
          inline string getCurrTime() const { DARABONBA_PTR_GET_DEFAULT(currTime_, "") };
          inline ScheduleInfo& setCurrTime(string currTime) { DARABONBA_PTR_SET_VALUE(currTime_, currTime) };


          // nextPlan Field Functions 
          bool hasNextPlan() const { return this->nextPlan_ != nullptr;};
          void deleteNextPlan() { this->nextPlan_ = nullptr;};
          inline string getNextPlan() const { DARABONBA_PTR_GET_DEFAULT(nextPlan_, "") };
          inline ScheduleInfo& setNextPlan(string nextPlan) { DARABONBA_PTR_SET_VALUE(nextPlan_, nextPlan) };


          // nextTime Field Functions 
          bool hasNextTime() const { return this->nextTime_ != nullptr;};
          void deleteNextTime() { this->nextTime_ = nullptr;};
          inline string getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
          inline ScheduleInfo& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


          // oncePlan Field Functions 
          bool hasOncePlan() const { return this->oncePlan_ != nullptr;};
          void deleteOncePlan() { this->oncePlan_ = nullptr;};
          inline string getOncePlan() const { DARABONBA_PTR_GET_DEFAULT(oncePlan_, "") };
          inline ScheduleInfo& setOncePlan(string oncePlan) { DARABONBA_PTR_SET_VALUE(oncePlan_, oncePlan) };


          // onceTime Field Functions 
          bool hasOnceTime() const { return this->onceTime_ != nullptr;};
          void deleteOnceTime() { this->onceTime_ = nullptr;};
          inline string getOnceTime() const { DARABONBA_PTR_GET_DEFAULT(onceTime_, "") };
          inline ScheduleInfo& setOnceTime(string onceTime) { DARABONBA_PTR_SET_VALUE(onceTime_, onceTime) };


          // operatorName Field Functions 
          bool hasOperatorName() const { return this->operatorName_ != nullptr;};
          void deleteOperatorName() { this->operatorName_ = nullptr;};
          inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
          inline ScheduleInfo& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


          // timezone Field Functions 
          bool hasTimezone() const { return this->timezone_ != nullptr;};
          void deleteTimezone() { this->timezone_ = nullptr;};
          inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
          inline ScheduleInfo& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        protected:
          // The quota plan that is currently in effect.
          shared_ptr<string> currPlan_ {};
          // The time when the current plan took effect.
          shared_ptr<string> currTime_ {};
          // The next quota plan that is scheduled to take effect.
          shared_ptr<string> nextPlan_ {};
          // The time when the next plan is scheduled to take effect.
          shared_ptr<string> nextTime_ {};
          // The quota plan that takes effect immediately. This parameter is returned only when a user triggers an immediate plan that is different from the current plan.
          shared_ptr<string> oncePlan_ {};
          // The time when the immediate plan was triggered.
          shared_ptr<string> onceTime_ {};
          // The name of the operator.
          shared_ptr<string> operatorName_ {};
          // The time zone.
          shared_ptr<string> timezone_ {};
        };

        class SaleTag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SaleTag& obj) { 
            DARABONBA_PTR_TO_JSON(resourceIds, resourceIds_);
            DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          };
          friend void from_json(const Darabonba::Json& j, SaleTag& obj) { 
            DARABONBA_PTR_FROM_JSON(resourceIds, resourceIds_);
            DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          };
          SaleTag() = default ;
          SaleTag(const SaleTag &) = default ;
          SaleTag(SaleTag &&) = default ;
          SaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SaleTag() = default ;
          SaleTag& operator=(const SaleTag &) = default ;
          SaleTag& operator=(SaleTag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr; };
          // resourceIds Field Functions 
          bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
          void deleteResourceIds() { this->resourceIds_ = nullptr;};
          inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
          inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
          inline SaleTag& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
          inline SaleTag& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline SaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        protected:
          // The IDs of the resources. This ID is also used in the billing system. You can use this ID to associate the costs of a quota with a tag.
          shared_ptr<vector<string>> resourceIds_ {};
          // The type of the resource. Valid values: quota and project.
          shared_ptr<string> resourceType_ {};
        };

        class BillingPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
          };
          friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_FROM_JSON(odpsSpecCode, odpsSpecCode_);
            DARABONBA_PTR_FROM_JSON(orderId, orderId_);
          };
          BillingPolicy() = default ;
          BillingPolicy(const BillingPolicy &) = default ;
          BillingPolicy(BillingPolicy &&) = default ;
          BillingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BillingPolicy() = default ;
          BillingPolicy& operator=(const BillingPolicy &) = default ;
          BillingPolicy& operator=(BillingPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->billingMethod_ == nullptr
        && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
          // billingMethod Field Functions 
          bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
          void deleteBillingMethod() { this->billingMethod_ = nullptr;};
          inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
          inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


          // odpsSpecCode Field Functions 
          bool hasOdpsSpecCode() const { return this->odpsSpecCode_ != nullptr;};
          void deleteOdpsSpecCode() { this->odpsSpecCode_ = nullptr;};
          inline string getOdpsSpecCode() const { DARABONBA_PTR_GET_DEFAULT(odpsSpecCode_, "") };
          inline BillingPolicy& setOdpsSpecCode(string odpsSpecCode) { DARABONBA_PTR_SET_VALUE(odpsSpecCode_, odpsSpecCode) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline BillingPolicy& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        protected:
          // The billing method.
          // 
          // - subscription: The subscription billing method.
          // 
          // - payasyougo: The pay-as-you-go billing method.
          shared_ptr<string> billingMethod_ {};
          // The specifications of the order.
          shared_ptr<string> odpsSpecCode_ {};
          // The ID of the order.
          shared_ptr<string> orderId_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key.
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->tags_ == nullptr
        && this->billingPolicy_ == nullptr && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr
        && this->saleTag_ == nullptr && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->subQuotaInfoList_ == nullptr && this->tag_ == nullptr
        && this->tenantId_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<QuotaInfoList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<QuotaInfoList::Tags>) };
        inline vector<QuotaInfoList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<QuotaInfoList::Tags>) };
        inline QuotaInfoList& setTags(const vector<QuotaInfoList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline QuotaInfoList& setTags(vector<QuotaInfoList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // billingPolicy Field Functions 
        bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
        void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
        inline const QuotaInfoList::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, QuotaInfoList::BillingPolicy) };
        inline QuotaInfoList::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, QuotaInfoList::BillingPolicy) };
        inline QuotaInfoList& setBillingPolicy(const QuotaInfoList::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
        inline QuotaInfoList& setBillingPolicy(QuotaInfoList::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline QuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline QuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline QuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline QuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline QuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // parameter Field Functions 
        bool hasParameter() const { return this->parameter_ != nullptr;};
        void deleteParameter() { this->parameter_ = nullptr;};
        inline         const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
        Darabonba::Json & getParameter() { DARABONBA_GET(parameter_) };
        inline QuotaInfoList& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
        inline QuotaInfoList& setParameter(Darabonba::Json && parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline QuotaInfoList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline QuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // saleTag Field Functions 
        bool hasSaleTag() const { return this->saleTag_ != nullptr;};
        void deleteSaleTag() { this->saleTag_ = nullptr;};
        inline const QuotaInfoList::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, QuotaInfoList::SaleTag) };
        inline QuotaInfoList::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, QuotaInfoList::SaleTag) };
        inline QuotaInfoList& setSaleTag(const QuotaInfoList::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
        inline QuotaInfoList& setSaleTag(QuotaInfoList::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


        // scheduleInfo Field Functions 
        bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
        void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
        inline const QuotaInfoList::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, QuotaInfoList::ScheduleInfo) };
        inline QuotaInfoList::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, QuotaInfoList::ScheduleInfo) };
        inline QuotaInfoList& setScheduleInfo(const QuotaInfoList::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
        inline QuotaInfoList& setScheduleInfo(QuotaInfoList::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline QuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subQuotaInfoList Field Functions 
        bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
        void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
        inline const vector<QuotaInfoList::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<QuotaInfoList::SubQuotaInfoList>) };
        inline vector<QuotaInfoList::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<QuotaInfoList::SubQuotaInfoList>) };
        inline QuotaInfoList& setSubQuotaInfoList(const vector<QuotaInfoList::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
        inline QuotaInfoList& setSubQuotaInfoList(vector<QuotaInfoList::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline QuotaInfoList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline QuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline QuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline QuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The tags.
        shared_ptr<vector<QuotaInfoList::Tags>> tags_ {};
        // The billing information.
        shared_ptr<QuotaInfoList::BillingPolicy> billingPolicy_ {};
        // The ID of the cluster.
        shared_ptr<string> cluster_ {};
        // The time when the quota was created.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the account that created the quota. This ID is an Alibaba Cloud account UID.
        shared_ptr<string> creatorId_ {};
        // The ID of the quota.
        shared_ptr<string> id_ {};
        // The name of the quota.
        shared_ptr<string> name_ {};
        // The alias of the quota.
        shared_ptr<string> nickName_ {};
        // The quota description.
        Darabonba::Json parameter_ {};
        // The ID of the parent resource.
        shared_ptr<string> parentId_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The sales tag of the quota. This tag is the same as the billing identifier and is used for cost allocation.
        shared_ptr<QuotaInfoList::SaleTag> saleTag_ {};
        // The time-based scheduling information.
        shared_ptr<QuotaInfoList::ScheduleInfo> scheduleInfo_ {};
        // The status of the quota.
        shared_ptr<string> status_ {};
        // The information about the sub-quotas.
        shared_ptr<vector<QuotaInfoList::SubQuotaInfoList>> subQuotaInfoList_ {};
        // The tag of the quota.
        shared_ptr<string> tag_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the control cluster.
        shared_ptr<string> type_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->marker_ == nullptr && this->maxItem_ == nullptr && this->quotaInfoList_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // marker Field Functions 
      bool hasMarker() const { return this->marker_ != nullptr;};
      void deleteMarker() { this->marker_ = nullptr;};
      inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
      inline Data& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


      // maxItem Field Functions 
      bool hasMaxItem() const { return this->maxItem_ != nullptr;};
      void deleteMaxItem() { this->maxItem_ = nullptr;};
      inline int64_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0L) };
      inline Data& setMaxItem(int64_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


      // quotaInfoList Field Functions 
      bool hasQuotaInfoList() const { return this->quotaInfoList_ != nullptr;};
      void deleteQuotaInfoList() { this->quotaInfoList_ = nullptr;};
      inline const vector<Data::QuotaInfoList> & getQuotaInfoList() const { DARABONBA_PTR_GET_CONST(quotaInfoList_, vector<Data::QuotaInfoList>) };
      inline vector<Data::QuotaInfoList> getQuotaInfoList() { DARABONBA_PTR_GET(quotaInfoList_, vector<Data::QuotaInfoList>) };
      inline Data& setQuotaInfoList(const vector<Data::QuotaInfoList> & quotaInfoList) { DARABONBA_PTR_SET_VALUE(quotaInfoList_, quotaInfoList) };
      inline Data& setQuotaInfoList(vector<Data::QuotaInfoList> && quotaInfoList) { DARABONBA_PTR_SET_RVALUE(quotaInfoList_, quotaInfoList) };


    protected:
      // The token for the next page of results. If this parameter has a value, more results are available. To get the next page, include this value in the \\`NextToken\\` parameter of the next request.
      shared_ptr<string> nextToken_ {};
      // The results are returned in alphabetical order, starting from the entry after the marker.
      shared_ptr<string> marker_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int64_t> maxItem_ {};
      // The list of quotas.
      shared_ptr<vector<Data::QuotaInfoList>> quotaInfoList_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->data_ == nullptr && this->marker_ == nullptr && this->maxItem_ == nullptr && this->quotaInfoList_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQuotasResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQuotasResponseBody::Data) };
    inline ListQuotasResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQuotasResponseBody::Data) };
    inline ListQuotasResponseBody& setData(const ListQuotasResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQuotasResponseBody& setData(ListQuotasResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListQuotasResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int64_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0L) };
    inline ListQuotasResponseBody& setMaxItem(int64_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // quotaInfoList Field Functions 
    bool hasQuotaInfoList() const { return this->quotaInfoList_ != nullptr;};
    void deleteQuotaInfoList() { this->quotaInfoList_ = nullptr;};
    inline const vector<ListQuotasResponseBody::QuotaInfoList> & getQuotaInfoList() const { DARABONBA_PTR_GET_CONST(quotaInfoList_, vector<ListQuotasResponseBody::QuotaInfoList>) };
    inline vector<ListQuotasResponseBody::QuotaInfoList> getQuotaInfoList() { DARABONBA_PTR_GET(quotaInfoList_, vector<ListQuotasResponseBody::QuotaInfoList>) };
    inline ListQuotasResponseBody& setQuotaInfoList(const vector<ListQuotasResponseBody::QuotaInfoList> & quotaInfoList) { DARABONBA_PTR_SET_VALUE(quotaInfoList_, quotaInfoList) };
    inline ListQuotasResponseBody& setQuotaInfoList(vector<ListQuotasResponseBody::QuotaInfoList> && quotaInfoList) { DARABONBA_PTR_SET_RVALUE(quotaInfoList_, quotaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The token for the next page of results. This operation supports only consecutive paging. If the returned value is not empty, more data is available. To get the next page, use the returned value in your next request.
    shared_ptr<string> nextToken_ {};
    // The data returned.
    shared_ptr<ListQuotasResponseBody::Data> data_ {};
    // The token that specifies the position from which to start returning results. The results are sorted in alphabetical order.
    shared_ptr<string> marker_ {};
    // The maximum number of entries returned on each page.
    shared_ptr<int64_t> maxItem_ {};
    // The list of quotas.
    shared_ptr<vector<ListQuotasResponseBody::QuotaInfoList>> quotaInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
