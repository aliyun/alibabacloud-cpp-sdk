// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectType, projectType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectType, projectType_);
    };
    ListProjectRolesRequest() = default ;
    ListProjectRolesRequest(const ListProjectRolesRequest &) = default ;
    ListProjectRolesRequest(ListProjectRolesRequest &&) = default ;
    ListProjectRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesRequest() = default ;
    ListProjectRolesRequest& operator=(const ListProjectRolesRequest &) = default ;
    ListProjectRolesRequest& operator=(ListProjectRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->projectType_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListProjectRolesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListProjectRolesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectType Field Functions 
    bool hasProjectType() const { return this->projectType_ != nullptr;};
    void deleteProjectType() { this->projectType_ = nullptr;};
    inline string getProjectType() const { DARABONBA_PTR_GET_DEFAULT(projectType_, "") };
    inline ListProjectRolesRequest& setProjectType(string projectType) { DARABONBA_PTR_SET_VALUE(projectType_, projectType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // 项目类型，BASIC-基础模式项目，DEV-开发环境项目，PROD-生产环境项目，TAG-标签平台项目，可选值：BASIC、DEV、PROD、TAG
    // 
    // This parameter is required.
    shared_ptr<string> projectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
