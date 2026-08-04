// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDUSERLISTTOAUTHLOGINWITHPHONENUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class FindUserlistToAuthLoginWithPhoneNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindUserlistToAuthLoginWithPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataObj, dataObj_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FindUserlistToAuthLoginWithPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataObj, dataObj_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FindUserlistToAuthLoginWithPhoneNumberResponseBody() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBody(const FindUserlistToAuthLoginWithPhoneNumberResponseBody &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBody(FindUserlistToAuthLoginWithPhoneNumberResponseBody &&) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindUserlistToAuthLoginWithPhoneNumberResponseBody() = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBody& operator=(const FindUserlistToAuthLoginWithPhoneNumberResponseBody &) = default ;
    FindUserlistToAuthLoginWithPhoneNumberResponseBody& operator=(FindUserlistToAuthLoginWithPhoneNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(UserListToAuthLogin, userListToAuthLogin_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(UserListToAuthLogin, userListToAuthLogin_);
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
      class UserListToAuthLogin : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserListToAuthLogin& obj) { 
          DARABONBA_PTR_TO_JSON(Avatar, avatar_);
          DARABONBA_PTR_TO_JSON(EncryptedUserIdentifier, encryptedUserIdentifier_);
          DARABONBA_PTR_TO_JSON(FindingType, findingType_);
          DARABONBA_PTR_TO_JSON(Nickname, nickname_);
          DARABONBA_PTR_TO_JSON(UserType, userType_);
        };
        friend void from_json(const Darabonba::Json& j, UserListToAuthLogin& obj) { 
          DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
          DARABONBA_PTR_FROM_JSON(EncryptedUserIdentifier, encryptedUserIdentifier_);
          DARABONBA_PTR_FROM_JSON(FindingType, findingType_);
          DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
          DARABONBA_PTR_FROM_JSON(UserType, userType_);
        };
        UserListToAuthLogin() = default ;
        UserListToAuthLogin(const UserListToAuthLogin &) = default ;
        UserListToAuthLogin(UserListToAuthLogin &&) = default ;
        UserListToAuthLogin(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserListToAuthLogin() = default ;
        UserListToAuthLogin& operator=(const UserListToAuthLogin &) = default ;
        UserListToAuthLogin& operator=(UserListToAuthLogin &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatar_ == nullptr
        && this->encryptedUserIdentifier_ == nullptr && this->findingType_ == nullptr && this->nickname_ == nullptr && this->userType_ == nullptr; };
        // avatar Field Functions 
        bool hasAvatar() const { return this->avatar_ != nullptr;};
        void deleteAvatar() { this->avatar_ = nullptr;};
        inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
        inline UserListToAuthLogin& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


        // encryptedUserIdentifier Field Functions 
        bool hasEncryptedUserIdentifier() const { return this->encryptedUserIdentifier_ != nullptr;};
        void deleteEncryptedUserIdentifier() { this->encryptedUserIdentifier_ = nullptr;};
        inline string getEncryptedUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(encryptedUserIdentifier_, "") };
        inline UserListToAuthLogin& setEncryptedUserIdentifier(string encryptedUserIdentifier) { DARABONBA_PTR_SET_VALUE(encryptedUserIdentifier_, encryptedUserIdentifier) };


        // findingType Field Functions 
        bool hasFindingType() const { return this->findingType_ != nullptr;};
        void deleteFindingType() { this->findingType_ = nullptr;};
        inline string getFindingType() const { DARABONBA_PTR_GET_DEFAULT(findingType_, "") };
        inline UserListToAuthLogin& setFindingType(string findingType) { DARABONBA_PTR_SET_VALUE(findingType_, findingType) };


        // nickname Field Functions 
        bool hasNickname() const { return this->nickname_ != nullptr;};
        void deleteNickname() { this->nickname_ = nullptr;};
        inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
        inline UserListToAuthLogin& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
        inline UserListToAuthLogin& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        // Profile picture
        shared_ptr<string> avatar_ {};
        // Encrypted User Identifier
        shared_ptr<string> encryptedUserIdentifier_ {};
        // User Search Type  
        // 
        // For Taobao users, the value is fixed as:  
        // PHONE_NUMBER_BINDING_WITH_TAOBAO: The phoneNumber is queried as the phone number bound to a Taobao account.  
        // 
        // For Tmall Genie users, the value can be:  
        // PHONE_NUMBER_BINDING_WITH_ALIGENIE: The phoneNumber is queried as the phone number bound to a Tmall Genie device;  
        // PHONE_NUMBER_BINDING_WITH_TAOBAO: The phoneNumber is queried as the phone number bound to a Taobao account.
        shared_ptr<string> findingType_ {};
        // Nickname
        shared_ptr<string> nickname_ {};
        // User Type  
        // TAOBAO: Taobao user  
        // ALIGENIE: Tmall Genie user
        shared_ptr<string> userType_ {};
      };

      virtual bool empty() const override { return this->userListToAuthLogin_ == nullptr; };
      // userListToAuthLogin Field Functions 
      bool hasUserListToAuthLogin() const { return this->userListToAuthLogin_ != nullptr;};
      void deleteUserListToAuthLogin() { this->userListToAuthLogin_ = nullptr;};
      inline const vector<Result::UserListToAuthLogin> & getUserListToAuthLogin() const { DARABONBA_PTR_GET_CONST(userListToAuthLogin_, vector<Result::UserListToAuthLogin>) };
      inline vector<Result::UserListToAuthLogin> getUserListToAuthLogin() { DARABONBA_PTR_GET(userListToAuthLogin_, vector<Result::UserListToAuthLogin>) };
      inline Result& setUserListToAuthLogin(const vector<Result::UserListToAuthLogin> & userListToAuthLogin) { DARABONBA_PTR_SET_VALUE(userListToAuthLogin_, userListToAuthLogin) };
      inline Result& setUserListToAuthLogin(vector<Result::UserListToAuthLogin> && userListToAuthLogin) { DARABONBA_PTR_SET_RVALUE(userListToAuthLogin_, userListToAuthLogin) };


    protected:
      // List of accounts eligible for authorization login
      shared_ptr<vector<Result::UserListToAuthLogin>> userListToAuthLogin_ {};
    };

    class DataObj : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataObj& obj) { 
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, DataObj& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      DataObj() = default ;
      DataObj(const DataObj &) = default ;
      DataObj(DataObj &&) = default ;
      DataObj(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataObj() = default ;
      DataObj& operator=(const DataObj &) = default ;
      DataObj& operator=(DataObj &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sessionId_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline DataObj& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // Session ID
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataObj_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataObj Field Functions 
    bool hasDataObj() const { return this->dataObj_ != nullptr;};
    void deleteDataObj() { this->dataObj_ = nullptr;};
    inline const FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj & getDataObj() const { DARABONBA_PTR_GET_CONST(dataObj_, FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj getDataObj() { DARABONBA_PTR_GET(dataObj_, FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setDataObj(const FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj & dataObj) { DARABONBA_PTR_SET_VALUE(dataObj_, dataObj) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setDataObj(FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj && dataObj) { DARABONBA_PTR_SET_RVALUE(dataObj_, dataObj) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setResult(const FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setResult(FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FindUserlistToAuthLoginWithPhoneNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // When the code is 5140003, it indicates that the invocation failed because no account list eligible for authorization login was found for the given phone number. The frontend can prompt the user to confirm generating a Jingle account via the phone number or suggest registering a Taobao account using the phone number first. In subsequent flows, the frontend must return the sessionId from DataObj to the server.
    shared_ptr<FindUserlistToAuthLoginWithPhoneNumberResponseBody::DataObj> dataObj_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response Result
    shared_ptr<FindUserlistToAuthLoginWithPhoneNumberResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
