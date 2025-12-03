// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedObjects, associatedObjects_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedObjects, associatedObjects_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& operator=(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& operator=(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedObjects_ == nullptr
        && return this->createTime_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->masterSlaveServerGroupName_ == nullptr && return this->tags_ == nullptr; };
    // associatedObjects Field Functions 
    bool hasAssociatedObjects() const { return this->associatedObjects_ != nullptr;};
    void deleteAssociatedObjects() { this->associatedObjects_ = nullptr;};
    inline const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects & associatedObjects() const { DARABONBA_PTR_GET_CONST(associatedObjects_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects) };
    inline Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects associatedObjects() { DARABONBA_PTR_GET(associatedObjects_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setAssociatedObjects(const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects & associatedObjects) { DARABONBA_PTR_SET_VALUE(associatedObjects_, associatedObjects) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setAssociatedObjects(Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects && associatedObjects) { DARABONBA_PTR_SET_RVALUE(associatedObjects_, associatedObjects) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // masterSlaveServerGroupName Field Functions 
    bool hasMasterSlaveServerGroupName() const { return this->masterSlaveServerGroupName_ != nullptr;};
    void deleteMasterSlaveServerGroupName() { this->masterSlaveServerGroupName_ = nullptr;};
    inline string masterSlaveServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupName_, "") };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setMasterSlaveServerGroupName(string masterSlaveServerGroupName) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupName_, masterSlaveServerGroupName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags) };
    inline Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setTags(const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroup& setTags(Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The associated resources.
    std::shared_ptr<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects> associatedObjects_ = nullptr;
    // The time when the CLB instance was created. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the primary/secondary server group.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // The name of the primary/secondary server group.
    std::shared_ptr<string> masterSlaveServerGroupName_ = nullptr;
    // The tags to add to the resource.
    std::shared_ptr<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
