// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODY_HPP_
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
  class DetachHostAccountsFromUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetachHostAccountsFromUserResponseBody() = default ;
    DetachHostAccountsFromUserResponseBody(const DetachHostAccountsFromUserResponseBody &) = default ;
    DetachHostAccountsFromUserResponseBody(DetachHostAccountsFromUserResponseBody &&) = default ;
    DetachHostAccountsFromUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromUserResponseBody() = default ;
    DetachHostAccountsFromUserResponseBody& operator=(const DetachHostAccountsFromUserResponseBody &) = default ;
    DetachHostAccountsFromUserResponseBody& operator=(DetachHostAccountsFromUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
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
      class HostAccounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostAccounts& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, HostAccounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        HostAccounts() = default ;
        HostAccounts(const HostAccounts &) = default ;
        HostAccounts(HostAccounts &&) = default ;
        HostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostAccounts() = default ;
        HostAccounts& operator=(const HostAccounts &) = default ;
        HostAccounts& operator=(HostAccounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->hostAccountId_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline HostAccounts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // hostAccountId Field Functions 
        bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
        void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
        inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
        inline HostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline HostAccounts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The return code that indicates whether permissions on the specified host accounts were revoked from the user. Valid values:
        // 
        // *   **OK**: The call was successful.
        // *   **UNEXPECTED**: An unknown error occurred.
        // *   **INVALID_ARGUMENT**: A request parameter is invalid.
        // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
        // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
        shared_ptr<string> code_ {};
        // The host account ID.
        shared_ptr<string> hostAccountId_ {};
        // This parameter is deprecated.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->hostAccounts_ == nullptr && this->hostId_ == nullptr && this->message_ == nullptr && this->userId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // hostAccounts Field Functions 
      bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
      void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
      inline const vector<Results::HostAccounts> & getHostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<Results::HostAccounts>) };
      inline vector<Results::HostAccounts> getHostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<Results::HostAccounts>) };
      inline Results& setHostAccounts(const vector<Results::HostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
      inline Results& setHostAccounts(vector<Results::HostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Results& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


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
      // The return code that indicates whether the call was successful. Valid values:
      // 
      // *   **OK**: The call was successful.
      // *   **UNEXPECTED**: An unknown error occurred.
      // *   **INVALID_ARGUMENT**: A request parameter is invalid.
      // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
      // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
      shared_ptr<string> code_ {};
      // The result of revoking permissions on the specified host accounts from the user.
      shared_ptr<vector<Results::HostAccounts>> hostAccounts_ {};
      // The host ID.
      shared_ptr<string> hostId_ {};
      // This parameter is deprecated.
      shared_ptr<string> message_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachHostAccountsFromUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DetachHostAccountsFromUserResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DetachHostAccountsFromUserResponseBody::Results>) };
    inline vector<DetachHostAccountsFromUserResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DetachHostAccountsFromUserResponseBody::Results>) };
    inline DetachHostAccountsFromUserResponseBody& setResults(const vector<DetachHostAccountsFromUserResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachHostAccountsFromUserResponseBody& setResults(vector<DetachHostAccountsFromUserResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<DetachHostAccountsFromUserResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
