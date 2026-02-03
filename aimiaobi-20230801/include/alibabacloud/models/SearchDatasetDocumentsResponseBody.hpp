// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSRESPONSEBODY_HPP_
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
  class SearchDatasetDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatasetDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatasetDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchDatasetDocumentsResponseBody() = default ;
    SearchDatasetDocumentsResponseBody(const SearchDatasetDocumentsResponseBody &) = default ;
    SearchDatasetDocumentsResponseBody(SearchDatasetDocumentsResponseBody &&) = default ;
    SearchDatasetDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatasetDocumentsResponseBody() = default ;
    SearchDatasetDocumentsResponseBody& operator=(const SearchDatasetDocumentsResponseBody &) = default ;
    SearchDatasetDocumentsResponseBody& operator=(SearchDatasetDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Documents, documents_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Documents, documents_);
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
      class Documents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Documents& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
          DARABONBA_PTR_TO_JSON(Chunk, chunk_);
          DARABONBA_PTR_TO_JSON(ChunkInfos, chunkInfos_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DocId, docId_);
          DARABONBA_PTR_TO_JSON(DocType, docType_);
          DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_TO_JSON(Extend1, extend1_);
          DARABONBA_PTR_TO_JSON(Extend2, extend2_);
          DARABONBA_PTR_TO_JSON(Extend3, extend3_);
          DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(SearchSource, searchSource_);
          DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
          DARABONBA_PTR_TO_JSON(SearchSourceType, searchSourceType_);
          DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
          DARABONBA_PTR_FROM_JSON(Chunk, chunk_);
          DARABONBA_PTR_FROM_JSON(ChunkInfos, chunkInfos_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DocId, docId_);
          DARABONBA_PTR_FROM_JSON(DocType, docType_);
          DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
          DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
          DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
          DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
          DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SearchSource, searchSource_);
          DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
          DARABONBA_PTR_FROM_JSON(SearchSourceType, searchSourceType_);
          DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Documents() = default ;
        Documents(const Documents &) = default ;
        Documents(Documents &&) = default ;
        Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Documents() = default ;
        Documents& operator=(const Documents &) = default ;
        Documents& operator=(Documents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChunkInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChunkInfos& obj) { 
            DARABONBA_PTR_TO_JSON(Chunk, chunk_);
            DARABONBA_PTR_TO_JSON(Score, score_);
          };
          friend void from_json(const Darabonba::Json& j, ChunkInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(Chunk, chunk_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
          };
          ChunkInfos() = default ;
          ChunkInfos(const ChunkInfos &) = default ;
          ChunkInfos(ChunkInfos &&) = default ;
          ChunkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChunkInfos() = default ;
          ChunkInfos& operator=(const ChunkInfos &) = default ;
          ChunkInfos& operator=(ChunkInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->chunk_ == nullptr
        && this->score_ == nullptr; };
          // chunk Field Functions 
          bool hasChunk() const { return this->chunk_ != nullptr;};
          void deleteChunk() { this->chunk_ = nullptr;};
          inline string getChunk() const { DARABONBA_PTR_GET_DEFAULT(chunk_, "") };
          inline ChunkInfos& setChunk(string chunk) { DARABONBA_PTR_SET_VALUE(chunk_, chunk) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline ChunkInfos& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        protected:
          shared_ptr<string> chunk_ {};
          shared_ptr<double> score_ {};
        };

        virtual bool empty() const override { return this->categoryUuid_ == nullptr
        && this->chunk_ == nullptr && this->chunkInfos_ == nullptr && this->content_ == nullptr && this->docId_ == nullptr && this->docType_ == nullptr
        && this->docUuid_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->pubTime_ == nullptr
        && this->score_ == nullptr && this->searchSource_ == nullptr && this->searchSourceName_ == nullptr && this->searchSourceType_ == nullptr && this->sourceFrom_ == nullptr
        && this->summary_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
        // categoryUuid Field Functions 
        bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
        void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
        inline string getCategoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
        inline Documents& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


        // chunk Field Functions 
        bool hasChunk() const { return this->chunk_ != nullptr;};
        void deleteChunk() { this->chunk_ = nullptr;};
        inline string getChunk() const { DARABONBA_PTR_GET_DEFAULT(chunk_, "") };
        inline Documents& setChunk(string chunk) { DARABONBA_PTR_SET_VALUE(chunk_, chunk) };


        // chunkInfos Field Functions 
        bool hasChunkInfos() const { return this->chunkInfos_ != nullptr;};
        void deleteChunkInfos() { this->chunkInfos_ = nullptr;};
        inline const vector<Documents::ChunkInfos> & getChunkInfos() const { DARABONBA_PTR_GET_CONST(chunkInfos_, vector<Documents::ChunkInfos>) };
        inline vector<Documents::ChunkInfos> getChunkInfos() { DARABONBA_PTR_GET(chunkInfos_, vector<Documents::ChunkInfos>) };
        inline Documents& setChunkInfos(const vector<Documents::ChunkInfos> & chunkInfos) { DARABONBA_PTR_SET_VALUE(chunkInfos_, chunkInfos) };
        inline Documents& setChunkInfos(vector<Documents::ChunkInfos> && chunkInfos) { DARABONBA_PTR_SET_RVALUE(chunkInfos_, chunkInfos) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Documents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Documents& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // docType Field Functions 
        bool hasDocType() const { return this->docType_ != nullptr;};
        void deleteDocType() { this->docType_ = nullptr;};
        inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
        inline Documents& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


        // docUuid Field Functions 
        bool hasDocUuid() const { return this->docUuid_ != nullptr;};
        void deleteDocUuid() { this->docUuid_ = nullptr;};
        inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
        inline Documents& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


        // extend1 Field Functions 
        bool hasExtend1() const { return this->extend1_ != nullptr;};
        void deleteExtend1() { this->extend1_ = nullptr;};
        inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
        inline Documents& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


        // extend2 Field Functions 
        bool hasExtend2() const { return this->extend2_ != nullptr;};
        void deleteExtend2() { this->extend2_ = nullptr;};
        inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
        inline Documents& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


        // extend3 Field Functions 
        bool hasExtend3() const { return this->extend3_ != nullptr;};
        void deleteExtend3() { this->extend3_ = nullptr;};
        inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
        inline Documents& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


        // pubTime Field Functions 
        bool hasPubTime() const { return this->pubTime_ != nullptr;};
        void deletePubTime() { this->pubTime_ = nullptr;};
        inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
        inline Documents& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Documents& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // searchSource Field Functions 
        bool hasSearchSource() const { return this->searchSource_ != nullptr;};
        void deleteSearchSource() { this->searchSource_ = nullptr;};
        inline string getSearchSource() const { DARABONBA_PTR_GET_DEFAULT(searchSource_, "") };
        inline Documents& setSearchSource(string searchSource) { DARABONBA_PTR_SET_VALUE(searchSource_, searchSource) };


        // searchSourceName Field Functions 
        bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
        void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
        inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
        inline Documents& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


        // searchSourceType Field Functions 
        bool hasSearchSourceType() const { return this->searchSourceType_ != nullptr;};
        void deleteSearchSourceType() { this->searchSourceType_ = nullptr;};
        inline string getSearchSourceType() const { DARABONBA_PTR_GET_DEFAULT(searchSourceType_, "") };
        inline Documents& setSearchSourceType(string searchSourceType) { DARABONBA_PTR_SET_VALUE(searchSourceType_, searchSourceType) };


        // sourceFrom Field Functions 
        bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
        void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
        inline string getSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
        inline Documents& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Documents& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Documents& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Documents& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Documents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Documents& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> categoryUuid_ {};
        shared_ptr<string> chunk_ {};
        shared_ptr<vector<Documents::ChunkInfos>> chunkInfos_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> docId_ {};
        shared_ptr<string> docType_ {};
        shared_ptr<string> docUuid_ {};
        shared_ptr<string> extend1_ {};
        shared_ptr<string> extend2_ {};
        shared_ptr<string> extend3_ {};
        shared_ptr<string> pubTime_ {};
        shared_ptr<double> score_ {};
        shared_ptr<string> searchSource_ {};
        shared_ptr<string> searchSourceName_ {};
        shared_ptr<string> searchSourceType_ {};
        shared_ptr<string> sourceFrom_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->documents_ == nullptr; };
      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    protected:
      shared_ptr<vector<Data::Documents>> documents_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchDatasetDocumentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SearchDatasetDocumentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SearchDatasetDocumentsResponseBody::Data) };
    inline SearchDatasetDocumentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SearchDatasetDocumentsResponseBody::Data) };
    inline SearchDatasetDocumentsResponseBody& setData(const SearchDatasetDocumentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchDatasetDocumentsResponseBody& setData(SearchDatasetDocumentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchDatasetDocumentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchDatasetDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDatasetDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchDatasetDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SearchDatasetDocumentsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
