// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Usages, usages_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Usages, usages_);
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
    class Usages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usages& obj) { 
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Usages& obj) { 
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Usages() = default ;
      Usages(const Usages &) = default ;
      Usages(Usages &&) = default ;
      Usages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Usages() = default ;
      Usages& operator=(const Usages &) = default ;
      Usages& operator=(Usages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quota_ == nullptr
        && this->type_ == nullptr; };
        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
        inline Usage& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Usage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> quota_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->usage_ == nullptr; };
      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const vector<Usages::Usage> & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, vector<Usages::Usage>) };
      inline vector<Usages::Usage> getUsage() { DARABONBA_PTR_GET(usage_, vector<Usages::Usage>) };
      inline Usages& setUsage(const vector<Usages::Usage> & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Usages& setUsage(vector<Usages::Usage> && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<vector<Usages::Usage>> usage_ {};
    };

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
        // The details of the analysis result. The value is a JSON string. For more information about the parameters of different result types, see the "Parameters of different result types" section of this topic.
        shared_ptr<string> data_ {};
        // The type of the analysis result.
        // 
        // *   The type of the analysis result based on Smart tagging V1.0. Valid values:
        // 
        // 1.  TextLabel: the text tag.
        // 2.  VideoLabel: the video tag.
        // 3.  ASR: the original result of automatic speech recognition (ASR). By default, this type of result is not returned.
        // 4.  OCR: the original result of optical character recognition (OCR). By default, this type of result is not returned.
        // 5.  NLP: the natural language processing (NLP)-based result. By default, this type of result is not returned.
        // 
        // *   The type of the analysis result based on Smart tagging V2.0. Valid values:
        // 
        // 1.  CPVLabel
        // 2.  Meta: the information about the video file, such as the title of the video. By default, this type of information is not returned.
        // 
        // *   The type of the analysis result based on Smart tagging V2.0-custom. Valid values:
        // 
        // 1.  CPVLabel
        // 2.  Meta: the information about the video file, such as the title of the video. By default, this type of information is not returned.
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
        && this->requestId_ == nullptr && this->results_ == nullptr && this->usages_ == nullptr && this->userData_ == nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline QuerySmarttagJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


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


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const QuerySmarttagJobResponseBody::Usages & getUsages() const { DARABONBA_PTR_GET_CONST(usages_, QuerySmarttagJobResponseBody::Usages) };
    inline QuerySmarttagJobResponseBody::Usages getUsages() { DARABONBA_PTR_GET(usages_, QuerySmarttagJobResponseBody::Usages) };
    inline QuerySmarttagJobResponseBody& setUsages(const QuerySmarttagJobResponseBody::Usages & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline QuerySmarttagJobResponseBody& setUsages(QuerySmarttagJobResponseBody::Usages && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QuerySmarttagJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The status of the job. Valid values:
    // 
    // *   **Success**: The job was successful.
    // *   **Fail**: The job failed.
    // *   **Processing**: The job is in progress.
    // *   **Submitted**: The job is submitted and waiting to be processed.
    shared_ptr<string> jobStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The analysis results of the smart tagging job. The value is an array.
    shared_ptr<QuerySmarttagJobResponseBody::Results> results_ {};
    shared_ptr<QuerySmarttagJobResponseBody::Usages> usages_ {};
    // The content of callback messages that are sent to Simple Message Queue (SMQ) when the information of the smart tagging job changes. For more information about the parameters contained in the callback message, see the "Callback parameters" section of this topic.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
