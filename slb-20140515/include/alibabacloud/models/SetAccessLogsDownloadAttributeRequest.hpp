// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCESSLOGSDOWNLOADATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCESSLOGSDOWNLOADATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetAccessLogsDownloadAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccessLogsDownloadAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccessLogsDownloadAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    SetAccessLogsDownloadAttributeRequest() = default ;
    SetAccessLogsDownloadAttributeRequest(const SetAccessLogsDownloadAttributeRequest &) = default ;
    SetAccessLogsDownloadAttributeRequest(SetAccessLogsDownloadAttributeRequest &&) = default ;
    SetAccessLogsDownloadAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccessLogsDownloadAttributeRequest() = default ;
    SetAccessLogsDownloadAttributeRequest& operator=(const SetAccessLogsDownloadAttributeRequest &) = default ;
    SetAccessLogsDownloadAttributeRequest& operator=(SetAccessLogsDownloadAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->logsDownloadAttributes_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->tags_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // logsDownloadAttributes Field Functions 
    bool hasLogsDownloadAttributes() const { return this->logsDownloadAttributes_ != nullptr;};
    void deleteLogsDownloadAttributes() { this->logsDownloadAttributes_ = nullptr;};
    inline string logsDownloadAttributes() const { DARABONBA_PTR_GET_DEFAULT(logsDownloadAttributes_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setLogsDownloadAttributes(string logsDownloadAttributes) { DARABONBA_PTR_SET_VALUE(logsDownloadAttributes_, logsDownloadAttributes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetAccessLogsDownloadAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetAccessLogsDownloadAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline SetAccessLogsDownloadAttributeRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The access log forwarding rule. Parameters:
    // 
    // *   **LogProject**: the name of the project of Simple Log Service.
    // *   **LogStore**: the name of the Logstore of Simple Log Service.
    // *   **LoadBalancerId**: the ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> logsDownloadAttributes_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags that are added to the CLB instance. The tags must be key-value pairs that are contained in a JSON dictionary.
    // 
    // You can specify up to 10 tags in each call.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
