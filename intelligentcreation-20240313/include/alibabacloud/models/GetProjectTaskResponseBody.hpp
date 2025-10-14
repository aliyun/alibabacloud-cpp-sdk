// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetProjectTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_TO_JSON(videoDuration, videoDuration_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(videoDownloadUrl, videoDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(videoDuration, videoDuration_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    GetProjectTaskResponseBody() = default ;
    GetProjectTaskResponseBody(const GetProjectTaskResponseBody &) = default ;
    GetProjectTaskResponseBody(GetProjectTaskResponseBody &&) = default ;
    GetProjectTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectTaskResponseBody() = default ;
    GetProjectTaskResponseBody& operator=(const GetProjectTaskResponseBody &) = default ;
    GetProjectTaskResponseBody& operator=(GetProjectTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->videoDownloadUrl_ == nullptr && return this->videoDuration_ == nullptr && return this->videoUrl_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetProjectTaskResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProjectTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // videoDownloadUrl Field Functions 
    bool hasVideoDownloadUrl() const { return this->videoDownloadUrl_ != nullptr;};
    void deleteVideoDownloadUrl() { this->videoDownloadUrl_ = nullptr;};
    inline string videoDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(videoDownloadUrl_, "") };
    inline GetProjectTaskResponseBody& setVideoDownloadUrl(string videoDownloadUrl) { DARABONBA_PTR_SET_VALUE(videoDownloadUrl_, videoDownloadUrl) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline int32_t videoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0) };
    inline GetProjectTaskResponseBody& setVideoDuration(int32_t videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline GetProjectTaskResponseBody& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> videoDownloadUrl_ = nullptr;
    std::shared_ptr<int32_t> videoDuration_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
