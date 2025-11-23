// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSRESPONSEBODYSTANDARDGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSRESPONSEBODYSTANDARDGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListStandardGroupsResponseBodyStandardGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStandardGroupsResponseBodyStandardGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(LastMenderId, lastMenderId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStandardGroupsResponseBodyStandardGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(LastMenderId, lastMenderId_);
    };
    ListStandardGroupsResponseBodyStandardGroupList() = default ;
    ListStandardGroupsResponseBodyStandardGroupList(const ListStandardGroupsResponseBodyStandardGroupList &) = default ;
    ListStandardGroupsResponseBodyStandardGroupList(ListStandardGroupsResponseBodyStandardGroupList &&) = default ;
    ListStandardGroupsResponseBodyStandardGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStandardGroupsResponseBodyStandardGroupList() = default ;
    ListStandardGroupsResponseBodyStandardGroupList& operator=(const ListStandardGroupsResponseBodyStandardGroupList &) = default ;
    ListStandardGroupsResponseBodyStandardGroupList& operator=(ListStandardGroupsResponseBodyStandardGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupMode_ == nullptr && return this->groupName_ == nullptr && return this->lastMenderId_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListStandardGroupsResponseBodyStandardGroupList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListStandardGroupsResponseBodyStandardGroupList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListStandardGroupsResponseBodyStandardGroupList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupMode Field Functions 
    bool hasGroupMode() const { return this->groupMode_ != nullptr;};
    void deleteGroupMode() { this->groupMode_ = nullptr;};
    inline string groupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
    inline ListStandardGroupsResponseBodyStandardGroupList& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListStandardGroupsResponseBodyStandardGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lastMenderId Field Functions 
    bool hasLastMenderId() const { return this->lastMenderId_ != nullptr;};
    void deleteLastMenderId() { this->lastMenderId_ = nullptr;};
    inline int64_t lastMenderId() const { DARABONBA_PTR_GET_DEFAULT(lastMenderId_, 0L) };
    inline ListStandardGroupsResponseBodyStandardGroupList& setLastMenderId(int64_t lastMenderId) { DARABONBA_PTR_SET_VALUE(lastMenderId_, lastMenderId) };


  protected:
    // The type of the database engine. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The description of the security rule set.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the security rule set.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The control mode. Valid values:
    // 
    // *   **NONE_CONTROL**: Flexible Management
    // *   **STABLE**: Stable Change
    // *   **COMMON**: Security Collaboration
    std::shared_ptr<string> groupMode_ = nullptr;
    // The name of the security rule set.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the user who queries the security sets.
    std::shared_ptr<int64_t> lastMenderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
