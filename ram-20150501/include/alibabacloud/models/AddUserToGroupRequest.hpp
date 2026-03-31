// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERTOGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERTOGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class AddUserToGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserToGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserToGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    AddUserToGroupRequest() = default ;
    AddUserToGroupRequest(const AddUserToGroupRequest &) = default ;
    AddUserToGroupRequest(AddUserToGroupRequest &&) = default ;
    AddUserToGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserToGroupRequest() = default ;
    AddUserToGroupRequest& operator=(const AddUserToGroupRequest &) = default ;
    AddUserToGroupRequest& operator=(AddUserToGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->userName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddUserToGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddUserToGroupRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the RAM user group.
    shared_ptr<string> groupName_ {};
    // The name of the RAM user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
