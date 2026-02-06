// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIIMAGEINFORESPONSEBODY_HPP_
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
  class ListAIImageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIImageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageInfoList, AIImageInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIImageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageInfoList, AIImageInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIImageInfoResponseBody() = default ;
    ListAIImageInfoResponseBody(const ListAIImageInfoResponseBody &) = default ;
    ListAIImageInfoResponseBody(ListAIImageInfoResponseBody &&) = default ;
    ListAIImageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIImageInfoResponseBody() = default ;
    ListAIImageInfoResponseBody& operator=(const ListAIImageInfoResponseBody &) = default ;
    ListAIImageInfoResponseBody& operator=(ListAIImageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AIImageInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIImageInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AIImageInfoId, AIImageInfoId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, AIImageInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AIImageInfoId, AIImageInfoId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      AIImageInfoList() = default ;
      AIImageInfoList(const AIImageInfoList &) = default ;
      AIImageInfoList(AIImageInfoList &&) = default ;
      AIImageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIImageInfoList() = default ;
      AIImageInfoList& operator=(const AIImageInfoList &) = default ;
      AIImageInfoList& operator=(AIImageInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->AIImageInfoId_ == nullptr
        && this->creationTime_ == nullptr && this->fileURL_ == nullptr && this->format_ == nullptr && this->jobId_ == nullptr && this->score_ == nullptr
        && this->version_ == nullptr && this->videoId_ == nullptr; };
      // AIImageInfoId Field Functions 
      bool hasAIImageInfoId() const { return this->AIImageInfoId_ != nullptr;};
      void deleteAIImageInfoId() { this->AIImageInfoId_ = nullptr;};
      inline string getAIImageInfoId() const { DARABONBA_PTR_GET_DEFAULT(AIImageInfoId_, "") };
      inline AIImageInfoList& setAIImageInfoId(string AIImageInfoId) { DARABONBA_PTR_SET_VALUE(AIImageInfoId_, AIImageInfoId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AIImageInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline AIImageInfoList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline AIImageInfoList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AIImageInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
      inline AIImageInfoList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline AIImageInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline AIImageInfoList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The ID of the image information.
      shared_ptr<string> AIImageInfoId_ {};
      // The time when the file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The URL of the image file.
      shared_ptr<string> fileURL_ {};
      // The format of the image. Valid values: **gif** and **png**.
      shared_ptr<string> format_ {};
      // The ID of the image AI processing job.
      shared_ptr<string> jobId_ {};
      // The score of the image.
      shared_ptr<string> score_ {};
      // The data version ID.
      shared_ptr<string> version_ {};
      // The ID of the video.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->AIImageInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // AIImageInfoList Field Functions 
    bool hasAIImageInfoList() const { return this->AIImageInfoList_ != nullptr;};
    void deleteAIImageInfoList() { this->AIImageInfoList_ = nullptr;};
    inline const vector<ListAIImageInfoResponseBody::AIImageInfoList> & getAIImageInfoList() const { DARABONBA_PTR_GET_CONST(AIImageInfoList_, vector<ListAIImageInfoResponseBody::AIImageInfoList>) };
    inline vector<ListAIImageInfoResponseBody::AIImageInfoList> getAIImageInfoList() { DARABONBA_PTR_GET(AIImageInfoList_, vector<ListAIImageInfoResponseBody::AIImageInfoList>) };
    inline ListAIImageInfoResponseBody& setAIImageInfoList(const vector<ListAIImageInfoResponseBody::AIImageInfoList> & aIImageInfoList) { DARABONBA_PTR_SET_VALUE(AIImageInfoList_, aIImageInfoList) };
    inline ListAIImageInfoResponseBody& setAIImageInfoList(vector<ListAIImageInfoResponseBody::AIImageInfoList> && aIImageInfoList) { DARABONBA_PTR_SET_RVALUE(AIImageInfoList_, aIImageInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIImageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image files that are uploaded for AI processing.
    shared_ptr<vector<ListAIImageInfoResponseBody::AIImageInfoList>> AIImageInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
