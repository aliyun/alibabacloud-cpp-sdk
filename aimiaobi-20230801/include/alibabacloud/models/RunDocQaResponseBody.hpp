// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocQaResponseBody() = default ;
    RunDocQaResponseBody(const RunDocQaResponseBody &) = default ;
    RunDocQaResponseBody(RunDocQaResponseBody &&) = default ;
    RunDocQaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBody() = default ;
    RunDocQaResponseBody& operator=(const RunDocQaResponseBody &) = default ;
    RunDocQaResponseBody& operator=(RunDocQaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
        virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<int64_t> totalTokens_ {};
      };

      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(InterveneContent, interveneContent_);
          DARABONBA_PTR_TO_JSON(IsReject, isReject_);
          DARABONBA_PTR_TO_JSON(MediaUrlList, mediaUrlList_);
          DARABONBA_PTR_TO_JSON(Recommends, recommends_);
          DARABONBA_PTR_TO_JSON(References, references_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(InterveneContent, interveneContent_);
          DARABONBA_PTR_FROM_JSON(IsReject, isReject_);
          DARABONBA_PTR_FROM_JSON(MediaUrlList, mediaUrlList_);
          DARABONBA_PTR_FROM_JSON(Recommends, recommends_);
          DARABONBA_PTR_FROM_JSON(References, references_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class References : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const References& obj) { 
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(SourceDocId, sourceDocId_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, References& obj) { 
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(SourceDocId, sourceDocId_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          References() = default ;
          References(const References &) = default ;
          References(References &&) = default ;
          References(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~References() = default ;
          References& operator=(const References &) = default ;
          References& operator=(References &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->pubTime_ == nullptr
        && this->source_ == nullptr && this->sourceDocId_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline References& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline References& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // sourceDocId Field Functions 
          bool hasSourceDocId() const { return this->sourceDocId_ != nullptr;};
          void deleteSourceDocId() { this->sourceDocId_ = nullptr;};
          inline string getSourceDocId() const { DARABONBA_PTR_GET_DEFAULT(sourceDocId_, "") };
          inline References& setSourceDocId(string sourceDocId) { DARABONBA_PTR_SET_VALUE(sourceDocId_, sourceDocId) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline References& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline References& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> sourceDocId_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        class Recommends : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Recommends& obj) { 
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Recommends& obj) { 
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Recommends() = default ;
          Recommends(const Recommends &) = default ;
          Recommends(Recommends &&) = default ;
          Recommends(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Recommends() = default ;
          Recommends& operator=(const Recommends &) = default ;
          Recommends& operator=(Recommends &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->title_ == nullptr
        && this->url_ == nullptr; };
          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Recommends& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Recommends& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        class MediaUrlList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediaUrlList& obj) { 
            DARABONBA_PTR_TO_JSON(ClipInfos, clipInfos_);
            DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          };
          friend void from_json(const Darabonba::Json& j, MediaUrlList& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipInfos, clipInfos_);
            DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          };
          MediaUrlList() = default ;
          MediaUrlList(const MediaUrlList &) = default ;
          MediaUrlList(MediaUrlList &&) = default ;
          MediaUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediaUrlList() = default ;
          MediaUrlList& operator=(const MediaUrlList &) = default ;
          MediaUrlList& operator=(MediaUrlList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ClipInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ClipInfos& obj) { 
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(To, to_);
            };
            friend void from_json(const Darabonba::Json& j, ClipInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(To, to_);
            };
            ClipInfos() = default ;
            ClipInfos(const ClipInfos &) = default ;
            ClipInfos(ClipInfos &&) = default ;
            ClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ClipInfos() = default ;
            ClipInfos& operator=(const ClipInfos &) = default ;
            ClipInfos& operator=(ClipInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
            inline ClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
            inline ClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


          protected:
            shared_ptr<double> from_ {};
            shared_ptr<double> to_ {};
          };

          virtual bool empty() const override { return this->clipInfos_ == nullptr
        && this->fileUrl_ == nullptr && this->mediaType_ == nullptr; };
          // clipInfos Field Functions 
          bool hasClipInfos() const { return this->clipInfos_ != nullptr;};
          void deleteClipInfos() { this->clipInfos_ = nullptr;};
          inline const vector<MediaUrlList::ClipInfos> & getClipInfos() const { DARABONBA_PTR_GET_CONST(clipInfos_, vector<MediaUrlList::ClipInfos>) };
          inline vector<MediaUrlList::ClipInfos> getClipInfos() { DARABONBA_PTR_GET(clipInfos_, vector<MediaUrlList::ClipInfos>) };
          inline MediaUrlList& setClipInfos(const vector<MediaUrlList::ClipInfos> & clipInfos) { DARABONBA_PTR_SET_VALUE(clipInfos_, clipInfos) };
          inline MediaUrlList& setClipInfos(vector<MediaUrlList::ClipInfos> && clipInfos) { DARABONBA_PTR_SET_RVALUE(clipInfos_, clipInfos) };


          // fileUrl Field Functions 
          bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
          void deleteFileUrl() { this->fileUrl_ = nullptr;};
          inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
          inline MediaUrlList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
          inline MediaUrlList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        protected:
          shared_ptr<vector<MediaUrlList::ClipInfos>> clipInfos_ {};
          shared_ptr<string> fileUrl_ {};
          shared_ptr<string> mediaType_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->interveneContent_ == nullptr && this->isReject_ == nullptr && this->mediaUrlList_ == nullptr && this->recommends_ == nullptr && this->references_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Output& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // interveneContent Field Functions 
        bool hasInterveneContent() const { return this->interveneContent_ != nullptr;};
        void deleteInterveneContent() { this->interveneContent_ = nullptr;};
        inline string getInterveneContent() const { DARABONBA_PTR_GET_DEFAULT(interveneContent_, "") };
        inline Output& setInterveneContent(string interveneContent) { DARABONBA_PTR_SET_VALUE(interveneContent_, interveneContent) };


        // isReject Field Functions 
        bool hasIsReject() const { return this->isReject_ != nullptr;};
        void deleteIsReject() { this->isReject_ = nullptr;};
        inline bool getIsReject() const { DARABONBA_PTR_GET_DEFAULT(isReject_, false) };
        inline Output& setIsReject(bool isReject) { DARABONBA_PTR_SET_VALUE(isReject_, isReject) };


        // mediaUrlList Field Functions 
        bool hasMediaUrlList() const { return this->mediaUrlList_ != nullptr;};
        void deleteMediaUrlList() { this->mediaUrlList_ = nullptr;};
        inline const vector<Output::MediaUrlList> & getMediaUrlList() const { DARABONBA_PTR_GET_CONST(mediaUrlList_, vector<Output::MediaUrlList>) };
        inline vector<Output::MediaUrlList> getMediaUrlList() { DARABONBA_PTR_GET(mediaUrlList_, vector<Output::MediaUrlList>) };
        inline Output& setMediaUrlList(const vector<Output::MediaUrlList> & mediaUrlList) { DARABONBA_PTR_SET_VALUE(mediaUrlList_, mediaUrlList) };
        inline Output& setMediaUrlList(vector<Output::MediaUrlList> && mediaUrlList) { DARABONBA_PTR_SET_RVALUE(mediaUrlList_, mediaUrlList) };


        // recommends Field Functions 
        bool hasRecommends() const { return this->recommends_ != nullptr;};
        void deleteRecommends() { this->recommends_ = nullptr;};
        inline const vector<Output::Recommends> & getRecommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Output::Recommends>) };
        inline vector<Output::Recommends> getRecommends() { DARABONBA_PTR_GET(recommends_, vector<Output::Recommends>) };
        inline Output& setRecommends(const vector<Output::Recommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
        inline Output& setRecommends(vector<Output::Recommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


        // references Field Functions 
        bool hasReferences() const { return this->references_ != nullptr;};
        void deleteReferences() { this->references_ = nullptr;};
        inline const vector<Output::References> & getReferences() const { DARABONBA_PTR_GET_CONST(references_, vector<Output::References>) };
        inline vector<Output::References> getReferences() { DARABONBA_PTR_GET(references_, vector<Output::References>) };
        inline Output& setReferences(const vector<Output::References> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
        inline Output& setReferences(vector<Output::References> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> interveneContent_ {};
        shared_ptr<bool> isReject_ {};
        shared_ptr<vector<Output::MediaUrlList>> mediaUrlList_ {};
        shared_ptr<vector<Output::Recommends>> recommends_ {};
        shared_ptr<vector<Output::References>> references_ {};
      };

      virtual bool empty() const override { return this->output_ == nullptr
        && this->usage_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
      inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
      inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Payload::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Payload::Usage) };
      inline Payload::Usage getUsage() { DARABONBA_PTR_GET(usage_, Payload::Usage) };
      inline Payload& setUsage(const Payload::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Payload& setUsage(Payload::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<Payload::Output> output_ {};
      shared_ptr<Payload::Usage> usage_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      };
      Header() = default ;
      Header(const Header &) = default ;
      Header(Header &&) = default ;
      Header(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Header() = default ;
      Header& operator=(const Header &) = default ;
      Header& operator=(Header &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->eventInfo_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr
        && this->traceId_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Header& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Header& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // eventInfo Field Functions 
      bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
      void deleteEventInfo() { this->eventInfo_ = nullptr;};
      inline string getEventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
      inline Header& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Header& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Header& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Header& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> event_ {};
      shared_ptr<string> eventInfo_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocQaResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunDocQaResponseBody::Header) };
    inline RunDocQaResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunDocQaResponseBody::Header) };
    inline RunDocQaResponseBody& setHeader(const RunDocQaResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocQaResponseBody& setHeader(RunDocQaResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocQaResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocQaResponseBody::Payload) };
    inline RunDocQaResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunDocQaResponseBody::Payload) };
    inline RunDocQaResponseBody& setPayload(const RunDocQaResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocQaResponseBody& setPayload(RunDocQaResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocQaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunDocQaResponseBody::Header> header_ {};
    shared_ptr<RunDocQaResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
