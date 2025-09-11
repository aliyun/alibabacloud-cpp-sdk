// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeElasticDailyPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticDailyPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticDailyPlanDay, elasticDailyPlanDay_);
      DARABONBA_PTR_TO_JSON(ElasticDailyPlanStatusList, elasticDailyPlanStatusList_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticDailyPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticDailyPlanDay, elasticDailyPlanDay_);
      DARABONBA_PTR_FROM_JSON(ElasticDailyPlanStatusList, elasticDailyPlanStatusList_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
    };
    DescribeElasticDailyPlanRequest() = default ;
    DescribeElasticDailyPlanRequest(const DescribeElasticDailyPlanRequest &) = default ;
    DescribeElasticDailyPlanRequest(DescribeElasticDailyPlanRequest &&) = default ;
    DescribeElasticDailyPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticDailyPlanRequest() = default ;
    DescribeElasticDailyPlanRequest& operator=(const DescribeElasticDailyPlanRequest &) = default ;
    DescribeElasticDailyPlanRequest& operator=(DescribeElasticDailyPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->elasticDailyPlanDay_ != nullptr && this->elasticDailyPlanStatusList_ != nullptr && this->elasticPlanName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourcePoolName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeElasticDailyPlanRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticDailyPlanDay Field Functions 
    bool hasElasticDailyPlanDay() const { return this->elasticDailyPlanDay_ != nullptr;};
    void deleteElasticDailyPlanDay() { this->elasticDailyPlanDay_ = nullptr;};
    inline string elasticDailyPlanDay() const { DARABONBA_PTR_GET_DEFAULT(elasticDailyPlanDay_, "") };
    inline DescribeElasticDailyPlanRequest& setElasticDailyPlanDay(string elasticDailyPlanDay) { DARABONBA_PTR_SET_VALUE(elasticDailyPlanDay_, elasticDailyPlanDay) };


    // elasticDailyPlanStatusList Field Functions 
    bool hasElasticDailyPlanStatusList() const { return this->elasticDailyPlanStatusList_ != nullptr;};
    void deleteElasticDailyPlanStatusList() { this->elasticDailyPlanStatusList_ = nullptr;};
    inline string elasticDailyPlanStatusList() const { DARABONBA_PTR_GET_DEFAULT(elasticDailyPlanStatusList_, "") };
    inline DescribeElasticDailyPlanRequest& setElasticDailyPlanStatusList(string elasticDailyPlanStatusList) { DARABONBA_PTR_SET_VALUE(elasticDailyPlanStatusList_, elasticDailyPlanStatusList) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DescribeElasticDailyPlanRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeElasticDailyPlanRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeElasticDailyPlanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeElasticDailyPlanRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeElasticDailyPlanRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourcePoolName Field Functions 
    bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
    void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
    inline string resourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
    inline DescribeElasticDailyPlanRequest& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the cluster IDs of all AnalyticDB for MySQL Data Warehouse Edition (V3.0) clusters within a specific region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The start date of the current-day scaling plan. Specify the date in the yyyy-MM-dd format.
    std::shared_ptr<string> elasticDailyPlanDay_ = nullptr;
    // The execution state of the current-day scaling plan. Separate multiple values with commas (,). Valid values:
    // 
    // *   **1**: The scaling plan is not executed.
    // *   **2**: The scaling plan is being executed.
    // *   **3**: The scaling plan is executed.
    // *   **4**: The scaling plan fails to be executed.
    std::shared_ptr<string> elasticDailyPlanStatusList_ = nullptr;
    // The name of the scaling plan. Valid values:
    // 
    // *   The name must be 2 to 30 characters in length.
    // *   The name can contain letters, digits, and underscores (_).
    std::shared_ptr<string> elasticPlanName_ = nullptr;
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
