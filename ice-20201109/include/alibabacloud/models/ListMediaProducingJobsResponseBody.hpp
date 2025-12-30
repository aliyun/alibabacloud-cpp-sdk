// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
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
  class ListMediaProducingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaProducingJobList, mediaProducingJobList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaProducingJobList, mediaProducingJobList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaProducingJobsResponseBody() = default ;
    ListMediaProducingJobsResponseBody(const ListMediaProducingJobsResponseBody &) = default ;
    ListMediaProducingJobsResponseBody(ListMediaProducingJobsResponseBody &&) = default ;
    ListMediaProducingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaProducingJobsResponseBody() = default ;
    ListMediaProducingJobsResponseBody& operator=(const ListMediaProducingJobsResponseBody &) = default ;
    ListMediaProducingJobsResponseBody& operator=(ListMediaProducingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaProducingJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaProducingJobList& obj) { 
        DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, MediaProducingJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      MediaProducingJobList() = default ;
      MediaProducingJobList(const MediaProducingJobList &) = default ;
      MediaProducingJobList(MediaProducingJobList &&) = default ;
      MediaProducingJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaProducingJobList() = default ;
      MediaProducingJobList& operator=(const MediaProducingJobList &) = default ;
      MediaProducingJobList& operator=(MediaProducingJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clipsParam_ == nullptr
        && this->code_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->duration_ == nullptr && this->jobId_ == nullptr
        && this->mediaId_ == nullptr && this->mediaURL_ == nullptr && this->message_ == nullptr && this->modifiedTime_ == nullptr && this->projectId_ == nullptr
        && this->status_ == nullptr && this->templateId_ == nullptr && this->userData_ == nullptr; };
      // clipsParam Field Functions 
      bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
      void deleteClipsParam() { this->clipsParam_ = nullptr;};
      inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
      inline MediaProducingJobList& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline MediaProducingJobList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline MediaProducingJobList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MediaProducingJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline MediaProducingJobList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaProducingJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaProducingJobList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaURL Field Functions 
      bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
      void deleteMediaURL() { this->mediaURL_ = nullptr;};
      inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
      inline MediaProducingJobList& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline MediaProducingJobList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline MediaProducingJobList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline MediaProducingJobList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaProducingJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline MediaProducingJobList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaProducingJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The template material parameters.
      shared_ptr<string> clipsParam_ {};
      // The response code.
      shared_ptr<string> code_ {};
      // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The duration of the output file. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The ID of the online editing job.
      shared_ptr<string> jobId_ {};
      // The media asset ID of the output file.
      shared_ptr<string> mediaId_ {};
      // The URL of the output file.
      shared_ptr<string> mediaURL_ {};
      // The returned message. Note: Pay attention to this parameter if the job failed.
      shared_ptr<string> message_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the online editing project.
      shared_ptr<string> projectId_ {};
      // The job state.
      shared_ptr<string> status_ {};
      // The ID of the online editing template.
      shared_ptr<string> templateId_ {};
      // The user-defined data in the JSON format.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->mediaProducingJobList_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListMediaProducingJobsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaProducingJobList Field Functions 
    bool hasMediaProducingJobList() const { return this->mediaProducingJobList_ != nullptr;};
    void deleteMediaProducingJobList() { this->mediaProducingJobList_ = nullptr;};
    inline const vector<ListMediaProducingJobsResponseBody::MediaProducingJobList> & getMediaProducingJobList() const { DARABONBA_PTR_GET_CONST(mediaProducingJobList_, vector<ListMediaProducingJobsResponseBody::MediaProducingJobList>) };
    inline vector<ListMediaProducingJobsResponseBody::MediaProducingJobList> getMediaProducingJobList() { DARABONBA_PTR_GET(mediaProducingJobList_, vector<ListMediaProducingJobsResponseBody::MediaProducingJobList>) };
    inline ListMediaProducingJobsResponseBody& setMediaProducingJobList(const vector<ListMediaProducingJobsResponseBody::MediaProducingJobList> & mediaProducingJobList) { DARABONBA_PTR_SET_VALUE(mediaProducingJobList_, mediaProducingJobList) };
    inline ListMediaProducingJobsResponseBody& setMediaProducingJobList(vector<ListMediaProducingJobsResponseBody::MediaProducingJobList> && mediaProducingJobList) { DARABONBA_PTR_SET_RVALUE(mediaProducingJobList_, mediaProducingJobList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaProducingJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaProducingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries returned.
    // 
    // Default value: 10. Valid values: 1 to 100.
    shared_ptr<string> maxResults_ {};
    // The queried media editing and production jobs.
    shared_ptr<vector<ListMediaProducingJobsResponseBody::MediaProducingJobList>> mediaProducingJobList_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
