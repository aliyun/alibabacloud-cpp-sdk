// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateConsumerChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupPassword, consumerGroupPassword_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateConsumerChannelRequest() = default ;
    CreateConsumerChannelRequest(const CreateConsumerChannelRequest &) = default ;
    CreateConsumerChannelRequest(CreateConsumerChannelRequest &&) = default ;
    CreateConsumerChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerChannelRequest() = default ;
    CreateConsumerChannelRequest& operator=(const CreateConsumerChannelRequest &) = default ;
    CreateConsumerChannelRequest& operator=(CreateConsumerChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupName_ == nullptr
        && return this->consumerGroupPassword_ == nullptr && return this->consumerGroupUserName_ == nullptr && return this->dtsInstanceId_ == nullptr && return this->dtsJobId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // consumerGroupName Field Functions 
    bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
    void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
    inline string consumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
    inline CreateConsumerChannelRequest& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


    // consumerGroupPassword Field Functions 
    bool hasConsumerGroupPassword() const { return this->consumerGroupPassword_ != nullptr;};
    void deleteConsumerGroupPassword() { this->consumerGroupPassword_ = nullptr;};
    inline string consumerGroupPassword() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupPassword_, "") };
    inline CreateConsumerChannelRequest& setConsumerGroupPassword(string consumerGroupPassword) { DARABONBA_PTR_SET_VALUE(consumerGroupPassword_, consumerGroupPassword) };


    // consumerGroupUserName Field Functions 
    bool hasConsumerGroupUserName() const { return this->consumerGroupUserName_ != nullptr;};
    void deleteConsumerGroupUserName() { this->consumerGroupUserName_ = nullptr;};
    inline string consumerGroupUserName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupUserName_, "") };
    inline CreateConsumerChannelRequest& setConsumerGroupUserName(string consumerGroupUserName) { DARABONBA_PTR_SET_VALUE(consumerGroupUserName_, consumerGroupUserName) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline CreateConsumerChannelRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline CreateConsumerChannelRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateConsumerChannelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateConsumerChannelRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the consumer group. The name can be up to 128 characters in length. We recommend that you use an informative name for easy identification.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupName_ = nullptr;
    // The password of the consumer group.
    // 
    // *   A password must contain two or more of the following characters: uppercase letters, lowercase letters, digits, and special characters.
    // *   A password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupPassword_ = nullptr;
    // The username of the consumer group.
    // 
    // *   A username must contain one or more of the following characters: uppercase letters, lowercase letters, digits, and underscores (_).
    // *   A username cannot exceed 16 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerGroupUserName_ = nullptr;
    // The ID of the change tracking instance. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    // 
    // >  You must specify at least one of the **DtsInstanceId** and **DtsJobId**. parameters.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the change tracking task. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // >  You must specify at least one of the **DtsInstanceId** and **DtsJobId**. parameters.
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
