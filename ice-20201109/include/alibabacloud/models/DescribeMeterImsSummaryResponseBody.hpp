// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeterImsSummaryResponseBody() = default ;
    DescribeMeterImsSummaryResponseBody(const DescribeMeterImsSummaryResponseBody &) = default ;
    DescribeMeterImsSummaryResponseBody(DescribeMeterImsSummaryResponseBody &&) = default ;
    DescribeMeterImsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsSummaryResponseBody() = default ;
    DescribeMeterImsSummaryResponseBody& operator=(const DescribeMeterImsSummaryResponseBody &) = default ;
    DescribeMeterImsSummaryResponseBody& operator=(DescribeMeterImsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EditingDuration, editingDuration_);
        DARABONBA_PTR_TO_JSON(LiveEditDuration, liveEditDuration_);
        DARABONBA_PTR_TO_JSON(LiveRecordDuration, liveRecordDuration_);
        DARABONBA_PTR_TO_JSON(LiveSnapshotCount, liveSnapshotCount_);
        DARABONBA_PTR_TO_JSON(LiveTranscodeDuration, liveTranscodeDuration_);
        DARABONBA_PTR_TO_JSON(MpsAiDuration, mpsAiDuration_);
        DARABONBA_PTR_TO_JSON(MpsTranscodeDuration, mpsTranscodeDuration_);
        DARABONBA_PTR_TO_JSON(MpsTranscodeUHDDuration, mpsTranscodeUHDDuration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EditingDuration, editingDuration_);
        DARABONBA_PTR_FROM_JSON(LiveEditDuration, liveEditDuration_);
        DARABONBA_PTR_FROM_JSON(LiveRecordDuration, liveRecordDuration_);
        DARABONBA_PTR_FROM_JSON(LiveSnapshotCount, liveSnapshotCount_);
        DARABONBA_PTR_FROM_JSON(LiveTranscodeDuration, liveTranscodeDuration_);
        DARABONBA_PTR_FROM_JSON(MpsAiDuration, mpsAiDuration_);
        DARABONBA_PTR_FROM_JSON(MpsTranscodeDuration, mpsTranscodeDuration_);
        DARABONBA_PTR_FROM_JSON(MpsTranscodeUHDDuration, mpsTranscodeUHDDuration_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->editingDuration_ == nullptr
        && this->liveEditDuration_ == nullptr && this->liveRecordDuration_ == nullptr && this->liveSnapshotCount_ == nullptr && this->liveTranscodeDuration_ == nullptr && this->mpsAiDuration_ == nullptr
        && this->mpsTranscodeDuration_ == nullptr && this->mpsTranscodeUHDDuration_ == nullptr; };
      // editingDuration Field Functions 
      bool hasEditingDuration() const { return this->editingDuration_ != nullptr;};
      void deleteEditingDuration() { this->editingDuration_ = nullptr;};
      inline string getEditingDuration() const { DARABONBA_PTR_GET_DEFAULT(editingDuration_, "") };
      inline Data& setEditingDuration(string editingDuration) { DARABONBA_PTR_SET_VALUE(editingDuration_, editingDuration) };


      // liveEditDuration Field Functions 
      bool hasLiveEditDuration() const { return this->liveEditDuration_ != nullptr;};
      void deleteLiveEditDuration() { this->liveEditDuration_ = nullptr;};
      inline string getLiveEditDuration() const { DARABONBA_PTR_GET_DEFAULT(liveEditDuration_, "") };
      inline Data& setLiveEditDuration(string liveEditDuration) { DARABONBA_PTR_SET_VALUE(liveEditDuration_, liveEditDuration) };


      // liveRecordDuration Field Functions 
      bool hasLiveRecordDuration() const { return this->liveRecordDuration_ != nullptr;};
      void deleteLiveRecordDuration() { this->liveRecordDuration_ = nullptr;};
      inline string getLiveRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(liveRecordDuration_, "") };
      inline Data& setLiveRecordDuration(string liveRecordDuration) { DARABONBA_PTR_SET_VALUE(liveRecordDuration_, liveRecordDuration) };


      // liveSnapshotCount Field Functions 
      bool hasLiveSnapshotCount() const { return this->liveSnapshotCount_ != nullptr;};
      void deleteLiveSnapshotCount() { this->liveSnapshotCount_ = nullptr;};
      inline string getLiveSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(liveSnapshotCount_, "") };
      inline Data& setLiveSnapshotCount(string liveSnapshotCount) { DARABONBA_PTR_SET_VALUE(liveSnapshotCount_, liveSnapshotCount) };


      // liveTranscodeDuration Field Functions 
      bool hasLiveTranscodeDuration() const { return this->liveTranscodeDuration_ != nullptr;};
      void deleteLiveTranscodeDuration() { this->liveTranscodeDuration_ = nullptr;};
      inline int64_t getLiveTranscodeDuration() const { DARABONBA_PTR_GET_DEFAULT(liveTranscodeDuration_, 0L) };
      inline Data& setLiveTranscodeDuration(int64_t liveTranscodeDuration) { DARABONBA_PTR_SET_VALUE(liveTranscodeDuration_, liveTranscodeDuration) };


      // mpsAiDuration Field Functions 
      bool hasMpsAiDuration() const { return this->mpsAiDuration_ != nullptr;};
      void deleteMpsAiDuration() { this->mpsAiDuration_ = nullptr;};
      inline int64_t getMpsAiDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsAiDuration_, 0L) };
      inline Data& setMpsAiDuration(int64_t mpsAiDuration) { DARABONBA_PTR_SET_VALUE(mpsAiDuration_, mpsAiDuration) };


      // mpsTranscodeDuration Field Functions 
      bool hasMpsTranscodeDuration() const { return this->mpsTranscodeDuration_ != nullptr;};
      void deleteMpsTranscodeDuration() { this->mpsTranscodeDuration_ = nullptr;};
      inline int64_t getMpsTranscodeDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsTranscodeDuration_, 0L) };
      inline Data& setMpsTranscodeDuration(int64_t mpsTranscodeDuration) { DARABONBA_PTR_SET_VALUE(mpsTranscodeDuration_, mpsTranscodeDuration) };


      // mpsTranscodeUHDDuration Field Functions 
      bool hasMpsTranscodeUHDDuration() const { return this->mpsTranscodeUHDDuration_ != nullptr;};
      void deleteMpsTranscodeUHDDuration() { this->mpsTranscodeUHDDuration_ = nullptr;};
      inline int64_t getMpsTranscodeUHDDuration() const { DARABONBA_PTR_GET_DEFAULT(mpsTranscodeUHDDuration_, 0L) };
      inline Data& setMpsTranscodeUHDDuration(int64_t mpsTranscodeUHDDuration) { DARABONBA_PTR_SET_VALUE(mpsTranscodeUHDDuration_, mpsTranscodeUHDDuration) };


    protected:
      // The duration of video editing.
      shared_ptr<string> editingDuration_ {};
      // The duration of live editing.
      shared_ptr<string> liveEditDuration_ {};
      // The duration of live stream recording.
      shared_ptr<string> liveRecordDuration_ {};
      // The number of live stream snapshots.
      shared_ptr<string> liveSnapshotCount_ {};
      // The duration of live stream transcoding.
      shared_ptr<int64_t> liveTranscodeDuration_ {};
      // The duration of AI processing.
      shared_ptr<int64_t> mpsAiDuration_ {};
      // The duration of video-on-demand (VOD) transcoding.
      shared_ptr<int64_t> mpsTranscodeDuration_ {};
      // The duration of audio and video enhancement.
      shared_ptr<int64_t> mpsTranscodeUHDDuration_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterImsSummaryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterImsSummaryResponseBody::Data>) };
    inline vector<DescribeMeterImsSummaryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeMeterImsSummaryResponseBody::Data>) };
    inline DescribeMeterImsSummaryResponseBody& setData(const vector<DescribeMeterImsSummaryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterImsSummaryResponseBody& setData(vector<DescribeMeterImsSummaryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterImsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage statistics of IMS.
    shared_ptr<vector<DescribeMeterImsSummaryResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
