// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERTOUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERTOUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserToUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserToUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserToUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddFaceUserToUserGroupRequest() = default ;
    AddFaceUserToUserGroupRequest(const AddFaceUserToUserGroupRequest &) = default ;
    AddFaceUserToUserGroupRequest(AddFaceUserToUserGroupRequest &&) = default ;
    AddFaceUserToUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserToUserGroupRequest() = default ;
    AddFaceUserToUserGroupRequest& operator=(const AddFaceUserToUserGroupRequest &) = default ;
    AddFaceUserToUserGroupRequest& operator=(AddFaceUserToUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->userGroupId_ == nullptr && this->userId_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline AddFaceUserToUserGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddFaceUserToUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddFaceUserToUserGroupRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The business isolation ID. It is used to isolate data between different business applications under the same Alibaba Cloud account.
    // 
    // >Notice: 
    // The user and the user group must be under the same isolation ID. Make sure that this parameter is consistent with the **IsolationId** parameter that you specified when you called the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add the user and the [AddFaceUserGroup](https://help.aliyun.com/document_detail/288341.html) operation to create the user group.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The user group ID. Set this parameter to the user group ID that you obtained and saved locally after you called the [AddFaceUserGroup](https://help.aliyun.com/document_detail/288341.html) operation to create the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
    // The user ID. Set this parameter to the user ID that you obtained and saved locally after you called the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add the user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
