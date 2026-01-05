// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody(GetProjectRoleResponseBody &&) = default ;
    GetProjectRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody& operator=(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody& operator=(GetProjectRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectRole : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectRole& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectRole& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ProjectRole() = default ;
      ProjectRole(const ProjectRole &) = default ;
      ProjectRole(ProjectRole &&) = default ;
      ProjectRole(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectRole() = default ;
      ProjectRole& operator=(const ProjectRole &) = default ;
      ProjectRole& operator=(ProjectRole &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ProjectRole& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProjectRole& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ProjectRole& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProjectRole& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The code of the role in the DataWorks workspace.
      shared_ptr<string> code_ {};
      // The name of the role in the DataWorks workspace.
      shared_ptr<string> name_ {};
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The type of the role in the DataWorks workspace. Valid values:
      // 
      // *   UserCustom: user-defined role
      // *   System: system role
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->projectRole_ == nullptr
        && this->requestId_ == nullptr; };
    // projectRole Field Functions 
    bool hasProjectRole() const { return this->projectRole_ != nullptr;};
    void deleteProjectRole() { this->projectRole_ = nullptr;};
    inline const GetProjectRoleResponseBody::ProjectRole & getProjectRole() const { DARABONBA_PTR_GET_CONST(projectRole_, GetProjectRoleResponseBody::ProjectRole) };
    inline GetProjectRoleResponseBody::ProjectRole getProjectRole() { DARABONBA_PTR_GET(projectRole_, GetProjectRoleResponseBody::ProjectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(const GetProjectRoleResponseBody::ProjectRole & projectRole) { DARABONBA_PTR_SET_VALUE(projectRole_, projectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(GetProjectRoleResponseBody::ProjectRole && projectRole) { DARABONBA_PTR_SET_RVALUE(projectRole_, projectRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The role in the DataWorks workspace.
    shared_ptr<GetProjectRoleResponseBody::ProjectRole> projectRole_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
