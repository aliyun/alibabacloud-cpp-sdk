// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EditingDuration, editingDuration_);
      DARABONBA_PTR_TO_JSON(LiveEditDuration, liveEditDuration_);
      DARABONBA_PTR_TO_JSON(LiveRecordDuration, liveRecordDuration_);
      DARABONBA_PTR_TO_JSON(LiveSnapshotCount, liveSnapshotCount_);
      DARABONBA_PTR_TO_JSON(LiveTranscodeDuration, liveTranscodeDuration_);
      DARABONBA_PTR_TO_JSON(MpsAiDuration, mpsAiDuration_);
      DARABONBA_PTR_TO_JSON(MpsTranscodeDuration, mpsTranscodeDuration_);
      DARABONBA_PTR_TO_JSON(MpsTranscodeUHDDuration, mpsTranscodeUHDDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingDuration, editingDuration_);
      DARABONBA_PTR_FROM_JSON(LiveEditDuration, liveEditDuration_);
      DARABONBA_PTR_FROM_JSON(LiveRecordDuration, liveRecordDuration_);
      DARABONBA_PTR_FROM_JSON(LiveSnapshotCount, liveSnapshotCount_);
      DARABONBA_PTR_FROM_JSON(LiveTranscodeDuration, liveTranscodeDuration_);
      DARABONBA_PTR_FROM_JSON(MpsAiDuration, mpsAiDuration_);
      DARABONBA_PTR_FROM_JSON(MpsTranscodeDuration, mpsTranscodeDuration_);
      DARABONBA_PTR_FROM_JSON(MpsTranscodeUHDDuration, mpsTranscodeUHDDuration_);
    };
    DescribeMeterImsSummaryResponseBodyData() = default ;
    DescribeMeterImsSummaryResponseBodyData(const DescribeMeterImsSummaryResponseBodyData &) = default ;
    DescribeMeterImsSummaryResponseBodyData(DescribeMeterImsSummaryResponseBodyData &&) = default ;
    DescribeMeterImsSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsSummaryResponseBodyData() = default ;
    DescribeMeterImsSummaryResponseBodyData& operator=(const DescribeMeterImsSummaryResponseBodyData &) = default ;
    DescribeMeterImsSummaryResponseBodyData& operator=(DescribeMeterImsSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->editingDuration_ != nullptr
        && this->liveEditDuration_ != nullptr && this->liveRecordDuration_ != nullptr && this->liveSnapshotCount_ != nullptr && this->liveTranscodeDuration_ != nullptr && this->mpsAiDuration_ != nullptr
        && this->mpsTranscodeDuration_ != nullptr && this->mpsTranscodeUHDDuration_ != nullptr; };
    // editingDuration Field Functions 
    bool hasEditingDuration() const { return this->editingDuration_ != nullptr;};
    void deleteEditingDuration() { this->editingDuration_ = nullptr;};
    inline string editingDuration() const { DARABONBA_PTR_GET_DEFAULT(editingDuration_, "") };
    inline DescribeMeterImsSummaryResponseBodyData& setEditingDuration(string editingDuration) { DARABONBA_PTR_SET_VALUE(editingDuration_, editingDuration) };


    // liveEditDuration Field Functions 
    bool hasLiveEditDuration() const { return this->liveEditDuration_ != nullptr;};
    void deleteLiveEditDuration() { this->liveEditDuration_ = nullptr;};
    inline string liveEditDuration() const { DARABONBA_PTR_GET_DEFAULT(liveEditDuration_, "") };
    inline DescribeMeterImsSummaryResponseBodyData& setLiveEditDuration(string liveEditDuration) { DARABONBA_PTR_SET_VALUE(liveEditDuration_, liveEditDuration) };


    // liveRecordDuration Field Functions 
    bool hasLiveRecordDuration() const { return this->liveRecordDuration_ != nullptr;};
    void deleteLiveRecordDuration() { this->liveRecordDuration_ = nullptr;};
    inline string liveRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(liveRecordDuration_, "") };
    inline DescribeMeterImsSummaryResponseBodyData& setLiveRecordDuration(string liveRecordDuration) { DARABONBA_PTR_SET_VALUE(liveRecordDuration_, liveRecordDuration) };


    // liveSnapshotCount Field Functions 
    bool hasLiveSnapshotCount() const { return this->liveSnapshotCount_ != nullptr;};
    void deleteLiveSnapshotCount() { this->liveSnapshotCount_ = nullptr;};
    inline string liveSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(liveSnapshotCount_, "") };
    inline DescribeMeterImsSummaryResponseBodyData& setLiveSnapshotCount(string liveSnapshotCount) { DARABONBA_PTR_SET_VALUE(liveSnapshotCount_, liveSnapshotCount) };


    // liveTranscodeDuration Field Functions 
    bool hasLiveTranscodeDuration() const { return this->liveTranscodeDuration_ != nullptr;};
    void deleteLiveTranscodeDuration() { this->liveTranscodeDuration_ = nullptr;};
    inline int64_t liveTranscodeDuration() const { DARABONBA_PTR_GET_DEFAULT(liveTranscodeDuration_, 0L) };
    inline DescribeMeterImsSummaryResponseBodyData& setLiveTranscodeDuration(int64_t liveTranscodeDuration) { DARABONBA_PTR_SET_VALUE(liveTranscodeDuration_, liveTranscodeDuration) };


    // mpsAiDuration Field Functions 
    bool hasMpsAiDuration() const { return this->mpsAiDuration_ != nullptr;};
    void deleteMpsAiDuration() { this->mpsAiDuration_ = nullptr;};
    inline int64_t mpsAiDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsAiDuration_, 0L) };
    inline DescribeMeterImsSummaryResponseBodyData& setMpsAiDuration(int64_t mpsAiDuration) { DARABONBA_PTR_SET_VALUE(mpsAiDuration_, mpsAiDuration) };


    // mpsTranscodeDuration Field Functions 
    bool hasMpsTranscodeDuration() const { return this->mpsTranscodeDuration_ != nullptr;};
    void deleteMpsTranscodeDuration() { this->mpsTranscodeDuration_ = nullptr;};
    inline int64_t mpsTranscodeDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsTranscodeDuration_, 0L) };
    inline DescribeMeterImsSummaryResponseBodyData& setMpsTranscodeDuration(int64_t mpsTranscodeDuration) { DARABONBA_PTR_SET_VALUE(mpsTranscodeDuration_, mpsTranscodeDuration) };


    // mpsTranscodeUHDDuration Field Functions 
    bool hasMpsTranscodeUHDDuration() const { return this->mpsTranscodeUHDDuration_ != nullptr;};
    void deleteMpsTranscodeUHDDuration() { this->mpsTranscodeUHDDuration_ = nullptr;};
    inline int64_t mpsTranscodeUHDDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsTranscodeUHDDuration_, 0L) };
    inline DescribeMeterImsSummaryResponseBodyData& setMpsTranscodeUHDDuration(int64_t mpsTranscodeUHDDuration) { DARABONBA_PTR_SET_VALUE(mpsTranscodeUHDDuration_, mpsTranscodeUHDDuration) };


  protected:
    // The duration of video editing.
    std::shared_ptr<string> editingDuration_ = nullptr;
    // The duration of live editing.
    std::shared_ptr<string> liveEditDuration_ = nullptr;
    // The duration of live stream recording.
    std::shared_ptr<string> liveRecordDuration_ = nullptr;
    // The number of live stream snapshots.
    std::shared_ptr<string> liveSnapshotCount_ = nullptr;
    // The duration of live stream transcoding.
    std::shared_ptr<int64_t> liveTranscodeDuration_ = nullptr;
    // The duration of AI processing.
    std::shared_ptr<int64_t> mpsAiDuration_ = nullptr;
    // The duration of video-on-demand (VOD) transcoding.
    std::shared_ptr<int64_t> mpsTranscodeDuration_ = nullptr;
    // The duration of audio and video enhancement.
    std::shared_ptr<int64_t> mpsTranscodeUHDDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
