// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncUploadVideoResponseBodyDataVideoInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VideoInfos, videoInfos_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VideoInfos, videoInfos_);
    };
    AsyncUploadVideoResponseBodyData() = default ;
    AsyncUploadVideoResponseBodyData(const AsyncUploadVideoResponseBodyData &) = default ;
    AsyncUploadVideoResponseBodyData(AsyncUploadVideoResponseBodyData &&) = default ;
    AsyncUploadVideoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoResponseBodyData() = default ;
    AsyncUploadVideoResponseBodyData& operator=(const AsyncUploadVideoResponseBodyData &) = default ;
    AsyncUploadVideoResponseBodyData& operator=(AsyncUploadVideoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && return this->videoInfos_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncUploadVideoResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // videoInfos Field Functions 
    bool hasVideoInfos() const { return this->videoInfos_ != nullptr;};
    void deleteVideoInfos() { this->videoInfos_ = nullptr;};
    inline const vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos> & videoInfos() const { DARABONBA_PTR_GET_CONST(videoInfos_, vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos>) };
    inline vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos> videoInfos() { DARABONBA_PTR_GET(videoInfos_, vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos>) };
    inline AsyncUploadVideoResponseBodyData& setVideoInfos(const vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos> & videoInfos) { DARABONBA_PTR_SET_VALUE(videoInfos_, videoInfos) };
    inline AsyncUploadVideoResponseBodyData& setVideoInfos(vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos> && videoInfos) { DARABONBA_PTR_SET_RVALUE(videoInfos_, videoInfos) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<vector<Models::AsyncUploadVideoResponseBodyDataVideoInfos>> videoInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
