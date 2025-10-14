// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPROJECTTASKRESPONSEBODYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetProjectTaskResponseBodyResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetProjectTaskResponseBodyResultList& obj) { 
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_TO_JSON(videoDuration, videoDuration_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetProjectTaskResponseBodyResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(videoDuration, videoDuration_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    BatchGetProjectTaskResponseBodyResultList() = default ;
    BatchGetProjectTaskResponseBodyResultList(const BatchGetProjectTaskResponseBodyResultList &) = default ;
    BatchGetProjectTaskResponseBodyResultList(BatchGetProjectTaskResponseBodyResultList &&) = default ;
    BatchGetProjectTaskResponseBodyResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetProjectTaskResponseBodyResultList() = default ;
    BatchGetProjectTaskResponseBodyResultList& operator=(const BatchGetProjectTaskResponseBodyResultList &) = default ;
    BatchGetProjectTaskResponseBodyResultList& operator=(BatchGetProjectTaskResponseBodyResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->videoDownloadUrl_ == nullptr && return this->videoDuration_ == nullptr && return this->videoUrl_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline BatchGetProjectTaskResponseBodyResultList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchGetProjectTaskResponseBodyResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchGetProjectTaskResponseBodyResultList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // videoDownloadUrl Field Functions 
    bool hasVideoDownloadUrl() const { return this->videoDownloadUrl_ != nullptr;};
    void deleteVideoDownloadUrl() { this->videoDownloadUrl_ = nullptr;};
    inline string videoDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(videoDownloadUrl_, "") };
    inline BatchGetProjectTaskResponseBodyResultList& setVideoDownloadUrl(string videoDownloadUrl) { DARABONBA_PTR_SET_VALUE(videoDownloadUrl_, videoDownloadUrl) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline int32_t videoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0) };
    inline BatchGetProjectTaskResponseBodyResultList& setVideoDuration(int32_t videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline BatchGetProjectTaskResponseBodyResultList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> videoDownloadUrl_ = nullptr;
    std::shared_ptr<int32_t> videoDuration_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
