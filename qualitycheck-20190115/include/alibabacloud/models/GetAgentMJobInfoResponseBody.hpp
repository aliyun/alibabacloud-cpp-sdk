// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTMJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTMJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAgentMJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentMJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentMJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgentMJobInfoResponseBody() = default ;
    GetAgentMJobInfoResponseBody(const GetAgentMJobInfoResponseBody &) = default ;
    GetAgentMJobInfoResponseBody(GetAgentMJobInfoResponseBody &&) = default ;
    GetAgentMJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentMJobInfoResponseBody() = default ;
    GetAgentMJobInfoResponseBody& operator=(const GetAgentMJobInfoResponseBody &) = default ;
    GetAgentMJobInfoResponseBody& operator=(GetAgentMJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentMDetailResponse, agentMDetailResponse_);
        DARABONBA_PTR_TO_JSON(DataEndTime, dataEndTime_);
        DARABONBA_PTR_TO_JSON(DataStartTime, dataStartTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentMDetailResponse, agentMDetailResponse_);
        DARABONBA_PTR_FROM_JSON(DataEndTime, dataEndTime_);
        DARABONBA_PTR_FROM_JSON(DataStartTime, dataStartTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
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
      class AgentMDetailResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentMDetailResponse& obj) { 
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(SummaryUrls, summaryUrls_);
        };
        friend void from_json(const Darabonba::Json& j, AgentMDetailResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(SummaryUrls, summaryUrls_);
        };
        AgentMDetailResponse() = default ;
        AgentMDetailResponse(const AgentMDetailResponse &) = default ;
        AgentMDetailResponse(AgentMDetailResponse &&) = default ;
        AgentMDetailResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentMDetailResponse() = default ;
        AgentMDetailResponse& operator=(const AgentMDetailResponse &) = default ;
        AgentMDetailResponse& operator=(AgentMDetailResponse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SummaryUrls : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SummaryUrls& obj) { 
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
            DARABONBA_PTR_TO_JSON(FileType, fileType_);
            DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
          };
          friend void from_json(const Darabonba::Json& j, SummaryUrls& obj) { 
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
            DARABONBA_PTR_FROM_JSON(FileType, fileType_);
            DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
          };
          SummaryUrls() = default ;
          SummaryUrls(const SummaryUrls &) = default ;
          SummaryUrls(SummaryUrls &&) = default ;
          SummaryUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SummaryUrls() = default ;
          SummaryUrls& operator=(const SummaryUrls &) = default ;
          SummaryUrls& operator=(SummaryUrls &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->ossUrl_ == nullptr; };
          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline SummaryUrls& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


          // fileType Field Functions 
          bool hasFileType() const { return this->fileType_ != nullptr;};
          void deleteFileType() { this->fileType_ = nullptr;};
          inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
          inline SummaryUrls& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


          // ossUrl Field Functions 
          bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
          void deleteOssUrl() { this->ossUrl_ = nullptr;};
          inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
          inline SummaryUrls& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


        protected:
          // The file name.
          shared_ptr<string> fileName_ {};
          // The file type.
          shared_ptr<string> fileType_ {};
          // The file URL.
          shared_ptr<string> ossUrl_ {};
        };

        virtual bool empty() const override { return this->summary_ == nullptr
        && this->summaryUrls_ == nullptr; };
        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline AgentMDetailResponse& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // summaryUrls Field Functions 
        bool hasSummaryUrls() const { return this->summaryUrls_ != nullptr;};
        void deleteSummaryUrls() { this->summaryUrls_ = nullptr;};
        inline const vector<AgentMDetailResponse::SummaryUrls> & getSummaryUrls() const { DARABONBA_PTR_GET_CONST(summaryUrls_, vector<AgentMDetailResponse::SummaryUrls>) };
        inline vector<AgentMDetailResponse::SummaryUrls> getSummaryUrls() { DARABONBA_PTR_GET(summaryUrls_, vector<AgentMDetailResponse::SummaryUrls>) };
        inline AgentMDetailResponse& setSummaryUrls(const vector<AgentMDetailResponse::SummaryUrls> & summaryUrls) { DARABONBA_PTR_SET_VALUE(summaryUrls_, summaryUrls) };
        inline AgentMDetailResponse& setSummaryUrls(vector<AgentMDetailResponse::SummaryUrls> && summaryUrls) { DARABONBA_PTR_SET_RVALUE(summaryUrls_, summaryUrls) };


      protected:
        // The execution summary.
        shared_ptr<string> summary_ {};
        // The list of result files. Each item contains complete file fields.
        shared_ptr<vector<AgentMDetailResponse::SummaryUrls>> summaryUrls_ {};
      };

      virtual bool empty() const override { return this->agentMDetailResponse_ == nullptr
        && this->dataEndTime_ == nullptr && this->dataStartTime_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->status_ == nullptr
        && this->taskEndTime_ == nullptr && this->taskId_ == nullptr && this->taskStartTime_ == nullptr; };
      // agentMDetailResponse Field Functions 
      bool hasAgentMDetailResponse() const { return this->agentMDetailResponse_ != nullptr;};
      void deleteAgentMDetailResponse() { this->agentMDetailResponse_ = nullptr;};
      inline const Data::AgentMDetailResponse & getAgentMDetailResponse() const { DARABONBA_PTR_GET_CONST(agentMDetailResponse_, Data::AgentMDetailResponse) };
      inline Data::AgentMDetailResponse getAgentMDetailResponse() { DARABONBA_PTR_GET(agentMDetailResponse_, Data::AgentMDetailResponse) };
      inline Data& setAgentMDetailResponse(const Data::AgentMDetailResponse & agentMDetailResponse) { DARABONBA_PTR_SET_VALUE(agentMDetailResponse_, agentMDetailResponse) };
      inline Data& setAgentMDetailResponse(Data::AgentMDetailResponse && agentMDetailResponse) { DARABONBA_PTR_SET_RVALUE(agentMDetailResponse_, agentMDetailResponse) };


      // dataEndTime Field Functions 
      bool hasDataEndTime() const { return this->dataEndTime_ != nullptr;};
      void deleteDataEndTime() { this->dataEndTime_ = nullptr;};
      inline string getDataEndTime() const { DARABONBA_PTR_GET_DEFAULT(dataEndTime_, "") };
      inline Data& setDataEndTime(string dataEndTime) { DARABONBA_PTR_SET_VALUE(dataEndTime_, dataEndTime) };


      // dataStartTime Field Functions 
      bool hasDataStartTime() const { return this->dataStartTime_ != nullptr;};
      void deleteDataStartTime() { this->dataStartTime_ = nullptr;};
      inline string getDataStartTime() const { DARABONBA_PTR_GET_DEFAULT(dataStartTime_, "") };
      inline Data& setDataStartTime(string dataStartTime) { DARABONBA_PTR_SET_VALUE(dataStartTime_, dataStartTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline string getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, "") };
      inline Data& setTaskEndTime(string taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStartTime Field Functions 
      bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
      void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
      inline string getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
      inline Data& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    protected:
      // The details of the task processing result.
      shared_ptr<Data::AgentMDetailResponse> agentMDetailResponse_ {};
      // The end time of the scan range.
      shared_ptr<string> dataEndTime_ {};
      // The start time of the scan range.
      shared_ptr<string> dataStartTime_ {};
      // The task ID.
      shared_ptr<int64_t> id_ {};
      // The error message returned when an error occurs.
      shared_ptr<string> message_ {};
      // The task status. Valid values:
      // - queing: queuing.
      // - readyAnalysis: pending analysis.
      // - running: running.
      // - error: failed.
      // - finish: completed.
      // - fileUploadUser: user-specified file upload completed.
      // - fileUploadSystem: system-generated file upload completed.
      // - expired: expired.
      shared_ptr<string> status_ {};
      // The actual end time of the task.
      shared_ptr<string> taskEndTime_ {};
      // The scheduled task ID.
      shared_ptr<string> taskId_ {};
      // The actual start time of the task.
      shared_ptr<string> taskStartTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentMJobInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentMJobInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentMJobInfoResponseBody::Data) };
    inline GetAgentMJobInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentMJobInfoResponseBody::Data) };
    inline GetAgentMJobInfoResponseBody& setData(const GetAgentMJobInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentMJobInfoResponseBody& setData(GetAgentMJobInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentMJobInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentMJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentMJobInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. A value of **200** indicates success. Any other value indicates failure. You can use this field to determine the cause of the failure.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetAgentMJobInfoResponseBody::Data> data_ {};
    // The error message returned when an error occurs.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true: The request was successful.
    // - false/null: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
