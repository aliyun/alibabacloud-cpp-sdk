// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODYACCESSGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODYACCESSGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessGroupsResponseBodyAccessGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessGroupsResponseBodyAccessGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MountPointCount, mountPointCount_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessGroupsResponseBodyAccessGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MountPointCount, mountPointCount_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    ListAccessGroupsResponseBodyAccessGroups() = default ;
    ListAccessGroupsResponseBodyAccessGroups(const ListAccessGroupsResponseBodyAccessGroups &) = default ;
    ListAccessGroupsResponseBodyAccessGroups(ListAccessGroupsResponseBodyAccessGroups &&) = default ;
    ListAccessGroupsResponseBodyAccessGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessGroupsResponseBodyAccessGroups() = default ;
    ListAccessGroupsResponseBodyAccessGroups& operator=(const ListAccessGroupsResponseBodyAccessGroups &) = default ;
    ListAccessGroupsResponseBodyAccessGroups& operator=(ListAccessGroupsResponseBodyAccessGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->accessGroupName_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->isDefault_ == nullptr && return this->mountPointCount_ == nullptr
        && return this->networkType_ == nullptr && return this->regionId_ == nullptr && return this->ruleCount_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListAccessGroupsResponseBodyAccessGroups& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // mountPointCount Field Functions 
    bool hasMountPointCount() const { return this->mountPointCount_ != nullptr;};
    void deleteMountPointCount() { this->mountPointCount_ = nullptr;};
    inline int32_t mountPointCount() const { DARABONBA_PTR_GET_DEFAULT(mountPointCount_, 0) };
    inline ListAccessGroupsResponseBodyAccessGroups& setMountPointCount(int32_t mountPointCount) { DARABONBA_PTR_SET_VALUE(mountPointCount_, mountPointCount) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAccessGroupsResponseBodyAccessGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline ListAccessGroupsResponseBodyAccessGroups& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    std::shared_ptr<string> accessGroupId_ = nullptr;
    std::shared_ptr<string> accessGroupName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<int32_t> mountPointCount_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
