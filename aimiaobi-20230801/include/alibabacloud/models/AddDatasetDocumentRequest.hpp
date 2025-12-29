// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUEST_HPP_
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
  class AddDatasetDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddDatasetDocumentRequest() = default ;
    AddDatasetDocumentRequest(const AddDatasetDocumentRequest &) = default ;
    AddDatasetDocumentRequest(AddDatasetDocumentRequest &&) = default ;
    AddDatasetDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDocumentRequest() = default ;
    AddDatasetDocumentRequest& operator=(const AddDatasetDocumentRequest &) = default ;
    AddDatasetDocumentRequest& operator=(AddDatasetDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Document : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Document& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Extend1, extend1_);
        DARABONBA_PTR_TO_JSON(Extend2, extend2_);
        DARABONBA_PTR_TO_JSON(Extend3, extend3_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(MultimodalIndexName, multimodalIndexName_);
        DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Document& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
        DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
        DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(MultimodalIndexName, multimodalIndexName_);
        DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Document() = default ;
      Document(const Document &) = default ;
      Document(Document &&) = default ;
      Document(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Document() = default ;
      Document& operator=(const Document &) = default ;
      Document& operator=(Document &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MultimodalMedias : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultimodalMedias& obj) { 
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        };
        friend void from_json(const Darabonba::Json& j, MultimodalMedias& obj) { 
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        };
        MultimodalMedias() = default ;
        MultimodalMedias(const MultimodalMedias &) = default ;
        MultimodalMedias(MultimodalMedias &&) = default ;
        MultimodalMedias(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultimodalMedias() = default ;
        MultimodalMedias& operator=(const MultimodalMedias &) = default ;
        MultimodalMedias& operator=(MultimodalMedias &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr; };
        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline MultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline MultimodalMedias& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline MultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      protected:
        shared_ptr<string> fileUrl_ {};
        shared_ptr<string> mediaId_ {};
        shared_ptr<string> mediaType_ {};
      };

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
        && this->disableHandleMultimodalMedia_ == nullptr && this->docId_ == nullptr && this->docType_ == nullptr && this->docUuid_ == nullptr && this->extend1_ == nullptr
        && this->extend2_ == nullptr && this->extend3_ == nullptr && this->metadata_ == nullptr && this->multimodalIndexName_ == nullptr && this->multimodalMedias_ == nullptr
        && this->pubTime_ == nullptr && this->sourceFrom_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Document& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // disableHandleMultimodalMedia Field Functions 
      bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
      void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
      inline bool getDisableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
      inline Document& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Document& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Document& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Document& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // extend1 Field Functions 
      bool hasExtend1() const { return this->extend1_ != nullptr;};
      void deleteExtend1() { this->extend1_ = nullptr;};
      inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
      inline Document& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


      // extend2 Field Functions 
      bool hasExtend2() const { return this->extend2_ != nullptr;};
      void deleteExtend2() { this->extend2_ = nullptr;};
      inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
      inline Document& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


      // extend3 Field Functions 
      bool hasExtend3() const { return this->extend3_ != nullptr;};
      void deleteExtend3() { this->extend3_ = nullptr;};
      inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
      inline Document& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const Document::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, Document::Metadata) };
      inline Document::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, Document::Metadata) };
      inline Document& setMetadata(const Document::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Document& setMetadata(Document::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // multimodalIndexName Field Functions 
      bool hasMultimodalIndexName() const { return this->multimodalIndexName_ != nullptr;};
      void deleteMultimodalIndexName() { this->multimodalIndexName_ = nullptr;};
      inline string getMultimodalIndexName() const { DARABONBA_PTR_GET_DEFAULT(multimodalIndexName_, "") };
      inline Document& setMultimodalIndexName(string multimodalIndexName) { DARABONBA_PTR_SET_VALUE(multimodalIndexName_, multimodalIndexName) };


      // multimodalMedias Field Functions 
      bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
      void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
      inline const vector<Document::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Document::MultimodalMedias>) };
      inline vector<Document::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Document::MultimodalMedias>) };
      inline Document& setMultimodalMedias(const vector<Document::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
      inline Document& setMultimodalMedias(vector<Document::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Document& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // sourceFrom Field Functions 
      bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
      void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
      inline string getSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
      inline Document& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Document& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Document& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Document& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<bool> disableHandleMultimodalMedia_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<string> extend1_ {};
      shared_ptr<string> extend2_ {};
      shared_ptr<string> extend3_ {};
      shared_ptr<Document::Metadata> metadata_ {};
      shared_ptr<string> multimodalIndexName_ {};
      shared_ptr<vector<Document::MultimodalMedias>> multimodalMedias_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> sourceFrom_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetName_ == nullptr && this->document_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline AddDatasetDocumentRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline AddDatasetDocumentRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const AddDatasetDocumentRequest::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, AddDatasetDocumentRequest::Document) };
    inline AddDatasetDocumentRequest::Document getDocument() { DARABONBA_PTR_GET(document_, AddDatasetDocumentRequest::Document) };
    inline AddDatasetDocumentRequest& setDocument(const AddDatasetDocumentRequest::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline AddDatasetDocumentRequest& setDocument(AddDatasetDocumentRequest::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddDatasetDocumentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    // This parameter is required.
    shared_ptr<AddDatasetDocumentRequest::Document> document_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
