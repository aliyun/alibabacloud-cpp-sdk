// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetProjectRoleRequest() = default ;
    GetProjectRoleRequest(const GetProjectRoleRequest &) = default ;
    GetProjectRoleRequest(GetProjectRoleRequest &&) = default ;
    GetProjectRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRoleRequest() = default ;
    GetProjectRoleRequest& operator=(const GetProjectRoleRequest &) = default ;
    GetProjectRoleRequest& operator=(GetProjectRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->projectId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProjectRoleRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetProjectRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The code of the role in the DataWorks workspace. Valid values:
    // 
    // *   role_project_admin: workspace administrator
    // *   role_project_dev: developer
    // *   role_project_dg_admin: data governance administrator
    // *   role_project_guest: visitor
    // *   role_project_security: security administrator
    // *   role_project_deploy: deployer
    // *   role_project_owner: workspace owner
    // *   role_project_data_analyst: data analyst
    // *   role_project_pe: O\\&M engineer
    // *   role_project_erd: model designer
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
