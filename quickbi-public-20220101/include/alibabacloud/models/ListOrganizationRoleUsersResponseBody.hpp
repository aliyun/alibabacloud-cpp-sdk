// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSRESPONSEBODY_HPP_
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
  class ListOrganizationRoleUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRoleUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOrganizationRoleUsersResponseBody() = default ;
    ListOrganizationRoleUsersResponseBody(const ListOrganizationRoleUsersResponseBody &) = default ;
    ListOrganizationRoleUsersResponseBody(ListOrganizationRoleUsersResponseBody &&) = default ;
    ListOrganizationRoleUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRoleUsersResponseBody() = default ;
    ListOrganizationRoleUsersResponseBody& operator=(const ListOrganizationRoleUsersResponseBody &) = default ;
    ListOrganizationRoleUsersResponseBody& operator=(ListOrganizationRoleUsersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        virtual bool empty() const override { return this->nickName_ == nullptr
        && this->userId_ == nullptr; };
        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Data& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // Nickname of the organization member.
        shared_ptr<string> nickName_ {};
        // UserID of the organization member in Quick BI.
        shared_ptr<string> userId_ {};
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
      // User list.
      shared_ptr<vector<Result::Data>> data_ {};
      // Page number.
      shared_ptr<int32_t> pageNum_ {};
      // Number of items per page as set in the request.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
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
    inline ListOrganizationRoleUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListOrganizationRoleUsersResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListOrganizationRoleUsersResponseBody::Result) };
    inline ListOrganizationRoleUsersResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListOrganizationRoleUsersResponseBody::Result) };
    inline ListOrganizationRoleUsersResponseBody& setResult(const ListOrganizationRoleUsersResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListOrganizationRoleUsersResponseBody& setResult(ListOrganizationRoleUsersResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOrganizationRoleUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returns the list of users under the organization role.
    shared_ptr<ListOrganizationRoleUsersResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
