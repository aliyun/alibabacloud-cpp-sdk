// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ReplaceAppGroupCommodityCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceAppGroupCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceAppGroupCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ReplaceAppGroupCommodityCodeResponseBody() = default ;
    ReplaceAppGroupCommodityCodeResponseBody(const ReplaceAppGroupCommodityCodeResponseBody &) = default ;
    ReplaceAppGroupCommodityCodeResponseBody(ReplaceAppGroupCommodityCodeResponseBody &&) = default ;
    ReplaceAppGroupCommodityCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceAppGroupCommodityCodeResponseBody() = default ;
    ReplaceAppGroupCommodityCodeResponseBody& operator=(const ReplaceAppGroupCommodityCodeResponseBody &) = default ;
    ReplaceAppGroupCommodityCodeResponseBody& operator=(ReplaceAppGroupCommodityCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(chargingWay, chargingWay_);
        DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(expireOn, expireOn_);
        DARABONBA_PTR_TO_JSON(firstRankAlgoDeploymentId, firstRankAlgoDeploymentId_);
        DARABONBA_PTR_TO_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(lockedByExpiration, lockedByExpiration_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(pendingSecondRankAlgoDeploymentId, pendingSecondRankAlgoDeploymentId_);
        DARABONBA_PTR_TO_JSON(processingOrderId, processingOrderId_);
        DARABONBA_PTR_TO_JSON(produced, produced_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
        DARABONBA_PTR_TO_JSON(secondRankAlgoDeploymentId, secondRankAlgoDeploymentId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(switchedTime, switchedTime_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(chargingWay, chargingWay_);
        DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(expireOn, expireOn_);
        DARABONBA_PTR_FROM_JSON(firstRankAlgoDeploymentId, firstRankAlgoDeploymentId_);
        DARABONBA_PTR_FROM_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(lockedByExpiration, lockedByExpiration_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(pendingSecondRankAlgoDeploymentId, pendingSecondRankAlgoDeploymentId_);
        DARABONBA_PTR_FROM_JSON(processingOrderId, processingOrderId_);
        DARABONBA_PTR_FROM_JSON(produced, produced_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
        DARABONBA_PTR_FROM_JSON(secondRankAlgoDeploymentId, secondRankAlgoDeploymentId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(switchedTime, switchedTime_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Quota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quota& obj) { 
          DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(docSize, docSize_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, Quota& obj) { 
          DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(docSize, docSize_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
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
        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->docSize_ == nullptr && this->spec_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline int32_t getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
        inline Quota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


        // docSize Field Functions 
        bool hasDocSize() const { return this->docSize_ != nullptr;};
        void deleteDocSize() { this->docSize_ = nullptr;};
        inline int32_t getDocSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
        inline Quota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Quota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The number of computing resources configured.
        shared_ptr<int32_t> computeResource_ {};
        // The storage capacity.
        shared_ptr<int32_t> docSize_ {};
        // The specifications configured.
        shared_ptr<string> spec_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->chargingWay_ == nullptr && this->commodityCode_ == nullptr && this->created_ == nullptr && this->currentVersion_ == nullptr && this->description_ == nullptr
        && this->expireOn_ == nullptr && this->firstRankAlgoDeploymentId_ == nullptr && this->hasPendingQuotaReviewTask_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->lockMode_ == nullptr && this->lockedByExpiration_ == nullptr && this->name_ == nullptr && this->pendingSecondRankAlgoDeploymentId_ == nullptr && this->processingOrderId_ == nullptr
        && this->produced_ == nullptr && this->projectId_ == nullptr && this->quota_ == nullptr && this->secondRankAlgoDeploymentId_ == nullptr && this->status_ == nullptr
        && this->switchedTime_ == nullptr && this->type_ == nullptr && this->updated_ == nullptr && this->versions_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Result& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // chargingWay Field Functions 
      bool hasChargingWay() const { return this->chargingWay_ != nullptr;};
      void deleteChargingWay() { this->chargingWay_ = nullptr;};
      inline int32_t getChargingWay() const { DARABONBA_PTR_GET_DEFAULT(chargingWay_, 0) };
      inline Result& setChargingWay(int32_t chargingWay) { DARABONBA_PTR_SET_VALUE(chargingWay_, chargingWay) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Result& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Result& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireOn Field Functions 
      bool hasExpireOn() const { return this->expireOn_ != nullptr;};
      void deleteExpireOn() { this->expireOn_ = nullptr;};
      inline string getExpireOn() const { DARABONBA_PTR_GET_DEFAULT(expireOn_, "") };
      inline Result& setExpireOn(string expireOn) { DARABONBA_PTR_SET_VALUE(expireOn_, expireOn) };


      // firstRankAlgoDeploymentId Field Functions 
      bool hasFirstRankAlgoDeploymentId() const { return this->firstRankAlgoDeploymentId_ != nullptr;};
      void deleteFirstRankAlgoDeploymentId() { this->firstRankAlgoDeploymentId_ = nullptr;};
      inline int32_t getFirstRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(firstRankAlgoDeploymentId_, 0) };
      inline Result& setFirstRankAlgoDeploymentId(int32_t firstRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(firstRankAlgoDeploymentId_, firstRankAlgoDeploymentId) };


      // hasPendingQuotaReviewTask Field Functions 
      bool hasHasPendingQuotaReviewTask() const { return this->hasPendingQuotaReviewTask_ != nullptr;};
      void deleteHasPendingQuotaReviewTask() { this->hasPendingQuotaReviewTask_ = nullptr;};
      inline int32_t getHasPendingQuotaReviewTask() const { DARABONBA_PTR_GET_DEFAULT(hasPendingQuotaReviewTask_, 0) };
      inline Result& setHasPendingQuotaReviewTask(int32_t hasPendingQuotaReviewTask) { DARABONBA_PTR_SET_VALUE(hasPendingQuotaReviewTask_, hasPendingQuotaReviewTask) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline Result& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // lockedByExpiration Field Functions 
      bool hasLockedByExpiration() const { return this->lockedByExpiration_ != nullptr;};
      void deleteLockedByExpiration() { this->lockedByExpiration_ = nullptr;};
      inline int32_t getLockedByExpiration() const { DARABONBA_PTR_GET_DEFAULT(lockedByExpiration_, 0) };
      inline Result& setLockedByExpiration(int32_t lockedByExpiration) { DARABONBA_PTR_SET_VALUE(lockedByExpiration_, lockedByExpiration) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pendingSecondRankAlgoDeploymentId Field Functions 
      bool hasPendingSecondRankAlgoDeploymentId() const { return this->pendingSecondRankAlgoDeploymentId_ != nullptr;};
      void deletePendingSecondRankAlgoDeploymentId() { this->pendingSecondRankAlgoDeploymentId_ = nullptr;};
      inline int32_t getPendingSecondRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(pendingSecondRankAlgoDeploymentId_, 0) };
      inline Result& setPendingSecondRankAlgoDeploymentId(int32_t pendingSecondRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(pendingSecondRankAlgoDeploymentId_, pendingSecondRankAlgoDeploymentId) };


      // processingOrderId Field Functions 
      bool hasProcessingOrderId() const { return this->processingOrderId_ != nullptr;};
      void deleteProcessingOrderId() { this->processingOrderId_ = nullptr;};
      inline string getProcessingOrderId() const { DARABONBA_PTR_GET_DEFAULT(processingOrderId_, "") };
      inline Result& setProcessingOrderId(string processingOrderId) { DARABONBA_PTR_SET_VALUE(processingOrderId_, processingOrderId) };


      // produced Field Functions 
      bool hasProduced() const { return this->produced_ != nullptr;};
      void deleteProduced() { this->produced_ = nullptr;};
      inline int32_t getProduced() const { DARABONBA_PTR_GET_DEFAULT(produced_, 0) };
      inline Result& setProduced(int32_t produced) { DARABONBA_PTR_SET_VALUE(produced_, produced) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Result& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline const Result::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, Result::Quota) };
      inline Result::Quota getQuota() { DARABONBA_PTR_GET(quota_, Result::Quota) };
      inline Result& setQuota(const Result::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
      inline Result& setQuota(Result::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


      // secondRankAlgoDeploymentId Field Functions 
      bool hasSecondRankAlgoDeploymentId() const { return this->secondRankAlgoDeploymentId_ != nullptr;};
      void deleteSecondRankAlgoDeploymentId() { this->secondRankAlgoDeploymentId_ = nullptr;};
      inline int32_t getSecondRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(secondRankAlgoDeploymentId_, 0) };
      inline Result& setSecondRankAlgoDeploymentId(int32_t secondRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(secondRankAlgoDeploymentId_, secondRankAlgoDeploymentId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchedTime Field Functions 
      bool hasSwitchedTime() const { return this->switchedTime_ != nullptr;};
      void deleteSwitchedTime() { this->switchedTime_ = nullptr;};
      inline int32_t getSwitchedTime() const { DARABONBA_PTR_GET_DEFAULT(switchedTime_, 0) };
      inline Result& setSwitchedTime(int32_t switchedTime) { DARABONBA_PTR_SET_VALUE(switchedTime_, switchedTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
      inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
      inline Result& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Result& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      // The billing method. Valid values:
      // 
      // *   POSTPAY: pay-as-you-go.
      // *   PREPAY: subscription.
      shared_ptr<string> chargeType_ {};
      // The billing type. Valid values:
      // 
      // *   1: computing resources.
      // *   2: queries per second (QPS).
      shared_ptr<int32_t> chargingWay_ {};
      // The code of the commodity.
      shared_ptr<string> commodityCode_ {};
      // The timestamp when the application was created.
      shared_ptr<int32_t> created_ {};
      // The ID of the current online version.
      shared_ptr<string> currentVersion_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The expiration time.
      shared_ptr<string> expireOn_ {};
      // The ID of the rough sort expression.
      shared_ptr<int32_t> firstRankAlgoDeploymentId_ {};
      // The approval state of the quotas. Valid values:
      // 
      // *   0: The approval status is normal.
      // *   1: The quotas are being approved.
      shared_ptr<int32_t> hasPendingQuotaReviewTask_ {};
      // The application ID.
      shared_ptr<string> id_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The lock state. Valid values:
      // 
      // *   Unlock: The instance is unlocked.
      // *   LockByExpiration: The instance is automatically locked after it expires.
      // *   ManualLock: The instance is manually locked.
      shared_ptr<string> lockMode_ {};
      // Indicates whether the instance is automatically locked after it expires. Valid values:
      // 
      // *   0: The instance is not automatically locked after it expires.
      // *   1: The instance is automatically locked after it expires.
      shared_ptr<int32_t> lockedByExpiration_ {};
      // The name of the order.
      shared_ptr<string> name_ {};
      // The ID of the fine sort expression that is being created.
      shared_ptr<int32_t> pendingSecondRankAlgoDeploymentId_ {};
      // The ID of the order that is in progress.
      shared_ptr<string> processingOrderId_ {};
      // Indicates whether the order is produced.
      shared_ptr<int32_t> produced_ {};
      // The name of the A/B test group.
      shared_ptr<string> projectId_ {};
      // The configuration information.
      shared_ptr<Result::Quota> quota_ {};
      // The ID of the fine sort expression.
      shared_ptr<int32_t> secondRankAlgoDeploymentId_ {};
      // The status of the application.
      shared_ptr<string> status_ {};
      // The timestamp when the current online version was published.
      shared_ptr<int32_t> switchedTime_ {};
      // The type of the application.
      shared_ptr<string> type_ {};
      // The timestamp when the application was updated.
      shared_ptr<int32_t> updated_ {};
      // The versions.
      shared_ptr<vector<string>> versions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ReplaceAppGroupCommodityCodeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ReplaceAppGroupCommodityCodeResponseBody::Result) };
    inline ReplaceAppGroupCommodityCodeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ReplaceAppGroupCommodityCodeResponseBody::Result) };
    inline ReplaceAppGroupCommodityCodeResponseBody& setResult(const ReplaceAppGroupCommodityCodeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ReplaceAppGroupCommodityCodeResponseBody& setResult(ReplaceAppGroupCommodityCodeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<ReplaceAppGroupCommodityCodeResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
