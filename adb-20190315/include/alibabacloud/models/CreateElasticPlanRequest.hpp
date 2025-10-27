// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class CreateElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticPlanEnable, elasticPlanEnable_);
      DARABONBA_PTR_TO_JSON(ElasticPlanEndDay, elasticPlanEndDay_);
      DARABONBA_PTR_TO_JSON(ElasticPlanMonthlyRepeat, elasticPlanMonthlyRepeat_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(ElasticPlanNodeNum, elasticPlanNodeNum_);
      DARABONBA_PTR_TO_JSON(ElasticPlanStartDay, elasticPlanStartDay_);
      DARABONBA_PTR_TO_JSON(ElasticPlanTimeEnd, elasticPlanTimeEnd_);
      DARABONBA_PTR_TO_JSON(ElasticPlanTimeStart, elasticPlanTimeStart_);
      DARABONBA_PTR_TO_JSON(ElasticPlanType, elasticPlanType_);
      DARABONBA_PTR_TO_JSON(ElasticPlanWeeklyRepeat, elasticPlanWeeklyRepeat_);
      DARABONBA_PTR_TO_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanEnable, elasticPlanEnable_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanEndDay, elasticPlanEndDay_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanMonthlyRepeat, elasticPlanMonthlyRepeat_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanNodeNum, elasticPlanNodeNum_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanStartDay, elasticPlanStartDay_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanTimeEnd, elasticPlanTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanTimeStart, elasticPlanTimeStart_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanType, elasticPlanType_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanWeeklyRepeat, elasticPlanWeeklyRepeat_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
    };
    CreateElasticPlanRequest() = default ;
    CreateElasticPlanRequest(const CreateElasticPlanRequest &) = default ;
    CreateElasticPlanRequest(CreateElasticPlanRequest &&) = default ;
    CreateElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticPlanRequest() = default ;
    CreateElasticPlanRequest& operator=(const CreateElasticPlanRequest &) = default ;
    CreateElasticPlanRequest& operator=(CreateElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->elasticPlanEnable_ == nullptr && return this->elasticPlanEndDay_ == nullptr && return this->elasticPlanMonthlyRepeat_ == nullptr && return this->elasticPlanName_ == nullptr && return this->elasticPlanNodeNum_ == nullptr
        && return this->elasticPlanStartDay_ == nullptr && return this->elasticPlanTimeEnd_ == nullptr && return this->elasticPlanTimeStart_ == nullptr && return this->elasticPlanType_ == nullptr && return this->elasticPlanWeeklyRepeat_ == nullptr
        && return this->elasticPlanWorkerSpec_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->resourcePoolName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateElasticPlanRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticPlanEnable Field Functions 
    bool hasElasticPlanEnable() const { return this->elasticPlanEnable_ != nullptr;};
    void deleteElasticPlanEnable() { this->elasticPlanEnable_ = nullptr;};
    inline bool elasticPlanEnable() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanEnable_, false) };
    inline CreateElasticPlanRequest& setElasticPlanEnable(bool elasticPlanEnable) { DARABONBA_PTR_SET_VALUE(elasticPlanEnable_, elasticPlanEnable) };


    // elasticPlanEndDay Field Functions 
    bool hasElasticPlanEndDay() const { return this->elasticPlanEndDay_ != nullptr;};
    void deleteElasticPlanEndDay() { this->elasticPlanEndDay_ = nullptr;};
    inline string elasticPlanEndDay() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanEndDay_, "") };
    inline CreateElasticPlanRequest& setElasticPlanEndDay(string elasticPlanEndDay) { DARABONBA_PTR_SET_VALUE(elasticPlanEndDay_, elasticPlanEndDay) };


    // elasticPlanMonthlyRepeat Field Functions 
    bool hasElasticPlanMonthlyRepeat() const { return this->elasticPlanMonthlyRepeat_ != nullptr;};
    void deleteElasticPlanMonthlyRepeat() { this->elasticPlanMonthlyRepeat_ = nullptr;};
    inline string elasticPlanMonthlyRepeat() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanMonthlyRepeat_, "") };
    inline CreateElasticPlanRequest& setElasticPlanMonthlyRepeat(string elasticPlanMonthlyRepeat) { DARABONBA_PTR_SET_VALUE(elasticPlanMonthlyRepeat_, elasticPlanMonthlyRepeat) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline CreateElasticPlanRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // elasticPlanNodeNum Field Functions 
    bool hasElasticPlanNodeNum() const { return this->elasticPlanNodeNum_ != nullptr;};
    void deleteElasticPlanNodeNum() { this->elasticPlanNodeNum_ = nullptr;};
    inline int32_t elasticPlanNodeNum() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanNodeNum_, 0) };
    inline CreateElasticPlanRequest& setElasticPlanNodeNum(int32_t elasticPlanNodeNum) { DARABONBA_PTR_SET_VALUE(elasticPlanNodeNum_, elasticPlanNodeNum) };


    // elasticPlanStartDay Field Functions 
    bool hasElasticPlanStartDay() const { return this->elasticPlanStartDay_ != nullptr;};
    void deleteElasticPlanStartDay() { this->elasticPlanStartDay_ = nullptr;};
    inline string elasticPlanStartDay() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanStartDay_, "") };
    inline CreateElasticPlanRequest& setElasticPlanStartDay(string elasticPlanStartDay) { DARABONBA_PTR_SET_VALUE(elasticPlanStartDay_, elasticPlanStartDay) };


    // elasticPlanTimeEnd Field Functions 
    bool hasElasticPlanTimeEnd() const { return this->elasticPlanTimeEnd_ != nullptr;};
    void deleteElasticPlanTimeEnd() { this->elasticPlanTimeEnd_ = nullptr;};
    inline string elasticPlanTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanTimeEnd_, "") };
    inline CreateElasticPlanRequest& setElasticPlanTimeEnd(string elasticPlanTimeEnd) { DARABONBA_PTR_SET_VALUE(elasticPlanTimeEnd_, elasticPlanTimeEnd) };


    // elasticPlanTimeStart Field Functions 
    bool hasElasticPlanTimeStart() const { return this->elasticPlanTimeStart_ != nullptr;};
    void deleteElasticPlanTimeStart() { this->elasticPlanTimeStart_ = nullptr;};
    inline string elasticPlanTimeStart() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanTimeStart_, "") };
    inline CreateElasticPlanRequest& setElasticPlanTimeStart(string elasticPlanTimeStart) { DARABONBA_PTR_SET_VALUE(elasticPlanTimeStart_, elasticPlanTimeStart) };


    // elasticPlanType Field Functions 
    bool hasElasticPlanType() const { return this->elasticPlanType_ != nullptr;};
    void deleteElasticPlanType() { this->elasticPlanType_ = nullptr;};
    inline string elasticPlanType() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanType_, "") };
    inline CreateElasticPlanRequest& setElasticPlanType(string elasticPlanType) { DARABONBA_PTR_SET_VALUE(elasticPlanType_, elasticPlanType) };


    // elasticPlanWeeklyRepeat Field Functions 
    bool hasElasticPlanWeeklyRepeat() const { return this->elasticPlanWeeklyRepeat_ != nullptr;};
    void deleteElasticPlanWeeklyRepeat() { this->elasticPlanWeeklyRepeat_ = nullptr;};
    inline string elasticPlanWeeklyRepeat() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanWeeklyRepeat_, "") };
    inline CreateElasticPlanRequest& setElasticPlanWeeklyRepeat(string elasticPlanWeeklyRepeat) { DARABONBA_PTR_SET_VALUE(elasticPlanWeeklyRepeat_, elasticPlanWeeklyRepeat) };


    // elasticPlanWorkerSpec Field Functions 
    bool hasElasticPlanWorkerSpec() const { return this->elasticPlanWorkerSpec_ != nullptr;};
    void deleteElasticPlanWorkerSpec() { this->elasticPlanWorkerSpec_ = nullptr;};
    inline string elasticPlanWorkerSpec() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanWorkerSpec_, "") };
    inline CreateElasticPlanRequest& setElasticPlanWorkerSpec(string elasticPlanWorkerSpec) { DARABONBA_PTR_SET_VALUE(elasticPlanWorkerSpec_, elasticPlanWorkerSpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateElasticPlanRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateElasticPlanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateElasticPlanRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateElasticPlanRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourcePoolName Field Functions 
    bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
    void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
    inline string resourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
    inline CreateElasticPlanRequest& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether the scaling plan takes effect. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> elasticPlanEnable_ = nullptr;
    // The end date of the scaling plan. Specify the date in the yyyy-MM-dd format.
    std::shared_ptr<string> elasticPlanEndDay_ = nullptr;
    // The dates of the month when you want to execute the scaling plan. A number specifies a date of the month. Separate multiple values with commas (,).
    std::shared_ptr<string> elasticPlanMonthlyRepeat_ = nullptr;
    // The name of the scaling plan.
    // 
    // *   The name must be 2 to 30 characters in length.
    // *   The name can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // The number of nodes that are involved in the scaling plan.
    // 
    // *   If ElasticPlanType is set to **worker**, you can set this parameter to 0 or leave this parameter empty.
    // *   If ElasticPlanType is set to **executorcombineworker** or **executor**, you must set this parameter to a value that is greater than 0.
    std::shared_ptr<int32_t> elasticPlanNodeNum_ = nullptr;
    // The start date of the scaling plan. Specify the date in the yyyy-MM-dd format.
    std::shared_ptr<string> elasticPlanStartDay_ = nullptr;
    // The restoration time of the scaling plan. Specify the time on the hour in the HH:mm:ss format. The interval between the scale-up time and the restoration time cannot be more than 24 hours.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanTimeEnd_ = nullptr;
    // The scale-up time of the scaling plan. Specify the time on the hour in the HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> elasticPlanTimeStart_ = nullptr;
    // The type of the scaling plan. Valid values:
    // 
    // *   **worker**: scales only elastic I/O resources.
    // *   **executor**: scales only computing resources.
    // *   **executorcombineworker** (default): scales both elastic I/O resources and computing resources by proportion.
    // > - If you want to set this parameter to **executorcombineworker**, make sure that the cluster runs a minor version of 3.1.3.2 or later.
    // > - If you want to set this parameter to **worker** or **executor**, make sure that the cluster runs a minor version of 3.1.6.1 or later and a ticket is submitted. After your request is approved, you can set this parameter to **worker** or **executor**.
    std::shared_ptr<string> elasticPlanType_ = nullptr;
    // The days of the week when you want to execute the scaling plan. Valid values: 0 to 6 (Sunday to Saturday). Separate multiple values with commas (,).
    std::shared_ptr<string> elasticPlanWeeklyRepeat_ = nullptr;
    // The resource specifications that can be scaled up by the scaling plan. Valid values:
    // 
    // *   8 Core 64 GB (default)
    // *   16 Core 64 GB
    // *   32 Core 64 GB
    // *   64 Core 128 GB
    // *   12 Core 96 GB
    // *   24 Core 96 GB
    // *   52 Core 86 GB
    std::shared_ptr<string> elasticPlanWorkerSpec_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The name of the resource group.
    // 
    // >  You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/466685.html) operation to query the resource group name.
    std::shared_ptr<string> resourcePoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
