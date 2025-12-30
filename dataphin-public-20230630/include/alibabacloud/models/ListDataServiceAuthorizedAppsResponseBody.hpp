// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODY_HPP_
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
  class ListDataServiceAuthorizedAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceAuthorizedAppsResponseBody() = default ;
    ListDataServiceAuthorizedAppsResponseBody(const ListDataServiceAuthorizedAppsResponseBody &) = default ;
    ListDataServiceAuthorizedAppsResponseBody(ListDataServiceAuthorizedAppsResponseBody &&) = default ;
    ListDataServiceAuthorizedAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedAppsResponseBody() = default ;
    ListDataServiceAuthorizedAppsResponseBody& operator=(const ListDataServiceAuthorizedAppsResponseBody &) = default ;
    ListDataServiceAuthorizedAppsResponseBody& operator=(ListDataServiceAuthorizedAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedAppList, authorizedAppList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedAppList, authorizedAppList_);
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
      class AuthorizedAppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedAppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ApplyUserId, applyUserId_);
          DARABONBA_PTR_TO_JSON(ApplyUserName, applyUserName_);
          DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsProjectManager, isProjectManager_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_TO_JSON(PrivilegeAccount, privilegeAccount_);
          DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RealHasOwnerPrivilege, realHasOwnerPrivilege_);
          DARABONBA_PTR_TO_JSON(RealHasPrivilege, realHasPrivilege_);
          DARABONBA_PTR_TO_JSON(RemarkForDebugList, remarkForDebugList_);
          DARABONBA_PTR_TO_JSON(Revocable, revocable_);
          DARABONBA_PTR_TO_JSON(RevocableDetail, revocableDetail_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedAppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ApplyUserId, applyUserId_);
          DARABONBA_PTR_FROM_JSON(ApplyUserName, applyUserName_);
          DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsProjectManager, isProjectManager_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerUserName, ownerUserName_);
          DARABONBA_PTR_FROM_JSON(PrivilegeAccount, privilegeAccount_);
          DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RealHasOwnerPrivilege, realHasOwnerPrivilege_);
          DARABONBA_PTR_FROM_JSON(RealHasPrivilege, realHasPrivilege_);
          DARABONBA_PTR_FROM_JSON(RemarkForDebugList, remarkForDebugList_);
          DARABONBA_PTR_FROM_JSON(Revocable, revocable_);
          DARABONBA_PTR_FROM_JSON(RevocableDetail, revocableDetail_);
        };
        AuthorizedAppList() = default ;
        AuthorizedAppList(const AuthorizedAppList &) = default ;
        AuthorizedAppList(AuthorizedAppList &&) = default ;
        AuthorizedAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedAppList() = default ;
        AuthorizedAppList& operator=(const AuthorizedAppList &) = default ;
        AuthorizedAppList& operator=(AuthorizedAppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RemarkForDebugList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RemarkForDebugList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RemarkForDebugList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RemarkForDebugList() = default ;
          RemarkForDebugList(const RemarkForDebugList &) = default ;
          RemarkForDebugList(RemarkForDebugList &&) = default ;
          RemarkForDebugList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RemarkForDebugList() = default ;
          RemarkForDebugList& operator=(const RemarkForDebugList &) = default ;
          RemarkForDebugList& operator=(RemarkForDebugList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline RemarkForDebugList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RemarkForDebugList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->applyUserId_ == nullptr && this->applyUserName_ == nullptr && this->expireDate_ == nullptr && this->id_ == nullptr
        && this->isProjectManager_ == nullptr && this->owner_ == nullptr && this->ownerUserName_ == nullptr && this->privilegeAccount_ == nullptr && this->privilegeType_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->realHasOwnerPrivilege_ == nullptr && this->realHasPrivilege_ == nullptr && this->remarkForDebugList_ == nullptr
        && this->revocable_ == nullptr && this->revocableDetail_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
        inline AuthorizedAppList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AuthorizedAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // applyUserId Field Functions 
        bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
        void deleteApplyUserId() { this->applyUserId_ = nullptr;};
        inline string getApplyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
        inline AuthorizedAppList& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


        // applyUserName Field Functions 
        bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
        void deleteApplyUserName() { this->applyUserName_ = nullptr;};
        inline string getApplyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
        inline AuthorizedAppList& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


        // expireDate Field Functions 
        bool hasExpireDate() const { return this->expireDate_ != nullptr;};
        void deleteExpireDate() { this->expireDate_ = nullptr;};
        inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
        inline AuthorizedAppList& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline AuthorizedAppList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isProjectManager Field Functions 
        bool hasIsProjectManager() const { return this->isProjectManager_ != nullptr;};
        void deleteIsProjectManager() { this->isProjectManager_ = nullptr;};
        inline bool getIsProjectManager() const { DARABONBA_PTR_GET_DEFAULT(isProjectManager_, false) };
        inline AuthorizedAppList& setIsProjectManager(bool isProjectManager) { DARABONBA_PTR_SET_VALUE(isProjectManager_, isProjectManager) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline AuthorizedAppList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerUserName Field Functions 
        bool hasOwnerUserName() const { return this->ownerUserName_ != nullptr;};
        void deleteOwnerUserName() { this->ownerUserName_ = nullptr;};
        inline string getOwnerUserName() const { DARABONBA_PTR_GET_DEFAULT(ownerUserName_, "") };
        inline AuthorizedAppList& setOwnerUserName(string ownerUserName) { DARABONBA_PTR_SET_VALUE(ownerUserName_, ownerUserName) };


        // privilegeAccount Field Functions 
        bool hasPrivilegeAccount() const { return this->privilegeAccount_ != nullptr;};
        void deletePrivilegeAccount() { this->privilegeAccount_ = nullptr;};
        inline int32_t getPrivilegeAccount() const { DARABONBA_PTR_GET_DEFAULT(privilegeAccount_, 0) };
        inline AuthorizedAppList& setPrivilegeAccount(int32_t privilegeAccount) { DARABONBA_PTR_SET_VALUE(privilegeAccount_, privilegeAccount) };


        // privilegeType Field Functions 
        bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
        void deletePrivilegeType() { this->privilegeType_ = nullptr;};
        inline int32_t getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, 0) };
        inline AuthorizedAppList& setPrivilegeType(int32_t privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline AuthorizedAppList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline AuthorizedAppList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // realHasOwnerPrivilege Field Functions 
        bool hasRealHasOwnerPrivilege() const { return this->realHasOwnerPrivilege_ != nullptr;};
        void deleteRealHasOwnerPrivilege() { this->realHasOwnerPrivilege_ = nullptr;};
        inline bool getRealHasOwnerPrivilege() const { DARABONBA_PTR_GET_DEFAULT(realHasOwnerPrivilege_, false) };
        inline AuthorizedAppList& setRealHasOwnerPrivilege(bool realHasOwnerPrivilege) { DARABONBA_PTR_SET_VALUE(realHasOwnerPrivilege_, realHasOwnerPrivilege) };


        // realHasPrivilege Field Functions 
        bool hasRealHasPrivilege() const { return this->realHasPrivilege_ != nullptr;};
        void deleteRealHasPrivilege() { this->realHasPrivilege_ = nullptr;};
        inline bool getRealHasPrivilege() const { DARABONBA_PTR_GET_DEFAULT(realHasPrivilege_, false) };
        inline AuthorizedAppList& setRealHasPrivilege(bool realHasPrivilege) { DARABONBA_PTR_SET_VALUE(realHasPrivilege_, realHasPrivilege) };


        // remarkForDebugList Field Functions 
        bool hasRemarkForDebugList() const { return this->remarkForDebugList_ != nullptr;};
        void deleteRemarkForDebugList() { this->remarkForDebugList_ = nullptr;};
        inline const vector<AuthorizedAppList::RemarkForDebugList> & getRemarkForDebugList() const { DARABONBA_PTR_GET_CONST(remarkForDebugList_, vector<AuthorizedAppList::RemarkForDebugList>) };
        inline vector<AuthorizedAppList::RemarkForDebugList> getRemarkForDebugList() { DARABONBA_PTR_GET(remarkForDebugList_, vector<AuthorizedAppList::RemarkForDebugList>) };
        inline AuthorizedAppList& setRemarkForDebugList(const vector<AuthorizedAppList::RemarkForDebugList> & remarkForDebugList) { DARABONBA_PTR_SET_VALUE(remarkForDebugList_, remarkForDebugList) };
        inline AuthorizedAppList& setRemarkForDebugList(vector<AuthorizedAppList::RemarkForDebugList> && remarkForDebugList) { DARABONBA_PTR_SET_RVALUE(remarkForDebugList_, remarkForDebugList) };


        // revocable Field Functions 
        bool hasRevocable() const { return this->revocable_ != nullptr;};
        void deleteRevocable() { this->revocable_ = nullptr;};
        inline bool getRevocable() const { DARABONBA_PTR_GET_DEFAULT(revocable_, false) };
        inline AuthorizedAppList& setRevocable(bool revocable) { DARABONBA_PTR_SET_VALUE(revocable_, revocable) };


        // revocableDetail Field Functions 
        bool hasRevocableDetail() const { return this->revocableDetail_ != nullptr;};
        void deleteRevocableDetail() { this->revocableDetail_ = nullptr;};
        inline int32_t getRevocableDetail() const { DARABONBA_PTR_GET_DEFAULT(revocableDetail_, 0) };
        inline AuthorizedAppList& setRevocableDetail(int32_t revocableDetail) { DARABONBA_PTR_SET_VALUE(revocableDetail_, revocableDetail) };


      protected:
        shared_ptr<int32_t> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> applyUserId_ {};
        shared_ptr<string> applyUserName_ {};
        shared_ptr<string> expireDate_ {};
        shared_ptr<int32_t> id_ {};
        shared_ptr<bool> isProjectManager_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> ownerUserName_ {};
        shared_ptr<int32_t> privilegeAccount_ {};
        shared_ptr<int32_t> privilegeType_ {};
        shared_ptr<int32_t> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<bool> realHasOwnerPrivilege_ {};
        shared_ptr<bool> realHasPrivilege_ {};
        shared_ptr<vector<AuthorizedAppList::RemarkForDebugList>> remarkForDebugList_ {};
        shared_ptr<bool> revocable_ {};
        shared_ptr<int32_t> revocableDetail_ {};
      };

      virtual bool empty() const override { return this->authorizedAppList_ == nullptr
        && this->totalCount_ == nullptr; };
      // authorizedAppList Field Functions 
      bool hasAuthorizedAppList() const { return this->authorizedAppList_ != nullptr;};
      void deleteAuthorizedAppList() { this->authorizedAppList_ = nullptr;};
      inline const vector<PageResult::AuthorizedAppList> & getAuthorizedAppList() const { DARABONBA_PTR_GET_CONST(authorizedAppList_, vector<PageResult::AuthorizedAppList>) };
      inline vector<PageResult::AuthorizedAppList> getAuthorizedAppList() { DARABONBA_PTR_GET(authorizedAppList_, vector<PageResult::AuthorizedAppList>) };
      inline PageResult& setAuthorizedAppList(const vector<PageResult::AuthorizedAppList> & authorizedAppList) { DARABONBA_PTR_SET_VALUE(authorizedAppList_, authorizedAppList) };
      inline PageResult& setAuthorizedAppList(vector<PageResult::AuthorizedAppList> && authorizedAppList) { DARABONBA_PTR_SET_RVALUE(authorizedAppList_, authorizedAppList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::AuthorizedAppList>> authorizedAppList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceAuthorizedAppsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceAuthorizedAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServiceAuthorizedAppsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServiceAuthorizedAppsResponseBody::PageResult) };
    inline ListDataServiceAuthorizedAppsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServiceAuthorizedAppsResponseBody::PageResult) };
    inline ListDataServiceAuthorizedAppsResponseBody& setPageResult(const ListDataServiceAuthorizedAppsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServiceAuthorizedAppsResponseBody& setPageResult(ListDataServiceAuthorizedAppsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceAuthorizedAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceAuthorizedAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServiceAuthorizedAppsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
