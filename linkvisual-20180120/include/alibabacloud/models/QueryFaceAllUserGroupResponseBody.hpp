// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEALLUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEALLUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceAllUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceAllUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceAllUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFaceAllUserGroupResponseBody() = default ;
    QueryFaceAllUserGroupResponseBody(const QueryFaceAllUserGroupResponseBody &) = default ;
    QueryFaceAllUserGroupResponseBody(QueryFaceAllUserGroupResponseBody &&) = default ;
    QueryFaceAllUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceAllUserGroupResponseBody() = default ;
    QueryFaceAllUserGroupResponseBody& operator=(const QueryFaceAllUserGroupResponseBody &) = default ;
    QueryFaceAllUserGroupResponseBody& operator=(QueryFaceAllUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(UserGroupList, userGroupList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(UserGroupList, userGroupList_);
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
      class UserGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
        };
        UserGroupList() = default ;
        UserGroupList(const UserGroupList &) = default ;
        UserGroupList(UserGroupList &&) = default ;
        UserGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroupList() = default ;
        UserGroupList& operator=(const UserGroupList &) = default ;
        UserGroupList& operator=(UserGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modifiedTime_ == nullptr
        && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline UserGroupList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline UserGroupList& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


        // userGroupName Field Functions 
        bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
        void deleteUserGroupName() { this->userGroupName_ = nullptr;};
        inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
        inline UserGroupList& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      protected:
        // The last modified time.
        shared_ptr<string> modifiedTime_ {};
        // The user group ID.
        shared_ptr<string> userGroupId_ {};
        // The user group name.
        shared_ptr<string> userGroupName_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr && this->userGroupList_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // userGroupList Field Functions 
      bool hasUserGroupList() const { return this->userGroupList_ != nullptr;};
      void deleteUserGroupList() { this->userGroupList_ = nullptr;};
      inline const vector<Data::UserGroupList> & getUserGroupList() const { DARABONBA_PTR_GET_CONST(userGroupList_, vector<Data::UserGroupList>) };
      inline vector<Data::UserGroupList> getUserGroupList() { DARABONBA_PTR_GET(userGroupList_, vector<Data::UserGroupList>) };
      inline Data& setUserGroupList(const vector<Data::UserGroupList> & userGroupList) { DARABONBA_PTR_SET_VALUE(userGroupList_, userGroupList) };
      inline Data& setUserGroupList(vector<Data::UserGroupList> && userGroupList) { DARABONBA_PTR_SET_RVALUE(userGroupList_, userGroupList) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNo_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of user groups.
      shared_ptr<int32_t> total_ {};
      // The list of user group information.
      shared_ptr<vector<Data::UserGroupList>> userGroupList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceAllUserGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFaceAllUserGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFaceAllUserGroupResponseBody::Data) };
    inline QueryFaceAllUserGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFaceAllUserGroupResponseBody::Data) };
    inline QueryFaceAllUserGroupResponseBody& setData(const QueryFaceAllUserGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFaceAllUserGroupResponseBody& setData(QueryFaceAllUserGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryFaceAllUserGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceAllUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFaceAllUserGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<QueryFaceAllUserGroupResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
