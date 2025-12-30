// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODY_HPP_
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
  class GetAccountByRowPermissionIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAccountByRowPermissionIdResponseBody() = default ;
    GetAccountByRowPermissionIdResponseBody(const GetAccountByRowPermissionIdResponseBody &) = default ;
    GetAccountByRowPermissionIdResponseBody(GetAccountByRowPermissionIdResponseBody &&) = default ;
    GetAccountByRowPermissionIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdResponseBody() = default ;
    GetAccountByRowPermissionIdResponseBody& operator=(const GetAccountByRowPermissionIdResponseBody &) = default ;
    GetAccountByRowPermissionIdResponseBody& operator=(GetAccountByRowPermissionIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(UserMappingList, userMappingList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(UserMappingList, userMappingList_);
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
      class UserMappingList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserMappingList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        };
        friend void from_json(const Darabonba::Json& j, UserMappingList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        };
        UserMappingList() = default ;
        UserMappingList(const UserMappingList &) = default ;
        UserMappingList(UserMappingList &&) = default ;
        UserMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserMappingList() = default ;
        UserMappingList& operator=(const UserMappingList &) = default ;
        UserMappingList& operator=(UserMappingList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Accounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
            DARABONBA_PTR_TO_JSON(AccountId, accountId_);
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          };
          friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          };
          Accounts() = default ;
          Accounts(const Accounts &) = default ;
          Accounts(Accounts &&) = default ;
          Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Accounts() = default ;
          Accounts& operator=(const Accounts &) = default ;
          Accounts& operator=(Accounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr; };
          // accountId Field Functions 
          bool hasAccountId() const { return this->accountId_ != nullptr;};
          void deleteAccountId() { this->accountId_ = nullptr;};
          inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
          inline Accounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline Accounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        protected:
          shared_ptr<string> accountId_ {};
          shared_ptr<string> accountName_ {};
        };

        virtual bool empty() const override { return this->accountType_ == nullptr
        && this->accounts_ == nullptr; };
        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline UserMappingList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const vector<UserMappingList::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<UserMappingList::Accounts>) };
        inline vector<UserMappingList::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<UserMappingList::Accounts>) };
        inline UserMappingList& setAccounts(const vector<UserMappingList::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline UserMappingList& setAccounts(vector<UserMappingList::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      protected:
        shared_ptr<string> accountType_ {};
        shared_ptr<vector<UserMappingList::Accounts>> accounts_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->userMappingList_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // userMappingList Field Functions 
      bool hasUserMappingList() const { return this->userMappingList_ != nullptr;};
      void deleteUserMappingList() { this->userMappingList_ = nullptr;};
      inline const vector<Data::UserMappingList> & getUserMappingList() const { DARABONBA_PTR_GET_CONST(userMappingList_, vector<Data::UserMappingList>) };
      inline vector<Data::UserMappingList> getUserMappingList() { DARABONBA_PTR_GET(userMappingList_, vector<Data::UserMappingList>) };
      inline Data& setUserMappingList(const vector<Data::UserMappingList> & userMappingList) { DARABONBA_PTR_SET_VALUE(userMappingList_, userMappingList) };
      inline Data& setUserMappingList(vector<Data::UserMappingList> && userMappingList) { DARABONBA_PTR_SET_RVALUE(userMappingList_, userMappingList) };


    protected:
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Data::UserMappingList>> userMappingList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAccountByRowPermissionIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAccountByRowPermissionIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAccountByRowPermissionIdResponseBody::Data>) };
    inline vector<GetAccountByRowPermissionIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAccountByRowPermissionIdResponseBody::Data>) };
    inline GetAccountByRowPermissionIdResponseBody& setData(const vector<GetAccountByRowPermissionIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAccountByRowPermissionIdResponseBody& setData(vector<GetAccountByRowPermissionIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAccountByRowPermissionIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAccountByRowPermissionIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountByRowPermissionIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAccountByRowPermissionIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetAccountByRowPermissionIdResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
