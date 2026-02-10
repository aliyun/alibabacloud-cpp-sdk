// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTaskResultResponseBody() = default ;
    GetTaskResultResponseBody(const GetTaskResultResponseBody &) = default ;
    GetTaskResultResponseBody(GetTaskResultResponseBody &&) = default ;
    GetTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResultResponseBody() = default ;
    GetTaskResultResponseBody& operator=(const GetTaskResultResponseBody &) = default ;
    GetTaskResultResponseBody& operator=(GetTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(asrResult, asrResult_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(ragErrorMessage, ragErrorMessage_);
        DARABONBA_PTR_TO_JSON(ragResult, ragResult_);
        DARABONBA_PTR_TO_JSON(ragStatus, ragStatus_);
        DARABONBA_PTR_TO_JSON(taskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(text, text_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(asrResult, asrResult_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(ragErrorMessage, ragErrorMessage_);
        DARABONBA_PTR_FROM_JSON(ragResult, ragResult_);
        DARABONBA_PTR_FROM_JSON(ragStatus, ragStatus_);
        DARABONBA_PTR_FROM_JSON(taskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(text, text_);
        DARABONBA_PTR_FROM_JSON(usage, usage_);
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

      class AsrResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AsrResult& obj) { 
          DARABONBA_PTR_TO_JSON(begin, begin_);
          DARABONBA_PTR_TO_JSON(emotionValue, emotionValue_);
          DARABONBA_PTR_TO_JSON(end, end_);
          DARABONBA_PTR_TO_JSON(role, role_);
          DARABONBA_PTR_TO_JSON(roleName, roleName_);
          DARABONBA_PTR_TO_JSON(speechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(words, words_);
        };
        friend void from_json(const Darabonba::Json& j, AsrResult& obj) { 
          DARABONBA_PTR_FROM_JSON(begin, begin_);
          DARABONBA_PTR_FROM_JSON(emotionValue, emotionValue_);
          DARABONBA_PTR_FROM_JSON(end, end_);
          DARABONBA_PTR_FROM_JSON(role, role_);
          DARABONBA_PTR_FROM_JSON(roleName, roleName_);
          DARABONBA_PTR_FROM_JSON(speechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(words, words_);
        };
        AsrResult() = default ;
        AsrResult(const AsrResult &) = default ;
        AsrResult(AsrResult &&) = default ;
        AsrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AsrResult() = default ;
        AsrResult& operator=(const AsrResult &) = default ;
        AsrResult& operator=(AsrResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->role_ == nullptr && this->roleName_ == nullptr && this->speechRate_ == nullptr
        && this->words_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
        inline AsrResult& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // emotionValue Field Functions 
        bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
        void deleteEmotionValue() { this->emotionValue_ = nullptr;};
        inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
        inline AsrResult& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline AsrResult& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline AsrResult& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline AsrResult& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
        inline AsrResult& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // words Field Functions 
        bool hasWords() const { return this->words_ != nullptr;};
        void deleteWords() { this->words_ = nullptr;};
        inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
        inline AsrResult& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


      protected:
        shared_ptr<int64_t> begin_ {};
        shared_ptr<int32_t> emotionValue_ {};
        shared_ptr<int64_t> end_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<int32_t> speechRate_ {};
        shared_ptr<string> words_ {};
      };

      virtual bool empty() const override { return this->asrResult_ == nullptr
        && this->extra_ == nullptr && this->ragErrorMessage_ == nullptr && this->ragResult_ == nullptr && this->ragStatus_ == nullptr && this->taskErrorMessage_ == nullptr
        && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->text_ == nullptr && this->usage_ == nullptr; };
      // asrResult Field Functions 
      bool hasAsrResult() const { return this->asrResult_ != nullptr;};
      void deleteAsrResult() { this->asrResult_ = nullptr;};
      inline const vector<Data::AsrResult> & getAsrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<Data::AsrResult>) };
      inline vector<Data::AsrResult> getAsrResult() { DARABONBA_PTR_GET(asrResult_, vector<Data::AsrResult>) };
      inline Data& setAsrResult(const vector<Data::AsrResult> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
      inline Data& setAsrResult(vector<Data::AsrResult> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // ragErrorMessage Field Functions 
      bool hasRagErrorMessage() const { return this->ragErrorMessage_ != nullptr;};
      void deleteRagErrorMessage() { this->ragErrorMessage_ = nullptr;};
      inline string getRagErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(ragErrorMessage_, "") };
      inline Data& setRagErrorMessage(string ragErrorMessage) { DARABONBA_PTR_SET_VALUE(ragErrorMessage_, ragErrorMessage) };


      // ragResult Field Functions 
      bool hasRagResult() const { return this->ragResult_ != nullptr;};
      void deleteRagResult() { this->ragResult_ = nullptr;};
      inline string getRagResult() const { DARABONBA_PTR_GET_DEFAULT(ragResult_, "") };
      inline Data& setRagResult(string ragResult) { DARABONBA_PTR_SET_VALUE(ragResult_, ragResult) };


      // ragStatus Field Functions 
      bool hasRagStatus() const { return this->ragStatus_ != nullptr;};
      void deleteRagStatus() { this->ragStatus_ = nullptr;};
      inline string getRagStatus() const { DARABONBA_PTR_GET_DEFAULT(ragStatus_, "") };
      inline Data& setRagStatus(string ragStatus) { DARABONBA_PTR_SET_VALUE(ragStatus_, ragStatus) };


      // taskErrorMessage Field Functions 
      bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
      void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
      inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
      inline Data& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<vector<Data::AsrResult>> asrResult_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> ragErrorMessage_ {};
      shared_ptr<string> ragResult_ {};
      shared_ptr<string> ragStatus_ {};
      shared_ptr<string> taskErrorMessage_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
      shared_ptr<string> text_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTaskResultResponseBody::Data) };
    inline GetTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTaskResultResponseBody::Data) };
    inline GetTaskResultResponseBody& setData(const GetTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTaskResultResponseBody& setData(GetTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetTaskResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetTaskResultResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
