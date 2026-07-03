// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSCARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSCARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateQosCarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosCarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LimitType, limitType_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
      DARABONBA_PTR_TO_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(MinBandwidthAbs, minBandwidthAbs_);
      DARABONBA_PTR_TO_JSON(MinBandwidthPercent, minBandwidthPercent_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PercentSourceType, percentSourceType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosCarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthAbs, maxBandwidthAbs_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidthPercent, maxBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(MinBandwidthAbs, minBandwidthAbs_);
      DARABONBA_PTR_FROM_JSON(MinBandwidthPercent, minBandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PercentSourceType, percentSourceType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateQosCarRequest() = default ;
    CreateQosCarRequest(const CreateQosCarRequest &) = default ;
    CreateQosCarRequest(CreateQosCarRequest &&) = default ;
    CreateQosCarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosCarRequest() = default ;
    CreateQosCarRequest& operator=(const CreateQosCarRequest &) = default ;
    CreateQosCarRequest& operator=(CreateQosCarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->limitType_ == nullptr && this->maxBandwidthAbs_ == nullptr && this->maxBandwidthPercent_ == nullptr && this->minBandwidthAbs_ == nullptr && this->minBandwidthPercent_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->percentSourceType_ == nullptr && this->priority_ == nullptr
        && this->qosId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosCarRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline CreateQosCarRequest& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


    // maxBandwidthAbs Field Functions 
    bool hasMaxBandwidthAbs() const { return this->maxBandwidthAbs_ != nullptr;};
    void deleteMaxBandwidthAbs() { this->maxBandwidthAbs_ = nullptr;};
    inline int32_t getMaxBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthAbs_, 0) };
    inline CreateQosCarRequest& setMaxBandwidthAbs(int32_t maxBandwidthAbs) { DARABONBA_PTR_SET_VALUE(maxBandwidthAbs_, maxBandwidthAbs) };


    // maxBandwidthPercent Field Functions 
    bool hasMaxBandwidthPercent() const { return this->maxBandwidthPercent_ != nullptr;};
    void deleteMaxBandwidthPercent() { this->maxBandwidthPercent_ = nullptr;};
    inline int32_t getMaxBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidthPercent_, 0) };
    inline CreateQosCarRequest& setMaxBandwidthPercent(int32_t maxBandwidthPercent) { DARABONBA_PTR_SET_VALUE(maxBandwidthPercent_, maxBandwidthPercent) };


    // minBandwidthAbs Field Functions 
    bool hasMinBandwidthAbs() const { return this->minBandwidthAbs_ != nullptr;};
    void deleteMinBandwidthAbs() { this->minBandwidthAbs_ = nullptr;};
    inline int32_t getMinBandwidthAbs() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthAbs_, 0) };
    inline CreateQosCarRequest& setMinBandwidthAbs(int32_t minBandwidthAbs) { DARABONBA_PTR_SET_VALUE(minBandwidthAbs_, minBandwidthAbs) };


    // minBandwidthPercent Field Functions 
    bool hasMinBandwidthPercent() const { return this->minBandwidthPercent_ != nullptr;};
    void deleteMinBandwidthPercent() { this->minBandwidthPercent_ = nullptr;};
    inline int32_t getMinBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(minBandwidthPercent_, 0) };
    inline CreateQosCarRequest& setMinBandwidthPercent(int32_t minBandwidthPercent) { DARABONBA_PTR_SET_VALUE(minBandwidthPercent_, minBandwidthPercent) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateQosCarRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateQosCarRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateQosCarRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // percentSourceType Field Functions 
    bool hasPercentSourceType() const { return this->percentSourceType_ != nullptr;};
    void deletePercentSourceType() { this->percentSourceType_ = nullptr;};
    inline string getPercentSourceType() const { DARABONBA_PTR_GET_DEFAULT(percentSourceType_, "") };
    inline CreateQosCarRequest& setPercentSourceType(string percentSourceType) { DARABONBA_PTR_SET_VALUE(percentSourceType_, percentSourceType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateQosCarRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateQosCarRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateQosCarRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateQosCarRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateQosCarRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The description of the QoS rate limiting rule.
    shared_ptr<string> description_ {};
    // The type of rate limiting. Valid values:
    // 
    // - **Absolute**: by bandwidth value.
    // 
    // - **Percent**: by percentage.
    // 
    // This parameter is required.
    shared_ptr<string> limitType_ {};
    // The maximum bandwidth value. The value must be an integer. Unit: Mbit/s.
    // 
    // This parameter is required when **LimitType** is set to **Absolute**.
    // 
    // > The maximum bandwidth value must be greater than the minimum bandwidth value.
    shared_ptr<int32_t> maxBandwidthAbs_ {};
    // The maximum bandwidth percentage. Unit: percent (%). Valid values: **1** to **100**.
    // 
    // This parameter is required when **LimitType** is set to **Percent**.
    // 
    // > The maximum bandwidth percentage must be greater than the minimum bandwidth percentage.
    shared_ptr<int32_t> maxBandwidthPercent_ {};
    // The minimum bandwidth value. The value must be an integer. Unit: Mbit/s.
    // 
    // This parameter is required when **LimitType** is set to **Absolute**.
    shared_ptr<int32_t> minBandwidthAbs_ {};
    // The minimum bandwidth percentage. Unit: percent (%). Valid values: **1** to **100**.
    // 
    // This parameter is required when **LimitType** is set to **Percent**.
    shared_ptr<int32_t> minBandwidthPercent_ {};
    // The name of the QoS rate limiting rule.
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain Chinese characters, letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The bandwidth type when rate limiting by percentage. Valid values:
    // 
    // - **CcnBandwidth**: CCN bandwidth.
    // 
    // - **InternetUpBandwidth**: total Internet bandwidth.
    shared_ptr<string> percentSourceType_ {};
    // The priority of the rate limiting rule. 
    // 
    // Valid values: **1** to **3**. A smaller value indicates a higher priority. If two rules have the same priority, the rule that is created first takes effect.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The instance ID of the QoS policy.
    // 
    // This parameter is required.
    shared_ptr<string> qosId_ {};
    // The region ID of the QoS policy instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
