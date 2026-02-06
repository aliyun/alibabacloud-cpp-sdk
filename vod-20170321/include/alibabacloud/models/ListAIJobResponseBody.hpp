// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAIJobIds, nonExistAIJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIJobResponseBody() = default ;
    ListAIJobResponseBody(const ListAIJobResponseBody &) = default ;
    ListAIJobResponseBody(ListAIJobResponseBody &&) = default ;
    ListAIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIJobResponseBody() = default ;
    ListAIJobResponseBody& operator=(const ListAIJobResponseBody &) = default ;
    ListAIJobResponseBody& operator=(ListAIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistAIJobIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistAIJobIds& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistAIJobIds& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistAIJobIds() = default ;
      NonExistAIJobIds(const NonExistAIJobIds &) = default ;
      NonExistAIJobIds(NonExistAIJobIds &&) = default ;
      NonExistAIJobIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistAIJobIds() = default ;
      NonExistAIJobIds& operator=(const NonExistAIJobIds &) = default ;
      NonExistAIJobIds& operator=(NonExistAIJobIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistAIJobIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistAIJobIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    class AIJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIJobList& obj) { 
        DARABONBA_PTR_TO_JSON(AIJob, AIJob_);
      };
      friend void from_json(const Darabonba::Json& j, AIJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AIJob, AIJob_);
      };
      AIJobList() = default ;
      AIJobList(const AIJobList &) = default ;
      AIJobList(AIJobList &&) = default ;
      AIJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIJobList() = default ;
      AIJobList& operator=(const AIJobList &) = default ;
      AIJobList& operator=(AIJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AIJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AIJob& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AIJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AIJob() = default ;
        AIJob(const AIJob &) = default ;
        AIJob(AIJob &&) = default ;
        AIJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AIJob() = default ;
        AIJob& operator=(const AIJob &) = default ;
        AIJob& operator=(AIJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->completeTime_ == nullptr && this->creationTime_ == nullptr && this->data_ == nullptr && this->jobId_ == nullptr && this->mediaId_ == nullptr
        && this->message_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AIJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
        inline AIJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AIJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
        inline AIJob& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline AIJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline AIJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AIJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AIJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AIJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The error code. This parameter is returned if the value of Status is fail.
        shared_ptr<string> code_ {};
        // The time when the job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> completeTime_ {};
        // The time when the job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The returned data. The value is a JSON string. For more information, see [AITemplateConfig](https://help.aliyun.com/document_detail/89863.html).
        shared_ptr<string> data_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The ID of the video file.
        shared_ptr<string> mediaId_ {};
        // The error message. This parameter is returned if the value of Status is fail.
        shared_ptr<string> message_ {};
        // The status of the job. Valid values:
        // 
        // *   **success**: The job is successful.
        // *   **fail**: The job failed.
        // *   **init**: The job is being initialized.
        // *   **Processing**: The job is in progress.
        shared_ptr<string> status_ {};
        // The type of the job. Valid values:
        // 
        // *   **AIMediaDNA**: video fingerprinting
        // *   **AIVideoTag**: smart tagging
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->AIJob_ == nullptr; };
      // AIJob Field Functions 
      bool hasAIJob() const { return this->AIJob_ != nullptr;};
      void deleteAIJob() { this->AIJob_ = nullptr;};
      inline const vector<AIJobList::AIJob> & getAIJob() const { DARABONBA_PTR_GET_CONST(AIJob_, vector<AIJobList::AIJob>) };
      inline vector<AIJobList::AIJob> getAIJob() { DARABONBA_PTR_GET(AIJob_, vector<AIJobList::AIJob>) };
      inline AIJobList& setAIJob(const vector<AIJobList::AIJob> & aIJob) { DARABONBA_PTR_SET_VALUE(AIJob_, aIJob) };
      inline AIJobList& setAIJob(vector<AIJobList::AIJob> && aIJob) { DARABONBA_PTR_SET_RVALUE(AIJob_, aIJob) };


    protected:
      shared_ptr<vector<AIJobList::AIJob>> AIJob_ {};
    };

    virtual bool empty() const override { return this->AIJobList_ == nullptr
        && this->nonExistAIJobIds_ == nullptr && this->requestId_ == nullptr; };
    // AIJobList Field Functions 
    bool hasAIJobList() const { return this->AIJobList_ != nullptr;};
    void deleteAIJobList() { this->AIJobList_ = nullptr;};
    inline const ListAIJobResponseBody::AIJobList & getAIJobList() const { DARABONBA_PTR_GET_CONST(AIJobList_, ListAIJobResponseBody::AIJobList) };
    inline ListAIJobResponseBody::AIJobList getAIJobList() { DARABONBA_PTR_GET(AIJobList_, ListAIJobResponseBody::AIJobList) };
    inline ListAIJobResponseBody& setAIJobList(const ListAIJobResponseBody::AIJobList & aIJobList) { DARABONBA_PTR_SET_VALUE(AIJobList_, aIJobList) };
    inline ListAIJobResponseBody& setAIJobList(ListAIJobResponseBody::AIJobList && aIJobList) { DARABONBA_PTR_SET_RVALUE(AIJobList_, aIJobList) };


    // nonExistAIJobIds Field Functions 
    bool hasNonExistAIJobIds() const { return this->nonExistAIJobIds_ != nullptr;};
    void deleteNonExistAIJobIds() { this->nonExistAIJobIds_ = nullptr;};
    inline const ListAIJobResponseBody::NonExistAIJobIds & getNonExistAIJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAIJobIds_, ListAIJobResponseBody::NonExistAIJobIds) };
    inline ListAIJobResponseBody::NonExistAIJobIds getNonExistAIJobIds() { DARABONBA_PTR_GET(nonExistAIJobIds_, ListAIJobResponseBody::NonExistAIJobIds) };
    inline ListAIJobResponseBody& setNonExistAIJobIds(const ListAIJobResponseBody::NonExistAIJobIds & nonExistAIJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAIJobIds_, nonExistAIJobIds) };
    inline ListAIJobResponseBody& setNonExistAIJobIds(ListAIJobResponseBody::NonExistAIJobIds && nonExistAIJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAIJobIds_, nonExistAIJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of jobs.
    shared_ptr<ListAIJobResponseBody::AIJobList> AIJobList_ {};
    // The IDs of the jobs that do not exist.
    shared_ptr<ListAIJobResponseBody::NonExistAIJobIds> nonExistAIJobIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
