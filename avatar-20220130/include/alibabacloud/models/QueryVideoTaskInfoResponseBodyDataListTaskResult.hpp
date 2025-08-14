// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFORESPONSEBODYDATALISTTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOTASKINFORESPONSEBODYDATALISTTASKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryVideoTaskInfoResponseBodyDataListTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoTaskInfoResponseBodyDataListTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlphaUrl, alphaUrl_);
      DARABONBA_PTR_TO_JSON(AttachmentUrl, attachmentUrl_);
      DARABONBA_PTR_TO_JSON(FailCode, failCode_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(PreviewPic, previewPic_);
      DARABONBA_PTR_TO_JSON(SubtitlesUrl, subtitlesUrl_);
      DARABONBA_PTR_TO_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_TO_JSON(WordSubtitlesUrl, wordSubtitlesUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoTaskInfoResponseBodyDataListTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlphaUrl, alphaUrl_);
      DARABONBA_PTR_FROM_JSON(AttachmentUrl, attachmentUrl_);
      DARABONBA_PTR_FROM_JSON(FailCode, failCode_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(PreviewPic, previewPic_);
      DARABONBA_PTR_FROM_JSON(SubtitlesUrl, subtitlesUrl_);
      DARABONBA_PTR_FROM_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
      DARABONBA_PTR_FROM_JSON(WordSubtitlesUrl, wordSubtitlesUrl_);
    };
    QueryVideoTaskInfoResponseBodyDataListTaskResult() = default ;
    QueryVideoTaskInfoResponseBodyDataListTaskResult(const QueryVideoTaskInfoResponseBodyDataListTaskResult &) = default ;
    QueryVideoTaskInfoResponseBodyDataListTaskResult(QueryVideoTaskInfoResponseBodyDataListTaskResult &&) = default ;
    QueryVideoTaskInfoResponseBodyDataListTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoTaskInfoResponseBodyDataListTaskResult() = default ;
    QueryVideoTaskInfoResponseBodyDataListTaskResult& operator=(const QueryVideoTaskInfoResponseBodyDataListTaskResult &) = default ;
    QueryVideoTaskInfoResponseBodyDataListTaskResult& operator=(QueryVideoTaskInfoResponseBodyDataListTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alphaUrl_ != nullptr
        && this->attachmentUrl_ != nullptr && this->failCode_ != nullptr && this->failReason_ != nullptr && this->previewPic_ != nullptr && this->subtitlesUrl_ != nullptr
        && this->videoDuration_ != nullptr && this->videoUrl_ != nullptr && this->wordSubtitlesUrl_ != nullptr; };
    // alphaUrl Field Functions 
    bool hasAlphaUrl() const { return this->alphaUrl_ != nullptr;};
    void deleteAlphaUrl() { this->alphaUrl_ = nullptr;};
    inline string alphaUrl() const { DARABONBA_PTR_GET_DEFAULT(alphaUrl_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setAlphaUrl(string alphaUrl) { DARABONBA_PTR_SET_VALUE(alphaUrl_, alphaUrl) };


    // attachmentUrl Field Functions 
    bool hasAttachmentUrl() const { return this->attachmentUrl_ != nullptr;};
    void deleteAttachmentUrl() { this->attachmentUrl_ = nullptr;};
    inline string attachmentUrl() const { DARABONBA_PTR_GET_DEFAULT(attachmentUrl_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setAttachmentUrl(string attachmentUrl) { DARABONBA_PTR_SET_VALUE(attachmentUrl_, attachmentUrl) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // previewPic Field Functions 
    bool hasPreviewPic() const { return this->previewPic_ != nullptr;};
    void deletePreviewPic() { this->previewPic_ = nullptr;};
    inline string previewPic() const { DARABONBA_PTR_GET_DEFAULT(previewPic_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setPreviewPic(string previewPic) { DARABONBA_PTR_SET_VALUE(previewPic_, previewPic) };


    // subtitlesUrl Field Functions 
    bool hasSubtitlesUrl() const { return this->subtitlesUrl_ != nullptr;};
    void deleteSubtitlesUrl() { this->subtitlesUrl_ = nullptr;};
    inline string subtitlesUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesUrl_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setSubtitlesUrl(string subtitlesUrl) { DARABONBA_PTR_SET_VALUE(subtitlesUrl_, subtitlesUrl) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline int32_t videoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0) };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setVideoDuration(int32_t videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    // wordSubtitlesUrl Field Functions 
    bool hasWordSubtitlesUrl() const { return this->wordSubtitlesUrl_ != nullptr;};
    void deleteWordSubtitlesUrl() { this->wordSubtitlesUrl_ = nullptr;};
    inline string wordSubtitlesUrl() const { DARABONBA_PTR_GET_DEFAULT(wordSubtitlesUrl_, "") };
    inline QueryVideoTaskInfoResponseBodyDataListTaskResult& setWordSubtitlesUrl(string wordSubtitlesUrl) { DARABONBA_PTR_SET_VALUE(wordSubtitlesUrl_, wordSubtitlesUrl) };


  protected:
    std::shared_ptr<string> alphaUrl_ = nullptr;
    std::shared_ptr<string> attachmentUrl_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failReason_ = nullptr;
    std::shared_ptr<string> previewPic_ = nullptr;
    std::shared_ptr<string> subtitlesUrl_ = nullptr;
    std::shared_ptr<int32_t> videoDuration_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
    std::shared_ptr<string> wordSubtitlesUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
