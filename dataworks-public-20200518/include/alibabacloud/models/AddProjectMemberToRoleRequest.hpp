// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERTOROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERTOROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class AddProjectMemberToRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberToRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberToRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddProjectMemberToRoleRequest() = default ;
    AddProjectMemberToRoleRequest(const AddProjectMemberToRoleRequest &) = default ;
    AddProjectMemberToRoleRequest(AddProjectMemberToRoleRequest &&) = default ;
    AddProjectMemberToRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberToRoleRequest() = default ;
    AddProjectMemberToRoleRequest& operator=(const AddProjectMemberToRoleRequest &) = default ;
    AddProjectMemberToRoleRequest& operator=(AddProjectMemberToRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->projectId_ != nullptr && this->roleCode_ != nullptr && this->userId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddProjectMemberToRoleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AddProjectMemberToRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline AddProjectMemberToRoleRequest& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddProjectMemberToRoleRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. We recommend that you set this parameter to a UUID. This parameter is used to uniquely identify the API operation call.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The DataWorks workspace ID. You can call the [ListProjects](https://help.aliyun.com/document_detail/2780068.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The code of the role that you want to assign to a member of the DataWorks workspace. You can call the [ListProjectRoles](https://help.aliyun.com/document_detail/2780079.html) operation to query the codes of all roles in a DataWorks workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleCode_ = nullptr;
    // The Alibaba Cloud account ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and move the pointer over the profile picture in the upper-right corner to view the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
