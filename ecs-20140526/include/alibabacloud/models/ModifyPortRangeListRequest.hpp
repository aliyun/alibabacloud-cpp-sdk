// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPortRangeListRequestAddEntry.hpp>
#include <alibabacloud/models/ModifyPortRangeListRequestRemoveEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPortRangeListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPortRangeListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddEntry, addEntry_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_TO_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveEntry, removeEntry_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPortRangeListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddEntry, addEntry_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortRangeListId, portRangeListId_);
      DARABONBA_PTR_FROM_JSON(PortRangeListName, portRangeListName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveEntry, removeEntry_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPortRangeListRequest() = default ;
    ModifyPortRangeListRequest(const ModifyPortRangeListRequest &) = default ;
    ModifyPortRangeListRequest(ModifyPortRangeListRequest &&) = default ;
    ModifyPortRangeListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPortRangeListRequest() = default ;
    ModifyPortRangeListRequest& operator=(const ModifyPortRangeListRequest &) = default ;
    ModifyPortRangeListRequest& operator=(ModifyPortRangeListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addEntry_ == nullptr
        && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->portRangeListId_ == nullptr
        && return this->portRangeListName_ == nullptr && return this->regionId_ == nullptr && return this->removeEntry_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // addEntry Field Functions 
    bool hasAddEntry() const { return this->addEntry_ != nullptr;};
    void deleteAddEntry() { this->addEntry_ = nullptr;};
    inline const vector<ModifyPortRangeListRequestAddEntry> & addEntry() const { DARABONBA_PTR_GET_CONST(addEntry_, vector<ModifyPortRangeListRequestAddEntry>) };
    inline vector<ModifyPortRangeListRequestAddEntry> addEntry() { DARABONBA_PTR_GET(addEntry_, vector<ModifyPortRangeListRequestAddEntry>) };
    inline ModifyPortRangeListRequest& setAddEntry(const vector<ModifyPortRangeListRequestAddEntry> & addEntry) { DARABONBA_PTR_SET_VALUE(addEntry_, addEntry) };
    inline ModifyPortRangeListRequest& setAddEntry(vector<ModifyPortRangeListRequestAddEntry> && addEntry) { DARABONBA_PTR_SET_RVALUE(addEntry_, addEntry) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPortRangeListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPortRangeListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPortRangeListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPortRangeListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string portRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline ModifyPortRangeListRequest& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // portRangeListName Field Functions 
    bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
    void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
    inline string portRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
    inline ModifyPortRangeListRequest& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPortRangeListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeEntry Field Functions 
    bool hasRemoveEntry() const { return this->removeEntry_ != nullptr;};
    void deleteRemoveEntry() { this->removeEntry_ = nullptr;};
    inline const vector<ModifyPortRangeListRequestRemoveEntry> & removeEntry() const { DARABONBA_PTR_GET_CONST(removeEntry_, vector<ModifyPortRangeListRequestRemoveEntry>) };
    inline vector<ModifyPortRangeListRequestRemoveEntry> removeEntry() { DARABONBA_PTR_GET(removeEntry_, vector<ModifyPortRangeListRequestRemoveEntry>) };
    inline ModifyPortRangeListRequest& setRemoveEntry(const vector<ModifyPortRangeListRequestRemoveEntry> & removeEntry) { DARABONBA_PTR_SET_VALUE(removeEntry_, removeEntry) };
    inline ModifyPortRangeListRequest& setRemoveEntry(vector<ModifyPortRangeListRequestRemoveEntry> && removeEntry) { DARABONBA_PTR_SET_RVALUE(removeEntry_, removeEntry) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPortRangeListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPortRangeListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The entries that you want to add or modify for the port list.
    std::shared_ptr<vector<ModifyPortRangeListRequestAddEntry>> addEntry_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the port list. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the port list.
    // 
    // This parameter is required.
    std::shared_ptr<string> portRangeListId_ = nullptr;
    // The name of the port list. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with http://, https://, com.aliyun, or com.alibabacloud. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> portRangeListName_ = nullptr;
    // The region ID of the port list. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The entries that you want to remove from the port list.
    std::shared_ptr<vector<ModifyPortRangeListRequestRemoveEntry>> removeEntry_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
