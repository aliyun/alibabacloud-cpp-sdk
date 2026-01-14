// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONWORKSPACELISTRESPONSEBODY_HPP_
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
  class QueryOrganizationWorkspaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationWorkspaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationWorkspaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryOrganizationWorkspaceListResponseBody() = default ;
    QueryOrganizationWorkspaceListResponseBody(const QueryOrganizationWorkspaceListResponseBody &) = default ;
    QueryOrganizationWorkspaceListResponseBody(QueryOrganizationWorkspaceListResponseBody &&) = default ;
    QueryOrganizationWorkspaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationWorkspaceListResponseBody() = default ;
    QueryOrganizationWorkspaceListResponseBody& operator=(const QueryOrganizationWorkspaceListResponseBody &) = default ;
    QueryOrganizationWorkspaceListResponseBody& operator=(QueryOrganizationWorkspaceListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AllowPublishOperation, allowPublishOperation_);
          DARABONBA_PTR_TO_JSON(AllowShareOperation, allowShareOperation_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(CreateUserAccountName, createUserAccountName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(ModifyUserAccountName, modifyUserAccountName_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerAccountName, ownerAccountName_);
          DARABONBA_PTR_TO_JSON(RealOwnerAccountName, realOwnerAccountName_);
          DARABONBA_PTR_TO_JSON(WorkspaceDescription, workspaceDescription_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowPublishOperation, allowPublishOperation_);
          DARABONBA_PTR_FROM_JSON(AllowShareOperation, allowShareOperation_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(CreateUserAccountName, createUserAccountName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(ModifyUserAccountName, modifyUserAccountName_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerAccountName, ownerAccountName_);
          DARABONBA_PTR_FROM_JSON(RealOwnerAccountName, realOwnerAccountName_);
          DARABONBA_PTR_FROM_JSON(WorkspaceDescription, workspaceDescription_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
        virtual bool empty() const override { return this->allowPublishOperation_ == nullptr
        && this->allowShareOperation_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->createUserAccountName_ == nullptr && this->modifiedTime_ == nullptr
        && this->modifyUser_ == nullptr && this->modifyUserAccountName_ == nullptr && this->organizationId_ == nullptr && this->owner_ == nullptr && this->ownerAccountName_ == nullptr
        && this->realOwnerAccountName_ == nullptr && this->workspaceDescription_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
        // allowPublishOperation Field Functions 
        bool hasAllowPublishOperation() const { return this->allowPublishOperation_ != nullptr;};
        void deleteAllowPublishOperation() { this->allowPublishOperation_ = nullptr;};
        inline bool getAllowPublishOperation() const { DARABONBA_PTR_GET_DEFAULT(allowPublishOperation_, false) };
        inline Data& setAllowPublishOperation(bool allowPublishOperation) { DARABONBA_PTR_SET_VALUE(allowPublishOperation_, allowPublishOperation) };


        // allowShareOperation Field Functions 
        bool hasAllowShareOperation() const { return this->allowShareOperation_ != nullptr;};
        void deleteAllowShareOperation() { this->allowShareOperation_ = nullptr;};
        inline bool getAllowShareOperation() const { DARABONBA_PTR_GET_DEFAULT(allowShareOperation_, false) };
        inline Data& setAllowShareOperation(bool allowShareOperation) { DARABONBA_PTR_SET_VALUE(allowShareOperation_, allowShareOperation) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // createUserAccountName Field Functions 
        bool hasCreateUserAccountName() const { return this->createUserAccountName_ != nullptr;};
        void deleteCreateUserAccountName() { this->createUserAccountName_ = nullptr;};
        inline string getCreateUserAccountName() const { DARABONBA_PTR_GET_DEFAULT(createUserAccountName_, "") };
        inline Data& setCreateUserAccountName(string createUserAccountName) { DARABONBA_PTR_SET_VALUE(createUserAccountName_, createUserAccountName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline Data& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // modifyUserAccountName Field Functions 
        bool hasModifyUserAccountName() const { return this->modifyUserAccountName_ != nullptr;};
        void deleteModifyUserAccountName() { this->modifyUserAccountName_ = nullptr;};
        inline string getModifyUserAccountName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserAccountName_, "") };
        inline Data& setModifyUserAccountName(string modifyUserAccountName) { DARABONBA_PTR_SET_VALUE(modifyUserAccountName_, modifyUserAccountName) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline Data& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerAccountName Field Functions 
        bool hasOwnerAccountName() const { return this->ownerAccountName_ != nullptr;};
        void deleteOwnerAccountName() { this->ownerAccountName_ = nullptr;};
        inline string getOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountName_, "") };
        inline Data& setOwnerAccountName(string ownerAccountName) { DARABONBA_PTR_SET_VALUE(ownerAccountName_, ownerAccountName) };


        // realOwnerAccountName Field Functions 
        bool hasRealOwnerAccountName() const { return this->realOwnerAccountName_ != nullptr;};
        void deleteRealOwnerAccountName() { this->realOwnerAccountName_ = nullptr;};
        inline string getRealOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(realOwnerAccountName_, "") };
        inline Data& setRealOwnerAccountName(string realOwnerAccountName) { DARABONBA_PTR_SET_VALUE(realOwnerAccountName_, realOwnerAccountName) };


        // workspaceDescription Field Functions 
        bool hasWorkspaceDescription() const { return this->workspaceDescription_ != nullptr;};
        void deleteWorkspaceDescription() { this->workspaceDescription_ = nullptr;};
        inline string getWorkspaceDescription() const { DARABONBA_PTR_GET_DEFAULT(workspaceDescription_, "") };
        inline Data& setWorkspaceDescription(string workspaceDescription) { DARABONBA_PTR_SET_VALUE(workspaceDescription_, workspaceDescription) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // Whether the work can be made public. Value range:
        // 
        // - true: Public
        // - false: Not public
        shared_ptr<bool> allowPublishOperation_ {};
        // Indicates whether the work can be authorized for sharing. Possible values:
        // 
        // - true: Authorized
        // - false: Not authorized
        shared_ptr<bool> allowShareOperation_ {};
        // Creation time of the workspace.
        shared_ptr<string> createTime_ {};
        // Quick BI user ID of the creator.
        shared_ptr<string> createUser_ {};
        // Aliyun account name of the creator.
        shared_ptr<string> createUserAccountName_ {};
        // Last modified time of the workspace.
        shared_ptr<string> modifiedTime_ {};
        // ID of the Quick BI user who modified the workspace.
        shared_ptr<string> modifyUser_ {};
        // Aliyun account name of the modifier.
        shared_ptr<string> modifyUserAccountName_ {};
        // ID of the organization to which the workspace belongs.
        shared_ptr<string> organizationId_ {};
        // Quick BI user ID of the workspace owner.
        shared_ptr<string> owner_ {};
        // Aliyun account name of the workspace owner.
        shared_ptr<string> ownerAccountName_ {};
        shared_ptr<string> realOwnerAccountName_ {};
        // Workspace description.
        shared_ptr<string> workspaceDescription_ {};
        // Workspace ID.
        shared_ptr<string> workspaceId_ {};
        // Name of the workspace.
        shared_ptr<string> workspaceName_ {};
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
      // List of workspaces.
      shared_ptr<vector<Result::Data>> data_ {};
      // Page number.
      shared_ptr<int32_t> pageNum_ {};
      // Number of rows per page as set in the request.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of rows.
      shared_ptr<int32_t> totalNum_ {};
      // Total number of pages.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrganizationWorkspaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryOrganizationWorkspaceListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryOrganizationWorkspaceListResponseBody::Result) };
    inline QueryOrganizationWorkspaceListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryOrganizationWorkspaceListResponseBody::Result) };
    inline QueryOrganizationWorkspaceListResponseBody& setResult(const QueryOrganizationWorkspaceListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryOrganizationWorkspaceListResponseBody& setResult(QueryOrganizationWorkspaceListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryOrganizationWorkspaceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returns the paginated result of the workspace list, with detailed information about the workspaces stored in the Data parameter.
    shared_ptr<QueryOrganizationWorkspaceListResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
