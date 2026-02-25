// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QuerySmarttagJobResponseBody() = default ;
    QuerySmarttagJobResponseBody(const QuerySmarttagJobResponseBody &) = default ;
    QuerySmarttagJobResponseBody(QuerySmarttagJobResponseBody &&) = default ;
    QuerySmarttagJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBody() = default ;
    QuerySmarttagJobResponseBody& operator=(const QuerySmarttagJobResponseBody &) = default ;
    QuerySmarttagJobResponseBody& operator=(QuerySmarttagJobResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->data_ == nullptr
        && this->type_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
        inline Result& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> data_ {};
        shared_ptr<string> type_ {};
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

    virtual bool empty() const override { return this->jobStatus_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->userData_ == nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline QuerySmarttagJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmarttagJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmarttagJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const QuerySmarttagJobResponseBody::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, QuerySmarttagJobResponseBody::Results) };
    inline QuerySmarttagJobResponseBody::Results getResults() { DARABONBA_PTR_GET(results_, QuerySmarttagJobResponseBody::Results) };
    inline QuerySmarttagJobResponseBody& setResults(const QuerySmarttagJobResponseBody::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline QuerySmarttagJobResponseBody& setResults(QuerySmarttagJobResponseBody::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QuerySmarttagJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> jobStatus_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<QuerySmarttagJobResponseBody::Results> results_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
