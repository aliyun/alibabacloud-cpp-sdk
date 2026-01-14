// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetProjectTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultList, resultList_);
    };
    BatchGetProjectTaskResponseBody() = default ;
    BatchGetProjectTaskResponseBody(const BatchGetProjectTaskResponseBody &) = default ;
    BatchGetProjectTaskResponseBody(BatchGetProjectTaskResponseBody &&) = default ;
    BatchGetProjectTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetProjectTaskResponseBody() = default ;
    BatchGetProjectTaskResponseBody& operator=(const BatchGetProjectTaskResponseBody &) = default ;
    BatchGetProjectTaskResponseBody& operator=(BatchGetProjectTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(videoDownloadUrl, videoDownloadUrl_);
        DARABONBA_PTR_TO_JSON(videoDuration, videoDuration_);
        DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(videoDownloadUrl, videoDownloadUrl_);
        DARABONBA_PTR_FROM_JSON(videoDuration, videoDuration_);
        DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
      };
      ResultList() = default ;
      ResultList(const ResultList &) = default ;
      ResultList(ResultList &&) = default ;
      ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultList() = default ;
      ResultList& operator=(const ResultList &) = default ;
      ResultList& operator=(ResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->videoDownloadUrl_ == nullptr && this->videoDuration_ == nullptr && this->videoUrl_ == nullptr; };
      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline ResultList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ResultList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // videoDownloadUrl Field Functions 
      bool hasVideoDownloadUrl() const { return this->videoDownloadUrl_ != nullptr;};
      void deleteVideoDownloadUrl() { this->videoDownloadUrl_ = nullptr;};
      inline string getVideoDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(videoDownloadUrl_, "") };
      inline ResultList& setVideoDownloadUrl(string videoDownloadUrl) { DARABONBA_PTR_SET_VALUE(videoDownloadUrl_, videoDownloadUrl) };


      // videoDuration Field Functions 
      bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
      void deleteVideoDuration() { this->videoDuration_ = nullptr;};
      inline int32_t getVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0) };
      inline ResultList& setVideoDuration(int32_t videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


      // videoUrl Field Functions 
      bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
      void deleteVideoUrl() { this->videoUrl_ = nullptr;};
      inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
      inline ResultList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    protected:
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> videoDownloadUrl_ {};
      shared_ptr<int32_t> videoDuration_ {};
      shared_ptr<string> videoUrl_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetProjectTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<BatchGetProjectTaskResponseBody::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<BatchGetProjectTaskResponseBody::ResultList>) };
    inline vector<BatchGetProjectTaskResponseBody::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<BatchGetProjectTaskResponseBody::ResultList>) };
    inline BatchGetProjectTaskResponseBody& setResultList(const vector<BatchGetProjectTaskResponseBody::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline BatchGetProjectTaskResponseBody& setResultList(vector<BatchGetProjectTaskResponseBody::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchGetProjectTaskResponseBody::ResultList>> resultList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
