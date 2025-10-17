// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONSUMERGROUPPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONSUMERGROUPPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyConsumerGroupPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyConsumerGroupPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupID, consumerGroupID_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_TO_JSON(consumerGroupNewPassword, consumerGroupNewPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyConsumerGroupPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupID, consumerGroupID_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceId, subscriptionInstanceId_);
      DARABONBA_PTR_FROM_JSON(consumerGroupNewPassword, consumerGroupNewPassword_);
    };
    ModifyConsumerGroupPasswordRequest() = default ;
    ModifyConsumerGroupPasswordRequest(const ModifyConsumerGroupPasswordRequest &) = default ;
    ModifyConsumerGroupPasswordRequest(ModifyConsumerGroupPasswordRequest &&) = default ;
    ModifyConsumerGroupPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyConsumerGroupPasswordRequest() = default ;
    ModifyConsumerGroupPasswordRequest& operator=(const ModifyConsumerGroupPasswordRequest &) = default ;
    ModifyConsumerGroupPasswordRequest& operator=(ModifyConsumerGroupPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->consumerGroupID_ == nullptr && return this->consumerGroupName_ == nullptr && return this->consumerGroupPassword_ == nullptr && return this->consumerGroupUserName_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->subscriptionInstanceId_ == nullptr && return this->consumerGroupNewPassword_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ModifyConsumerGroupPasswordRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // consumerGroupID Field Functions 
    bool hasConsumerGroupID() const { return this->consumerGroupID_ != nullptr;};
    void deleteConsumerGroupID() { this->consumerGroupID_ = nullptr;};
    inline string consumerGroupID() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupID_, "") };
    inline ModifyConsumerGroupPasswordRequest& setConsumerGroupID(string consumerGroupID) { DARABONBA_PTR_SET_VALUE(consumerGroupID_, consumerGroupID) };


    // consumerGroupName Field Functions 
    bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
    void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
    inline string consumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
    inline ModifyConsumerGroupPasswordRequest& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


    // consumerGroupPassword Field Functions 
    bool hasConsumerGroupPassword() const { return this->consumerGroupPassword_ != nullptr;};
    void deleteConsumerGroupPassword() { this->consumerGroupPassword_ = nullptr;};
    inline string consumerGroupPassword() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupPassword_, "") };
    inline ModifyConsumerGroupPasswordRequest& setConsumerGroupPassword(string consumerGroupPassword) { DARABONBA_PTR_SET_VALUE(consumerGroupPassword_, consumerGroupPassword) };


    // consumerGroupUserName Field Functions 
    bool hasConsumerGroupUserName() const { return this->consumerGroupUserName_ != nullptr;};
    void deleteConsumerGroupUserName() { this->consumerGroupUserName_ = nullptr;};
    inline string consumerGroupUserName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupUserName_, "") };
    inline ModifyConsumerGroupPasswordRequest& setConsumerGroupUserName(string consumerGroupUserName) { DARABONBA_PTR_SET_VALUE(consumerGroupUserName_, consumerGroupUserName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyConsumerGroupPasswordRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyConsumerGroupPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyConsumerGroupPasswordRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionInstanceId Field Functions 
    bool hasSubscriptionInstanceId() const { return this->subscriptionInstanceId_ != nullptr;};
    void deleteSubscriptionInstanceId() { this->subscriptionInstanceId_ = nullptr;};
    inline string subscriptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceId_, "") };
    inline ModifyConsumerGroupPasswordRequest& setSubscriptionInstanceId(string subscriptionInstanceId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceId_, subscriptionInstanceId) };


    // consumerGroupNewPassword Field Functions 
    bool hasConsumerGroupNewPassword() const { return this->consumerGroupNewPassword_ != nullptr;};
    void deleteConsumerGroupNewPassword() { this->consumerGroupNewPassword_ = nullptr;};
    inline string consumerGroupNewPassword() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupNewPassword_, "") };
    inline ModifyConsumerGroupPasswordRequest& setConsumerGroupNewPassword(string consumerGroupNewPassword) { DARABONBA_PTR_SET_VALUE(consumerGroupNewPassword_, consumerGroupNewPassword) };


  protected:
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the consumer group. You can call the [DescribeConsumerGroup](https://help.aliyun.com/document_detail/122886.html) operation to query the consumer group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupID_ = nullptr;
    // The name of the consumer group. The name cannot exceed 128 characters in length. We recommend that you use an informative name for easy identification.
    std::shared_ptr<string> consumerGroupName_ = nullptr;
    // The new password of the consumer group.
    // 
    // *   A password must contain two or more of the following characters: uppercase letters, lowercase letters, digits, and special characters.
    // *   A password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupPassword_ = nullptr;
    // The username of the consumer group. You can call the [DescribeConsumerGroup](https://help.aliyun.com/document_detail/122886.html) operation to query the username.
    std::shared_ptr<string> consumerGroupUserName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the change tracking instance. You can call the **DescribeSubscriptionInstances** operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionInstanceId_ = nullptr;
    // The new password of the consumer group.
    //  
    // *   A password must contain two or more of the following characters: uppercase letters, lowercase letters, digits, and special characters.
    // *   A password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupNewPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
