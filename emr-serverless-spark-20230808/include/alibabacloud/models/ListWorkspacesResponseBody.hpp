// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(workspaces, workspaces_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspaces& obj) { 
        DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(dlfCatalogId, dlfCatalogId_);
        DARABONBA_PTR_TO_JSON(dlfType, dlfType_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(failReason, failReason_);
        DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
        DARABONBA_PTR_TO_JSON(paymentStatus, paymentStatus_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(prePaidQuota, prePaidQuota_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(releaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
        DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_TO_JSON(storage, storage_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
        DARABONBA_PTR_TO_JSON(workspaceStatus, workspaceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Workspaces& obj) { 
        DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(dlfCatalogId, dlfCatalogId_);
        DARABONBA_PTR_FROM_JSON(dlfType, dlfType_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(failReason, failReason_);
        DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
        DARABONBA_PTR_FROM_JSON(paymentStatus, paymentStatus_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(prePaidQuota, prePaidQuota_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(releaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
        DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_FROM_JSON(storage, storage_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
        DARABONBA_PTR_FROM_JSON(workspaceStatus, workspaceStatus_);
      };
      Workspaces() = default ;
      Workspaces(const Workspaces &) = default ;
      Workspaces(Workspaces &&) = default ;
      Workspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workspaces() = default ;
      Workspaces& operator=(const Workspaces &) = default ;
      Workspaces& operator=(Workspaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
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
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class StateChangeReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateChangeReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateChangeReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateChangeReason() = default ;
        StateChangeReason(const StateChangeReason &) = default ;
        StateChangeReason(StateChangeReason &&) = default ;
        StateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateChangeReason() = default ;
        StateChangeReason& operator=(const StateChangeReason &) = default ;
        StateChangeReason& operator=(StateChangeReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The error code.
        shared_ptr<string> code_ {};
        // The error message.
        shared_ptr<string> message_ {};
      };

      class PrePaidQuota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrePaidQuota& obj) { 
          DARABONBA_PTR_TO_JSON(allocatedResource, allocatedResource_);
          DARABONBA_PTR_TO_JSON(autoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(maxResource, maxResource_);
          DARABONBA_PTR_TO_JSON(orderId, orderId_);
          DARABONBA_PTR_TO_JSON(paymentStatus, paymentStatus_);
          DARABONBA_PTR_TO_JSON(usedResource, usedResource_);
        };
        friend void from_json(const Darabonba::Json& j, PrePaidQuota& obj) { 
          DARABONBA_PTR_FROM_JSON(allocatedResource, allocatedResource_);
          DARABONBA_PTR_FROM_JSON(autoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(maxResource, maxResource_);
          DARABONBA_PTR_FROM_JSON(orderId, orderId_);
          DARABONBA_PTR_FROM_JSON(paymentStatus, paymentStatus_);
          DARABONBA_PTR_FROM_JSON(usedResource, usedResource_);
        };
        PrePaidQuota() = default ;
        PrePaidQuota(const PrePaidQuota &) = default ;
        PrePaidQuota(PrePaidQuota &&) = default ;
        PrePaidQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrePaidQuota() = default ;
        PrePaidQuota& operator=(const PrePaidQuota &) = default ;
        PrePaidQuota& operator=(PrePaidQuota &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocatedResource_ == nullptr
        && this->autoRenewal_ == nullptr && this->createTime_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->maxResource_ == nullptr
        && this->orderId_ == nullptr && this->paymentStatus_ == nullptr && this->usedResource_ == nullptr; };
        // allocatedResource Field Functions 
        bool hasAllocatedResource() const { return this->allocatedResource_ != nullptr;};
        void deleteAllocatedResource() { this->allocatedResource_ = nullptr;};
        inline string getAllocatedResource() const { DARABONBA_PTR_GET_DEFAULT(allocatedResource_, "") };
        inline PrePaidQuota& setAllocatedResource(string allocatedResource) { DARABONBA_PTR_SET_VALUE(allocatedResource_, allocatedResource) };


        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline PrePaidQuota& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PrePaidQuota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline PrePaidQuota& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline PrePaidQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // maxResource Field Functions 
        bool hasMaxResource() const { return this->maxResource_ != nullptr;};
        void deleteMaxResource() { this->maxResource_ = nullptr;};
        inline string getMaxResource() const { DARABONBA_PTR_GET_DEFAULT(maxResource_, "") };
        inline PrePaidQuota& setMaxResource(string maxResource) { DARABONBA_PTR_SET_VALUE(maxResource_, maxResource) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline PrePaidQuota& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // paymentStatus Field Functions 
        bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
        void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
        inline string getPaymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
        inline PrePaidQuota& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


        // usedResource Field Functions 
        bool hasUsedResource() const { return this->usedResource_ != nullptr;};
        void deleteUsedResource() { this->usedResource_ = nullptr;};
        inline string getUsedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, "") };
        inline PrePaidQuota& setUsedResource(string usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


      protected:
        // The amount of resources that are allocated by a subscription quota.
        shared_ptr<string> allocatedResource_ {};
        // Indicates whether auto-renewal is enabled for the subscription quota.
        // 
        // *   true
        // *   false
        shared_ptr<bool> autoRenewal_ {};
        // The creation time of the subscription quota.
        shared_ptr<int64_t> createTime_ {};
        // The expiration time of the subscription quota.
        shared_ptr<int64_t> expireTime_ {};
        // The ID of the instance that is generated when you purchase the subscription quota.
        shared_ptr<string> instanceId_ {};
        // The maximum amount of resources that can be used in a subscription quota.
        shared_ptr<string> maxResource_ {};
        shared_ptr<string> orderId_ {};
        // The status of the subscription quota. Valid values:
        // 
        // *   NORMAL
        // *   WAIT_FOR_EXPIRE
        // *   EXPIRED
        shared_ptr<string> paymentStatus_ {};
        // The amount of resources that are used.
        shared_ptr<string> usedResource_ {};
      };

      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->autoRenewPeriodUnit_ == nullptr && this->createTime_ == nullptr && this->dlfCatalogId_ == nullptr && this->dlfType_ == nullptr
        && this->duration_ == nullptr && this->endTime_ == nullptr && this->failReason_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentStatus_ == nullptr
        && this->paymentType_ == nullptr && this->prePaidQuota_ == nullptr && this->regionId_ == nullptr && this->releaseType_ == nullptr && this->resourceSpec_ == nullptr
        && this->stateChangeReason_ == nullptr && this->storage_ == nullptr && this->tags_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr
        && this->workspaceStatus_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Workspaces& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
      inline Workspaces& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // autoRenewPeriodUnit Field Functions 
      bool hasAutoRenewPeriodUnit() const { return this->autoRenewPeriodUnit_ != nullptr;};
      void deleteAutoRenewPeriodUnit() { this->autoRenewPeriodUnit_ = nullptr;};
      inline string getAutoRenewPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodUnit_, "") };
      inline Workspaces& setAutoRenewPeriodUnit(string autoRenewPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodUnit_, autoRenewPeriodUnit) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Workspaces& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dlfCatalogId Field Functions 
      bool hasDlfCatalogId() const { return this->dlfCatalogId_ != nullptr;};
      void deleteDlfCatalogId() { this->dlfCatalogId_ = nullptr;};
      inline string getDlfCatalogId() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogId_, "") };
      inline Workspaces& setDlfCatalogId(string dlfCatalogId) { DARABONBA_PTR_SET_VALUE(dlfCatalogId_, dlfCatalogId) };


      // dlfType Field Functions 
      bool hasDlfType() const { return this->dlfType_ != nullptr;};
      void deleteDlfType() { this->dlfType_ = nullptr;};
      inline string getDlfType() const { DARABONBA_PTR_GET_DEFAULT(dlfType_, "") };
      inline Workspaces& setDlfType(string dlfType) { DARABONBA_PTR_SET_VALUE(dlfType_, dlfType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Workspaces& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Workspaces& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline Workspaces& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


      // paymentDurationUnit Field Functions 
      bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
      void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
      inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
      inline Workspaces& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


      // paymentStatus Field Functions 
      bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
      void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
      inline string getPaymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
      inline Workspaces& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Workspaces& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // prePaidQuota Field Functions 
      bool hasPrePaidQuota() const { return this->prePaidQuota_ != nullptr;};
      void deletePrePaidQuota() { this->prePaidQuota_ = nullptr;};
      inline const Workspaces::PrePaidQuota & getPrePaidQuota() const { DARABONBA_PTR_GET_CONST(prePaidQuota_, Workspaces::PrePaidQuota) };
      inline Workspaces::PrePaidQuota getPrePaidQuota() { DARABONBA_PTR_GET(prePaidQuota_, Workspaces::PrePaidQuota) };
      inline Workspaces& setPrePaidQuota(const Workspaces::PrePaidQuota & prePaidQuota) { DARABONBA_PTR_SET_VALUE(prePaidQuota_, prePaidQuota) };
      inline Workspaces& setPrePaidQuota(Workspaces::PrePaidQuota && prePaidQuota) { DARABONBA_PTR_SET_RVALUE(prePaidQuota_, prePaidQuota) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Workspaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline Workspaces& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline string getResourceSpec() const { DARABONBA_PTR_GET_DEFAULT(resourceSpec_, "") };
      inline Workspaces& setResourceSpec(string resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const Workspaces::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, Workspaces::StateChangeReason) };
      inline Workspaces::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, Workspaces::StateChangeReason) };
      inline Workspaces& setStateChangeReason(const Workspaces::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline Workspaces& setStateChangeReason(Workspaces::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline string getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
      inline Workspaces& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Workspaces::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Workspaces::Tags>) };
      inline vector<Workspaces::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Workspaces::Tags>) };
      inline Workspaces& setTags(const vector<Workspaces::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Workspaces& setTags(vector<Workspaces::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Workspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Workspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      // workspaceStatus Field Functions 
      bool hasWorkspaceStatus() const { return this->workspaceStatus_ != nullptr;};
      void deleteWorkspaceStatus() { this->workspaceStatus_ = nullptr;};
      inline string getWorkspaceStatus() const { DARABONBA_PTR_GET_DEFAULT(workspaceStatus_, "") };
      inline Workspaces& setWorkspaceStatus(string workspaceStatus) { DARABONBA_PTR_SET_VALUE(workspaceStatus_, workspaceStatus) };


    protected:
      // Specifies whether to enable auto-renewal. This parameter is required only if the paymentType parameter is set to Pre.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
      shared_ptr<int32_t> autoRenewPeriod_ {};
      // The unit of the auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
      shared_ptr<string> autoRenewPeriodUnit_ {};
      // The time when the workflow was created.
      shared_ptr<int64_t> createTime_ {};
      // The information of the Data Lake Formation (DLF) catalog.
      shared_ptr<string> dlfCatalogId_ {};
      // The version of DLF.
      shared_ptr<string> dlfType_ {};
      // The subscription period. This parameter is required only if the paymentType parameter is set to Pre.
      shared_ptr<int32_t> duration_ {};
      // The end of the end time range.
      shared_ptr<int64_t> endTime_ {};
      // The failure reason.
      shared_ptr<string> failReason_ {};
      // The unit of the subscription duration.
      shared_ptr<string> paymentDurationUnit_ {};
      // The status of the payment.
      shared_ptr<string> paymentStatus_ {};
      // The billing method. Valid values:
      // 
      // - PayAsYouGo
      // - Pre
      shared_ptr<string> paymentType_ {};
      // The information about the subscription quota.
      shared_ptr<Workspaces::PrePaidQuota> prePaidQuota_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The reason why the workspace is released.
      shared_ptr<string> releaseType_ {};
      // The resource specifications.
      shared_ptr<string> resourceSpec_ {};
      // The reason of the job status change.
      shared_ptr<Workspaces::StateChangeReason> stateChangeReason_ {};
      // The OSS path.
      shared_ptr<string> storage_ {};
      shared_ptr<vector<Workspaces::Tags>> tags_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
      // The name of the workspace.
      shared_ptr<string> workspaceName_ {};
      // The workspace status.
      shared_ptr<string> workspaceStatus_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->workspaces_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkspacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::Workspaces> & getWorkspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline vector<ListWorkspacesResponseBody::Workspaces> getWorkspaces() { DARABONBA_PTR_GET(workspaces_, vector<ListWorkspacesResponseBody::Workspaces>) };
    inline ListWorkspacesResponseBody& setWorkspaces(const vector<ListWorkspacesResponseBody::Workspaces> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline ListWorkspacesResponseBody& setWorkspaces(vector<ListWorkspacesResponseBody::Workspaces> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The queried workspaces.
    shared_ptr<vector<ListWorkspacesResponseBody::Workspaces>> workspaces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
