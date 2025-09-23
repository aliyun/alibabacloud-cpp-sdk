// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODYRESOURCESHARES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHARESRESPONSEBODYRESOURCESHARES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceSharesResponseBodyResourceSharesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharesResponseBodyResourceShares : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharesResponseBodyResourceShares& obj) { 
      DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(ResourceShareOwner, resourceShareOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharesResponseBodyResourceShares& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(ResourceShareOwner, resourceShareOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareStatus, resourceShareStatus_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListResourceSharesResponseBodyResourceShares() = default ;
    ListResourceSharesResponseBodyResourceShares(const ListResourceSharesResponseBodyResourceShares &) = default ;
    ListResourceSharesResponseBodyResourceShares(ListResourceSharesResponseBodyResourceShares &&) = default ;
    ListResourceSharesResponseBodyResourceShares(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharesResponseBodyResourceShares() = default ;
    ListResourceSharesResponseBodyResourceShares& operator=(const ListResourceSharesResponseBodyResourceShares &) = default ;
    ListResourceSharesResponseBodyResourceShares& operator=(ListResourceSharesResponseBodyResourceShares &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowExternalTargets_ != nullptr
        && this->createTime_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceShareId_ != nullptr && this->resourceShareName_ != nullptr && this->resourceShareOwner_ != nullptr
        && this->resourceShareStatus_ != nullptr && this->tags_ != nullptr && this->updateTime_ != nullptr; };
    // allowExternalTargets Field Functions 
    bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
    void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
    inline bool allowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
    inline ListResourceSharesResponseBodyResourceShares& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // resourceShareOwner Field Functions 
    bool hasResourceShareOwner() const { return this->resourceShareOwner_ != nullptr;};
    void deleteResourceShareOwner() { this->resourceShareOwner_ = nullptr;};
    inline string resourceShareOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceShareOwner_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setResourceShareOwner(string resourceShareOwner) { DARABONBA_PTR_SET_VALUE(resourceShareOwner_, resourceShareOwner) };


    // resourceShareStatus Field Functions 
    bool hasResourceShareStatus() const { return this->resourceShareStatus_ != nullptr;};
    void deleteResourceShareStatus() { this->resourceShareStatus_ = nullptr;};
    inline string resourceShareStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceShareStatus_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setResourceShareStatus(string resourceShareStatus) { DARABONBA_PTR_SET_VALUE(resourceShareStatus_, resourceShareStatus) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListResourceSharesResponseBodyResourceSharesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListResourceSharesResponseBodyResourceSharesTags>) };
    inline vector<Models::ListResourceSharesResponseBodyResourceSharesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListResourceSharesResponseBodyResourceSharesTags>) };
    inline ListResourceSharesResponseBodyResourceShares& setTags(const vector<Models::ListResourceSharesResponseBodyResourceSharesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceSharesResponseBodyResourceShares& setTags(vector<Models::ListResourceSharesResponseBodyResourceSharesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListResourceSharesResponseBodyResourceShares& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Indicates whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
    // 
    // *   false: Resources in the resource share can be shared only with accounts in the resource directory.
    // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
    std::shared_ptr<bool> allowExternalTargets_ = nullptr;
    // The time when the resource share was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The name of the resource share.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The owner of the resource share.
    std::shared_ptr<string> resourceShareOwner_ = nullptr;
    // The status of the resource share. Valid values:
    // 
    // *   Active
    // *   Pending
    // *   Deleting
    // *   Deleted
    // 
    // >  The system automatically deletes the records of resource shares in the Deleted state within 48 hours to 96 hours after you delete the resource shares.
    std::shared_ptr<string> resourceShareStatus_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListResourceSharesResponseBodyResourceSharesTags>> tags_ = nullptr;
    // The time when the resource share was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
