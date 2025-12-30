// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyApiPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyApiPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyApiPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceMyApiPermissionsResponseBody() = default ;
    ListDataServiceMyApiPermissionsResponseBody(const ListDataServiceMyApiPermissionsResponseBody &) = default ;
    ListDataServiceMyApiPermissionsResponseBody(ListDataServiceMyApiPermissionsResponseBody &&) = default ;
    ListDataServiceMyApiPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyApiPermissionsResponseBody() = default ;
    ListDataServiceMyApiPermissionsResponseBody& operator=(const ListDataServiceMyApiPermissionsResponseBody &) = default ;
    ListDataServiceMyApiPermissionsResponseBody& operator=(ListDataServiceMyApiPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(PermissionList, permissionList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(PermissionList, permissionList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PermissionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PermissionList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_TO_JSON(PrivilegeBelongTo, privilegeBelongTo_);
          DARABONBA_PTR_TO_JSON(PrivilegeFrom, privilegeFrom_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, PermissionList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_FROM_JSON(PrivilegeBelongTo, privilegeBelongTo_);
          DARABONBA_PTR_FROM_JSON(PrivilegeFrom, privilegeFrom_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        PermissionList() = default ;
        PermissionList(const PermissionList &) = default ;
        PermissionList(PermissionList &&) = default ;
        PermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PermissionList() = default ;
        PermissionList& operator=(const PermissionList &) = default ;
        PermissionList& operator=(PermissionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->createUserName_ == nullptr && this->creator_ == nullptr && this->owner_ == nullptr && this->ownerUserName_ == nullptr
        && this->privilegeBelongTo_ == nullptr && this->privilegeFrom_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->role_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline PermissionList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline PermissionList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // createUserName Field Functions 
        bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
        void deleteCreateUserName() { this->createUserName_ = nullptr;};
        inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
        inline PermissionList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline PermissionList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline PermissionList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerUserName Field Functions 
        bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
        void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
        inline string getOwnerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
        inline PermissionList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


        // privilegeBelongTo Field Functions 
        bool hasPrivilegeBelongTo() const { return this->privilegeBelongTo_ != nullptr;};
        void deletePrivilegeBelongTo() { this->privilegeBelongTo_ = nullptr;};
        inline string getPrivilegeBelongTo() const { DARABONBA_PTR_GET_DEFAULT(privilegeBelongTo_, "") };
        inline PermissionList& setPrivilegeBelongTo(string privilegeBelongTo) { DARABONBA_PTR_SET_VALUE(privilegeBelongTo_, privilegeBelongTo) };


        // privilegeFrom Field Functions 
        bool hasPrivilegeFrom() const { return this->privilegeFrom_ != nullptr;};
        void deletePrivilegeFrom() { this->privilegeFrom_ = nullptr;};
        inline int32_t getPrivilegeFrom() const { DARABONBA_PTR_GET_DEFAULT(privilegeFrom_, 0) };
        inline PermissionList& setPrivilegeFrom(int32_t privilegeFrom) { DARABONBA_PTR_SET_VALUE(privilegeFrom_, privilegeFrom) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline PermissionList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline PermissionList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
        inline PermissionList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<int64_t> apiId_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<string> createUserName_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerUserName_ {};
        shared_ptr<string> privilegeBelongTo_ {};
        shared_ptr<int32_t> privilegeFrom_ {};
        shared_ptr<int32_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<int32_t> role_ {};
      };

      virtual bool empty() const override { return this->permissionList_ == nullptr
        && this->totalCount_ == nullptr; };
      // permissionList Field Functions 
      bool hasPermissionList() const { return this->permissionList_ != nullptr;};
      void deletePermissionList() { this->permissionList_ = nullptr;};
      inline const vector<PageResult::PermissionList> & getPermissionList() const { DARABONBA_PTR_GET_CONST(permissionList_, vector<PageResult::PermissionList>) };
      inline vector<PageResult::PermissionList> getPermissionList() { DARABONBA_PTR_GET(permissionList_, vector<PageResult::PermissionList>) };
      inline PageResult& setPermissionList(const vector<PageResult::PermissionList> & permissionList) { DARABONBA_PTR_SET_VALUE(permissionList_, permissionList) };
      inline PageResult& setPermissionList(vector<PageResult::PermissionList> && permissionList) { DARABONBA_PTR_SET_RVALUE(permissionList_, permissionList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::PermissionList>> permissionList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceMyApiPermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceMyApiPermissionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceMyApiPermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServiceMyApiPermissionsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServiceMyApiPermissionsResponseBody::PageResult) };
    inline ListDataServiceMyApiPermissionsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServiceMyApiPermissionsResponseBody::PageResult) };
    inline ListDataServiceMyApiPermissionsResponseBody& setPageResult(const ListDataServiceMyApiPermissionsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServiceMyApiPermissionsResponseBody& setPageResult(ListDataServiceMyApiPermissionsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceMyApiPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceMyApiPermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServiceMyApiPermissionsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
