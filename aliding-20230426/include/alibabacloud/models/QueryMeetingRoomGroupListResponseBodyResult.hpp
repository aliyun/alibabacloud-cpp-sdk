// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomGroupListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomGroupListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomGroupListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    QueryMeetingRoomGroupListResponseBodyResult() = default ;
    QueryMeetingRoomGroupListResponseBodyResult(const QueryMeetingRoomGroupListResponseBodyResult &) = default ;
    QueryMeetingRoomGroupListResponseBodyResult(QueryMeetingRoomGroupListResponseBodyResult &&) = default ;
    QueryMeetingRoomGroupListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomGroupListResponseBodyResult() = default ;
    QueryMeetingRoomGroupListResponseBodyResult& operator=(const QueryMeetingRoomGroupListResponseBodyResult &) = default ;
    QueryMeetingRoomGroupListResponseBodyResult& operator=(QueryMeetingRoomGroupListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->parentId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline QueryMeetingRoomGroupListResponseBodyResult& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryMeetingRoomGroupListResponseBodyResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline QueryMeetingRoomGroupListResponseBodyResult& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
