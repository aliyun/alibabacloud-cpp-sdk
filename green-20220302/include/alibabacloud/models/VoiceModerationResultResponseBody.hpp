// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VoiceModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VoiceModerationResultResponseBody() = default ;
    VoiceModerationResultResponseBody(const VoiceModerationResultResponseBody &) = default ;
    VoiceModerationResultResponseBody(VoiceModerationResultResponseBody &&) = default ;
    VoiceModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModerationResultResponseBody() = default ;
    VoiceModerationResultResponseBody& operator=(const VoiceModerationResultResponseBody &) = default ;
    VoiceModerationResultResponseBody& operator=(VoiceModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(LiveId, liveId_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SliceDetails, sliceDetails_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SliceDetails, sliceDetails_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class SliceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SliceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Descriptions, descriptions_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_ANY_TO_JSON(OriginAlgoResult, originAlgoResult_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(RiskTips, riskTips_);
          DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, SliceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Descriptions, descriptions_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_ANY_FROM_JSON(OriginAlgoResult, originAlgoResult_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(RiskTips, riskTips_);
          DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        SliceDetails() = default ;
        SliceDetails(const SliceDetails &) = default ;
        SliceDetails(SliceDetails &&) = default ;
        SliceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SliceDetails() = default ;
        SliceDetails& operator=(const SliceDetails &) = default ;
        SliceDetails& operator=(SliceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->descriptions_ == nullptr
        && this->endTime_ == nullptr && this->endTimestamp_ == nullptr && this->extend_ == nullptr && this->labels_ == nullptr && this->originAlgoResult_ == nullptr
        && this->riskLevel_ == nullptr && this->riskTips_ == nullptr && this->riskWords_ == nullptr && this->score_ == nullptr && this->startTime_ == nullptr
        && this->startTimestamp_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
        // descriptions Field Functions 
        bool hasDescriptions() const { return this->descriptions_ != nullptr;};
        void deleteDescriptions() { this->descriptions_ = nullptr;};
        inline string getDescriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
        inline SliceDetails& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SliceDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // endTimestamp Field Functions 
        bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
        void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
        inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
        inline SliceDetails& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
        inline SliceDetails& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline SliceDetails& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // originAlgoResult Field Functions 
        bool hasOriginAlgoResult() const { return this->originAlgoResult_ != nullptr;};
        void deleteOriginAlgoResult() { this->originAlgoResult_ = nullptr;};
        inline         const Darabonba::Json & getOriginAlgoResult() const { DARABONBA_GET(originAlgoResult_) };
        Darabonba::Json & getOriginAlgoResult() { DARABONBA_GET(originAlgoResult_) };
        inline SliceDetails& setOriginAlgoResult(const Darabonba::Json & originAlgoResult) { DARABONBA_SET_VALUE(originAlgoResult_, originAlgoResult) };
        inline SliceDetails& setOriginAlgoResult(Darabonba::Json && originAlgoResult) { DARABONBA_SET_RVALUE(originAlgoResult_, originAlgoResult) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline SliceDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // riskTips Field Functions 
        bool hasRiskTips() const { return this->riskTips_ != nullptr;};
        void deleteRiskTips() { this->riskTips_ = nullptr;};
        inline string getRiskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
        inline SliceDetails& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


        // riskWords Field Functions 
        bool hasRiskWords() const { return this->riskWords_ != nullptr;};
        void deleteRiskWords() { this->riskWords_ = nullptr;};
        inline string getRiskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
        inline SliceDetails& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline SliceDetails& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SliceDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // startTimestamp Field Functions 
        bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
        void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
        inline int64_t getStartTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
        inline SliceDetails& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline SliceDetails& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline SliceDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The description of the labels.
        shared_ptr<string> descriptions_ {};
        // The end time of the audio segment in seconds.
        shared_ptr<int64_t> endTime_ {};
        // The end timestamp of the segment. Unit: milliseconds.
        shared_ptr<int64_t> endTimestamp_ {};
        // Extended fields.
        shared_ptr<string> extend_ {};
        // The details of the labels.
        shared_ptr<string> labels_ {};
        // Reserved parameter.
        Darabonba::Json originAlgoResult_ {};
        // Risk Level.
        shared_ptr<string> riskLevel_ {};
        // The details of the risky content.
        shared_ptr<string> riskTips_ {};
        // The term hit by the risky content.
        shared_ptr<string> riskWords_ {};
        // The risk score. Default range: 0 to 99.
        shared_ptr<float> score_ {};
        // The start time of the audio segment in seconds.
        shared_ptr<int64_t> startTime_ {};
        // The start timestamp of the segment. Unit: milliseconds.
        shared_ptr<int64_t> startTimestamp_ {};
        // The text converted from the audio segment.
        shared_ptr<string> text_ {};
        // The temporary URL of the audio segment.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->liveId_ == nullptr && this->manualTaskId_ == nullptr && this->riskLevel_ == nullptr && this->sliceDetails_ == nullptr && this->taskId_ == nullptr
        && this->url_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // liveId Field Functions 
      bool hasLiveId() const { return this->liveId_ != nullptr;};
      void deleteLiveId() { this->liveId_ = nullptr;};
      inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
      inline Data& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sliceDetails Field Functions 
      bool hasSliceDetails() const { return this->sliceDetails_ != nullptr;};
      void deleteSliceDetails() { this->sliceDetails_ = nullptr;};
      inline const vector<Data::SliceDetails> & getSliceDetails() const { DARABONBA_PTR_GET_CONST(sliceDetails_, vector<Data::SliceDetails>) };
      inline vector<Data::SliceDetails> getSliceDetails() { DARABONBA_PTR_GET(sliceDetails_, vector<Data::SliceDetails>) };
      inline Data& setSliceDetails(const vector<Data::SliceDetails> & sliceDetails) { DARABONBA_PTR_SET_VALUE(sliceDetails_, sliceDetails) };
      inline Data& setSliceDetails(vector<Data::SliceDetails> && sliceDetails) { DARABONBA_PTR_SET_RVALUE(sliceDetails_, sliceDetails) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The ID of the moderated object.
      shared_ptr<string> dataId_ {};
      // The unique ID of the live stream.
      shared_ptr<string> liveId_ {};
      shared_ptr<string> manualTaskId_ {};
      // Risk Level.
      shared_ptr<string> riskLevel_ {};
      // The moderation results of audio segments.
      shared_ptr<vector<Data::SliceDetails>> sliceDetails_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The URL of the moderated content.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline VoiceModerationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VoiceModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VoiceModerationResultResponseBody::Data) };
    inline VoiceModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VoiceModerationResultResponseBody::Data) };
    inline VoiceModerationResultResponseBody& setData(const VoiceModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VoiceModerationResultResponseBody& setData(VoiceModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VoiceModerationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VoiceModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<VoiceModerationResultResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
