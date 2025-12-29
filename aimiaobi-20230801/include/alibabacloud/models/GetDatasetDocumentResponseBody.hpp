// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODY_HPP_
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
  class GetDatasetDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatasetDocumentResponseBody() = default ;
    GetDatasetDocumentResponseBody(const GetDatasetDocumentResponseBody &) = default ;
    GetDatasetDocumentResponseBody(GetDatasetDocumentResponseBody &&) = default ;
    GetDatasetDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetDocumentResponseBody() = default ;
    GetDatasetDocumentResponseBody& operator=(const GetDatasetDocumentResponseBody &) = default ;
    GetDatasetDocumentResponseBody& operator=(GetDatasetDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(AsrSentences, asrSentences_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(VideoShots, videoShots_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrSentences, asrSentences_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(VideoShots, videoShots_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoShots : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoShots& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, VideoShots& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          VideoShots() = default ;
          VideoShots(const VideoShots &) = default ;
          VideoShots(VideoShots &&) = default ;
          VideoShots(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoShots() = default ;
          VideoShots& operator=(const VideoShots &) = default ;
          VideoShots& operator=(VideoShots &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->text_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline VideoShots& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline VideoShots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline VideoShots& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> text_ {};
        };

        class AsrSentences : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsrSentences& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, AsrSentences& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          AsrSentences() = default ;
          AsrSentences(const AsrSentences &) = default ;
          AsrSentences(AsrSentences &&) = default ;
          AsrSentences(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsrSentences() = default ;
          AsrSentences& operator=(const AsrSentences &) = default ;
          AsrSentences& operator=(AsrSentences &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->text_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline AsrSentences& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline AsrSentences& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline AsrSentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> startTime_ {};
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->asrSentences_ == nullptr
        && this->text_ == nullptr && this->videoShots_ == nullptr; };
        // asrSentences Field Functions 
        bool hasAsrSentences() const { return this->asrSentences_ != nullptr;};
        void deleteAsrSentences() { this->asrSentences_ = nullptr;};
        inline const vector<Metadata::AsrSentences> & getAsrSentences() const { DARABONBA_PTR_GET_CONST(asrSentences_, vector<Metadata::AsrSentences>) };
        inline vector<Metadata::AsrSentences> getAsrSentences() { DARABONBA_PTR_GET(asrSentences_, vector<Metadata::AsrSentences>) };
        inline Metadata& setAsrSentences(const vector<Metadata::AsrSentences> & asrSentences) { DARABONBA_PTR_SET_VALUE(asrSentences_, asrSentences) };
        inline Metadata& setAsrSentences(vector<Metadata::AsrSentences> && asrSentences) { DARABONBA_PTR_SET_RVALUE(asrSentences_, asrSentences) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Metadata& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // videoShots Field Functions 
        bool hasVideoShots() const { return this->videoShots_ != nullptr;};
        void deleteVideoShots() { this->videoShots_ = nullptr;};
        inline const vector<Metadata::VideoShots> & getVideoShots() const { DARABONBA_PTR_GET_CONST(videoShots_, vector<Metadata::VideoShots>) };
        inline vector<Metadata::VideoShots> getVideoShots() { DARABONBA_PTR_GET(videoShots_, vector<Metadata::VideoShots>) };
        inline Metadata& setVideoShots(const vector<Metadata::VideoShots> & videoShots) { DARABONBA_PTR_SET_VALUE(videoShots_, videoShots) };
        inline Metadata& setVideoShots(vector<Metadata::VideoShots> && videoShots) { DARABONBA_PTR_SET_RVALUE(videoShots_, videoShots) };


      protected:
        shared_ptr<vector<Metadata::AsrSentences>> asrSentences_ {};
        shared_ptr<string> text_ {};
        shared_ptr<vector<Metadata::VideoShots>> videoShots_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->disableHandleMultimodalMedia_ == nullptr && this->docId_ == nullptr && this->docType_ == nullptr && this->docUuid_ == nullptr && this->metadata_ == nullptr
        && this->pubTime_ == nullptr && this->sourceFrom_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // disableHandleMultimodalMedia Field Functions 
      bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
      void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
      inline bool getDisableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
      inline Data& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Data& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Data& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Data::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Data::Metadata) };
      inline Data::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Data::Metadata) };
      inline Data& setMetadata(const Data::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Data& setMetadata(Data::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Data& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // sourceFrom Field Functions 
      bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
      void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
      inline string getSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
      inline Data& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<bool> disableHandleMultimodalMedia_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<Data::Metadata> metadata_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> sourceFrom_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDatasetDocumentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDatasetDocumentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDatasetDocumentResponseBody::Data) };
    inline GetDatasetDocumentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDatasetDocumentResponseBody::Data) };
    inline GetDatasetDocumentResponseBody& setData(const GetDatasetDocumentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDatasetDocumentResponseBody& setData(GetDatasetDocumentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDatasetDocumentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDatasetDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatasetDocumentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDatasetDocumentResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
