// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONSUMERCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONSUMERCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyConsumerChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyConsumerChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyConsumerChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyConsumerChannelRequest() = default ;
    ModifyConsumerChannelRequest(const ModifyConsumerChannelRequest &) = default ;
    ModifyConsumerChannelRequest(ModifyConsumerChannelRequest &&) = default ;
    ModifyConsumerChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyConsumerChannelRequest() = default ;
    ModifyConsumerChannelRequest& operator=(const ModifyConsumerChannelRequest &) = default ;
    ModifyConsumerChannelRequest& operator=(ModifyConsumerChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerGroupId_ != nullptr
        && this->consumerGroupName_ != nullptr && this->consumerGroupPassword_ != nullptr && this->consumerGroupUserName_ != nullptr && this->dtsInstanceId_ != nullptr && this->dtsJobId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ModifyConsumerChannelRequest& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // consumerGroupName Field Functions 
    bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
    void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
    inline string consumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
    inline ModifyConsumerChannelRequest& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


    // consumerGroupPassword Field Functions 
    bool hasConsumerGroupPassword() const { return this->consumerGroupPassword_ != nullptr;};
    void deleteConsumerGroupPassword() { this->consumerGroupPassword_ = nullptr;};
    inline string consumerGroupPassword() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupPassword_, "") };
    inline ModifyConsumerChannelRequest& setConsumerGroupPassword(string consumerGroupPassword) { DARABONBA_PTR_SET_VALUE(consumerGroupPassword_, consumerGroupPassword) };


    // consumerGroupUserName Field Functions 
    bool hasConsumerGroupUserName() const { return this->consumerGroupUserName_ != nullptr;};
    void deleteConsumerGroupUserName() { this->consumerGroupUserName_ = nullptr;};
    inline string consumerGroupUserName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupUserName_, "") };
    inline ModifyConsumerChannelRequest& setConsumerGroupUserName(string consumerGroupUserName) { DARABONBA_PTR_SET_VALUE(consumerGroupUserName_, consumerGroupUserName) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifyConsumerChannelRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyConsumerChannelRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyConsumerChannelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyConsumerChannelRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the consumer group. You can call the [DescribeConsumerChannel](https://help.aliyun.com/document_detail/264169.html) operation to query the consumer group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The name of the consumer group. The name cannot exceed 128 characters in length. We recommend that you use an informative name for easy identification.
    std::shared_ptr<string> consumerGroupName_ = nullptr;
    // The new password of the consumer group.
    // 
    // *   A password must contain two or more of the following characters: uppercase letters, lowercase letters, digits, and special characters.
    // *   A password must be 8 to 32 characters in length.
    std::shared_ptr<string> consumerGroupPassword_ = nullptr;
    // The new username of the consumer group.
    // 
    // *   A username can contain one or more of the following character types: uppercase letters, lowercase letters, digits, and underscores (_).
    // *   A username cannot exceed 16 characters in length.
    std::shared_ptr<string> consumerGroupUserName_ = nullptr;
    // The ID of the change tracking instance. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    // 
    // >  You must specify at least one of the **DtsInstanceId** and **DtsJobId** parameters.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the change tracking task. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // >  You must specify at least one of the **DtsInstanceId** and **DtsJobId** parameters.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The ID of the region where the change tracking instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
