// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODYTRANSCODESUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYRESPONSEBODYTRANSCODESUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeSummaryResponseBodyTranscodeSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeSummaryResponseBodyTranscodeSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(TranscodeJobInfoSummaryList, transcodeJobInfoSummaryList_);
      DARABONBA_PTR_TO_JSON(TranscodeStatus, transcodeStatus_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeSummaryResponseBodyTranscodeSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobInfoSummaryList, transcodeJobInfoSummaryList_);
      DARABONBA_PTR_FROM_JSON(TranscodeStatus, transcodeStatus_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetTranscodeSummaryResponseBodyTranscodeSummaryList() = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryList(const GetTranscodeSummaryResponseBodyTranscodeSummaryList &) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryList(GetTranscodeSummaryResponseBodyTranscodeSummaryList &&) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeSummaryResponseBodyTranscodeSummaryList() = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryList& operator=(const GetTranscodeSummaryResponseBodyTranscodeSummaryList &) = default ;
    GetTranscodeSummaryResponseBodyTranscodeSummaryList& operator=(GetTranscodeSummaryResponseBodyTranscodeSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->creationTime_ == nullptr && return this->transcodeJobInfoSummaryList_ == nullptr && return this->transcodeStatus_ == nullptr && return this->transcodeTemplateGroupId_ == nullptr && return this->videoId_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // transcodeJobInfoSummaryList Field Functions 
    bool hasTranscodeJobInfoSummaryList() const { return this->transcodeJobInfoSummaryList_ != nullptr;};
    void deleteTranscodeJobInfoSummaryList() { this->transcodeJobInfoSummaryList_ = nullptr;};
    inline const vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList> & transcodeJobInfoSummaryList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoSummaryList_, vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList>) };
    inline vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList> transcodeJobInfoSummaryList() { DARABONBA_PTR_GET(transcodeJobInfoSummaryList_, vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList>) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setTranscodeJobInfoSummaryList(const vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList> & transcodeJobInfoSummaryList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoSummaryList_, transcodeJobInfoSummaryList) };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setTranscodeJobInfoSummaryList(vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList> && transcodeJobInfoSummaryList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoSummaryList_, transcodeJobInfoSummaryList) };


    // transcodeStatus Field Functions 
    bool hasTranscodeStatus() const { return this->transcodeStatus_ != nullptr;};
    void deleteTranscodeStatus() { this->transcodeStatus_ = nullptr;};
    inline string transcodeStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeStatus_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setTranscodeStatus(string transcodeStatus) { DARABONBA_PTR_SET_VALUE(transcodeStatus_, transcodeStatus) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetTranscodeSummaryResponseBodyTranscodeSummaryList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The time when the transcoding task was complete. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the transcoding task was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The summaries of transcoding jobs.
    std::shared_ptr<vector<Models::GetTranscodeSummaryResponseBodyTranscodeSummaryListTranscodeJobInfoSummaryList>> transcodeJobInfoSummaryList_ = nullptr;
    // The status of the transcoding task. Valid values:
    // 
    // *   **Processing**: Transcoding is in process.
    // *   **Partial**: Some transcoding jobs were complete.
    // *   **CompleteAllSucc**: All transcoding jobs were successful.
    // *   **CompleteAllFail**: All transcoding jobs failed. If an exception occurs in the source file, no transcoding job is initiated and the transcoding task fails.
    // *   **CompletePartialSucc**: All transcoding jobs were complete but only some were successful.
    std::shared_ptr<string> transcodeStatus_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // The ID of the audio or video file.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
