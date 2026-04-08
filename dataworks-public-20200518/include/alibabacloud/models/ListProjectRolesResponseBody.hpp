// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectRoleList, projectRoleList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectRoleList, projectRoleList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectRolesResponseBody() = default ;
    ListProjectRolesResponseBody(const ListProjectRolesResponseBody &) = default ;
    ListProjectRolesResponseBody(ListProjectRolesResponseBody &&) = default ;
    ListProjectRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesResponseBody() = default ;
    ListProjectRolesResponseBody& operator=(const ListProjectRolesResponseBody &) = default ;
    ListProjectRolesResponseBody& operator=(ListProjectRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectRoleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectRoleList& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectRoleCode, projectRoleCode_);
        DARABONBA_PTR_TO_JSON(ProjectRoleId, projectRoleId_);
        DARABONBA_PTR_TO_JSON(ProjectRoleName, projectRoleName_);
        DARABONBA_PTR_TO_JSON(ProjectRoleType, projectRoleType_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectRoleList& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectRoleCode, projectRoleCode_);
        DARABONBA_PTR_FROM_JSON(ProjectRoleId, projectRoleId_);
        DARABONBA_PTR_FROM_JSON(ProjectRoleName, projectRoleName_);
        DARABONBA_PTR_FROM_JSON(ProjectRoleType, projectRoleType_);
      };
      ProjectRoleList() = default ;
      ProjectRoleList(const ProjectRoleList &) = default ;
      ProjectRoleList(ProjectRoleList &&) = default ;
      ProjectRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectRoleList() = default ;
      ProjectRoleList& operator=(const ProjectRoleList &) = default ;
      ProjectRoleList& operator=(ProjectRoleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectRoleCode_ == nullptr
        && this->projectRoleId_ == nullptr && this->projectRoleName_ == nullptr && this->projectRoleType_ == nullptr; };
      // projectRoleCode Field Functions 
      bool hasProjectRoleCode() const { return this->projectRoleCode_ != nullptr;};
      void deleteProjectRoleCode() { this->projectRoleCode_ = nullptr;};
      inline string getProjectRoleCode() const { DARABONBA_PTR_GET_DEFAULT(projectRoleCode_, "") };
      inline ProjectRoleList& setProjectRoleCode(string projectRoleCode) { DARABONBA_PTR_SET_VALUE(projectRoleCode_, projectRoleCode) };


      // projectRoleId Field Functions 
      bool hasProjectRoleId() const { return this->projectRoleId_ != nullptr;};
      void deleteProjectRoleId() { this->projectRoleId_ = nullptr;};
      inline int32_t getProjectRoleId() const { DARABONBA_PTR_GET_DEFAULT(projectRoleId_, 0) };
      inline ProjectRoleList& setProjectRoleId(int32_t projectRoleId) { DARABONBA_PTR_SET_VALUE(projectRoleId_, projectRoleId) };


      // projectRoleName Field Functions 
      bool hasProjectRoleName() const { return this->projectRoleName_ != nullptr;};
      void deleteProjectRoleName() { this->projectRoleName_ = nullptr;};
      inline string getProjectRoleName() const { DARABONBA_PTR_GET_DEFAULT(projectRoleName_, "") };
      inline ProjectRoleList& setProjectRoleName(string projectRoleName) { DARABONBA_PTR_SET_VALUE(projectRoleName_, projectRoleName) };


      // projectRoleType Field Functions 
      bool hasProjectRoleType() const { return this->projectRoleType_ != nullptr;};
      void deleteProjectRoleType() { this->projectRoleType_ = nullptr;};
      inline string getProjectRoleType() const { DARABONBA_PTR_GET_DEFAULT(projectRoleType_, "") };
      inline ProjectRoleList& setProjectRoleType(string projectRoleType) { DARABONBA_PTR_SET_VALUE(projectRoleType_, projectRoleType) };


    protected:
      // The code of the role in the DataWorks workspace.
      shared_ptr<string> projectRoleCode_ {};
      // The ID of the role in the DataWorks workspace.
      shared_ptr<int32_t> projectRoleId_ {};
      // The name of the role in the DataWorks workspace.
      shared_ptr<string> projectRoleName_ {};
      // The type of the role in the DataWorks workspace.
      shared_ptr<string> projectRoleType_ {};
    };

    virtual bool empty() const override { return this->projectRoleList_ == nullptr
        && this->requestId_ == nullptr; };
    // projectRoleList Field Functions 
    bool hasProjectRoleList() const { return this->projectRoleList_ != nullptr;};
    void deleteProjectRoleList() { this->projectRoleList_ = nullptr;};
    inline const vector<ListProjectRolesResponseBody::ProjectRoleList> & getProjectRoleList() const { DARABONBA_PTR_GET_CONST(projectRoleList_, vector<ListProjectRolesResponseBody::ProjectRoleList>) };
    inline vector<ListProjectRolesResponseBody::ProjectRoleList> getProjectRoleList() { DARABONBA_PTR_GET(projectRoleList_, vector<ListProjectRolesResponseBody::ProjectRoleList>) };
    inline ListProjectRolesResponseBody& setProjectRoleList(const vector<ListProjectRolesResponseBody::ProjectRoleList> & projectRoleList) { DARABONBA_PTR_SET_VALUE(projectRoleList_, projectRoleList) };
    inline ListProjectRolesResponseBody& setProjectRoleList(vector<ListProjectRolesResponseBody::ProjectRoleList> && projectRoleList) { DARABONBA_PTR_SET_RVALUE(projectRoleList_, projectRoleList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The roles in the DataWorks workspace.
    shared_ptr<vector<ListProjectRolesResponseBody::ProjectRoleList>> projectRoleList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
