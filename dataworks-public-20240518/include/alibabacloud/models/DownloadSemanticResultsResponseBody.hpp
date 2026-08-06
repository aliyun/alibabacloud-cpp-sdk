// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSEMANTICRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSEMANTICRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DownloadSemanticResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSemanticResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSemanticResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DownloadSemanticResultsResponseBody() = default ;
    DownloadSemanticResultsResponseBody(const DownloadSemanticResultsResponseBody &) = default ;
    DownloadSemanticResultsResponseBody(DownloadSemanticResultsResponseBody &&) = default ;
    DownloadSemanticResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSemanticResultsResponseBody() = default ;
    DownloadSemanticResultsResponseBody& operator=(const DownloadSemanticResultsResponseBody &) = default ;
    DownloadSemanticResultsResponseBody& operator=(DownloadSemanticResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Results, results_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(JobRunId, jobRunId_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(JobRunId, jobRunId_);
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
        virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->jobName_ == nullptr && this->jobRunId_ == nullptr; };
        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Results& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Results& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // jobRunId Field Functions 
        bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
        void deleteJobRunId() { this->jobRunId_ = nullptr;};
        inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
        inline Results& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


      protected:
        // The temporary pre-signed download URL of the result file. Download the file promptly by using an HTTP GET request. Do not log, share, or treat the full URL as a long-term address.
        shared_ptr<string> downloadUrl_ {};
        // The job name to which the artifact belongs. This value is the same as the JobName in the request.
        shared_ptr<string> jobName_ {};
        // The run ID to which the artifact belongs. You can compare this value with Data.JobRunId in the RunSemanticJob response or JobRunId in the ListSemanticJobRuns response.
        shared_ptr<string> jobRunId_ {};
      };

      virtual bool empty() const override { return this->results_ == nullptr; };
      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // The list of result files. Each item contains the associated job name, run ID, and a short-lived download URL.
      shared_ptr<vector<Data::Results>> results_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DownloadSemanticResultsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DownloadSemanticResultsResponseBody::Data) };
    inline DownloadSemanticResultsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DownloadSemanticResultsResponseBody::Data) };
    inline DownloadSemanticResultsResponseBody& setData(const DownloadSemanticResultsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DownloadSemanticResultsResponseBody& setData(DownloadSemanticResultsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadSemanticResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DownloadSemanticResultsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The collection of result files for the specified job run. Multiple items are returned if a single run generates multiple files.
    shared_ptr<DownloadSemanticResultsResponseBody::Data> data_ {};
    // The request ID. You can use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
