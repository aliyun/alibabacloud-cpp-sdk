// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEOPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(mp4FileUrl, mp4FileUrl_);
      DARABONBA_PTR_TO_JSON(playUrl, playUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(mp4FileUrl, mp4FileUrl_);
      DARABONBA_PTR_FROM_JSON(playUrl, playUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    QueryCloudRecordVideoPlayInfoResponseBody() = default ;
    QueryCloudRecordVideoPlayInfoResponseBody(const QueryCloudRecordVideoPlayInfoResponseBody &) = default ;
    QueryCloudRecordVideoPlayInfoResponseBody(QueryCloudRecordVideoPlayInfoResponseBody &&) = default ;
    QueryCloudRecordVideoPlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoPlayInfoResponseBody() = default ;
    QueryCloudRecordVideoPlayInfoResponseBody& operator=(const QueryCloudRecordVideoPlayInfoResponseBody &) = default ;
    QueryCloudRecordVideoPlayInfoResponseBody& operator=(QueryCloudRecordVideoPlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->fileSize_ != nullptr && this->mp4FileUrl_ != nullptr && this->playUrl_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // mp4FileUrl Field Functions 
    bool hasMp4FileUrl() const { return this->mp4FileUrl_ != nullptr;};
    void deleteMp4FileUrl() { this->mp4FileUrl_ = nullptr;};
    inline string mp4FileUrl() const { DARABONBA_PTR_GET_DEFAULT(mp4FileUrl_, "") };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setMp4FileUrl(string mp4FileUrl) { DARABONBA_PTR_SET_VALUE(mp4FileUrl_, mp4FileUrl) };


    // playUrl Field Functions 
    bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
    void deletePlayUrl() { this->playUrl_ = nullptr;};
    inline string playUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryCloudRecordVideoPlayInfoResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> mp4FileUrl_ = nullptr;
    std::shared_ptr<string> playUrl_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
