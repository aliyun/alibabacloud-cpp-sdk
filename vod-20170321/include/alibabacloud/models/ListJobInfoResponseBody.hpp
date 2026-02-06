// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODY_HPP_
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
  class ListJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfoList, jobInfoList_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfoList, jobInfoList_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListJobInfoResponseBody() = default ;
    ListJobInfoResponseBody(const ListJobInfoResponseBody &) = default ;
    ListJobInfoResponseBody(ListJobInfoResponseBody &&) = default ;
    ListJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfoResponseBody() = default ;
    ListJobInfoResponseBody& operator=(const ListJobInfoResponseBody &) = default ;
    ListJobInfoResponseBody& operator=(ListJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, JobInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      JobInfoList() = default ;
      JobInfoList(const JobInfoList &) = default ;
      JobInfoList(JobInfoList &&) = default ;
      JobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobInfoList() = default ;
      JobInfoList& operator=(const JobInfoList &) = default ;
      JobInfoList& operator=(JobInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->jobId_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline JobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline JobInfoList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the task was complete.
      shared_ptr<string> completeTime_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the task.
      shared_ptr<string> jobId_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The ID of the user who submitted the task.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->jobInfoList_ == nullptr
        && this->jobType_ == nullptr && this->mediaId_ == nullptr && this->requestId_ == nullptr; };
    // jobInfoList Field Functions 
    bool hasJobInfoList() const { return this->jobInfoList_ != nullptr;};
    void deleteJobInfoList() { this->jobInfoList_ = nullptr;};
    inline const vector<ListJobInfoResponseBody::JobInfoList> & getJobInfoList() const { DARABONBA_PTR_GET_CONST(jobInfoList_, vector<ListJobInfoResponseBody::JobInfoList>) };
    inline vector<ListJobInfoResponseBody::JobInfoList> getJobInfoList() { DARABONBA_PTR_GET(jobInfoList_, vector<ListJobInfoResponseBody::JobInfoList>) };
    inline ListJobInfoResponseBody& setJobInfoList(const vector<ListJobInfoResponseBody::JobInfoList> & jobInfoList) { DARABONBA_PTR_SET_VALUE(jobInfoList_, jobInfoList) };
    inline ListJobInfoResponseBody& setJobInfoList(vector<ListJobInfoResponseBody::JobInfoList> && jobInfoList) { DARABONBA_PTR_SET_RVALUE(jobInfoList_, jobInfoList) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobInfoResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListJobInfoResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The historical tasks of the last 6 months.
    shared_ptr<vector<ListJobInfoResponseBody::JobInfoList>> jobInfoList_ {};
    // The type of the task. Valid values:
    // 
    // *   transcode
    // *   snapshot
    // *   ai
    shared_ptr<string> jobType_ {};
    // The ID of the media asset.
    shared_ptr<string> mediaId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
