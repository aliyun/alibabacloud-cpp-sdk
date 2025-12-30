// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODY_HPP_
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
  class QueryTraceAbJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceAbJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceAbJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryTraceAbJobListResponseBody() = default ;
    QueryTraceAbJobListResponseBody(const QueryTraceAbJobListResponseBody &) = default ;
    QueryTraceAbJobListResponseBody(QueryTraceAbJobListResponseBody &&) = default ;
    QueryTraceAbJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceAbJobListResponseBody() = default ;
    QueryTraceAbJobListResponseBody& operator=(const QueryTraceAbJobListResponseBody &) = default ;
    QueryTraceAbJobListResponseBody& operator=(QueryTraceAbJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TraceMediaId, traceMediaId_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TraceMediaId, traceMediaId_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The output directory.
        shared_ptr<string> media_ {};
        // The type of the output file. Valid values:
        // 
        // 1.  OSS: an OSS object.
        // 2.  Media: a media asset.
        shared_ptr<string> type_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The specific input file information.
        shared_ptr<string> media_ {};
        // The type of the input file. Valid values:
        // 
        // 1.  OSS: an Object Storage Service (OSS) object.
        // 2.  Media: a media asset.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->level_ == nullptr && this->output_ == nullptr
        && this->result_ == nullptr && this->status_ == nullptr && this->traceMediaId_ == nullptr && this->userData_ == nullptr && this->userId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Data::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Data::Input) };
      inline Data::Input getInput() { DARABONBA_PTR_GET(input_, Data::Input) };
      inline Data& setInput(const Data::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Data& setInput(Data::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline Data& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Data::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Data::Output) };
      inline Data::Output getOutput() { DARABONBA_PTR_GET(output_, Data::Output) };
      inline Data& setOutput(const Data::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Data& setOutput(Data::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Data& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // traceMediaId Field Functions 
      bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
      void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
      inline string getTraceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
      inline Data& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Data& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The creation time of the job.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time of the job.
      shared_ptr<int64_t> gmtModified_ {};
      // Information about the input video for watermarking.
      shared_ptr<Data::Input> input_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The watermark level.
      shared_ptr<int64_t> level_ {};
      // Information about the output path for the A/B stream.
      shared_ptr<Data::Output> output_ {};
      // The job result.
      shared_ptr<string> result_ {};
      // The status of the job.
      shared_ptr<string> status_ {};
      // The media ID for the trace watermark.
      shared_ptr<string> traceMediaId_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
      // The ID of the user who initiated the job.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->statusCode_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryTraceAbJobListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryTraceAbJobListResponseBody::Data>) };
    inline vector<QueryTraceAbJobListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryTraceAbJobListResponseBody::Data>) };
    inline QueryTraceAbJobListResponseBody& setData(const vector<QueryTraceAbJobListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTraceAbJobListResponseBody& setData(vector<QueryTraceAbJobListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTraceAbJobListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTraceAbJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
    inline QueryTraceAbJobListResponseBody& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // The data returned.
    shared_ptr<vector<QueryTraceAbJobListResponseBody::Data>> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status code.
    shared_ptr<int64_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
