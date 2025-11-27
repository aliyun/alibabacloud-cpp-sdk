// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTINSRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTINSRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyCustinsResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustinsResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustDeadline, adjustDeadline_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IncreaseRatio, increaseRatio_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RestoreOriginalSpecification, restoreOriginalSpecification_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustinsResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustDeadline, adjustDeadline_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncreaseRatio, increaseRatio_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RestoreOriginalSpecification, restoreOriginalSpecification_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    ModifyCustinsResourceRequest() = default ;
    ModifyCustinsResourceRequest(const ModifyCustinsResourceRequest &) = default ;
    ModifyCustinsResourceRequest(ModifyCustinsResourceRequest &&) = default ;
    ModifyCustinsResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustinsResourceRequest() = default ;
    ModifyCustinsResourceRequest& operator=(const ModifyCustinsResourceRequest &) = default ;
    ModifyCustinsResourceRequest& operator=(ModifyCustinsResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjustDeadline_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->increaseRatio_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->resourceType_ == nullptr && return this->restoreOriginalSpecification_ == nullptr
        && return this->targetValue_ == nullptr; };
    // adjustDeadline Field Functions 
    bool hasAdjustDeadline() const { return this->adjustDeadline_ != nullptr;};
    void deleteAdjustDeadline() { this->adjustDeadline_ = nullptr;};
    inline string adjustDeadline() const { DARABONBA_PTR_GET_DEFAULT(adjustDeadline_, "") };
    inline ModifyCustinsResourceRequest& setAdjustDeadline(string adjustDeadline) { DARABONBA_PTR_SET_VALUE(adjustDeadline_, adjustDeadline) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyCustinsResourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // increaseRatio Field Functions 
    bool hasIncreaseRatio() const { return this->increaseRatio_ != nullptr;};
    void deleteIncreaseRatio() { this->increaseRatio_ = nullptr;};
    inline string increaseRatio() const { DARABONBA_PTR_GET_DEFAULT(increaseRatio_, "") };
    inline ModifyCustinsResourceRequest& setIncreaseRatio(string increaseRatio) { DARABONBA_PTR_SET_VALUE(increaseRatio_, increaseRatio) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCustinsResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyCustinsResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restoreOriginalSpecification Field Functions 
    bool hasRestoreOriginalSpecification() const { return this->restoreOriginalSpecification_ != nullptr;};
    void deleteRestoreOriginalSpecification() { this->restoreOriginalSpecification_ = nullptr;};
    inline string restoreOriginalSpecification() const { DARABONBA_PTR_GET_DEFAULT(restoreOriginalSpecification_, "") };
    inline ModifyCustinsResourceRequest& setRestoreOriginalSpecification(string restoreOriginalSpecification) { DARABONBA_PTR_SET_VALUE(restoreOriginalSpecification_, restoreOriginalSpecification) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline int32_t targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0) };
    inline ModifyCustinsResourceRequest& setTargetValue(int32_t targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The deadline for the modification.
    std::shared_ptr<string> adjustDeadline_ = nullptr;
    // The instance ID. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/26232.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The increase rate in percentage.
    std::shared_ptr<string> increaseRatio_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The original value. This parameter must be specified when the **ResourceType** parameter is set to **instance**.
    std::shared_ptr<string> restoreOriginalSpecification_ = nullptr;
    // The target value. This parameter is available only if you set the ScalingRuleType parameter to TargetTrackingScalingRule or PredictiveScalingRule. The value must be greater than 0 and can contain up to three decimal places.
    std::shared_ptr<int32_t> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
