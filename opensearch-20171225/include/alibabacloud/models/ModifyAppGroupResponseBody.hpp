// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyAppGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ModifyAppGroupResponseBody() = default ;
    ModifyAppGroupResponseBody(const ModifyAppGroupResponseBody &) = default ;
    ModifyAppGroupResponseBody(ModifyAppGroupResponseBody &&) = default ;
    ModifyAppGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppGroupResponseBody() = default ;
    ModifyAppGroupResponseBody& operator=(const ModifyAppGroupResponseBody &) = default ;
    ModifyAppGroupResponseBody& operator=(ModifyAppGroupResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(engineType, engineType_);
        DARABONBA_PTR_TO_JSON(expireOn, expireOn_);
        DARABONBA_PTR_TO_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(produced, produced_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(quota, quota_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(switchedTime, switchedTime_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(chargingWay, chargingWay_);
        DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(engineType, engineType_);
        DARABONBA_PTR_FROM_JSON(expireOn, expireOn_);
        DARABONBA_PTR_FROM_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(produced, produced_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(quota, quota_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(switchedTime, switchedTime_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
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
        // The computing resources. Unit: logical computing unit (LCU).
        shared_ptr<int32_t> computeResource_ {};
        // The storage capacity. Unit: GB.
        shared_ptr<int32_t> docSize_ {};
        // The specifications. Valid values:
        // 
        // *   opensearch.share.junior: basic.
        // *   opensearch.share.common: shared general-purpose.
        // *   opensearch.share.compute: shared computing.
        // *   opensearch.share.storage: shared storage.
        // *   opensearch.private.common: exclusive general-purpose.
        // *   opensearch.private.compute: exclusive computing.
        // *   opensearch.private.storage: exclusive storage.
        shared_ptr<string> spec_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->chargingWay_ == nullptr && this->commodityCode_ == nullptr && this->created_ == nullptr && this->currentVersion_ == nullptr && this->description_ == nullptr
        && this->domain_ == nullptr && this->engineType_ == nullptr && this->expireOn_ == nullptr && this->hasPendingQuotaReviewTask_ == nullptr && this->id_ == nullptr
        && this->instanceId_ == nullptr && this->lockMode_ == nullptr && this->name_ == nullptr && this->produced_ == nullptr && this->projectId_ == nullptr
        && this->quota_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->switchedTime_ == nullptr && this->type_ == nullptr
        && this->updated_ == nullptr; };
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


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Result& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // expireOn Field Functions 
      bool hasExpireOn() const { return this->expireOn_ != nullptr;};
      void deleteExpireOn() { this->expireOn_ = nullptr;};
      inline string getExpireOn() const { DARABONBA_PTR_GET_DEFAULT(expireOn_, "") };
      inline Result& setExpireOn(string expireOn) { DARABONBA_PTR_SET_VALUE(expireOn_, expireOn) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


    protected:
      // The billing method. Valid values:
      // 
      // *   POSTPAY: pay-as-you-go.
      // *   PREPAY: subscription.
      shared_ptr<string> chargeType_ {};
      // The billable item. Valid values:
      // 
      // *   1: computing resources.
      // *   2: QPS.
      shared_ptr<int32_t> chargingWay_ {};
      // The code of the commodity.
      shared_ptr<string> commodityCode_ {};
      // The timestamp when the application was created.
      shared_ptr<int32_t> created_ {};
      // The ID of the current online version.
      shared_ptr<string> currentVersion_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The type of the industry. Valid values:
      // 
      // *   GENERAL: general.
      // *   ECOMMERCE: e-commerce.
      // *   IT_CONTENT: IT content.
      shared_ptr<string> domain_ {};
      // The engine type.
      shared_ptr<string> engineType_ {};
      // The time when the application expired.
      shared_ptr<string> expireOn_ {};
      // The approval status of the quotas. Valid values:
      // 
      // *   0: normal.
      // *   1: being approved.
      shared_ptr<int32_t> hasPendingQuotaReviewTask_ {};
      // The application ID.
      shared_ptr<string> id_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The lock status. Valid values:
      // 
      // *   Unlock: The instance is unlocked.
      // *   LockByExpiration: The instance is automatically locked after it expires.
      // *   ManualLock: The instance is manually locked.
      shared_ptr<string> lockMode_ {};
      // The name of the application.
      shared_ptr<string> name_ {};
      // Indicates whether the order is complete. Valid values:
      // 
      // *   0: The order is in progress.
      // *   1: The order is complete.
      shared_ptr<int32_t> produced_ {};
      // The name of the A/B test group.
      shared_ptr<string> projectId_ {};
      // The information about the quotas of the application.
      shared_ptr<Result::Quota> quota_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The state of the application. Valid values:
      // 
      // *   producing: being produced.
      // *   review_pending: being approved.
      // *   config_pending: to be configured.
      // *   normal: normal.
      // *   frozen: frozen.
      shared_ptr<string> status_ {};
      // The timestamp when the current online version was published.
      shared_ptr<int32_t> switchedTime_ {};
      // The type of the application. Valid values:
      // 
      // *   standard: a standard edition application.
      // *   advance: an advanced edition application of an old version. New versions are not supported for this edition.
      // *   enhanced: an advanced edition application of a new version.
      shared_ptr<string> type_ {};
      // The timestamp when the application was last modified.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAppGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ModifyAppGroupResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ModifyAppGroupResponseBody::Result) };
    inline ModifyAppGroupResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ModifyAppGroupResponseBody::Result) };
    inline ModifyAppGroupResponseBody& setResult(const ModifyAppGroupResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ModifyAppGroupResponseBody& setResult(ModifyAppGroupResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Response parameters
    shared_ptr<ModifyAppGroupResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
