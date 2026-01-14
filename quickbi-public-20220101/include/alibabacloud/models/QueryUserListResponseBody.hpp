// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserListResponseBody() = default ;
    QueryUserListResponseBody(const QueryUserListResponseBody &) = default ;
    QueryUserListResponseBody(QueryUserListResponseBody &&) = default ;
    QueryUserListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserListResponseBody() = default ;
    QueryUserListResponseBody& operator=(const QueryUserListResponseBody &) = default ;
    QueryUserListResponseBody& operator=(QueryUserListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AdminUser, adminUser_);
          DARABONBA_PTR_TO_JSON(AuthAdminUser, authAdminUser_);
          DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_TO_JSON(JoinedDate, joinedDate_);
          DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserType, userType_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AdminUser, adminUser_);
          DARABONBA_PTR_FROM_JSON(AuthAdminUser, authAdminUser_);
          DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_FROM_JSON(JoinedDate, joinedDate_);
          DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserType, userType_);
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
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->adminUser_ == nullptr && this->authAdminUser_ == nullptr && this->isDeleted_ == nullptr && this->joinedDate_ == nullptr
        && this->lastLoginTime_ == nullptr && this->nickName_ == nullptr && this->roleIdList_ == nullptr && this->userId_ == nullptr && this->userType_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // adminUser Field Functions 
        bool hasAdminUser() const { return this->adminUser_ != nullptr;};
        void deleteAdminUser() { this->adminUser_ = nullptr;};
        inline bool getAdminUser() const { DARABONBA_PTR_GET_DEFAULT(adminUser_, false) };
        inline Data& setAdminUser(bool adminUser) { DARABONBA_PTR_SET_VALUE(adminUser_, adminUser) };


        // authAdminUser Field Functions 
        bool hasAuthAdminUser() const { return this->authAdminUser_ != nullptr;};
        void deleteAuthAdminUser() { this->authAdminUser_ = nullptr;};
        inline bool getAuthAdminUser() const { DARABONBA_PTR_GET_DEFAULT(authAdminUser_, false) };
        inline Data& setAuthAdminUser(bool authAdminUser) { DARABONBA_PTR_SET_VALUE(authAdminUser_, authAdminUser) };


        // isDeleted Field Functions 
        bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
        void deleteIsDeleted() { this->isDeleted_ = nullptr;};
        inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
        inline Data& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


        // joinedDate Field Functions 
        bool hasJoinedDate() const { return this->joinedDate_ != nullptr;};
        void deleteJoinedDate() { this->joinedDate_ = nullptr;};
        inline int64_t getJoinedDate() const { DARABONBA_PTR_GET_DEFAULT(joinedDate_, 0L) };
        inline Data& setJoinedDate(int64_t joinedDate) { DARABONBA_PTR_SET_VALUE(joinedDate_, joinedDate) };


        // lastLoginTime Field Functions 
        bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
        void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
        inline int64_t getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, 0L) };
        inline Data& setLastLoginTime(int64_t lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Data& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // roleIdList Field Functions 
        bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
        void deleteRoleIdList() { this->roleIdList_ = nullptr;};
        inline const vector<int64_t> & getRoleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<int64_t>) };
        inline vector<int64_t> getRoleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<int64_t>) };
        inline Data& setRoleIdList(const vector<int64_t> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
        inline Data& setRoleIdList(vector<int64_t> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline Data& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> accountId_ {};
        // The name of the Alibaba Cloud account that corresponds to the member.
        shared_ptr<string> accountName_ {};
        // Indicates whether the organization administrator. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> adminUser_ {};
        // Indicate whether the RAM user is a permission administrator. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> authAdminUser_ {};
        // User status: 
        // - Active - false 
        // - Inactive - true
        shared_ptr<bool> isDeleted_ {};
        // Join Date
        shared_ptr<int64_t> joinedDate_ {};
        // Last login time.
        shared_ptr<int64_t> lastLoginTime_ {};
        // The nickname of the organization member.
        shared_ptr<string> nickName_ {};
        // List of organization role IDs bound to the user.
        shared_ptr<vector<int64_t>> roleIdList_ {};
        // The UserID in the Quick BI.
        shared_ptr<string> userId_ {};
        // The role type of the organization member. Valid values:
        // 
        // *   1 : developer
        // *   2 : visitors
        // *   3 : Analyst
        shared_ptr<int32_t> userType_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Returns the list of requested users.
      shared_ptr<vector<Result::Data>> data_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of rows per page set when the interface is requested.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of rows in the table.
      shared_ptr<int32_t> totalNum_ {};
      // The total number of pages returned.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryUserListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryUserListResponseBody::Result) };
    inline QueryUserListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryUserListResponseBody::Result) };
    inline QueryUserListResponseBody& setResult(const QueryUserListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserListResponseBody& setResult(QueryUserListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The pagination result of the user list is returned. The detailed information list of organization members is stored in the response parameter Data.
    shared_ptr<QueryUserListResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
