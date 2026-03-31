// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUOTARESPONSEBODY_HPP_
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
  class QueryQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryQuotaResponseBody() = default ;
    QueryQuotaResponseBody(const QueryQuotaResponseBody &) = default ;
    QueryQuotaResponseBody(QueryQuotaResponseBody &&) = default ;
    QueryQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQuotaResponseBody() = default ;
    QueryQuotaResponseBody& operator=(const QueryQuotaResponseBody &) = default ;
    QueryQuotaResponseBody& operator=(QueryQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
        DARABONBA_PTR_TO_JSON(cluster, cluster_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
        DARABONBA_PTR_FROM_JSON(cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
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
      class SubQuotaInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
          DARABONBA_ANY_TO_JSON(parameter, parameter_);
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
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
          DARABONBA_ANY_FROM_JSON(parameter, parameter_);
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
          // The current quota plan that has taken effect based on the scheduling plan.
          shared_ptr<string> currPlan_ {};
          // The time when the plan specified by currPlan is scheduled.
          shared_ptr<string> currTime_ {};
          // The quota plan that will take effect based on the scheduling plan.
          shared_ptr<string> nextPlan_ {};
          // The time when the plan specified by nextPlan is scheduled.
          shared_ptr<string> nextTime_ {};
          // The quota plan that immediately takes effect. If the quota plan specified by this parameter is triggered and the plan is different from the plan specified by currPlan, this parameter is not empty.
          shared_ptr<string> oncePlan_ {};
          // The time when the quota plan specified by oncePlan is scheduled.
          shared_ptr<string> onceTime_ {};
          // The operator name.
          shared_ptr<string> operatorName_ {};
          // The time zone of the project.
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
          // The identifier of a MaxCompute quota object. This identifier exists in the Alibaba Cloud sales bill. You can use this identifier to associate the cost of a quota object with a tag.
          shared_ptr<vector<string>> resourceIds_ {};
          // The object type. Valid values: quota and project.
          shared_ptr<string> resourceType_ {};
        };

        class BillingPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
            DARABONBA_PTR_TO_JSON(orderId, orderId_);
          };
          friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
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
        && this->instanceId_ == nullptr && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
          // billingMethod Field Functions 
          bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
          void deleteBillingMethod() { this->billingMethod_ = nullptr;};
          inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
          inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline BillingPolicy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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
          // The billing method. Valid values:
          // 
          // *   subscription: the subscription quota.
          // *   payasyougo: the pay-as-you-go quota.
          shared_ptr<string> billingMethod_ {};
          // In MaxCompute, instanceId and orderId are considered the same.
          shared_ptr<string> instanceId_ {};
          // The order specifications.
          shared_ptr<string> odpsSpecCode_ {};
          // The order ID.
          shared_ptr<string> orderId_ {};
        };

        virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr
        && this->saleTag_ == nullptr && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->tenantId_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
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


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline SubQuotaInfoList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


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
        inline         const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
        Darabonba::Json & getParameter() { DARABONBA_GET(parameter_) };
        inline SubQuotaInfoList& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
        inline SubQuotaInfoList& setParameter(Darabonba::Json && parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


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
        // The order information.
        shared_ptr<SubQuotaInfoList::BillingPolicy> billingPolicy_ {};
        // The cluster ID.
        shared_ptr<string> cluster_ {};
        // The time when the resource was created.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the Alibaba Cloud account that is used to create the quota plan.
        shared_ptr<string> creatorId_ {};
        // The role group name.
        shared_ptr<string> groupName_ {};
        // The ID of the level-2 quota.
        shared_ptr<string> id_ {};
        // The name of the level-2 quota.
        shared_ptr<string> name_ {};
        // The nickname of the level-2 quota.
        shared_ptr<string> nickName_ {};
        // The quota description.
        Darabonba::Json parameter_ {};
        // The parent resource ID.
        shared_ptr<string> parentId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The identifiers of MaxCompute quota objects. The identifiers are the same as those in the Alibaba Cloud sales bill. This parameter is used for tags.
        shared_ptr<SubQuotaInfoList::SaleTag> saleTag_ {};
        // The information about the scheduling plan.
        shared_ptr<SubQuotaInfoList::ScheduleInfo> scheduleInfo_ {};
        // The status of the resource.
        shared_ptr<string> status_ {};
        // The resource tag of a quota.
        shared_ptr<string> tag_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // This parameter corresponds to the resourceSystemType field.
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
        // The current quota plan that has taken effect based on the scheduling plan.
        shared_ptr<string> currPlan_ {};
        // The time when the plan specified by currPlan is scheduled.
        shared_ptr<string> currTime_ {};
        // The quota plan that will take effect based on the scheduling plan.
        shared_ptr<string> nextPlan_ {};
        // The time when the plan specified by nextPlan is scheduled.
        shared_ptr<string> nextTime_ {};
        // The quota plan that immediately takes effect. If the quota plan specified by this parameter is triggered and the plan is different from the plan specified by currPlan, this parameter is not empty.
        shared_ptr<string> oncePlan_ {};
        // The time when the quota plan specified by oncePlan is scheduled.
        shared_ptr<string> onceTime_ {};
        // The operator name.
        shared_ptr<string> operatorName_ {};
        // The time zone of the project.
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
        // The identifier of a MaxCompute quota object. This identifier exists in the Alibaba Cloud sales bill. You can use this identifier to associate the cost of a quota object with a tag.
        shared_ptr<vector<string>> resourceIds_ {};
        // The object type. Valid values: quota and project.
        shared_ptr<string> resourceType_ {};
      };

      class BillingPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillingPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(billingMethod, billingMethod_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(odpsSpecCode, odpsSpecCode_);
          DARABONBA_PTR_TO_JSON(orderId, orderId_);
        };
        friend void from_json(const Darabonba::Json& j, BillingPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(billingMethod, billingMethod_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
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
        && this->instanceId_ == nullptr && this->odpsSpecCode_ == nullptr && this->orderId_ == nullptr; };
        // billingMethod Field Functions 
        bool hasBillingMethod() const { return this->billingMethod_ != nullptr;};
        void deleteBillingMethod() { this->billingMethod_ = nullptr;};
        inline string getBillingMethod() const { DARABONBA_PTR_GET_DEFAULT(billingMethod_, "") };
        inline BillingPolicy& setBillingMethod(string billingMethod) { DARABONBA_PTR_SET_VALUE(billingMethod_, billingMethod) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline BillingPolicy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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
        // The billing method. Valid values:
        // 
        // *   subscription: the subscription quota.
        // *   payasyougo: the pay-as-you-go quota.
        shared_ptr<string> billingMethod_ {};
        // In MaxCompute, instanceId and orderId are considered the same.
        shared_ptr<string> instanceId_ {};
        // The order specifications.
        shared_ptr<string> odpsSpecCode_ {};
        // The order ID.
        shared_ptr<string> orderId_ {};
      };

      virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr
        && this->saleTag_ == nullptr && this->scheduleInfo_ == nullptr && this->status_ == nullptr && this->subQuotaInfoList_ == nullptr && this->tag_ == nullptr
        && this->tenantId_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // billingPolicy Field Functions 
      bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
      void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
      inline const Data::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, Data::BillingPolicy) };
      inline Data::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, Data::BillingPolicy) };
      inline Data& setBillingPolicy(const Data::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
      inline Data& setBillingPolicy(Data::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
      inline Data& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Data& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Data& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline       const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
      Darabonba::Json & getParameter() { DARABONBA_GET(parameter_) };
      inline Data& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
      inline Data& setParameter(Darabonba::Json && parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Data& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // saleTag Field Functions 
      bool hasSaleTag() const { return this->saleTag_ != nullptr;};
      void deleteSaleTag() { this->saleTag_ = nullptr;};
      inline const Data::SaleTag & getSaleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Data::SaleTag) };
      inline Data::SaleTag getSaleTag() { DARABONBA_PTR_GET(saleTag_, Data::SaleTag) };
      inline Data& setSaleTag(const Data::SaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
      inline Data& setSaleTag(Data::SaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


      // scheduleInfo Field Functions 
      bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
      void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
      inline const Data::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Data::ScheduleInfo) };
      inline Data::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Data::ScheduleInfo) };
      inline Data& setScheduleInfo(const Data::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
      inline Data& setScheduleInfo(Data::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subQuotaInfoList Field Functions 
      bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
      void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
      inline const vector<Data::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Data::SubQuotaInfoList>) };
      inline vector<Data::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Data::SubQuotaInfoList>) };
      inline Data& setSubQuotaInfoList(const vector<Data::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
      inline Data& setSubQuotaInfoList(vector<Data::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The order information.
      shared_ptr<Data::BillingPolicy> billingPolicy_ {};
      // The ID of the Managed Service for Prometheus cluster.
      shared_ptr<string> cluster_ {};
      // The time when the resource was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the Alibaba Cloud account that is used to create the quota plan.
      shared_ptr<string> creatorId_ {};
      // The group name.
      shared_ptr<string> groupName_ {};
      // The quota ID.
      shared_ptr<string> id_ {};
      // The quota name.
      shared_ptr<string> name_ {};
      // The quota alias.
      shared_ptr<string> nickName_ {};
      // The quota description.
      Darabonba::Json parameter_ {};
      // The parent resource ID.
      shared_ptr<string> parentId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The identifiers of MaxCompute quota objects. The identifiers are the same as those in the Alibaba Cloud sales bill. This parameter is used for tags.
      shared_ptr<Data::SaleTag> saleTag_ {};
      // The information about the scheduling plan.
      shared_ptr<Data::ScheduleInfo> scheduleInfo_ {};
      // The status of the resource.
      shared_ptr<string> status_ {};
      // The level-2 quotas.
      shared_ptr<vector<Data::SubQuotaInfoList>> subQuotaInfoList_ {};
      // The resource tag of a quota.
      shared_ptr<string> tag_ {};
      // The tenant ID.
      shared_ptr<string> tenantId_ {};
      // This parameter corresponds to the resourceSystemType field.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryQuotaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryQuotaResponseBody::Data) };
    inline QueryQuotaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryQuotaResponseBody::Data) };
    inline QueryQuotaResponseBody& setData(const QueryQuotaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryQuotaResponseBody& setData(QueryQuotaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryQuotaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryQuotaResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryQuotaResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<QueryQuotaResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
