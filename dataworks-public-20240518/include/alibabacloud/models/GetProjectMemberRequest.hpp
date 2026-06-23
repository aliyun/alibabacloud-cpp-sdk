// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetProjectMemberRequest() = default ;
    GetProjectMemberRequest(const GetProjectMemberRequest &) = default ;
    GetProjectMemberRequest(GetProjectMemberRequest &&) = default ;
    GetProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectMemberRequest() = default ;
    GetProjectMemberRequest& operator=(const GetProjectMemberRequest &) = default ;
    GetProjectMemberRequest& operator=(GetProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->userId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetProjectMemberRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetProjectMemberRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the DataWorks Workspace. You can sign in to the [DataWorks Console](https://dataworks.console.aliyun.com/workspace/list) and go to the Workspace Management page to obtain the Workspace ID.
    // 
    // This parameter is used to identify the DataWorks workspace that you want to access.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The ID of the user. To find the ID, sign in to the [DataWorks Console](https://dataworks.console.aliyun.com/product/ms_menu), go to the Management Center, select the target Workspace, and open the Tenant Members and Roles page.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
