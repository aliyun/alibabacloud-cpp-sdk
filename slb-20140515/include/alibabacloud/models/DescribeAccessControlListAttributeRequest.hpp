// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeAccessControlListAttributeRequest() = default ;
    DescribeAccessControlListAttributeRequest(const DescribeAccessControlListAttributeRequest &) = default ;
    DescribeAccessControlListAttributeRequest(DescribeAccessControlListAttributeRequest &&) = default ;
    DescribeAccessControlListAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeRequest() = default ;
    DescribeAccessControlListAttributeRequest& operator=(const DescribeAccessControlListAttributeRequest &) = default ;
    DescribeAccessControlListAttributeRequest& operator=(DescribeAccessControlListAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && return this->aclId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // aclEntryComment Field Functions 
    bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
    void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
    inline string aclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
    inline DescribeAccessControlListAttributeRequest& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListAttributeRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAccessControlListAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAccessControlListAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeAccessControlListAttributeRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessControlListAttributeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccessControlListAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAccessControlListAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAccessControlListAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The remarks of the ACL entry.
    std::shared_ptr<string> aclEntryComment_ = nullptr;
    // The ID of the ACL that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the ACL.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2401682.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
