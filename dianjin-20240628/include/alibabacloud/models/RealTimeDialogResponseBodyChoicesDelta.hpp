// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODYCHOICESDELTA_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODYCHOICESDELTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogResponseBodyChoicesDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogResponseBodyChoicesDelta& obj) { 
      DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_TO_JSON(callTime, callTime_);
      DARABONBA_PTR_TO_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
      DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
      DARABONBA_PTR_TO_JSON(interrupt, interrupt_);
      DARABONBA_PTR_TO_JSON(recommendIntention, recommendIntention_);
      DARABONBA_PTR_TO_JSON(recommendScript, recommendScript_);
      DARABONBA_PTR_TO_JSON(selfDirectedScript, selfDirectedScript_);
      DARABONBA_PTR_TO_JSON(selfDirectedScriptFullContent, selfDirectedScriptFullContent_);
      DARABONBA_PTR_TO_JSON(skipCurrentRecognize, skipCurrentRecognize_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogResponseBodyChoicesDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
      DARABONBA_PTR_FROM_JSON(callTime, callTime_);
      DARABONBA_PTR_FROM_JSON(hangUpDialog, hangUpDialog_);
      DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
      DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
      DARABONBA_PTR_FROM_JSON(interrupt, interrupt_);
      DARABONBA_PTR_FROM_JSON(recommendIntention, recommendIntention_);
      DARABONBA_PTR_FROM_JSON(recommendScript, recommendScript_);
      DARABONBA_PTR_FROM_JSON(selfDirectedScript, selfDirectedScript_);
      DARABONBA_PTR_FROM_JSON(selfDirectedScriptFullContent, selfDirectedScriptFullContent_);
      DARABONBA_PTR_FROM_JSON(skipCurrentRecognize, skipCurrentRecognize_);
    };
    RealTimeDialogResponseBodyChoicesDelta() = default ;
    RealTimeDialogResponseBodyChoicesDelta(const RealTimeDialogResponseBodyChoicesDelta &) = default ;
    RealTimeDialogResponseBodyChoicesDelta(RealTimeDialogResponseBodyChoicesDelta &&) = default ;
    RealTimeDialogResponseBodyChoicesDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogResponseBodyChoicesDelta() = default ;
    RealTimeDialogResponseBodyChoicesDelta& operator=(const RealTimeDialogResponseBodyChoicesDelta &) = default ;
    RealTimeDialogResponseBodyChoicesDelta& operator=(RealTimeDialogResponseBodyChoicesDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && return this->callTime_ == nullptr && return this->hangUpDialog_ == nullptr && return this->intentionCode_ == nullptr && return this->intentionName_ == nullptr && return this->intentionScript_ == nullptr
        && return this->interrupt_ == nullptr && return this->recommendIntention_ == nullptr && return this->recommendScript_ == nullptr && return this->selfDirectedScript_ == nullptr && return this->selfDirectedScriptFullContent_ == nullptr
        && return this->skipCurrentRecognize_ == nullptr; };
    // analysisProcess Field Functions 
    bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
    void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
    inline string analysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline string callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // hangUpDialog Field Functions 
    bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
    void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
    inline bool hangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
    inline RealTimeDialogResponseBodyChoicesDelta& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


    // intentionCode Field Functions 
    bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
    void deleteIntentionCode() { this->intentionCode_ = nullptr;};
    inline string intentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


    // intentionName Field Functions 
    bool hasIntentionName() const { return this->intentionName_ != nullptr;};
    void deleteIntentionName() { this->intentionName_ = nullptr;};
    inline string intentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


    // intentionScript Field Functions 
    bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
    void deleteIntentionScript() { this->intentionScript_ = nullptr;};
    inline string intentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline bool interrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
    inline RealTimeDialogResponseBodyChoicesDelta& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


    // recommendIntention Field Functions 
    bool hasRecommendIntention() const { return this->recommendIntention_ != nullptr;};
    void deleteRecommendIntention() { this->recommendIntention_ = nullptr;};
    inline string recommendIntention() const { DARABONBA_PTR_GET_DEFAULT(recommendIntention_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setRecommendIntention(string recommendIntention) { DARABONBA_PTR_SET_VALUE(recommendIntention_, recommendIntention) };


    // recommendScript Field Functions 
    bool hasRecommendScript() const { return this->recommendScript_ != nullptr;};
    void deleteRecommendScript() { this->recommendScript_ = nullptr;};
    inline string recommendScript() const { DARABONBA_PTR_GET_DEFAULT(recommendScript_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setRecommendScript(string recommendScript) { DARABONBA_PTR_SET_VALUE(recommendScript_, recommendScript) };


    // selfDirectedScript Field Functions 
    bool hasSelfDirectedScript() const { return this->selfDirectedScript_ != nullptr;};
    void deleteSelfDirectedScript() { this->selfDirectedScript_ = nullptr;};
    inline string selfDirectedScript() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScript_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setSelfDirectedScript(string selfDirectedScript) { DARABONBA_PTR_SET_VALUE(selfDirectedScript_, selfDirectedScript) };


    // selfDirectedScriptFullContent Field Functions 
    bool hasSelfDirectedScriptFullContent() const { return this->selfDirectedScriptFullContent_ != nullptr;};
    void deleteSelfDirectedScriptFullContent() { this->selfDirectedScriptFullContent_ = nullptr;};
    inline string selfDirectedScriptFullContent() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScriptFullContent_, "") };
    inline RealTimeDialogResponseBodyChoicesDelta& setSelfDirectedScriptFullContent(string selfDirectedScriptFullContent) { DARABONBA_PTR_SET_VALUE(selfDirectedScriptFullContent_, selfDirectedScriptFullContent) };


    // skipCurrentRecognize Field Functions 
    bool hasSkipCurrentRecognize() const { return this->skipCurrentRecognize_ != nullptr;};
    void deleteSkipCurrentRecognize() { this->skipCurrentRecognize_ = nullptr;};
    inline bool skipCurrentRecognize() const { DARABONBA_PTR_GET_DEFAULT(skipCurrentRecognize_, false) };
    inline RealTimeDialogResponseBodyChoicesDelta& setSkipCurrentRecognize(bool skipCurrentRecognize) { DARABONBA_PTR_SET_VALUE(skipCurrentRecognize_, skipCurrentRecognize) };


  protected:
    std::shared_ptr<string> analysisProcess_ = nullptr;
    // time
    std::shared_ptr<string> callTime_ = nullptr;
    std::shared_ptr<bool> hangUpDialog_ = nullptr;
    std::shared_ptr<string> intentionCode_ = nullptr;
    std::shared_ptr<string> intentionName_ = nullptr;
    std::shared_ptr<string> intentionScript_ = nullptr;
    std::shared_ptr<bool> interrupt_ = nullptr;
    std::shared_ptr<string> recommendIntention_ = nullptr;
    std::shared_ptr<string> recommendScript_ = nullptr;
    std::shared_ptr<string> selfDirectedScript_ = nullptr;
    std::shared_ptr<string> selfDirectedScriptFullContent_ = nullptr;
    std::shared_ptr<bool> skipCurrentRecognize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
