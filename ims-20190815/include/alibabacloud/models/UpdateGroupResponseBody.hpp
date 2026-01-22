// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateGroupResponseBody() = default ;
    UpdateGroupResponseBody(const UpdateGroupResponseBody &) = default ;
    UpdateGroupResponseBody(UpdateGroupResponseBody &&) = default ;
    UpdateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupResponseBody() = default ;
    UpdateGroupResponseBody& operator=(const UpdateGroupResponseBody &) = default ;
    UpdateGroupResponseBody& operator=(UpdateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Group : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Group& obj) { 
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Group& obj) { 
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      Group() = default ;
      Group(const Group &) = default ;
      Group(Group &&) = default ;
      Group(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Group() = default ;
      Group& operator=(const Group &) = default ;
      Group& operator=(Group &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comments_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->updateDate_ == nullptr; };
      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline Group& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Group& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Group& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Group& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Group& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The description.
      shared_ptr<string> comments_ {};
      // The creation time.
      shared_ptr<string> createDate_ {};
      // The display name of the RAM user group.
      shared_ptr<string> displayName_ {};
      // The ID of the RAM user group.
      shared_ptr<string> groupId_ {};
      // The name of the RAM user group.
      shared_ptr<string> groupName_ {};
      // The update time.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->group_ == nullptr
        && this->requestId_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const UpdateGroupResponseBody::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, UpdateGroupResponseBody::Group) };
    inline UpdateGroupResponseBody::Group getGroup() { DARABONBA_PTR_GET(group_, UpdateGroupResponseBody::Group) };
    inline UpdateGroupResponseBody& setGroup(const UpdateGroupResponseBody::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline UpdateGroupResponseBody& setGroup(UpdateGroupResponseBody::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the RAM user group.
    shared_ptr<UpdateGroupResponseBody::Group> group_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
