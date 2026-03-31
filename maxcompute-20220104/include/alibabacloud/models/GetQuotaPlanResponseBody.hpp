// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAPLANRESPONSEBODY_HPP_
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
  class GetQuotaPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetQuotaPlanResponseBody() = default ;
    GetQuotaPlanResponseBody(const GetQuotaPlanResponseBody &) = default ;
    GetQuotaPlanResponseBody(GetQuotaPlanResponseBody &&) = default ;
    GetQuotaPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaPlanResponseBody() = default ;
    GetQuotaPlanResponseBody& operator=(const GetQuotaPlanResponseBody &) = default ;
    GetQuotaPlanResponseBody& operator=(GetQuotaPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
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
      class Quota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quota& obj) { 
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
          DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_TO_JSON(tag, tag_);
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Quota& obj) { 
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
          DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
          DARABONBA_PTR_FROM_JSON(tag, tag_);
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Quota() = default ;
        Quota(const Quota &) = default ;
        Quota(Quota &&) = default ;
        Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quota() = default ;
        Quota& operator=(const Quota &) = default ;
        Quota& operator=(Quota &&) = default ;
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
            DARABONBA_ANY_TO_JSON(parameter, parameter_);
            DARABONBA_PTR_TO_JSON(parentId, parentId_);
            DARABONBA_PTR_TO_JSON(regionId, regionId_);
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
            DARABONBA_ANY_FROM_JSON(parameter, parameter_);
            DARABONBA_PTR_FROM_JSON(parentId, parentId_);
            DARABONBA_PTR_FROM_JSON(regionId, regionId_);
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
            };
            friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
              DARABONBA_PTR_FROM_JSON(currTime, currTime_);
              DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
              DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
              DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
              DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
              DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
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
        && this->operatorName_ == nullptr; };
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


          protected:
            // The quota plan that takes effect based on the scheduling plan.
            shared_ptr<string> currPlan_ {};
            // The time when the current quota plan is scheduled.
            shared_ptr<string> currTime_ {};
            // The next quota plan that will take effect based on the scheduling plan.
            shared_ptr<string> nextPlan_ {};
            // The time when the next quota plan is scheduled.
            shared_ptr<string> nextTime_ {};
            // If the quota plan that immediately takes effect is different from the current quota plan, this parameter is not empty.
            shared_ptr<string> oncePlan_ {};
            // The time when the quota plan immediately takes effect.
            shared_ptr<string> onceTime_ {};
            // The name of the operator.
            shared_ptr<string> operatorName_ {};
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
            // The billing method of the quota. Valid values:
            // 
            // *   subscription: a subscription quota.
            // *   payasyougo: a pay-as-you-go quota.
            shared_ptr<string> billingMethod_ {};
            // The specifications of the order.
            shared_ptr<string> odpsSpecCode_ {};
            // The ID of the order.
            shared_ptr<string> orderId_ {};
          };

          virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr && this->scheduleInfo_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
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
          inline           const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
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
          // The information of the order.
          shared_ptr<SubQuotaInfoList::BillingPolicy> billingPolicy_ {};
          // The ID of the cluster.
          shared_ptr<string> cluster_ {};
          // The time when the resource was created.
          shared_ptr<int64_t> createTime_ {};
          // The ID of the user who created the quota plan.
          shared_ptr<string> creatorId_ {};
          // The ID of the level-2 quota.
          shared_ptr<string> id_ {};
          // The name of the level-2 quota.
          shared_ptr<string> name_ {};
          // The alias of the level-2 quota.
          shared_ptr<string> nickName_ {};
          // The description of the quota.
          Darabonba::Json parameter_ {};
          // The ID of the parent resource.
          shared_ptr<string> parentId_ {};
          // The ID of the region.
          shared_ptr<string> regionId_ {};
          // The information of the scheduling plan.
          shared_ptr<SubQuotaInfoList::ScheduleInfo> scheduleInfo_ {};
          // The status of the resource.
          shared_ptr<string> status_ {};
          // The tag of the resource for the quota.
          shared_ptr<string> tag_ {};
          // The ID of the tenant.
          shared_ptr<string> tenantId_ {};
          // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the cluster.
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
          };
          friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
            DARABONBA_PTR_FROM_JSON(currTime, currTime_);
            DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
            DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
            DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
            DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
            DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
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
        && this->operatorName_ == nullptr; };
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


        protected:
          // The quota plan that takes effect based on the scheduling plan.
          shared_ptr<string> currPlan_ {};
          // The time when the current quota plan is scheduled.
          shared_ptr<string> currTime_ {};
          // The next quota plan that will take effect based on the scheduling plan.
          shared_ptr<string> nextPlan_ {};
          // The time when the next quota plan is scheduled.
          shared_ptr<string> nextTime_ {};
          // If the quota plan that immediately takes effect is different from the current quota plan, this parameter is not empty.
          shared_ptr<string> oncePlan_ {};
          // The time when the quota plan immediately takes effect.
          shared_ptr<string> onceTime_ {};
          // The name of the operator.
          shared_ptr<string> operatorName_ {};
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
          // The billing method of the quota. Valid values:
          // 
          // *   subscription: a subscription quota.
          // *   payasyougo: a pay-as-you-go quota.
          shared_ptr<string> billingMethod_ {};
          // The specifications of the order.
          shared_ptr<string> odpsSpecCode_ {};
          // The ID of the order.
          shared_ptr<string> orderId_ {};
        };

        virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && this->cluster_ == nullptr && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->parameter_ == nullptr && this->parentId_ == nullptr && this->regionId_ == nullptr && this->scheduleInfo_ == nullptr
        && this->status_ == nullptr && this->subQuotaInfoList_ == nullptr && this->tag_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
        // billingPolicy Field Functions 
        bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
        void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
        inline const Quota::BillingPolicy & getBillingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, Quota::BillingPolicy) };
        inline Quota::BillingPolicy getBillingPolicy() { DARABONBA_PTR_GET(billingPolicy_, Quota::BillingPolicy) };
        inline Quota& setBillingPolicy(const Quota::BillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
        inline Quota& setBillingPolicy(Quota::BillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline Quota& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Quota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Quota& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Quota& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Quota& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Quota& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // parameter Field Functions 
        bool hasParameter() const { return this->parameter_ != nullptr;};
        void deleteParameter() { this->parameter_ = nullptr;};
        inline         const Darabonba::Json & getParameter() const { DARABONBA_GET(parameter_) };
        Darabonba::Json & getParameter() { DARABONBA_GET(parameter_) };
        inline Quota& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
        inline Quota& setParameter(Darabonba::Json && parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline Quota& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Quota& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // scheduleInfo Field Functions 
        bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
        void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
        inline const Quota::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Quota::ScheduleInfo) };
        inline Quota::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Quota::ScheduleInfo) };
        inline Quota& setScheduleInfo(const Quota::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
        inline Quota& setScheduleInfo(Quota::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Quota& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subQuotaInfoList Field Functions 
        bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
        void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
        inline const vector<Quota::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
        inline vector<Quota::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
        inline Quota& setSubQuotaInfoList(const vector<Quota::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
        inline Quota& setSubQuotaInfoList(vector<Quota::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Quota& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Quota& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Quota& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Quota& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The information of the order.
        shared_ptr<Quota::BillingPolicy> billingPolicy_ {};
        // The ID of the cluster.
        shared_ptr<string> cluster_ {};
        // The time when the quota plan was created.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the Alibaba Cloud account that is used to create the resource.
        shared_ptr<string> creatorId_ {};
        // The ID of the quota.
        shared_ptr<string> id_ {};
        // The name of the quota.
        shared_ptr<string> name_ {};
        // The alias of the quota.
        shared_ptr<string> nickName_ {};
        // The description of the quota.
        Darabonba::Json parameter_ {};
        // The ID of the parent resource.
        shared_ptr<string> parentId_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The information of the scheduling plan.
        shared_ptr<Quota::ScheduleInfo> scheduleInfo_ {};
        // The status of the resource.
        shared_ptr<string> status_ {};
        // The information of the level-2 quota.
        shared_ptr<vector<Quota::SubQuotaInfoList>> subQuotaInfoList_ {};
        // The tag of the resource for the quota.
        shared_ptr<string> tag_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the cluster.
        shared_ptr<string> type_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->name_ == nullptr && this->quota_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Data::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Data::Quota) };
      inline Data::Quota getQuota() { DARABONBA_PTR_GET(quota_, Data::Quota) };
      inline Data& setQuota(const Data::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Data& setQuota(Data::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    protected:
      // The time when the quota plan was created.
      shared_ptr<string> createTime_ {};
      // The name of the quota plan.
      shared_ptr<string> name_ {};
      // The details of the quota.
      shared_ptr<Data::Quota> quota_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQuotaPlanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQuotaPlanResponseBody::Data) };
    inline GetQuotaPlanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQuotaPlanResponseBody::Data) };
    inline GetQuotaPlanResponseBody& setData(const GetQuotaPlanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQuotaPlanResponseBody& setData(GetQuotaPlanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetQuotaPlanResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
