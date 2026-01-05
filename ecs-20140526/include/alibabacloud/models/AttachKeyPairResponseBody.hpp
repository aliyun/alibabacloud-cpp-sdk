// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    AttachKeyPairResponseBody() = default ;
    AttachKeyPairResponseBody(const AttachKeyPairResponseBody &) = default ;
    AttachKeyPairResponseBody(AttachKeyPairResponseBody &&) = default ;
    AttachKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKeyPairResponseBody() = default ;
    AttachKeyPairResponseBody& operator=(const AttachKeyPairResponseBody &) = default ;
    AttachKeyPairResponseBody& operator=(AttachKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Result& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
        inline Result& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The operation status code returned. 200 indicates that the operation was successful.
        shared_ptr<string> code_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The operation information returned. When the value of Code is 200, the value of Message is successful.
        shared_ptr<string> message_ {};
        // Indicates whether the request was successful.
        shared_ptr<string> success_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Results::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Results::Result>) };
      inline vector<Results::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Results::Result>) };
      inline Results& setResult(const vector<Results::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Results& setResult(vector<Results::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      shared_ptr<vector<Results::Result>> result_ {};
    };

    virtual bool empty() const override { return this->failCount_ == nullptr
        && this->keyPairName_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->totalCount_ == nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline string getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, "") };
    inline AttachKeyPairResponseBody& setFailCount(string failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline AttachKeyPairResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const AttachKeyPairResponseBody::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, AttachKeyPairResponseBody::Results) };
    inline AttachKeyPairResponseBody::Results getResults() { DARABONBA_PTR_GET(results_, AttachKeyPairResponseBody::Results) };
    inline AttachKeyPairResponseBody& setResults(const AttachKeyPairResponseBody::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AttachKeyPairResponseBody& setResults(AttachKeyPairResponseBody::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline AttachKeyPairResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of instances to which the SSH key pair fails to be bound.
    shared_ptr<string> failCount_ {};
    // The name of the SSH key pair.
    shared_ptr<string> keyPairName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array that contains the results of the operation.
    shared_ptr<AttachKeyPairResponseBody::Results> results_ {};
    // The total number of instances to which the SSH key pair is bound.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
