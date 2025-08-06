// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODYAIIMAGEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODYAIIMAGEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIImageInfoResponseBodyAIImageInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIImageInfoResponseBodyAIImageInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageInfoId, AIImageInfoId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIImageInfoResponseBodyAIImageInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageInfoId, AIImageInfoId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListAIImageInfoResponseBodyAIImageInfoList() = default ;
    ListAIImageInfoResponseBodyAIImageInfoList(const ListAIImageInfoResponseBodyAIImageInfoList &) = default ;
    ListAIImageInfoResponseBodyAIImageInfoList(ListAIImageInfoResponseBodyAIImageInfoList &&) = default ;
    ListAIImageInfoResponseBodyAIImageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIImageInfoResponseBodyAIImageInfoList() = default ;
    ListAIImageInfoResponseBodyAIImageInfoList& operator=(const ListAIImageInfoResponseBodyAIImageInfoList &) = default ;
    ListAIImageInfoResponseBodyAIImageInfoList& operator=(ListAIImageInfoResponseBodyAIImageInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIImageInfoId_ != nullptr
        && this->creationTime_ != nullptr && this->fileURL_ != nullptr && this->format_ != nullptr && this->jobId_ != nullptr && this->score_ != nullptr
        && this->version_ != nullptr && this->videoId_ != nullptr; };
    // AIImageInfoId Field Functions 
    bool hasAIImageInfoId() const { return this->AIImageInfoId_ != nullptr;};
    void deleteAIImageInfoId() { this->AIImageInfoId_ = nullptr;};
    inline string AIImageInfoId() const { DARABONBA_PTR_GET_DEFAULT(AIImageInfoId_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setAIImageInfoId(string AIImageInfoId) { DARABONBA_PTR_SET_VALUE(AIImageInfoId_, AIImageInfoId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListAIImageInfoResponseBodyAIImageInfoList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the image information.
    std::shared_ptr<string> AIImageInfoId_ = nullptr;
    // The time when the file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The URL of the image file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The format of the image. Valid values: **gif** and **png**.
    std::shared_ptr<string> format_ = nullptr;
    // The ID of the image AI processing job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The score of the image.
    std::shared_ptr<string> score_ = nullptr;
    // The data version ID.
    std::shared_ptr<string> version_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
