// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(ragStatus, ragStatus_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(ragStatus, ragStatus_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunCompletionResponseBody() = default ;
    RunCompletionResponseBody(const RunCompletionResponseBody &) = default ;
    RunCompletionResponseBody(RunCompletionResponseBody &&) = default ;
    RunCompletionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionResponseBody() = default ;
    RunCompletionResponseBody& operator=(const RunCompletionResponseBody &) = default ;
    RunCompletionResponseBody& operator=(RunCompletionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(rag, rag_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(rag, rag_);
      };
      Usage() = default ;
      Usage(const Usage &) = default ;
      Usage(Usage &&) = default ;
      Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Usage() = default ;
      Usage& operator=(const Usage &) = default ;
      Usage& operator=(Usage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rag& obj) { 
          DARABONBA_PTR_TO_JSON(adaptive, adaptive_);
          DARABONBA_PTR_TO_JSON(dialogSummary, dialogSummary_);
        };
        friend void from_json(const Darabonba::Json& j, Rag& obj) { 
          DARABONBA_PTR_FROM_JSON(adaptive, adaptive_);
          DARABONBA_PTR_FROM_JSON(dialogSummary, dialogSummary_);
        };
        Rag() = default ;
        Rag(const Rag &) = default ;
        Rag(Rag &&) = default ;
        Rag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rag() = default ;
        Rag& operator=(const Rag &) = default ;
        Rag& operator=(Rag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DialogSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DialogSummary& obj) { 
            DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_TO_JSON(invokeCount, invokeCount_);
            DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          };
          friend void from_json(const Darabonba::Json& j, DialogSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_FROM_JSON(invokeCount, invokeCount_);
            DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          };
          DialogSummary() = default ;
          DialogSummary(const DialogSummary &) = default ;
          DialogSummary(DialogSummary &&) = default ;
          DialogSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DialogSummary() = default ;
          DialogSummary& operator=(const DialogSummary &) = default ;
          DialogSummary& operator=(DialogSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->invokeCount_ == nullptr && this->outputTokens_ == nullptr; };
          // inputTokens Field Functions 
          bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
          void deleteInputTokens() { this->inputTokens_ = nullptr;};
          inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
          inline DialogSummary& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


          // invokeCount Field Functions 
          bool hasInvokeCount() const { return this->invokeCount_ != nullptr;};
          void deleteInvokeCount() { this->invokeCount_ = nullptr;};
          inline int32_t getInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(invokeCount_, 0) };
          inline DialogSummary& setInvokeCount(int32_t invokeCount) { DARABONBA_PTR_SET_VALUE(invokeCount_, invokeCount) };


          // outputTokens Field Functions 
          bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
          void deleteOutputTokens() { this->outputTokens_ = nullptr;};
          inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
          inline DialogSummary& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        protected:
          shared_ptr<int32_t> inputTokens_ {};
          shared_ptr<int32_t> invokeCount_ {};
          shared_ptr<int32_t> outputTokens_ {};
        };

        class Adaptive : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Adaptive& obj) { 
            DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_TO_JSON(invokeCount, invokeCount_);
            DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
          };
          friend void from_json(const Darabonba::Json& j, Adaptive& obj) { 
            DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_FROM_JSON(invokeCount, invokeCount_);
            DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
          };
          Adaptive() = default ;
          Adaptive(const Adaptive &) = default ;
          Adaptive(Adaptive &&) = default ;
          Adaptive(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Adaptive() = default ;
          Adaptive& operator=(const Adaptive &) = default ;
          Adaptive& operator=(Adaptive &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->invokeCount_ == nullptr && this->outputTokens_ == nullptr; };
          // inputTokens Field Functions 
          bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
          void deleteInputTokens() { this->inputTokens_ = nullptr;};
          inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
          inline Adaptive& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


          // invokeCount Field Functions 
          bool hasInvokeCount() const { return this->invokeCount_ != nullptr;};
          void deleteInvokeCount() { this->invokeCount_ = nullptr;};
          inline int32_t getInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(invokeCount_, 0) };
          inline Adaptive& setInvokeCount(int32_t invokeCount) { DARABONBA_PTR_SET_VALUE(invokeCount_, invokeCount) };


          // outputTokens Field Functions 
          bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
          void deleteOutputTokens() { this->outputTokens_ = nullptr;};
          inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
          inline Adaptive& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        protected:
          shared_ptr<int32_t> inputTokens_ {};
          shared_ptr<int32_t> invokeCount_ {};
          shared_ptr<int32_t> outputTokens_ {};
        };

        virtual bool empty() const override { return this->adaptive_ == nullptr
        && this->dialogSummary_ == nullptr; };
        // adaptive Field Functions 
        bool hasAdaptive() const { return this->adaptive_ != nullptr;};
        void deleteAdaptive() { this->adaptive_ = nullptr;};
        inline const Rag::Adaptive & getAdaptive() const { DARABONBA_PTR_GET_CONST(adaptive_, Rag::Adaptive) };
        inline Rag::Adaptive getAdaptive() { DARABONBA_PTR_GET(adaptive_, Rag::Adaptive) };
        inline Rag& setAdaptive(const Rag::Adaptive & adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };
        inline Rag& setAdaptive(Rag::Adaptive && adaptive) { DARABONBA_PTR_SET_RVALUE(adaptive_, adaptive) };


        // dialogSummary Field Functions 
        bool hasDialogSummary() const { return this->dialogSummary_ != nullptr;};
        void deleteDialogSummary() { this->dialogSummary_ = nullptr;};
        inline const Rag::DialogSummary & getDialogSummary() const { DARABONBA_PTR_GET_CONST(dialogSummary_, Rag::DialogSummary) };
        inline Rag::DialogSummary getDialogSummary() { DARABONBA_PTR_GET(dialogSummary_, Rag::DialogSummary) };
        inline Rag& setDialogSummary(const Rag::DialogSummary & dialogSummary) { DARABONBA_PTR_SET_VALUE(dialogSummary_, dialogSummary) };
        inline Rag& setDialogSummary(Rag::DialogSummary && dialogSummary) { DARABONBA_PTR_SET_RVALUE(dialogSummary_, dialogSummary) };


      protected:
        shared_ptr<Rag::Adaptive> adaptive_ {};
        shared_ptr<Rag::DialogSummary> dialogSummary_ {};
      };

      virtual bool empty() const override { return this->rag_ == nullptr; };
      // rag Field Functions 
      bool hasRag() const { return this->rag_ != nullptr;};
      void deleteRag() { this->rag_ = nullptr;};
      inline const Usage::Rag & getRag() const { DARABONBA_PTR_GET_CONST(rag_, Usage::Rag) };
      inline Usage::Rag getRag() { DARABONBA_PTR_GET(rag_, Usage::Rag) };
      inline Usage& setRag(const Usage::Rag & rag) { DARABONBA_PTR_SET_VALUE(rag_, rag) };
      inline Usage& setRag(Usage::Rag && rag) { DARABONBA_PTR_SET_RVALUE(rag_, rag) };


    protected:
      shared_ptr<Usage::Rag> rag_ {};
    };

    virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->requestId_ == nullptr && this->text_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->ragStatus_ == nullptr
        && this->totalTokens_ == nullptr && this->usage_ == nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline RunCompletionResponseBody& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCompletionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunCompletionResponseBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline string getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, "") };
    inline RunCompletionResponseBody& setInputTokens(string inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline string getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, "") };
    inline RunCompletionResponseBody& setOutputTokens(string outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // ragStatus Field Functions 
    bool hasRagStatus() const { return this->ragStatus_ != nullptr;};
    void deleteRagStatus() { this->ragStatus_ = nullptr;};
    inline string getRagStatus() const { DARABONBA_PTR_GET_DEFAULT(ragStatus_, "") };
    inline RunCompletionResponseBody& setRagStatus(string ragStatus) { DARABONBA_PTR_SET_VALUE(ragStatus_, ragStatus) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline string getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, "") };
    inline RunCompletionResponseBody& setTotalTokens(string totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const RunCompletionResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, RunCompletionResponseBody::Usage) };
    inline RunCompletionResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, RunCompletionResponseBody::Usage) };
    inline RunCompletionResponseBody& setUsage(const RunCompletionResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunCompletionResponseBody& setUsage(RunCompletionResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    shared_ptr<string> finishReason_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> inputTokens_ {};
    shared_ptr<string> outputTokens_ {};
    shared_ptr<string> ragStatus_ {};
    shared_ptr<string> totalTokens_ {};
    shared_ptr<RunCompletionResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
