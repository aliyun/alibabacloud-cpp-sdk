// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODYDATASLICEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODYDATASLICEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VoiceModerationResultResponseBodyDataSliceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModerationResultResponseBodyDataSliceDetails& obj) { 
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
    friend void from_json(const Darabonba::Json& j, VoiceModerationResultResponseBodyDataSliceDetails& obj) { 
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
    VoiceModerationResultResponseBodyDataSliceDetails() = default ;
    VoiceModerationResultResponseBodyDataSliceDetails(const VoiceModerationResultResponseBodyDataSliceDetails &) = default ;
    VoiceModerationResultResponseBodyDataSliceDetails(VoiceModerationResultResponseBodyDataSliceDetails &&) = default ;
    VoiceModerationResultResponseBodyDataSliceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModerationResultResponseBodyDataSliceDetails() = default ;
    VoiceModerationResultResponseBodyDataSliceDetails& operator=(const VoiceModerationResultResponseBodyDataSliceDetails &) = default ;
    VoiceModerationResultResponseBodyDataSliceDetails& operator=(VoiceModerationResultResponseBodyDataSliceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->descriptions_ != nullptr
        && this->endTime_ != nullptr && this->endTimestamp_ != nullptr && this->extend_ != nullptr && this->labels_ != nullptr && this->originAlgoResult_ != nullptr
        && this->riskLevel_ != nullptr && this->riskTips_ != nullptr && this->riskWords_ != nullptr && this->score_ != nullptr && this->startTime_ != nullptr
        && this->startTimestamp_ != nullptr && this->text_ != nullptr && this->url_ != nullptr; };
    // descriptions Field Functions 
    bool hasDescriptions() const { return this->descriptions_ != nullptr;};
    void deleteDescriptions() { this->descriptions_ = nullptr;};
    inline string descriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // originAlgoResult Field Functions 
    bool hasOriginAlgoResult() const { return this->originAlgoResult_ != nullptr;};
    void deleteOriginAlgoResult() { this->originAlgoResult_ = nullptr;};
    inline     const Darabonba::Json & originAlgoResult() const { DARABONBA_GET(originAlgoResult_) };
    Darabonba::Json & originAlgoResult() { DARABONBA_GET(originAlgoResult_) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setOriginAlgoResult(const Darabonba::Json & originAlgoResult) { DARABONBA_SET_VALUE(originAlgoResult_, originAlgoResult) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setOriginAlgoResult(Darabonba::Json & originAlgoResult) { DARABONBA_SET_RVALUE(originAlgoResult_, originAlgoResult) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskTips Field Functions 
    bool hasRiskTips() const { return this->riskTips_ != nullptr;};
    void deleteRiskTips() { this->riskTips_ = nullptr;};
    inline string riskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


    // riskWords Field Functions 
    bool hasRiskWords() const { return this->riskWords_ != nullptr;};
    void deleteRiskWords() { this->riskWords_ = nullptr;};
    inline string riskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline VoiceModerationResultResponseBodyDataSliceDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The description of the labels.
    std::shared_ptr<string> descriptions_ = nullptr;
    // The end time of the audio segment in seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The end timestamp of the segment. Unit: milliseconds.
    std::shared_ptr<int64_t> endTimestamp_ = nullptr;
    // Extended fields.
    std::shared_ptr<string> extend_ = nullptr;
    // The details of the labels.
    std::shared_ptr<string> labels_ = nullptr;
    // Reserved parameter.
    Darabonba::Json originAlgoResult_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The details of the risky content.
    std::shared_ptr<string> riskTips_ = nullptr;
    // The term hit by the risky content.
    std::shared_ptr<string> riskWords_ = nullptr;
    // The risk score. Default range: 0 to 99.
    std::shared_ptr<float> score_ = nullptr;
    // The start time of the audio segment in seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The start timestamp of the segment. Unit: milliseconds.
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
    // The text converted from the audio segment.
    std::shared_ptr<string> text_ = nullptr;
    // The temporary URL of the audio segment.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
