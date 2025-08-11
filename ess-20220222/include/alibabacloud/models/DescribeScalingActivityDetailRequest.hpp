// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    DescribeScalingActivityDetailRequest() = default ;
    DescribeScalingActivityDetailRequest(const DescribeScalingActivityDetailRequest &) = default ;
    DescribeScalingActivityDetailRequest(DescribeScalingActivityDetailRequest &&) = default ;
    DescribeScalingActivityDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityDetailRequest() = default ;
    DescribeScalingActivityDetailRequest& operator=(const DescribeScalingActivityDetailRequest &) = default ;
    DescribeScalingActivityDetailRequest& operator=(DescribeScalingActivityDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->scalingActivityId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingActivityDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingActivityDetailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingActivityDetailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DescribeScalingActivityDetailRequest& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling activity that you want to query. You can call the DescribeScalingActivities operation to query the IDs of scaling activities.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
