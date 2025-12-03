// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects.hpp>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedObjects, associatedObjects_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedObjects, associatedObjects_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedObjects_ == nullptr
        && return this->createTime_ == nullptr && return this->serverCount_ == nullptr && return this->tags_ == nullptr && return this->VServerGroupId_ == nullptr && return this->VServerGroupName_ == nullptr; };
    // associatedObjects Field Functions 
    bool hasAssociatedObjects() const { return this->associatedObjects_ != nullptr;};
    void deleteAssociatedObjects() { this->associatedObjects_ = nullptr;};
    inline const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects & associatedObjects() const { DARABONBA_PTR_GET_CONST(associatedObjects_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects) };
    inline Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects associatedObjects() { DARABONBA_PTR_GET(associatedObjects_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setAssociatedObjects(const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects & associatedObjects) { DARABONBA_PTR_SET_VALUE(associatedObjects_, associatedObjects) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setAssociatedObjects(Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects && associatedObjects) { DARABONBA_PTR_SET_RVALUE(associatedObjects_, associatedObjects) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // serverCount Field Functions 
    bool hasServerCount() const { return this->serverCount_ != nullptr;};
    void deleteServerCount() { this->serverCount_ = nullptr;};
    inline int64_t serverCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0L) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setServerCount(int64_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags) };
    inline Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setTags(const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setTags(Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroup& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The associated resources.
    std::shared_ptr<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects> associatedObjects_ = nullptr;
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of servers.
    // 
    // This parameter is unavailable by default. To use this parameter, submit a ticket or contact your account manager.
    std::shared_ptr<int64_t> serverCount_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags> tags_ = nullptr;
    // The server group ID.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The server group name.
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
