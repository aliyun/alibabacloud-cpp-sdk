// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODY_HPP_
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
  class ListProjectMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectMembersResponseBody() = default ;
    ListProjectMembersResponseBody(const ListProjectMembersResponseBody &) = default ;
    ListProjectMembersResponseBody(ListProjectMembersResponseBody &&) = default ;
    ListProjectMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBody() = default ;
    ListProjectMembersResponseBody& operator=(const ListProjectMembersResponseBody &) = default ;
    ListProjectMembersResponseBody& operator=(ListProjectMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectMemberList, projectMemberList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectMemberList, projectMemberList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProjectMemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectMemberList& obj) { 
          DARABONBA_PTR_TO_JSON(Nick, nick_);
          DARABONBA_PTR_TO_JSON(ProjectMemberId, projectMemberId_);
          DARABONBA_PTR_TO_JSON(ProjectMemberName, projectMemberName_);
          DARABONBA_PTR_TO_JSON(ProjectMemberType, projectMemberType_);
          DARABONBA_PTR_TO_JSON(ProjectRoleList, projectRoleList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectMemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(Nick, nick_);
          DARABONBA_PTR_FROM_JSON(ProjectMemberId, projectMemberId_);
          DARABONBA_PTR_FROM_JSON(ProjectMemberName, projectMemberName_);
          DARABONBA_PTR_FROM_JSON(ProjectMemberType, projectMemberType_);
          DARABONBA_PTR_FROM_JSON(ProjectRoleList, projectRoleList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ProjectMemberList() = default ;
        ProjectMemberList(const ProjectMemberList &) = default ;
        ProjectMemberList(ProjectMemberList &&) = default ;
        ProjectMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProjectMemberList() = default ;
        ProjectMemberList& operator=(const ProjectMemberList &) = default ;
        ProjectMemberList& operator=(ProjectMemberList &&) = default ;
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
          // The code of the role. DataWorks provides built-in roles and allows you to create custom roles based on your business requirements. For more information about roles, see [Overview of users, roles, and permissions](https://help.aliyun.com/document_detail/295463.html).
          shared_ptr<string> projectRoleCode_ {};
          // The role ID.
          shared_ptr<int32_t> projectRoleId_ {};
          // The name of the role. DataWorks provides built-in roles and allows you to create custom roles based on your business requirements. For more information about roles, see [Overview of users, roles, and permissions](https://help.aliyun.com/document_detail/295463.html).
          shared_ptr<string> projectRoleName_ {};
          // The type of the role. Valid values:
          // 
          // *   0: SYSTEM, which indicates that the role is a built-in role.
          // *   2: USER_CUSTOM, which indicates that the role is a custom role.
          shared_ptr<string> projectRoleType_ {};
        };

        virtual bool empty() const override { return this->nick_ == nullptr
        && this->projectMemberId_ == nullptr && this->projectMemberName_ == nullptr && this->projectMemberType_ == nullptr && this->projectRoleList_ == nullptr && this->status_ == nullptr; };
        // nick Field Functions 
        bool hasNick() const { return this->nick_ != nullptr;};
        void deleteNick() { this->nick_ = nullptr;};
        inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
        inline ProjectMemberList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


        // projectMemberId Field Functions 
        bool hasProjectMemberId() const { return this->projectMemberId_ != nullptr;};
        void deleteProjectMemberId() { this->projectMemberId_ = nullptr;};
        inline string getProjectMemberId() const { DARABONBA_PTR_GET_DEFAULT(projectMemberId_, "") };
        inline ProjectMemberList& setProjectMemberId(string projectMemberId) { DARABONBA_PTR_SET_VALUE(projectMemberId_, projectMemberId) };


        // projectMemberName Field Functions 
        bool hasProjectMemberName() const { return this->projectMemberName_ != nullptr;};
        void deleteProjectMemberName() { this->projectMemberName_ = nullptr;};
        inline string getProjectMemberName() const { DARABONBA_PTR_GET_DEFAULT(projectMemberName_, "") };
        inline ProjectMemberList& setProjectMemberName(string projectMemberName) { DARABONBA_PTR_SET_VALUE(projectMemberName_, projectMemberName) };


        // projectMemberType Field Functions 
        bool hasProjectMemberType() const { return this->projectMemberType_ != nullptr;};
        void deleteProjectMemberType() { this->projectMemberType_ = nullptr;};
        inline string getProjectMemberType() const { DARABONBA_PTR_GET_DEFAULT(projectMemberType_, "") };
        inline ProjectMemberList& setProjectMemberType(string projectMemberType) { DARABONBA_PTR_SET_VALUE(projectMemberType_, projectMemberType) };


        // projectRoleList Field Functions 
        bool hasProjectRoleList() const { return this->projectRoleList_ != nullptr;};
        void deleteProjectRoleList() { this->projectRoleList_ = nullptr;};
        inline const vector<ProjectMemberList::ProjectRoleList> & getProjectRoleList() const { DARABONBA_PTR_GET_CONST(projectRoleList_, vector<ProjectMemberList::ProjectRoleList>) };
        inline vector<ProjectMemberList::ProjectRoleList> getProjectRoleList() { DARABONBA_PTR_GET(projectRoleList_, vector<ProjectMemberList::ProjectRoleList>) };
        inline ProjectMemberList& setProjectRoleList(const vector<ProjectMemberList::ProjectRoleList> & projectRoleList) { DARABONBA_PTR_SET_VALUE(projectRoleList_, projectRoleList) };
        inline ProjectMemberList& setProjectRoleList(vector<ProjectMemberList::ProjectRoleList> && projectRoleList) { DARABONBA_PTR_SET_RVALUE(projectRoleList_, projectRoleList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ProjectMemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The nickname of the member.
        shared_ptr<string> nick_ {};
        // The member ID.
        shared_ptr<string> projectMemberId_ {};
        // The name of the member.
        shared_ptr<string> projectMemberName_ {};
        // The type of the member. Valid values:
        // 
        // *   1: USER_ALIYUN, which indicates that the member is an Alibaba Cloud account.
        // *   5: USER_UBACCOUNT, which indicates that the member is a RAM user.
        // *   6: USER_STS_ROLE, which indicates that the member is a RAM role.
        shared_ptr<string> projectMemberType_ {};
        // The roles that are assigned to the member.
        shared_ptr<vector<ProjectMemberList::ProjectRoleList>> projectRoleList_ {};
        // The status of the member. Valid values:
        // 
        // *   0: NORMAL, which indicates that the member is in a normal state.
        // *   1: FORBIDDEN, which indicates that the member is disabled.
        // *   2: DELETED, which indicates that the member is deleted.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectMemberList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectMemberList Field Functions 
      bool hasProjectMemberList() const { return this->projectMemberList_ != nullptr;};
      void deleteProjectMemberList() { this->projectMemberList_ = nullptr;};
      inline const vector<Data::ProjectMemberList> & getProjectMemberList() const { DARABONBA_PTR_GET_CONST(projectMemberList_, vector<Data::ProjectMemberList>) };
      inline vector<Data::ProjectMemberList> getProjectMemberList() { DARABONBA_PTR_GET(projectMemberList_, vector<Data::ProjectMemberList>) };
      inline Data& setProjectMemberList(const vector<Data::ProjectMemberList> & projectMemberList) { DARABONBA_PTR_SET_VALUE(projectMemberList_, projectMemberList) };
      inline Data& setProjectMemberList(vector<Data::ProjectMemberList> && projectMemberList) { DARABONBA_PTR_SET_RVALUE(projectMemberList_, projectMemberList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The information about members in the DataWorks workspace.
      shared_ptr<vector<Data::ProjectMemberList>> projectMemberList_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProjectMembersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListProjectMembersResponseBody::Data) };
    inline ListProjectMembersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListProjectMembersResponseBody::Data) };
    inline ListProjectMembersResponseBody& setData(const ListProjectMembersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProjectMembersResponseBody& setData(ListProjectMembersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<ListProjectMembersResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
