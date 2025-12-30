// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODY_HPP_
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
  class ListLiveRecordJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordJobs, liveRecordJobs_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordJobs, liveRecordJobs_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveRecordJobsResponseBody() = default ;
    ListLiveRecordJobsResponseBody(const ListLiveRecordJobsResponseBody &) = default ;
    ListLiveRecordJobsResponseBody(ListLiveRecordJobsResponseBody &&) = default ;
    ListLiveRecordJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordJobsResponseBody() = default ;
    ListLiveRecordJobsResponseBody& operator=(const ListLiveRecordJobsResponseBody &) = default ;
    ListLiveRecordJobsResponseBody& operator=(ListLiveRecordJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveRecordJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveRecordJobs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, LiveRecordJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StreamInput, streamInput_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      LiveRecordJobs() = default ;
      LiveRecordJobs(const LiveRecordJobs &) = default ;
      LiveRecordJobs(LiveRecordJobs &&) = default ;
      LiveRecordJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveRecordJobs() = default ;
      LiveRecordJobs& operator=(const LiveRecordJobs &) = default ;
      LiveRecordJobs& operator=(LiveRecordJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StreamInput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamInput& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, StreamInput& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        StreamInput() = default ;
        StreamInput(const StreamInput &) = default ;
        StreamInput(StreamInput &&) = default ;
        StreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamInput() = default ;
        StreamInput& operator=(const StreamInput &) = default ;
        StreamInput& operator=(StreamInput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->url_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline StreamInput& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The type of the live stream URL.
        shared_ptr<string> type_ {};
        // The URL of the live stream.
        shared_ptr<string> url_ {};
      };

      class RecordOutput : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordOutput& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RecordOutput& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RecordOutput() = default ;
        RecordOutput(const RecordOutput &) = default ;
        RecordOutput(RecordOutput &&) = default ;
        RecordOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordOutput() = default ;
        RecordOutput& operator=(const RecordOutput &) = default ;
        RecordOutput& operator=(RecordOutput &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->endpoint_ == nullptr && this->type_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline RecordOutput& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline RecordOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RecordOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The bucket name.
        shared_ptr<string> bucket_ {};
        // The endpoint of the storage service.
        shared_ptr<string> endpoint_ {};
        // The type of the storage address.
        // 
        // Valid values:
        // 
        // *   vod
        // *   oss
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->jobId_ == nullptr && this->name_ == nullptr && this->notifyUrl_ == nullptr && this->recordOutput_ == nullptr && this->status_ == nullptr
        && this->streamInput_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LiveRecordJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline LiveRecordJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LiveRecordJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline LiveRecordJobs& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


      // recordOutput Field Functions 
      bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
      void deleteRecordOutput() { this->recordOutput_ = nullptr;};
      inline const LiveRecordJobs::RecordOutput & getRecordOutput() const { DARABONBA_PTR_GET_CONST(recordOutput_, LiveRecordJobs::RecordOutput) };
      inline LiveRecordJobs::RecordOutput getRecordOutput() { DARABONBA_PTR_GET(recordOutput_, LiveRecordJobs::RecordOutput) };
      inline LiveRecordJobs& setRecordOutput(const LiveRecordJobs::RecordOutput & recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };
      inline LiveRecordJobs& setRecordOutput(LiveRecordJobs::RecordOutput && recordOutput) { DARABONBA_PTR_SET_RVALUE(recordOutput_, recordOutput) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LiveRecordJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // streamInput Field Functions 
      bool hasStreamInput() const { return this->streamInput_ != nullptr;};
      void deleteStreamInput() { this->streamInput_ = nullptr;};
      inline const LiveRecordJobs::StreamInput & getStreamInput() const { DARABONBA_PTR_GET_CONST(streamInput_, LiveRecordJobs::StreamInput) };
      inline LiveRecordJobs::StreamInput getStreamInput() { DARABONBA_PTR_GET(streamInput_, LiveRecordJobs::StreamInput) };
      inline LiveRecordJobs& setStreamInput(const LiveRecordJobs::StreamInput & streamInput) { DARABONBA_PTR_SET_VALUE(streamInput_, streamInput) };
      inline LiveRecordJobs& setStreamInput(LiveRecordJobs::StreamInput && streamInput) { DARABONBA_PTR_SET_RVALUE(streamInput_, streamInput) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline LiveRecordJobs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline LiveRecordJobs& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The time when the job was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The ID of the recording job.
      shared_ptr<string> jobId_ {};
      // The name of the recording job.
      shared_ptr<string> name_ {};
      // The callback URL.
      shared_ptr<string> notifyUrl_ {};
      // The storage address of the recording.
      shared_ptr<LiveRecordJobs::RecordOutput> recordOutput_ {};
      // The state of the recording job.
      shared_ptr<string> status_ {};
      // The URL of the live stream.
      shared_ptr<LiveRecordJobs::StreamInput> streamInput_ {};
      // The ID of the recording template.
      shared_ptr<string> templateId_ {};
      // The name of the recording template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->liveRecordJobs_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // liveRecordJobs Field Functions 
    bool hasLiveRecordJobs() const { return this->liveRecordJobs_ != nullptr;};
    void deleteLiveRecordJobs() { this->liveRecordJobs_ = nullptr;};
    inline const vector<ListLiveRecordJobsResponseBody::LiveRecordJobs> & getLiveRecordJobs() const { DARABONBA_PTR_GET_CONST(liveRecordJobs_, vector<ListLiveRecordJobsResponseBody::LiveRecordJobs>) };
    inline vector<ListLiveRecordJobsResponseBody::LiveRecordJobs> getLiveRecordJobs() { DARABONBA_PTR_GET(liveRecordJobs_, vector<ListLiveRecordJobsResponseBody::LiveRecordJobs>) };
    inline ListLiveRecordJobsResponseBody& setLiveRecordJobs(const vector<ListLiveRecordJobsResponseBody::LiveRecordJobs> & liveRecordJobs) { DARABONBA_PTR_SET_VALUE(liveRecordJobs_, liveRecordJobs) };
    inline ListLiveRecordJobsResponseBody& setLiveRecordJobs(vector<ListLiveRecordJobsResponseBody::LiveRecordJobs> && liveRecordJobs) { DARABONBA_PTR_SET_RVALUE(liveRecordJobs_, liveRecordJobs) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordJobsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLiveRecordJobsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordJobsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLiveRecordJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of live stream recording jobs.
    shared_ptr<vector<ListLiveRecordJobsResponseBody::LiveRecordJobs>> liveRecordJobs_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
