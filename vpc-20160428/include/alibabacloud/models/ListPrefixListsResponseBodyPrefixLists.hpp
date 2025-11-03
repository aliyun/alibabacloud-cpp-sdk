// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODYPREFIXLISTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODYPREFIXLISTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrefixListsResponseBodyPrefixListsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPrefixListsResponseBodyPrefixLists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrefixListsResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListDescription, prefixListDescription_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(PrefixListStatus, prefixListStatus_);
      DARABONBA_PTR_TO_JSON(PrefixListType, prefixListType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrefixListsResponseBodyPrefixLists& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListDescription, prefixListDescription_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(PrefixListStatus, prefixListStatus_);
      DARABONBA_PTR_FROM_JSON(PrefixListType, prefixListType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPrefixListsResponseBodyPrefixLists() = default ;
    ListPrefixListsResponseBodyPrefixLists(const ListPrefixListsResponseBodyPrefixLists &) = default ;
    ListPrefixListsResponseBodyPrefixLists(ListPrefixListsResponseBodyPrefixLists &&) = default ;
    ListPrefixListsResponseBodyPrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrefixListsResponseBodyPrefixLists() = default ;
    ListPrefixListsResponseBodyPrefixLists& operator=(const ListPrefixListsResponseBodyPrefixLists &) = default ;
    ListPrefixListsResponseBodyPrefixLists& operator=(ListPrefixListsResponseBodyPrefixLists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlocks_ == nullptr
        && return this->creationTime_ == nullptr && return this->ipVersion_ == nullptr && return this->maxEntries_ == nullptr && return this->ownerId_ == nullptr && return this->prefixListDescription_ == nullptr
        && return this->prefixListId_ == nullptr && return this->prefixListName_ == nullptr && return this->prefixListStatus_ == nullptr && return this->prefixListType_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // cidrBlocks Field Functions 
    bool hasCidrBlocks() const { return this->cidrBlocks_ != nullptr;};
    void deleteCidrBlocks() { this->cidrBlocks_ = nullptr;};
    inline const vector<string> & cidrBlocks() const { DARABONBA_PTR_GET_CONST(cidrBlocks_, vector<string>) };
    inline vector<string> cidrBlocks() { DARABONBA_PTR_GET(cidrBlocks_, vector<string>) };
    inline ListPrefixListsResponseBodyPrefixLists& setCidrBlocks(const vector<string> & cidrBlocks) { DARABONBA_PTR_SET_VALUE(cidrBlocks_, cidrBlocks) };
    inline ListPrefixListsResponseBodyPrefixLists& setCidrBlocks(vector<string> && cidrBlocks) { DARABONBA_PTR_SET_RVALUE(cidrBlocks_, cidrBlocks) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t maxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline ListPrefixListsResponseBodyPrefixLists& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListDescription Field Functions 
    bool hasPrefixListDescription() const { return this->prefixListDescription_ != nullptr;};
    void deletePrefixListDescription() { this->prefixListDescription_ = nullptr;};
    inline string prefixListDescription() const { DARABONBA_PTR_GET_DEFAULT(prefixListDescription_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setPrefixListDescription(string prefixListDescription) { DARABONBA_PTR_SET_VALUE(prefixListDescription_, prefixListDescription) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string prefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // prefixListStatus Field Functions 
    bool hasPrefixListStatus() const { return this->prefixListStatus_ != nullptr;};
    void deletePrefixListStatus() { this->prefixListStatus_ = nullptr;};
    inline string prefixListStatus() const { DARABONBA_PTR_GET_DEFAULT(prefixListStatus_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setPrefixListStatus(string prefixListStatus) { DARABONBA_PTR_SET_VALUE(prefixListStatus_, prefixListStatus) };


    // prefixListType Field Functions 
    bool hasPrefixListType() const { return this->prefixListType_ != nullptr;};
    void deletePrefixListType() { this->prefixListType_ = nullptr;};
    inline string prefixListType() const { DARABONBA_PTR_GET_DEFAULT(prefixListType_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setPrefixListType(string prefixListType) { DARABONBA_PTR_SET_VALUE(prefixListType_, prefixListType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrefixListsResponseBodyPrefixLists& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPrefixListsResponseBodyPrefixListsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPrefixListsResponseBodyPrefixListsTags>) };
    inline vector<Models::ListPrefixListsResponseBodyPrefixListsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPrefixListsResponseBodyPrefixListsTags>) };
    inline ListPrefixListsResponseBodyPrefixLists& setTags(const vector<Models::ListPrefixListsResponseBodyPrefixListsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrefixListsResponseBodyPrefixLists& setTags(vector<Models::ListPrefixListsResponseBodyPrefixListsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The CIDR block specified in the prefix list.
    std::shared_ptr<vector<string>> cidrBlocks_ = nullptr;
    // The time when the prefix list was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The IP version of the prefix list. Valid values:
    // 
    // *   **IPV4**
    // *   **IPV6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The maximum number of CIDR blocks that you can specify in the prefix list.
    std::shared_ptr<int32_t> maxEntries_ = nullptr;
    // The Alibaba Cloud account to which the prefix list belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The description of the prefix list.
    std::shared_ptr<string> prefixListDescription_ = nullptr;
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The name of the prefix list.
    std::shared_ptr<string> prefixListName_ = nullptr;
    // The status of the prefix list. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    // *   **Modifying**
    // 
    // >  This parameter is the same as the **Status** parameter.
    std::shared_ptr<string> prefixListStatus_ = nullptr;
    // The type of the prefix list.
    std::shared_ptr<string> prefixListType_ = nullptr;
    // The region ID of the prefix list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the prefix list belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the prefix list is shared. Valid values:
    // 
    // *   **Shared**: The prefix list is shared.
    // *   If an empty value is returned, the prefix list is not shared.
    std::shared_ptr<string> shareType_ = nullptr;
    // The status of the prefix list. Valid values:
    // 
    // *   **Created**
    // *   **Deleted**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListPrefixListsResponseBodyPrefixListsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
