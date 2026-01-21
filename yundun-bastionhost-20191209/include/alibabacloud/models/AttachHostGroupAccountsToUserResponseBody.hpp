// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERRESPONSEBODY_HPP_
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
  class AttachHostGroupAccountsToUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostGroupAccountsToUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostGroupAccountsToUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    AttachHostGroupAccountsToUserResponseBody() = default ;
    AttachHostGroupAccountsToUserResponseBody(const AttachHostGroupAccountsToUserResponseBody &) = default ;
    AttachHostGroupAccountsToUserResponseBody(AttachHostGroupAccountsToUserResponseBody &&) = default ;
    AttachHostGroupAccountsToUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostGroupAccountsToUserResponseBody() = default ;
    AttachHostGroupAccountsToUserResponseBody& operator=(const AttachHostGroupAccountsToUserResponseBody &) = default ;
    AttachHostGroupAccountsToUserResponseBody& operator=(AttachHostGroupAccountsToUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
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
      class HostAccountNames : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostAccountNames& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, HostAccountNames& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        HostAccountNames() = default ;
        HostAccountNames(const HostAccountNames &) = default ;
        HostAccountNames(HostAccountNames &&) = default ;
        HostAccountNames(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostAccountNames() = default ;
        HostAccountNames& operator=(const HostAccountNames &) = default ;
        HostAccountNames& operator=(HostAccountNames &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->hostAccountName_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline HostAccountNames& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // hostAccountName Field Functions 
        bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
        void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
        inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
        inline HostAccountNames& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline HostAccountNames& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The return code that indicates whether the user was authorized to manage the host account. Valid values:
        // 
        // *   **OK**: The call was successful.
        // *   **UNEXPECTED**: An unknown error occurred.
        // *   **INVALID_ARGUMENT**: A request parameter is invalid.
        // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
        // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
        shared_ptr<string> code_ {};
        // The name of the host account.
        shared_ptr<string> hostAccountName_ {};
        // This parameter is deprecated.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->hostAccountNames_ == nullptr && this->hostGroupId_ == nullptr && this->message_ == nullptr && this->userId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // hostAccountNames Field Functions 
      bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
      void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
      inline const vector<Results::HostAccountNames> & getHostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<Results::HostAccountNames>) };
      inline vector<Results::HostAccountNames> getHostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<Results::HostAccountNames>) };
      inline Results& setHostAccountNames(const vector<Results::HostAccountNames> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
      inline Results& setHostAccountNames(vector<Results::HostAccountNames> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline Results& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


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
      // The result of authorizing the user to manage the host accounts.
      shared_ptr<vector<Results::HostAccountNames>> hostAccountNames_ {};
      // The ID of the host group.
      shared_ptr<string> hostGroupId_ {};
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
    inline AttachHostGroupAccountsToUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<AttachHostGroupAccountsToUserResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<AttachHostGroupAccountsToUserResponseBody::Results>) };
    inline vector<AttachHostGroupAccountsToUserResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<AttachHostGroupAccountsToUserResponseBody::Results>) };
    inline AttachHostGroupAccountsToUserResponseBody& setResults(const vector<AttachHostGroupAccountsToUserResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AttachHostGroupAccountsToUserResponseBody& setResults(vector<AttachHostGroupAccountsToUserResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<AttachHostGroupAccountsToUserResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
