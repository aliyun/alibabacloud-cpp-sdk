// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class DeleteFaceUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DeleteFaceUserGroupRequest() = default ;
    DeleteFaceUserGroupRequest(const DeleteFaceUserGroupRequest &) = default ;
    DeleteFaceUserGroupRequest(DeleteFaceUserGroupRequest &&) = default ;
    DeleteFaceUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceUserGroupRequest() = default ;
    DeleteFaceUserGroupRequest& operator=(const DeleteFaceUserGroupRequest &) = default ;
    DeleteFaceUserGroupRequest& operator=(DeleteFaceUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->userGroupId_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline DeleteFaceUserGroupRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DeleteFaceUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The business isolation ID, which is used to isolate data between different business applications under the same Alibaba Cloud account. This value must be the same as the **IsolationId** specified when you call the [AddFaceUserGroup](https://help.aliyun.com/document_detail/288341.html) operation to add a user.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The ID of the user group. Specify the user group ID that you obtained and saved locally after calling the [AddFaceUserGroup](https://help.aliyun.com/document_detail/288341.html) operation to add the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
