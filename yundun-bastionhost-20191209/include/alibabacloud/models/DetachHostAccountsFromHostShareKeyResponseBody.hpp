// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYRESPONSEBODY_HPP_
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
  class DetachHostAccountsFromHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetachHostAccountsFromHostShareKeyResponseBody() = default ;
    DetachHostAccountsFromHostShareKeyResponseBody(const DetachHostAccountsFromHostShareKeyResponseBody &) = default ;
    DetachHostAccountsFromHostShareKeyResponseBody(DetachHostAccountsFromHostShareKeyResponseBody &&) = default ;
    DetachHostAccountsFromHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromHostShareKeyResponseBody() = default ;
    DetachHostAccountsFromHostShareKeyResponseBody& operator=(const DetachHostAccountsFromHostShareKeyResponseBody &) = default ;
    DetachHostAccountsFromHostShareKeyResponseBody& operator=(DetachHostAccountsFromHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
        DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
        && this->hostAccountId_ == nullptr && this->hostShareKeyId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // hostAccountId Field Functions 
      bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
      void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
      inline string getHostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
      inline Results& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


      // hostShareKeyId Field Functions 
      bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
      void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
      inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
      inline Results& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The error code returned. If **OK** is returned, the disassociation was successful. If a different error code is returned, the disassociation failed.
      shared_ptr<string> code_ {};
      // The ID of the host account.
      shared_ptr<string> hostAccountId_ {};
      // The ID of the shared key.
      shared_ptr<string> hostShareKeyId_ {};
      // The error message returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachHostAccountsFromHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DetachHostAccountsFromHostShareKeyResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DetachHostAccountsFromHostShareKeyResponseBody::Results>) };
    inline vector<DetachHostAccountsFromHostShareKeyResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DetachHostAccountsFromHostShareKeyResponseBody::Results>) };
    inline DetachHostAccountsFromHostShareKeyResponseBody& setResults(const vector<DetachHostAccountsFromHostShareKeyResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachHostAccountsFromHostShareKeyResponseBody& setResults(vector<DetachHostAccountsFromHostShareKeyResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<DetachHostAccountsFromHostShareKeyResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
