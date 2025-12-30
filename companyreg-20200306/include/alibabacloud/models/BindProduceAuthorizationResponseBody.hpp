// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class BindProduceAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindProduceAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BindProduceAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BindProduceAuthorizationResponseBody() = default ;
    BindProduceAuthorizationResponseBody(const BindProduceAuthorizationResponseBody &) = default ;
    BindProduceAuthorizationResponseBody(BindProduceAuthorizationResponseBody &&) = default ;
    BindProduceAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindProduceAuthorizationResponseBody() = default ;
    BindProduceAuthorizationResponseBody& operator=(const BindProduceAuthorizationResponseBody &) = default ;
    BindProduceAuthorizationResponseBody& operator=(BindProduceAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizedUserList, authorizedUserList_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizedUserList, authorizedUserList_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class AuthorizedUserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorizedUserList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountValidType, accountValidType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorizedUserList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountValidType, accountValidType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        AuthorizedUserList() = default ;
        AuthorizedUserList(const AuthorizedUserList &) = default ;
        AuthorizedUserList(AuthorizedUserList &&) = default ;
        AuthorizedUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorizedUserList() = default ;
        AuthorizedUserList& operator=(const AuthorizedUserList &) = default ;
        AuthorizedUserList& operator=(AuthorizedUserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountValidType_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
        // accountValidType Field Functions 
        bool hasAccountValidType() const { return this->accountValidType_ != nullptr;};
        void deleteAccountValidType() { this->accountValidType_ = nullptr;};
        inline int32_t getAccountValidType() const { DARABONBA_PTR_GET_DEFAULT(accountValidType_, 0) };
        inline AuthorizedUserList& setAccountValidType(int32_t accountValidType) { DARABONBA_PTR_SET_VALUE(accountValidType_, accountValidType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AuthorizedUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline AuthorizedUserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<int32_t> accountValidType_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->authorizedUserList_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr; };
      // authorizedUserList Field Functions 
      bool hasAuthorizedUserList() const { return this->authorizedUserList_ != nullptr;};
      void deleteAuthorizedUserList() { this->authorizedUserList_ = nullptr;};
      inline const vector<Data::AuthorizedUserList> & getAuthorizedUserList() const { DARABONBA_PTR_GET_CONST(authorizedUserList_, vector<Data::AuthorizedUserList>) };
      inline vector<Data::AuthorizedUserList> getAuthorizedUserList() { DARABONBA_PTR_GET(authorizedUserList_, vector<Data::AuthorizedUserList>) };
      inline Data& setAuthorizedUserList(const vector<Data::AuthorizedUserList> & authorizedUserList) { DARABONBA_PTR_SET_VALUE(authorizedUserList_, authorizedUserList) };
      inline Data& setAuthorizedUserList(vector<Data::AuthorizedUserList> && authorizedUserList) { DARABONBA_PTR_SET_RVALUE(authorizedUserList_, authorizedUserList) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<vector<Data::AuthorizedUserList>> authorizedUserList_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindProduceAuthorizationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindProduceAuthorizationResponseBody::Data) };
    inline BindProduceAuthorizationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindProduceAuthorizationResponseBody::Data) };
    inline BindProduceAuthorizationResponseBody& setData(const BindProduceAuthorizationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindProduceAuthorizationResponseBody& setData(BindProduceAuthorizationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BindProduceAuthorizationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline BindProduceAuthorizationResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindProduceAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<BindProduceAuthorizationResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
