// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListResourceGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableKp, enableKp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_ANY_TO_JSON(Specs, specs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizExtKey, bizExtKey_);
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableKp, enableKp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_ANY_FROM_JSON(Specs, specs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListResourceGroupsResponseBodyData() = default ;
    ListResourceGroupsResponseBodyData(const ListResourceGroupsResponseBodyData &) = default ;
    ListResourceGroupsResponseBodyData(ListResourceGroupsResponseBodyData &&) = default ;
    ListResourceGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyData() = default ;
    ListResourceGroupsResponseBodyData& operator=(const ListResourceGroupsResponseBodyData &) = default ;
    ListResourceGroupsResponseBodyData& operator=(ListResourceGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizExtKey_ != nullptr
        && this->cluster_ != nullptr && this->createTime_ != nullptr && this->enableKp_ != nullptr && this->id_ != nullptr && this->identifier_ != nullptr
        && this->isDefault_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr && this->resourceGroupType_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->sequence_ != nullptr && this->specs_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->tenantId_ != nullptr
        && this->updateTime_ != nullptr; };
    // bizExtKey Field Functions 
    bool hasBizExtKey() const { return this->bizExtKey_ != nullptr;};
    void deleteBizExtKey() { this->bizExtKey_ = nullptr;};
    inline string bizExtKey() const { DARABONBA_PTR_GET_DEFAULT(bizExtKey_, "") };
    inline ListResourceGroupsResponseBodyData& setBizExtKey(string bizExtKey) { DARABONBA_PTR_SET_VALUE(bizExtKey_, bizExtKey) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline ListResourceGroupsResponseBodyData& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceGroupsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableKp Field Functions 
    bool hasEnableKp() const { return this->enableKp_ != nullptr;};
    void deleteEnableKp() { this->enableKp_ = nullptr;};
    inline bool enableKp() const { DARABONBA_PTR_GET_DEFAULT(enableKp_, false) };
    inline ListResourceGroupsResponseBodyData& setEnableKp(bool enableKp) { DARABONBA_PTR_SET_VALUE(enableKp_, enableKp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListResourceGroupsResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListResourceGroupsResponseBodyData& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListResourceGroupsResponseBodyData& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListResourceGroupsResponseBodyData& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline string resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
    inline ListResourceGroupsResponseBodyData& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ListResourceGroupsResponseBodyData& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListResourceGroupsResponseBodyData& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline     const Darabonba::Json & specs() const { DARABONBA_GET(specs_) };
    Darabonba::Json & specs() { DARABONBA_GET(specs_) };
    inline ListResourceGroupsResponseBodyData& setSpecs(const Darabonba::Json & specs) { DARABONBA_SET_VALUE(specs_, specs) };
    inline ListResourceGroupsResponseBodyData& setSpecs(Darabonba::Json & specs) { DARABONBA_SET_RVALUE(specs_, specs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListResourceGroupsResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListResourceGroupsResponseBodyDataTags>) };
    inline vector<Models::ListResourceGroupsResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListResourceGroupsResponseBodyDataTags>) };
    inline ListResourceGroupsResponseBodyData& setTags(const vector<Models::ListResourceGroupsResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceGroupsResponseBodyData& setTags(vector<Models::ListResourceGroupsResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListResourceGroupsResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListResourceGroupsResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The category of the resource group. Valid values:
    // 
    // *   default: shared resource group
    // *   single: exclusive resource group
    std::shared_ptr<string> bizExtKey_ = nullptr;
    // The name of the cluster. This parameter is returned only if the type of the resource group is MaxCompute or PAI.
    std::shared_ptr<string> cluster_ = nullptr;
    // The time when the cluster was created. Example: Jul 9, 2018 2:43:37 PM.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the UID of an Alibaba Cloud account is used for access. Valid values:
    // 
    // *   true: The MaxCompute compute engine uses the UID of the Alibaba Cloud account as the display name of the account for access.
    // *   false: The MaxCompute compute engine uses the name of the Alibaba Cloud account as the display name of the account for access. The remaining values are useless. This parameter is returned only if the type of the resource group is MaxCompute.
    std::shared_ptr<bool> enableKp_ = nullptr;
    // The resource group ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The identifier of the resource group.
    std::shared_ptr<string> identifier_ = nullptr;
    // Indicates whether the resource group is the default resource group. Valid values:
    // 
    // *   true: The resource group is the default resource group.
    // *   false: The resource group is not the default resource group.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The mode of the resource group. Valid values:
    // 
    // *   ISOLATE: exclusive resource group that adopts the subscription billing method
    // *   SHARE: shared resource group that adopts the pay-as-you-go billing method
    // *   DEVELOP: resource group for developers
    std::shared_ptr<string> mode_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   0: DataWorks
    // *   2: MaxCompute
    // *   3: PAI
    // *   4: Data Integration
    // *   7: scheduling
    // *   9: DataService Studio
    std::shared_ptr<string> resourceGroupType_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The sequence number of the resource group. Created resource groups are sorted in ascending order by sequence number.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The details of the resource group. The content enclosed in braces {} is the details of the resource group.
    Darabonba::Json specs_ = nullptr;
    // The status of the resource group. Valid values:
    // 
    // *   0: NORMAL, which indicates that the resource group is running or in service.
    // *   1: STOP, which indicates that the resource group has expired and is frozen.
    // *   2: DELETED, which indicates that the resource group is released or destroyed.
    // *   3: CREATING, which indicates that the resource group is being created or started.
    // *   4: CREATE_FAILED, which indicates that the resource group fails to be created or started.
    // *   5: UPDATING, which indicates that the resource group is being scaled out or upgraded.
    // *   6: UPDATE_FAILED, which indicates that the resource group fails to be scaled out or upgraded.
    // *   7: DELETING, which indicates that the resource group is being released or destroyed.
    // *   8: DELETE_FAILED, which indicates that the resource group fails to be released or destroyed.
    // *   9: TIMEOUT, which indicates that the operation performed on the resource group times out. All operations may time out. This value is temporarily available only for DataService Studio.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyDataTags>> tags_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The time when the resource group was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
