// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCAPTIONRESULTVIDEOCAPTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCAPTIONRESULTVIDEOCAPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(endTimeFormat, endTimeFormat_);
      DARABONBA_PTR_TO_JSON(speaker, speaker_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(startTimeFormat, startTimeFormat_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(endTimeFormat, endTimeFormat_);
      DARABONBA_PTR_FROM_JSON(speaker, speaker_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(startTimeFormat, startTimeFormat_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->endTimeFormat_ == nullptr && return this->speaker_ == nullptr && return this->startTime_ == nullptr && return this->startTimeFormat_ == nullptr && return this->text_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeFormat Field Functions 
    bool hasEndTimeFormat() const { return this->endTimeFormat_ != nullptr;};
    void deleteEndTimeFormat() { this->endTimeFormat_ = nullptr;};
    inline string endTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(endTimeFormat_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setEndTimeFormat(string endTimeFormat) { DARABONBA_PTR_SET_VALUE(endTimeFormat_, endTimeFormat) };


    // speaker Field Functions 
    bool hasSpeaker() const { return this->speaker_ != nullptr;};
    void deleteSpeaker() { this->speaker_ = nullptr;};
    inline string speaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimeFormat Field Functions 
    bool hasStartTimeFormat() const { return this->startTimeFormat_ != nullptr;};
    void deleteStartTimeFormat() { this->startTimeFormat_ = nullptr;};
    inline string startTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(startTimeFormat_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setStartTimeFormat(string startTimeFormat) { DARABONBA_PTR_SET_VALUE(startTimeFormat_, startTimeFormat) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> endTimeFormat_ = nullptr;
    std::shared_ptr<string> speaker_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> startTimeFormat_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
