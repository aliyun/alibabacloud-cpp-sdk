// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(NewComments, newComments_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_TO_JSON(NewGroupName, newGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(NewComments, newComments_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_FROM_JSON(NewGroupName, newGroupName_);
    };
    UpdateGroupRequest() = default ;
    UpdateGroupRequest(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest(UpdateGroupRequest &&) = default ;
    UpdateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupRequest() = default ;
    UpdateGroupRequest& operator=(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest& operator=(UpdateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->newComments_ == nullptr && this->newDisplayName_ == nullptr && this->newGroupName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // newComments Field Functions 
    bool hasNewComments() const { return this->newComments_ != nullptr;};
    void deleteNewComments() { this->newComments_ = nullptr;};
    inline string getNewComments() const { DARABONBA_PTR_GET_DEFAULT(newComments_, "") };
    inline UpdateGroupRequest& setNewComments(string newComments) { DARABONBA_PTR_SET_VALUE(newComments_, newComments) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string getNewDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateGroupRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


    // newGroupName Field Functions 
    bool hasNewGroupName() const { return this->newGroupName_ != nullptr;};
    void deleteNewGroupName() { this->newGroupName_ = nullptr;};
    inline string getNewGroupName() const { DARABONBA_PTR_GET_DEFAULT(newGroupName_, "") };
    inline UpdateGroupRequest& setNewGroupName(string newGroupName) { DARABONBA_PTR_SET_VALUE(newGroupName_, newGroupName) };


  protected:
    // The name of the RAM user group.
    shared_ptr<string> groupName_ {};
    // The new description.
    // 
    // The description can be up to 128 characters in length.
    shared_ptr<string> newComments_ {};
    // The new display name of the RAM user group.
    // 
    // The name can be up to 24 characters in length.
    shared_ptr<string> newDisplayName_ {};
    // The new name of the RAM user group.
    // 
    // The name can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> newGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
