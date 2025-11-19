// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODYMEDIAAUDITAUDIORESULTDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODYMEDIAAUDITAUDIORESULTDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList() = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList(const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList &) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList(GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList &&) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList() = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& operator=(const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList &) = default ;
    GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& operator=(GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->label_ == nullptr && return this->startTime_ == nullptr && return this->text_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetailList& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The end time of the audio that failed the review. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The review results. Valid values:
    // *   **spam**
    // *   **ad**
    // *   **abuse**
    // *   **flood**
    // *   **contraband**
    // *   **meaningless**
    // *   **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The start time of the audio that failed the review. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The text that corresponds to the audio.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
