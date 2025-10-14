// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODYTASKLISTVIDEOLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETVIDEOCLIPTASKRESPONSEBODYTASKLISTVIDEOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetVideoClipTaskResponseBodyTaskListVideoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetVideoClipTaskResponseBodyTaskListVideoList& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_TO_JSON(videoName, videoName_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetVideoClipTaskResponseBodyTaskListVideoList& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(videoName, videoName_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    BatchGetVideoClipTaskResponseBodyTaskListVideoList() = default ;
    BatchGetVideoClipTaskResponseBodyTaskListVideoList(const BatchGetVideoClipTaskResponseBodyTaskListVideoList &) = default ;
    BatchGetVideoClipTaskResponseBodyTaskListVideoList(BatchGetVideoClipTaskResponseBodyTaskListVideoList &&) = default ;
    BatchGetVideoClipTaskResponseBodyTaskListVideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetVideoClipTaskResponseBodyTaskListVideoList() = default ;
    BatchGetVideoClipTaskResponseBodyTaskListVideoList& operator=(const BatchGetVideoClipTaskResponseBodyTaskListVideoList &) = default ;
    BatchGetVideoClipTaskResponseBodyTaskListVideoList& operator=(BatchGetVideoClipTaskResponseBodyTaskListVideoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->errorMsg_ == nullptr && return this->title_ == nullptr && return this->videoDownloadUrl_ == nullptr
        && return this->videoName_ == nullptr && return this->videoUrl_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int32_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoDownloadUrl Field Functions 
    bool hasVideoDownloadUrl() const { return this->videoDownloadUrl_ != nullptr;};
    void deleteVideoDownloadUrl() { this->videoDownloadUrl_ = nullptr;};
    inline string videoDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(videoDownloadUrl_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setVideoDownloadUrl(string videoDownloadUrl) { DARABONBA_PTR_SET_VALUE(videoDownloadUrl_, videoDownloadUrl) };


    // videoName Field Functions 
    bool hasVideoName() const { return this->videoName_ != nullptr;};
    void deleteVideoName() { this->videoName_ = nullptr;};
    inline string videoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline BatchGetVideoClipTaskResponseBodyTaskListVideoList& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<int32_t> beginTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> endTime_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> videoDownloadUrl_ = nullptr;
    std::shared_ptr<string> videoName_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
