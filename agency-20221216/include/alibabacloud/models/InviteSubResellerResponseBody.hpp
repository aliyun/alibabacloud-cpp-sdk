// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBRESELLERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBRESELLERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubResellerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubResellerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubResellerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InviteSubResellerResponseBody() = default ;
    InviteSubResellerResponseBody(const InviteSubResellerResponseBody &) = default ;
    InviteSubResellerResponseBody(InviteSubResellerResponseBody &&) = default ;
    InviteSubResellerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubResellerResponseBody() = default ;
    InviteSubResellerResponseBody& operator=(const InviteSubResellerResponseBody &) = default ;
    InviteSubResellerResponseBody& operator=(InviteSubResellerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Days, days_);
          DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
          DARABONBA_PTR_TO_JSON(RegUrl, regUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Days, days_);
          DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
          DARABONBA_PTR_FROM_JSON(RegUrl, regUrl_);
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
        virtual bool empty() const override { return this->days_ == nullptr
        && this->inviteId_ == nullptr && this->regUrl_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
        inline Result& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


        // inviteId Field Functions 
        bool hasInviteId() const { return this->inviteId_ != nullptr;};
        void deleteInviteId() { this->inviteId_ = nullptr;};
        inline int64_t getInviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
        inline Result& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


        // regUrl Field Functions 
        bool hasRegUrl() const { return this->regUrl_ != nullptr;};
        void deleteRegUrl() { this->regUrl_ = nullptr;};
        inline string getRegUrl() const { DARABONBA_PTR_GET_DEFAULT(regUrl_, "") };
        inline Result& setRegUrl(string regUrl) { DARABONBA_PTR_SET_VALUE(regUrl_, regUrl) };


      protected:
        // Validity period of the registration URL, in days
        shared_ptr<int32_t> days_ {};
        // Invitation ID, used for querying the invitation status
        shared_ptr<int64_t> inviteId_ {};
        // T2 Reseller registration URL
        shared_ptr<string> regUrl_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
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


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Results::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Results::Result) };
      inline Results::Result getResult() { DARABONBA_PTR_GET(result_, Results::Result) };
      inline Results& setResult(const Results::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Results& setResult(Results::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // Error code, 200 OK
      shared_ptr<string> code_ {};
      // Prompt message, explanation of the code
      shared_ptr<string> message_ {};
      // Returned invitation result information
      shared_ptr<Results::Result> result_ {};
      // Always true
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InviteSubResellerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InviteSubResellerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InviteSubResellerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<InviteSubResellerResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<InviteSubResellerResponseBody::Results>) };
    inline vector<InviteSubResellerResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<InviteSubResellerResponseBody::Results>) };
    inline InviteSubResellerResponseBody& setResults(const vector<InviteSubResellerResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline InviteSubResellerResponseBody& setResults(vector<InviteSubResellerResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InviteSubResellerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code.
    shared_ptr<string> code_ {};
    // Message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // 邀请结果信息
    shared_ptr<vector<InviteSubResellerResponseBody::Results>> results_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
