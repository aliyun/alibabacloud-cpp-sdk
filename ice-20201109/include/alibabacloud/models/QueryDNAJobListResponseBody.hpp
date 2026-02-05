// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODY_HPP_
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
  class QueryDNAJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDNAJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDNAJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDNAJobListResponseBody() = default ;
    QueryDNAJobListResponseBody(const QueryDNAJobListResponseBody &) = default ;
    QueryDNAJobListResponseBody(QueryDNAJobListResponseBody &&) = default ;
    QueryDNAJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDNAJobListResponseBody() = default ;
    QueryDNAJobListResponseBody& operator=(const QueryDNAJobListResponseBody &) = default ;
    QueryDNAJobListResponseBody& operator=(QueryDNAJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DBId, DBId_);
        DARABONBA_PTR_TO_JSON(DNAResult, DNAResult_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DBId, DBId_);
        DARABONBA_PTR_FROM_JSON(DNAResult, DNAResult_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The input file. The file can be an OSS object or a media asset. The path of an OSS object can be in one of the following formats:
        // 
        // 1\\. oss://bucket/object
        // 
        // 2\\. http(s)://bucket.oss-[regionId].aliyuncs.com/object
        // 
        // In the preceding paths, bucket indicates an OSS bucket that resides in the same region as the current project, and object indicates the path of the object in the bucket.
        shared_ptr<string> media_ {};
        // The type of the input file. Valid values:
        // 
        // 1.  OSS: Object Storage Service (OSS) object.
        // 2.  Media: media asset.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->config_ == nullptr && this->creationTime_ == nullptr && this->DBId_ == nullptr && this->DNAResult_ == nullptr && this->finishTime_ == nullptr
        && this->id_ == nullptr && this->input_ == nullptr && this->message_ == nullptr && this->primaryKey_ == nullptr && this->status_ == nullptr
        && this->userData_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline JobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline JobList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline JobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // DBId Field Functions 
      bool hasDBId() const { return this->DBId_ != nullptr;};
      void deleteDBId() { this->DBId_ = nullptr;};
      inline string getDBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
      inline JobList& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


      // DNAResult Field Functions 
      bool hasDNAResult() const { return this->DNAResult_ != nullptr;};
      void deleteDNAResult() { this->DNAResult_ = nullptr;};
      inline string getDNAResult() const { DARABONBA_PTR_GET_DEFAULT(DNAResult_, "") };
      inline JobList& setDNAResult(string DNAResult) { DARABONBA_PTR_SET_VALUE(DNAResult_, DNAResult) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline JobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JobList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const JobList::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, JobList::Input) };
      inline JobList::Input getInput() { DARABONBA_PTR_GET(input_, JobList::Input) };
      inline JobList& setInput(const JobList::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline JobList& setInput(JobList::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline JobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // primaryKey Field Functions 
      bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
      void deletePrimaryKey() { this->primaryKey_ = nullptr;};
      inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
      inline JobList& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline JobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The response code.
      shared_ptr<string> code_ {};
      // The configurations of the media fingerprint analysis job.
      shared_ptr<string> config_ {};
      // The time when the job was created.
      shared_ptr<string> creationTime_ {};
      // The ID of the media fingerprint library.
      shared_ptr<string> DBId_ {};
      // The URL of the media fingerprint analysis result.
      shared_ptr<string> DNAResult_ {};
      // The time when the job was complete.
      shared_ptr<string> finishTime_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The details of the input file.
      shared_ptr<JobList::Input> input_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // The primary key of the video. You must make sure that each primary key is unique.
      shared_ptr<string> primaryKey_ {};
      // The job state. Valid values:
      // 
      // *   **Queuing**: The job is waiting in the queue.
      // *   **Analysing**: The job is in progress.
      // *   **Success**: The job is successful.
      // *   **Fail**: The job failed.
      shared_ptr<string> status_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->requestId_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<QueryDNAJobListResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<QueryDNAJobListResponseBody::JobList>) };
    inline vector<QueryDNAJobListResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<QueryDNAJobListResponseBody::JobList>) };
    inline QueryDNAJobListResponseBody& setJobList(const vector<QueryDNAJobListResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline QueryDNAJobListResponseBody& setJobList(vector<QueryDNAJobListResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDNAJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried media fingerprint analysis jobs.
    shared_ptr<vector<QueryDNAJobListResponseBody::JobList>> jobList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
