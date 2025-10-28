// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODYSERVICEGROUPSLISTLISTSERVICEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODYSERVICEGROUPSLISTLISTSERVICEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups() = default ;
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups(const ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups &) = default ;
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups(ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups &&) = default ;
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups() = default ;
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& operator=(const ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups &) = default ;
    ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& operator=(ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListServiceGroupsResponseBodyServiceGroupsListListServiceGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The time when the service group was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the service group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the service group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
