// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceGroupResponseBodyResourceGroupRegionStatuses.hpp>
#include <alibabacloud/models/GetResourceGroupResponseBodyResourceGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionStatuses, regionStatuses_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionStatuses, regionStatuses_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetResourceGroupResponseBodyResourceGroup() = default ;
    GetResourceGroupResponseBodyResourceGroup(const GetResourceGroupResponseBodyResourceGroup &) = default ;
    GetResourceGroupResponseBodyResourceGroup(GetResourceGroupResponseBodyResourceGroup &&) = default ;
    GetResourceGroupResponseBodyResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBodyResourceGroup() = default ;
    GetResourceGroupResponseBodyResourceGroup& operator=(const GetResourceGroupResponseBodyResourceGroup &) = default ;
    GetResourceGroupResponseBodyResourceGroup& operator=(GetResourceGroupResponseBodyResourceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->createDate_ == nullptr && return this->displayName_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->regionStatuses_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionStatuses Field Functions 
    bool hasRegionStatuses() const { return this->regionStatuses_ != nullptr;};
    void deleteRegionStatuses() { this->regionStatuses_ = nullptr;};
    inline const Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses & regionStatuses() const { DARABONBA_PTR_GET_CONST(regionStatuses_, Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses) };
    inline Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses regionStatuses() { DARABONBA_PTR_GET(regionStatuses_, Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses) };
    inline GetResourceGroupResponseBodyResourceGroup& setRegionStatuses(const Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses & regionStatuses) { DARABONBA_PTR_SET_VALUE(regionStatuses_, regionStatuses) };
    inline GetResourceGroupResponseBodyResourceGroup& setRegionStatuses(Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses && regionStatuses) { DARABONBA_PTR_SET_RVALUE(regionStatuses_, regionStatuses) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceGroupResponseBodyResourceGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetResourceGroupResponseBodyResourceGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetResourceGroupResponseBodyResourceGroupTags) };
    inline Models::GetResourceGroupResponseBodyResourceGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::GetResourceGroupResponseBodyResourceGroupTags) };
    inline GetResourceGroupResponseBodyResourceGroup& setTags(const Models::GetResourceGroupResponseBodyResourceGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetResourceGroupResponseBodyResourceGroup& setTags(Models::GetResourceGroupResponseBodyResourceGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource group belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the resource group was created. The time is displayed in UTC.
    std::shared_ptr<string> createDate_ = nullptr;
    // The display name of the resource group.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> id_ = nullptr;
    // The identifier of the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the resource group in all regions.
    std::shared_ptr<Models::GetResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   Creating: The resource group is being created.
    // *   OK: The resource group is created.
    // *   PendingDelete: The resource group is waiting to be deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the resource group.
    std::shared_ptr<Models::GetResourceGroupResponseBodyResourceGroupTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
