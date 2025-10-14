// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetVideoClipTaskResponseBodyTaskListVideoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetVideoClipTaskResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetVideoClipTaskResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(totalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(totalToken, totalToken_);
      DARABONBA_PTR_TO_JSON(videoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetVideoClipTaskResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(totalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(totalToken, totalToken_);
      DARABONBA_PTR_FROM_JSON(videoList, videoList_);
    };
    BatchGetVideoClipTaskResponseBodyTaskList() = default ;
    BatchGetVideoClipTaskResponseBodyTaskList(const BatchGetVideoClipTaskResponseBodyTaskList &) = default ;
    BatchGetVideoClipTaskResponseBodyTaskList(BatchGetVideoClipTaskResponseBodyTaskList &&) = default ;
    BatchGetVideoClipTaskResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetVideoClipTaskResponseBodyTaskList() = default ;
    BatchGetVideoClipTaskResponseBodyTaskList& operator=(const BatchGetVideoClipTaskResponseBodyTaskList &) = default ;
    BatchGetVideoClipTaskResponseBodyTaskList& operator=(BatchGetVideoClipTaskResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->taskId_ == nullptr && return this->totalDuration_ == nullptr && return this->totalToken_ == nullptr && return this->videoList_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline double totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0.0) };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setTotalDuration(double totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // totalToken Field Functions 
    bool hasTotalToken() const { return this->totalToken_ != nullptr;};
    void deleteTotalToken() { this->totalToken_ = nullptr;};
    inline int64_t totalToken() const { DARABONBA_PTR_GET_DEFAULT(totalToken_, 0L) };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setTotalToken(int64_t totalToken) { DARABONBA_PTR_SET_VALUE(totalToken_, totalToken) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList> & videoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList>) };
    inline vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList> videoList() { DARABONBA_PTR_GET(videoList_, vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList>) };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setVideoList(const vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline BatchGetVideoClipTaskResponseBodyTaskList& setVideoList(vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<double> totalDuration_ = nullptr;
    std::shared_ptr<int64_t> totalToken_ = nullptr;
    std::shared_ptr<vector<Models::BatchGetVideoClipTaskResponseBodyTaskListVideoList>> videoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
