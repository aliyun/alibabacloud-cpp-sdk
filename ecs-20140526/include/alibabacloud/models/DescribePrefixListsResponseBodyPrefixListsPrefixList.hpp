// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTSPREFIXLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTSPREFIXLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePrefixListsResponseBodyPrefixListsPrefixListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListsResponseBodyPrefixListsPrefixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBodyPrefixListsPrefixList& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(AssociationCount, associationCount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBodyPrefixListsPrefixList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(AssociationCount, associationCount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribePrefixListsResponseBodyPrefixListsPrefixList() = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixList(const DescribePrefixListsResponseBodyPrefixListsPrefixList &) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixList(DescribePrefixListsResponseBodyPrefixListsPrefixList &&) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBodyPrefixListsPrefixList() = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixList& operator=(const DescribePrefixListsResponseBodyPrefixListsPrefixList &) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixList& operator=(DescribePrefixListsResponseBodyPrefixListsPrefixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressFamily_ == nullptr
        && return this->associationCount_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->maxEntries_ == nullptr && return this->prefixListId_ == nullptr
        && return this->prefixListName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string addressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // associationCount Field Functions 
    bool hasAssociationCount() const { return this->associationCount_ != nullptr;};
    void deleteAssociationCount() { this->associationCount_ = nullptr;};
    inline int32_t associationCount() const { DARABONBA_PTR_GET_DEFAULT(associationCount_, 0) };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setAssociationCount(int32_t associationCount) { DARABONBA_PTR_SET_VALUE(associationCount_, associationCount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t maxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string prefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags) };
    inline Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags) };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setTags(const Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixList& setTags(Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The IP address family of the prefix list. Valid values:
    // 
    // *   IPv4
    // *   IPv6
    std::shared_ptr<string> addressFamily_ = nullptr;
    // The number of associated resources.
    std::shared_ptr<int32_t> associationCount_ = nullptr;
    // The time when the prefix list was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the prefix list.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of entries that the prefix list can contain.
    std::shared_ptr<int32_t> maxEntries_ = nullptr;
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The name of the prefix list.
    std::shared_ptr<string> prefixListName_ = nullptr;
    // The ID of the resource group to which the prefix list belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the prefix list.
    std::shared_ptr<Models::DescribePrefixListsResponseBodyPrefixListsPrefixListTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
