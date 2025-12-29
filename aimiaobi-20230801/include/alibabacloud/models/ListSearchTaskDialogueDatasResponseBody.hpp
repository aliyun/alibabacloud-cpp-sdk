// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODY_HPP_
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
  class ListSearchTaskDialogueDatasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialogueDatasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Audios, audios_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealtimeSearch, realtimeSearch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Videos, videos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialogueDatasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Audios, audios_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealtimeSearch, realtimeSearch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Videos, videos_);
    };
    ListSearchTaskDialogueDatasResponseBody() = default ;
    ListSearchTaskDialogueDatasResponseBody(const ListSearchTaskDialogueDatasResponseBody &) = default ;
    ListSearchTaskDialogueDatasResponseBody(ListSearchTaskDialogueDatasResponseBody &&) = default ;
    ListSearchTaskDialogueDatasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialogueDatasResponseBody() = default ;
    ListSearchTaskDialogueDatasResponseBody& operator=(const ListSearchTaskDialogueDatasResponseBody &) = default ;
    ListSearchTaskDialogueDatasResponseBody& operator=(ListSearchTaskDialogueDatasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Videos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Videos& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      };
      friend void from_json(const Darabonba::Json& j, Videos& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      };
      Videos() = default ;
      Videos(const Videos &) = default ;
      Videos(Videos &&) = default ;
      Videos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Videos() = default ;
      Videos& operator=(const Videos &) = default ;
      Videos& operator=(Videos &&) = default ;
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
      inline Videos& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline Videos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline Videos& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    protected:
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> mediaType_ {};
    };

    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
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
      inline Images& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline Images& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline Images& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    protected:
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> mediaType_ {};
    };

    class Audios : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Audios& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, Audios& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      Audios() = default ;
      Audios(const Audios &) = default ;
      Audios(Audios &&) = default ;
      Audios(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Audios() = default ;
      Audios& operator=(const Audios &) = default ;
      Audios& operator=(Audios &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->mediaId_ == nullptr; };
      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Audios& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline Audios& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> mediaId_ {};
    };

    class Articles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Articles& obj) { 
        DARABONBA_PTR_TO_JSON(Author, author_);
        DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Extend1, extend1_);
        DARABONBA_PTR_TO_JSON(Extend2, extend2_);
        DARABONBA_PTR_TO_JSON(Extend3, extend3_);
        DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Articles& obj) { 
        DARABONBA_PTR_FROM_JSON(Author, author_);
        DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
        DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
        DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
        DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Articles() = default ;
      Articles(const Articles &) = default ;
      Articles(Articles &&) = default ;
      Articles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Articles() = default ;
      Articles& operator=(const Articles &) = default ;
      Articles& operator=(Articles &&) = default ;
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

      virtual bool empty() const override { return this->author_ == nullptr
        && this->categoryUuid_ == nullptr && this->content_ == nullptr && this->docId_ == nullptr && this->docType_ == nullptr && this->docUuid_ == nullptr
        && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->multimodalMedias_ == nullptr && this->pubTime_ == nullptr
        && this->source_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // author Field Functions 
      bool hasAuthor() const { return this->author_ != nullptr;};
      void deleteAuthor() { this->author_ = nullptr;};
      inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
      inline Articles& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


      // categoryUuid Field Functions 
      bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
      void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
      inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
      inline Articles& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Articles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Articles& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Articles& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Articles& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // extend1 Field Functions 
      bool hasExtend1() const { return this->extend1_ != nullptr;};
      void deleteExtend1() { this->extend1_ = nullptr;};
      inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
      inline Articles& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


      // extend2 Field Functions 
      bool hasExtend2() const { return this->extend2_ != nullptr;};
      void deleteExtend2() { this->extend2_ = nullptr;};
      inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
      inline Articles& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


      // extend3 Field Functions 
      bool hasExtend3() const { return this->extend3_ != nullptr;};
      void deleteExtend3() { this->extend3_ = nullptr;};
      inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
      inline Articles& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


      // multimodalMedias Field Functions 
      bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
      void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
      inline const vector<Articles::MultimodalMedias> & getMultimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Articles::MultimodalMedias>) };
      inline vector<Articles::MultimodalMedias> getMultimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Articles::MultimodalMedias>) };
      inline Articles& setMultimodalMedias(const vector<Articles::MultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
      inline Articles& setMultimodalMedias(vector<Articles::MultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Articles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Articles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Articles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Articles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Articles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> author_ {};
      shared_ptr<string> categoryUuid_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<string> extend1_ {};
      shared_ptr<string> extend2_ {};
      shared_ptr<string> extend3_ {};
      shared_ptr<vector<Articles::MultimodalMedias>> multimodalMedias_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->articles_ == nullptr
        && this->audios_ == nullptr && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->images_ == nullptr && this->message_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->realtimeSearch_ == nullptr && this->requestId_ == nullptr && this->searchType_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr && this->videos_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBody::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<ListSearchTaskDialogueDatasResponseBody::Articles>) };
    inline vector<ListSearchTaskDialogueDatasResponseBody::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<ListSearchTaskDialogueDatasResponseBody::Articles>) };
    inline ListSearchTaskDialogueDatasResponseBody& setArticles(const vector<ListSearchTaskDialogueDatasResponseBody::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline ListSearchTaskDialogueDatasResponseBody& setArticles(vector<ListSearchTaskDialogueDatasResponseBody::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBody::Audios> & getAudios() const { DARABONBA_PTR_GET_CONST(audios_, vector<ListSearchTaskDialogueDatasResponseBody::Audios>) };
    inline vector<ListSearchTaskDialogueDatasResponseBody::Audios> getAudios() { DARABONBA_PTR_GET(audios_, vector<ListSearchTaskDialogueDatasResponseBody::Audios>) };
    inline ListSearchTaskDialogueDatasResponseBody& setAudios(const vector<ListSearchTaskDialogueDatasResponseBody::Audios> & audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };
    inline ListSearchTaskDialogueDatasResponseBody& setAudios(vector<ListSearchTaskDialogueDatasResponseBody::Audios> && audios) { DARABONBA_PTR_SET_RVALUE(audios_, audios) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBody::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<ListSearchTaskDialogueDatasResponseBody::Images>) };
    inline vector<ListSearchTaskDialogueDatasResponseBody::Images> getImages() { DARABONBA_PTR_GET(images_, vector<ListSearchTaskDialogueDatasResponseBody::Images>) };
    inline ListSearchTaskDialogueDatasResponseBody& setImages(const vector<ListSearchTaskDialogueDatasResponseBody::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListSearchTaskDialogueDatasResponseBody& setImages(vector<ListSearchTaskDialogueDatasResponseBody::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realtimeSearch Field Functions 
    bool hasRealtimeSearch() const { return this->realtimeSearch_ != nullptr;};
    void deleteRealtimeSearch() { this->realtimeSearch_ = nullptr;};
    inline bool getRealtimeSearch() const { DARABONBA_PTR_GET_DEFAULT(realtimeSearch_, false) };
    inline ListSearchTaskDialogueDatasResponseBody& setRealtimeSearch(bool realtimeSearch) { DARABONBA_PTR_SET_VALUE(realtimeSearch_, realtimeSearch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSearchTaskDialogueDatasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // videos Field Functions 
    bool hasVideos() const { return this->videos_ != nullptr;};
    void deleteVideos() { this->videos_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBody::Videos> & getVideos() const { DARABONBA_PTR_GET_CONST(videos_, vector<ListSearchTaskDialogueDatasResponseBody::Videos>) };
    inline vector<ListSearchTaskDialogueDatasResponseBody::Videos> getVideos() { DARABONBA_PTR_GET(videos_, vector<ListSearchTaskDialogueDatasResponseBody::Videos>) };
    inline ListSearchTaskDialogueDatasResponseBody& setVideos(const vector<ListSearchTaskDialogueDatasResponseBody::Videos> & videos) { DARABONBA_PTR_SET_VALUE(videos_, videos) };
    inline ListSearchTaskDialogueDatasResponseBody& setVideos(vector<ListSearchTaskDialogueDatasResponseBody::Videos> && videos) { DARABONBA_PTR_SET_RVALUE(videos_, videos) };


  protected:
    shared_ptr<vector<ListSearchTaskDialogueDatasResponseBody::Articles>> articles_ {};
    shared_ptr<vector<ListSearchTaskDialogueDatasResponseBody::Audios>> audios_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListSearchTaskDialogueDatasResponseBody::Images>> images_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> realtimeSearch_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> searchType_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListSearchTaskDialogueDatasResponseBody::Videos>> videos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
