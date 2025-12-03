// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEHIGHDEFINATIONMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEHIGHDEFINATIONMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class EnableHighDefinationMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableHighDefinationMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, EnableHighDefinationMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    EnableHighDefinationMonitorRequest() = default ;
    EnableHighDefinationMonitorRequest(const EnableHighDefinationMonitorRequest &) = default ;
    EnableHighDefinationMonitorRequest(EnableHighDefinationMonitorRequest &&) = default ;
    EnableHighDefinationMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableHighDefinationMonitorRequest() = default ;
    EnableHighDefinationMonitorRequest& operator=(const EnableHighDefinationMonitorRequest &) = default ;
    EnableHighDefinationMonitorRequest& operator=(EnableHighDefinationMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logProject_ == nullptr
        && return this->logStore_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->tags_ == nullptr; };
    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline EnableHighDefinationMonitorRequest& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline EnableHighDefinationMonitorRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableHighDefinationMonitorRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableHighDefinationMonitorRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableHighDefinationMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableHighDefinationMonitorRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableHighDefinationMonitorRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline EnableHighDefinationMonitorRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The name of the project of Log Service. The name must be 4 to 63 characters in length, and can contain digits and lowercase letters. It must start and end with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> logProject_ = nullptr;
    // The name of the Logstore of Log Service. The name must be 2 to 64 characters in length and can contain digits, lowercase letters, hyphens (-) and underscores (_). It must start and end with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> logStore_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Classic Load Balancer (CLB) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags of the logs. The tags must be key-value pairs that are contained in a JSON dictionary.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
