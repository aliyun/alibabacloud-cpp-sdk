// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ModifyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NewGroupName, newGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NewGroupName, newGroupName_);
    };
    ModifyGroupRequest() = default ;
    ModifyGroupRequest(const ModifyGroupRequest &) = default ;
    ModifyGroupRequest(ModifyGroupRequest &&) = default ;
    ModifyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyGroupRequest() = default ;
    ModifyGroupRequest& operator=(const ModifyGroupRequest &) = default ;
    ModifyGroupRequest& operator=(ModifyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->newGroupName_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline ModifyGroupRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // newGroupName Field Functions 
    bool hasNewGroupName() const { return this->newGroupName_ != nullptr;};
    void deleteNewGroupName() { this->newGroupName_ = nullptr;};
    inline string getNewGroupName() const { DARABONBA_PTR_GET_DEFAULT(newGroupName_, "") };
    inline ModifyGroupRequest& setNewGroupName(string newGroupName) { DARABONBA_PTR_SET_VALUE(newGroupName_, newGroupName) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The new description of the user group.
    shared_ptr<string> description_ {};
    // The ID of the user group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The name of the new user group.
    // 
    // This parameter is required.
    shared_ptr<string> newGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
