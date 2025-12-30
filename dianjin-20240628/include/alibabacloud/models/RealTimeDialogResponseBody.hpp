// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(choices, choices_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(choices, choices_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RealTimeDialogResponseBody() = default ;
    RealTimeDialogResponseBody(const RealTimeDialogResponseBody &) = default ;
    RealTimeDialogResponseBody(RealTimeDialogResponseBody &&) = default ;
    RealTimeDialogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogResponseBody() = default ;
    RealTimeDialogResponseBody& operator=(const RealTimeDialogResponseBody &) = default ;
    RealTimeDialogResponseBody& operator=(RealTimeDialogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Choices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Choices& obj) { 
        DARABONBA_PTR_TO_JSON(delta, delta_);
        DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
        DARABONBA_PTR_TO_JSON(index, index_);
        DARABONBA_PTR_TO_JSON(message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Choices& obj) { 
        DARABONBA_PTR_FROM_JSON(delta, delta_);
        DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
        DARABONBA_PTR_FROM_JSON(index, index_);
        DARABONBA_PTR_FROM_JSON(message, message_);
      };
      Choices() = default ;
      Choices(const Choices &) = default ;
      Choices(Choices &&) = default ;
      Choices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Choices() = default ;
      Choices& operator=(const Choices &) = default ;
      Choices& operator=(Choices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Message : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Message& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Message& obj) { 
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
        Message() = default ;
        Message(const Message &) = default ;
        Message(Message &&) = default ;
        Message(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Message() = default ;
        Message& operator=(const Message &) = default ;
        Message& operator=(Message &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && this->callTime_ == nullptr && this->hangUpDialog_ == nullptr && this->intentionCode_ == nullptr && this->intentionName_ == nullptr && this->intentionScript_ == nullptr
        && this->interrupt_ == nullptr && this->recommendIntention_ == nullptr && this->recommendScript_ == nullptr && this->selfDirectedScript_ == nullptr && this->selfDirectedScriptFullContent_ == nullptr
        && this->skipCurrentRecognize_ == nullptr; };
        // analysisProcess Field Functions 
        bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
        void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
        inline string getAnalysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
        inline Message& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


        // callTime Field Functions 
        bool hasCallTime() const { return this->callTime_ != nullptr;};
        void deleteCallTime() { this->callTime_ = nullptr;};
        inline string getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
        inline Message& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


        // hangUpDialog Field Functions 
        bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
        void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
        inline bool getHangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
        inline Message& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


        // intentionCode Field Functions 
        bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
        void deleteIntentionCode() { this->intentionCode_ = nullptr;};
        inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
        inline Message& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


        // intentionName Field Functions 
        bool hasIntentionName() const { return this->intentionName_ != nullptr;};
        void deleteIntentionName() { this->intentionName_ = nullptr;};
        inline string getIntentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
        inline Message& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


        // intentionScript Field Functions 
        bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
        void deleteIntentionScript() { this->intentionScript_ = nullptr;};
        inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
        inline Message& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


        // interrupt Field Functions 
        bool hasInterrupt() const { return this->interrupt_ != nullptr;};
        void deleteInterrupt() { this->interrupt_ = nullptr;};
        inline bool getInterrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
        inline Message& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


        // recommendIntention Field Functions 
        bool hasRecommendIntention() const { return this->recommendIntention_ != nullptr;};
        void deleteRecommendIntention() { this->recommendIntention_ = nullptr;};
        inline string getRecommendIntention() const { DARABONBA_PTR_GET_DEFAULT(recommendIntention_, "") };
        inline Message& setRecommendIntention(string recommendIntention) { DARABONBA_PTR_SET_VALUE(recommendIntention_, recommendIntention) };


        // recommendScript Field Functions 
        bool hasRecommendScript() const { return this->recommendScript_ != nullptr;};
        void deleteRecommendScript() { this->recommendScript_ = nullptr;};
        inline string getRecommendScript() const { DARABONBA_PTR_GET_DEFAULT(recommendScript_, "") };
        inline Message& setRecommendScript(string recommendScript) { DARABONBA_PTR_SET_VALUE(recommendScript_, recommendScript) };


        // selfDirectedScript Field Functions 
        bool hasSelfDirectedScript() const { return this->selfDirectedScript_ != nullptr;};
        void deleteSelfDirectedScript() { this->selfDirectedScript_ = nullptr;};
        inline string getSelfDirectedScript() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScript_, "") };
        inline Message& setSelfDirectedScript(string selfDirectedScript) { DARABONBA_PTR_SET_VALUE(selfDirectedScript_, selfDirectedScript) };


        // selfDirectedScriptFullContent Field Functions 
        bool hasSelfDirectedScriptFullContent() const { return this->selfDirectedScriptFullContent_ != nullptr;};
        void deleteSelfDirectedScriptFullContent() { this->selfDirectedScriptFullContent_ = nullptr;};
        inline string getSelfDirectedScriptFullContent() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScriptFullContent_, "") };
        inline Message& setSelfDirectedScriptFullContent(string selfDirectedScriptFullContent) { DARABONBA_PTR_SET_VALUE(selfDirectedScriptFullContent_, selfDirectedScriptFullContent) };


        // skipCurrentRecognize Field Functions 
        bool hasSkipCurrentRecognize() const { return this->skipCurrentRecognize_ != nullptr;};
        void deleteSkipCurrentRecognize() { this->skipCurrentRecognize_ = nullptr;};
        inline bool getSkipCurrentRecognize() const { DARABONBA_PTR_GET_DEFAULT(skipCurrentRecognize_, false) };
        inline Message& setSkipCurrentRecognize(bool skipCurrentRecognize) { DARABONBA_PTR_SET_VALUE(skipCurrentRecognize_, skipCurrentRecognize) };


      protected:
        shared_ptr<string> analysisProcess_ {};
        // time
        shared_ptr<string> callTime_ {};
        shared_ptr<bool> hangUpDialog_ {};
        shared_ptr<string> intentionCode_ {};
        shared_ptr<string> intentionName_ {};
        shared_ptr<string> intentionScript_ {};
        shared_ptr<bool> interrupt_ {};
        shared_ptr<string> recommendIntention_ {};
        shared_ptr<string> recommendScript_ {};
        shared_ptr<string> selfDirectedScript_ {};
        shared_ptr<string> selfDirectedScriptFullContent_ {};
        shared_ptr<bool> skipCurrentRecognize_ {};
      };

      class Delta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Delta& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Delta& obj) { 
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
        Delta() = default ;
        Delta(const Delta &) = default ;
        Delta(Delta &&) = default ;
        Delta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Delta() = default ;
        Delta& operator=(const Delta &) = default ;
        Delta& operator=(Delta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && this->callTime_ == nullptr && this->hangUpDialog_ == nullptr && this->intentionCode_ == nullptr && this->intentionName_ == nullptr && this->intentionScript_ == nullptr
        && this->interrupt_ == nullptr && this->recommendIntention_ == nullptr && this->recommendScript_ == nullptr && this->selfDirectedScript_ == nullptr && this->selfDirectedScriptFullContent_ == nullptr
        && this->skipCurrentRecognize_ == nullptr; };
        // analysisProcess Field Functions 
        bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
        void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
        inline string getAnalysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
        inline Delta& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


        // callTime Field Functions 
        bool hasCallTime() const { return this->callTime_ != nullptr;};
        void deleteCallTime() { this->callTime_ = nullptr;};
        inline string getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
        inline Delta& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


        // hangUpDialog Field Functions 
        bool hasHangUpDialog() const { return this->hangUpDialog_ != nullptr;};
        void deleteHangUpDialog() { this->hangUpDialog_ = nullptr;};
        inline bool getHangUpDialog() const { DARABONBA_PTR_GET_DEFAULT(hangUpDialog_, false) };
        inline Delta& setHangUpDialog(bool hangUpDialog) { DARABONBA_PTR_SET_VALUE(hangUpDialog_, hangUpDialog) };


        // intentionCode Field Functions 
        bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
        void deleteIntentionCode() { this->intentionCode_ = nullptr;};
        inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
        inline Delta& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


        // intentionName Field Functions 
        bool hasIntentionName() const { return this->intentionName_ != nullptr;};
        void deleteIntentionName() { this->intentionName_ = nullptr;};
        inline string getIntentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
        inline Delta& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


        // intentionScript Field Functions 
        bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
        void deleteIntentionScript() { this->intentionScript_ = nullptr;};
        inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
        inline Delta& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


        // interrupt Field Functions 
        bool hasInterrupt() const { return this->interrupt_ != nullptr;};
        void deleteInterrupt() { this->interrupt_ = nullptr;};
        inline bool getInterrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
        inline Delta& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


        // recommendIntention Field Functions 
        bool hasRecommendIntention() const { return this->recommendIntention_ != nullptr;};
        void deleteRecommendIntention() { this->recommendIntention_ = nullptr;};
        inline string getRecommendIntention() const { DARABONBA_PTR_GET_DEFAULT(recommendIntention_, "") };
        inline Delta& setRecommendIntention(string recommendIntention) { DARABONBA_PTR_SET_VALUE(recommendIntention_, recommendIntention) };


        // recommendScript Field Functions 
        bool hasRecommendScript() const { return this->recommendScript_ != nullptr;};
        void deleteRecommendScript() { this->recommendScript_ = nullptr;};
        inline string getRecommendScript() const { DARABONBA_PTR_GET_DEFAULT(recommendScript_, "") };
        inline Delta& setRecommendScript(string recommendScript) { DARABONBA_PTR_SET_VALUE(recommendScript_, recommendScript) };


        // selfDirectedScript Field Functions 
        bool hasSelfDirectedScript() const { return this->selfDirectedScript_ != nullptr;};
        void deleteSelfDirectedScript() { this->selfDirectedScript_ = nullptr;};
        inline string getSelfDirectedScript() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScript_, "") };
        inline Delta& setSelfDirectedScript(string selfDirectedScript) { DARABONBA_PTR_SET_VALUE(selfDirectedScript_, selfDirectedScript) };


        // selfDirectedScriptFullContent Field Functions 
        bool hasSelfDirectedScriptFullContent() const { return this->selfDirectedScriptFullContent_ != nullptr;};
        void deleteSelfDirectedScriptFullContent() { this->selfDirectedScriptFullContent_ = nullptr;};
        inline string getSelfDirectedScriptFullContent() const { DARABONBA_PTR_GET_DEFAULT(selfDirectedScriptFullContent_, "") };
        inline Delta& setSelfDirectedScriptFullContent(string selfDirectedScriptFullContent) { DARABONBA_PTR_SET_VALUE(selfDirectedScriptFullContent_, selfDirectedScriptFullContent) };


        // skipCurrentRecognize Field Functions 
        bool hasSkipCurrentRecognize() const { return this->skipCurrentRecognize_ != nullptr;};
        void deleteSkipCurrentRecognize() { this->skipCurrentRecognize_ = nullptr;};
        inline bool getSkipCurrentRecognize() const { DARABONBA_PTR_GET_DEFAULT(skipCurrentRecognize_, false) };
        inline Delta& setSkipCurrentRecognize(bool skipCurrentRecognize) { DARABONBA_PTR_SET_VALUE(skipCurrentRecognize_, skipCurrentRecognize) };


      protected:
        shared_ptr<string> analysisProcess_ {};
        // time
        shared_ptr<string> callTime_ {};
        shared_ptr<bool> hangUpDialog_ {};
        shared_ptr<string> intentionCode_ {};
        shared_ptr<string> intentionName_ {};
        shared_ptr<string> intentionScript_ {};
        shared_ptr<bool> interrupt_ {};
        shared_ptr<string> recommendIntention_ {};
        shared_ptr<string> recommendScript_ {};
        shared_ptr<string> selfDirectedScript_ {};
        shared_ptr<string> selfDirectedScriptFullContent_ {};
        shared_ptr<bool> skipCurrentRecognize_ {};
      };

      virtual bool empty() const override { return this->delta_ == nullptr
        && this->finishReason_ == nullptr && this->index_ == nullptr && this->message_ == nullptr; };
      // delta Field Functions 
      bool hasDelta() const { return this->delta_ != nullptr;};
      void deleteDelta() { this->delta_ = nullptr;};
      inline const Choices::Delta & getDelta() const { DARABONBA_PTR_GET_CONST(delta_, Choices::Delta) };
      inline Choices::Delta getDelta() { DARABONBA_PTR_GET(delta_, Choices::Delta) };
      inline Choices& setDelta(const Choices::Delta & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
      inline Choices& setDelta(Choices::Delta && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


      // finishReason Field Functions 
      bool hasFinishReason() const { return this->finishReason_ != nullptr;};
      void deleteFinishReason() { this->finishReason_ = nullptr;};
      inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
      inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Choices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const Choices::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Choices::Message) };
      inline Choices::Message getMessage() { DARABONBA_PTR_GET(message_, Choices::Message) };
      inline Choices& setMessage(const Choices::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Choices& setMessage(Choices::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<Choices::Delta> delta_ {};
      shared_ptr<string> finishReason_ {};
      shared_ptr<int32_t> index_ {};
      shared_ptr<Choices::Message> message_ {};
    };

    virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->id_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<RealTimeDialogResponseBody::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<RealTimeDialogResponseBody::Choices>) };
    inline vector<RealTimeDialogResponseBody::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<RealTimeDialogResponseBody::Choices>) };
    inline RealTimeDialogResponseBody& setChoices(const vector<RealTimeDialogResponseBody::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline RealTimeDialogResponseBody& setChoices(vector<RealTimeDialogResponseBody::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline RealTimeDialogResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RealTimeDialogResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealTimeDialogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RealTimeDialogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<RealTimeDialogResponseBody::Choices>> choices_ {};
    shared_ptr<string> created_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
