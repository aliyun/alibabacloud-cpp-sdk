// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class UnlockUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody(UnlockUsersResponseBody &&) = default ;
    UnlockUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersResponseBody() = default ;
    UnlockUsersResponseBody& operator=(const UnlockUsersResponseBody &) = default ;
    UnlockUsersResponseBody& operator=(UnlockUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->userId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The result of the call. Valid values:
      // 
      // *   **OK**: The call was successful.
      // 
      // *   **UNEXPECTED**: An unknown error occurred.
      // 
      // *   **INVALID_ARGUMENT**: A request parameter is invalid.
      // 
      //     **
      // 
      //     **Note**Make sure that the request parameters are valid and call the operation again.
      // 
      // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
      // 
      //     **
      // 
      //     **Note**Check whether the specified ID of the bastion host exists, whether the specified hosts exist, and whether the specified host IDs are valid. Then, call the operation again.
      // 
      // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
      shared_ptr<string> code_ {};
      // This parameter is deprecated.
      shared_ptr<string> message_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnlockUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<UnlockUsersResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<UnlockUsersResponseBody::Results>) };
    inline vector<UnlockUsersResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<UnlockUsersResponseBody::Results>) };
    inline UnlockUsersResponseBody& setResults(const vector<UnlockUsersResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline UnlockUsersResponseBody& setResults(vector<UnlockUsersResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of information about the result of the call.
    shared_ptr<vector<UnlockUsersResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
