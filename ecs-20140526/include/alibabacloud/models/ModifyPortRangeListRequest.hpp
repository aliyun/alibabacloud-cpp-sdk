// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RemoveEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveEntry& obj) { 
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      };
      RemoveEntry() = default ;
      RemoveEntry(const RemoveEntry &) = default ;
      RemoveEntry(RemoveEntry &&) = default ;
      RemoveEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveEntry() = default ;
      RemoveEntry& operator=(const RemoveEntry &) = default ;
      RemoveEntry& operator=(RemoveEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->portRange_ == nullptr; };
      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline RemoveEntry& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    protected:
      // The port range in entry N. Valid values of N: 0 to 200. Take note of the following limits:
      // 
      // *   `PortRange` in different entries cannot be duplicated.
      // *   The value of this parameter cannot be the same as the value of `AddEntry.N.PortRange`.
      shared_ptr<string> portRange_ {};
    };

    class AddEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      };
      friend void from_json(const Darabonba::Json& j, AddEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      };
      AddEntry() = default ;
      AddEntry(const AddEntry &) = default ;
      AddEntry(AddEntry &&) = default ;
      AddEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddEntry() = default ;
      AddEntry& operator=(const AddEntry &) = default ;
      AddEntry& operator=(AddEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->portRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AddEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline AddEntry& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    protected:
      // The description of the port range in entry N. The description must be 2 to 32 characters in length and cannot start with http:// or https://. Valid values of N: 0 to 200.
      shared_ptr<string> description_ {};
      // The port range in entry N. Valid values of N: 0 to 200. Take note of the following limits:
      // 
      // *   The total number of entries in the port list cannot exceed the `MaxEntries` value.
      // *   `PortRange` in different entries cannot be duplicated.
      // *   The value of this parameter cannot be the same as the value of `RemoveEntry.N.PortRange`.
      shared_ptr<string> portRange_ {};
    };

    virtual bool empty() const override { return this->addEntry_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->portRangeListId_ == nullptr
        && this->portRangeListName_ == nullptr && this->regionId_ == nullptr && this->removeEntry_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addEntry Field Functions 
    bool hasAddEntry() const { return this->addEntry_ != nullptr;};
    void deleteAddEntry() { this->addEntry_ = nullptr;};
    inline const vector<ModifyPortRangeListRequest::AddEntry> & getAddEntry() const { DARABONBA_PTR_GET_CONST(addEntry_, vector<ModifyPortRangeListRequest::AddEntry>) };
    inline vector<ModifyPortRangeListRequest::AddEntry> getAddEntry() { DARABONBA_PTR_GET(addEntry_, vector<ModifyPortRangeListRequest::AddEntry>) };
    inline ModifyPortRangeListRequest& setAddEntry(const vector<ModifyPortRangeListRequest::AddEntry> & addEntry) { DARABONBA_PTR_SET_VALUE(addEntry_, addEntry) };
    inline ModifyPortRangeListRequest& setAddEntry(vector<ModifyPortRangeListRequest::AddEntry> && addEntry) { DARABONBA_PTR_SET_RVALUE(addEntry_, addEntry) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPortRangeListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPortRangeListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPortRangeListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPortRangeListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portRangeListId Field Functions 
    bool hasPortRangeListId() const { return this->portRangeListId_ != nullptr;};
    void deletePortRangeListId() { this->portRangeListId_ = nullptr;};
    inline string getPortRangeListId() const { DARABONBA_PTR_GET_DEFAULT(portRangeListId_, "") };
    inline ModifyPortRangeListRequest& setPortRangeListId(string portRangeListId) { DARABONBA_PTR_SET_VALUE(portRangeListId_, portRangeListId) };


    // portRangeListName Field Functions 
    bool hasPortRangeListName() const { return this->portRangeListName_ != nullptr;};
    void deletePortRangeListName() { this->portRangeListName_ = nullptr;};
    inline string getPortRangeListName() const { DARABONBA_PTR_GET_DEFAULT(portRangeListName_, "") };
    inline ModifyPortRangeListRequest& setPortRangeListName(string portRangeListName) { DARABONBA_PTR_SET_VALUE(portRangeListName_, portRangeListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPortRangeListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeEntry Field Functions 
    bool hasRemoveEntry() const { return this->removeEntry_ != nullptr;};
    void deleteRemoveEntry() { this->removeEntry_ = nullptr;};
    inline const vector<ModifyPortRangeListRequest::RemoveEntry> & getRemoveEntry() const { DARABONBA_PTR_GET_CONST(removeEntry_, vector<ModifyPortRangeListRequest::RemoveEntry>) };
    inline vector<ModifyPortRangeListRequest::RemoveEntry> getRemoveEntry() { DARABONBA_PTR_GET(removeEntry_, vector<ModifyPortRangeListRequest::RemoveEntry>) };
    inline ModifyPortRangeListRequest& setRemoveEntry(const vector<ModifyPortRangeListRequest::RemoveEntry> & removeEntry) { DARABONBA_PTR_SET_VALUE(removeEntry_, removeEntry) };
    inline ModifyPortRangeListRequest& setRemoveEntry(vector<ModifyPortRangeListRequest::RemoveEntry> && removeEntry) { DARABONBA_PTR_SET_RVALUE(removeEntry_, removeEntry) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPortRangeListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPortRangeListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The entries that you want to add or modify for the port list.
    shared_ptr<vector<ModifyPortRangeListRequest::AddEntry>> addEntry_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The description of the port list. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the port list.
    // 
    // This parameter is required.
    shared_ptr<string> portRangeListId_ {};
    // The name of the port list. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with http://, https://, com.aliyun, or com.alibabacloud. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> portRangeListName_ {};
    // The region ID of the port list. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The entries that you want to remove from the port list.
    shared_ptr<vector<ModifyPortRangeListRequest::RemoveEntry>> removeEntry_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
