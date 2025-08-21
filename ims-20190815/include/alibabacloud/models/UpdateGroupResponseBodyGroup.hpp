// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPRESPONSEBODYGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPRESPONSEBODYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateGroupResponseBodyGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    UpdateGroupResponseBodyGroup() = default ;
    UpdateGroupResponseBodyGroup(const UpdateGroupResponseBodyGroup &) = default ;
    UpdateGroupResponseBodyGroup(UpdateGroupResponseBodyGroup &&) = default ;
    UpdateGroupResponseBodyGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupResponseBodyGroup() = default ;
    UpdateGroupResponseBodyGroup& operator=(const UpdateGroupResponseBodyGroup &) = default ;
    UpdateGroupResponseBodyGroup& operator=(UpdateGroupResponseBodyGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->createDate_ != nullptr && this->displayName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->updateDate_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline UpdateGroupResponseBodyGroup& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline UpdateGroupResponseBodyGroup& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateGroupResponseBodyGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateGroupResponseBodyGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateGroupResponseBodyGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline UpdateGroupResponseBodyGroup& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The description.
    std::shared_ptr<string> comments_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createDate_ = nullptr;
    // The display name of the RAM user group.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the RAM user group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the RAM user group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
