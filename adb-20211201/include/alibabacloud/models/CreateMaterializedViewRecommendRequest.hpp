// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMATERIALIZEDVIEWRECOMMENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMATERIALIZEDVIEWRECOMMENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateMaterializedViewRecommendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaterializedViewRecommendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScanQueriesRange, scanQueriesRange_);
      DARABONBA_PTR_TO_JSON(SchedulingDay, schedulingDay_);
      DARABONBA_PTR_TO_JSON(SchedulingPolicy, schedulingPolicy_);
      DARABONBA_PTR_TO_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_TO_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaterializedViewRecommendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScanQueriesRange, scanQueriesRange_);
      DARABONBA_PTR_FROM_JSON(SchedulingDay, schedulingDay_);
      DARABONBA_PTR_FROM_JSON(SchedulingPolicy, schedulingPolicy_);
      DARABONBA_PTR_FROM_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_FROM_JSON(SpecifiedTime, specifiedTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateMaterializedViewRecommendRequest() = default ;
    CreateMaterializedViewRecommendRequest(const CreateMaterializedViewRecommendRequest &) = default ;
    CreateMaterializedViewRecommendRequest(CreateMaterializedViewRecommendRequest &&) = default ;
    CreateMaterializedViewRecommendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaterializedViewRecommendRequest() = default ;
    CreateMaterializedViewRecommendRequest& operator=(const CreateMaterializedViewRecommendRequest &) = default ;
    CreateMaterializedViewRecommendRequest& operator=(CreateMaterializedViewRecommendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->description_ == nullptr && return this->minRewriteQueryCount_ == nullptr && return this->minRewriteQueryPattern_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scanQueriesRange_ == nullptr && return this->schedulingDay_ == nullptr
        && return this->schedulingPolicy_ == nullptr && return this->slowQueryThreshold_ == nullptr && return this->specifiedTime_ == nullptr && return this->taskName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMaterializedViewRecommendRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMaterializedViewRecommendRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // minRewriteQueryCount Field Functions 
    bool hasMinRewriteQueryCount() const { return this->minRewriteQueryCount_ != nullptr;};
    void deleteMinRewriteQueryCount() { this->minRewriteQueryCount_ = nullptr;};
    inline int32_t minRewriteQueryCount() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryCount_, 0) };
    inline CreateMaterializedViewRecommendRequest& setMinRewriteQueryCount(int32_t minRewriteQueryCount) { DARABONBA_PTR_SET_VALUE(minRewriteQueryCount_, minRewriteQueryCount) };


    // minRewriteQueryPattern Field Functions 
    bool hasMinRewriteQueryPattern() const { return this->minRewriteQueryPattern_ != nullptr;};
    void deleteMinRewriteQueryPattern() { this->minRewriteQueryPattern_ = nullptr;};
    inline int32_t minRewriteQueryPattern() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryPattern_, 0) };
    inline CreateMaterializedViewRecommendRequest& setMinRewriteQueryPattern(int32_t minRewriteQueryPattern) { DARABONBA_PTR_SET_VALUE(minRewriteQueryPattern_, minRewriteQueryPattern) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateMaterializedViewRecommendRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMaterializedViewRecommendRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMaterializedViewRecommendRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMaterializedViewRecommendRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMaterializedViewRecommendRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scanQueriesRange Field Functions 
    bool hasScanQueriesRange() const { return this->scanQueriesRange_ != nullptr;};
    void deleteScanQueriesRange() { this->scanQueriesRange_ = nullptr;};
    inline int32_t scanQueriesRange() const { DARABONBA_PTR_GET_DEFAULT(scanQueriesRange_, 0) };
    inline CreateMaterializedViewRecommendRequest& setScanQueriesRange(int32_t scanQueriesRange) { DARABONBA_PTR_SET_VALUE(scanQueriesRange_, scanQueriesRange) };


    // schedulingDay Field Functions 
    bool hasSchedulingDay() const { return this->schedulingDay_ != nullptr;};
    void deleteSchedulingDay() { this->schedulingDay_ = nullptr;};
    inline string schedulingDay() const { DARABONBA_PTR_GET_DEFAULT(schedulingDay_, "") };
    inline CreateMaterializedViewRecommendRequest& setSchedulingDay(string schedulingDay) { DARABONBA_PTR_SET_VALUE(schedulingDay_, schedulingDay) };


    // schedulingPolicy Field Functions 
    bool hasSchedulingPolicy() const { return this->schedulingPolicy_ != nullptr;};
    void deleteSchedulingPolicy() { this->schedulingPolicy_ = nullptr;};
    inline string schedulingPolicy() const { DARABONBA_PTR_GET_DEFAULT(schedulingPolicy_, "") };
    inline CreateMaterializedViewRecommendRequest& setSchedulingPolicy(string schedulingPolicy) { DARABONBA_PTR_SET_VALUE(schedulingPolicy_, schedulingPolicy) };


    // slowQueryThreshold Field Functions 
    bool hasSlowQueryThreshold() const { return this->slowQueryThreshold_ != nullptr;};
    void deleteSlowQueryThreshold() { this->slowQueryThreshold_ = nullptr;};
    inline int32_t slowQueryThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowQueryThreshold_, 0) };
    inline CreateMaterializedViewRecommendRequest& setSlowQueryThreshold(int32_t slowQueryThreshold) { DARABONBA_PTR_SET_VALUE(slowQueryThreshold_, slowQueryThreshold) };


    // specifiedTime Field Functions 
    bool hasSpecifiedTime() const { return this->specifiedTime_ != nullptr;};
    void deleteSpecifiedTime() { this->specifiedTime_ = nullptr;};
    inline string specifiedTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedTime_, "") };
    inline CreateMaterializedViewRecommendRequest& setSpecifiedTime(string specifiedTime) { DARABONBA_PTR_SET_VALUE(specifiedTime_, specifiedTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateMaterializedViewRecommendRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryCount_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryPattern_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int32_t> scanQueriesRange_ = nullptr;
    std::shared_ptr<string> schedulingDay_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> schedulingPolicy_ = nullptr;
    std::shared_ptr<int32_t> slowQueryThreshold_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> specifiedTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
