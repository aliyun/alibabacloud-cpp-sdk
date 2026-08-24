// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHKNOWLEDGEBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHKNOWLEDGEBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
namespace Models
{
  class SearchKnowledgeBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(queryLabels, queryLabels_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchKnowledgeBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(queryLabels, queryLabels_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    SearchKnowledgeBaseResponseBody() = default ;
    SearchKnowledgeBaseResponseBody(const SearchKnowledgeBaseResponseBody &) = default ;
    SearchKnowledgeBaseResponseBody(SearchKnowledgeBaseResponseBody &&) = default ;
    SearchKnowledgeBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchKnowledgeBaseResponseBody() = default ;
    SearchKnowledgeBaseResponseBody& operator=(const SearchKnowledgeBaseResponseBody &) = default ;
    SearchKnowledgeBaseResponseBody& operator=(SearchKnowledgeBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(documentId, documentId_);
        DARABONBA_PTR_TO_JSON(documentName, documentName_);
        DARABONBA_PTR_TO_JSON(images, images_);
        DARABONBA_PTR_TO_JSON(knowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(locations, locations_);
        DARABONBA_PTR_TO_JSON(parentChunkId, parentChunkId_);
        DARABONBA_ANY_TO_JSON(scalarFields, scalarFields_);
        DARABONBA_PTR_TO_JSON(score, score_);
        DARABONBA_PTR_TO_JSON(scoreDetails, scoreDetails_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(documentId, documentId_);
        DARABONBA_PTR_FROM_JSON(documentName, documentName_);
        DARABONBA_PTR_FROM_JSON(images, images_);
        DARABONBA_PTR_FROM_JSON(knowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(locations, locations_);
        DARABONBA_PTR_FROM_JSON(parentChunkId, parentChunkId_);
        DARABONBA_ANY_FROM_JSON(scalarFields, scalarFields_);
        DARABONBA_PTR_FROM_JSON(score, score_);
        DARABONBA_PTR_FROM_JSON(scoreDetails, scoreDetails_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScoreDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScoreDetails& obj) { 
          DARABONBA_PTR_TO_JSON(keywordScore, keywordScore_);
          DARABONBA_PTR_TO_JSON(semanticScore, semanticScore_);
        };
        friend void from_json(const Darabonba::Json& j, ScoreDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(keywordScore, keywordScore_);
          DARABONBA_PTR_FROM_JSON(semanticScore, semanticScore_);
        };
        ScoreDetails() = default ;
        ScoreDetails(const ScoreDetails &) = default ;
        ScoreDetails(ScoreDetails &&) = default ;
        ScoreDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScoreDetails() = default ;
        ScoreDetails& operator=(const ScoreDetails &) = default ;
        ScoreDetails& operator=(ScoreDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keywordScore_ == nullptr
        && this->semanticScore_ == nullptr; };
        // keywordScore Field Functions 
        bool hasKeywordScore() const { return this->keywordScore_ != nullptr;};
        void deleteKeywordScore() { this->keywordScore_ = nullptr;};
        inline float getKeywordScore() const { DARABONBA_PTR_GET_DEFAULT(keywordScore_, 0.0) };
        inline ScoreDetails& setKeywordScore(float keywordScore) { DARABONBA_PTR_SET_VALUE(keywordScore_, keywordScore) };


        // semanticScore Field Functions 
        bool hasSemanticScore() const { return this->semanticScore_ != nullptr;};
        void deleteSemanticScore() { this->semanticScore_ = nullptr;};
        inline float getSemanticScore() const { DARABONBA_PTR_GET_DEFAULT(semanticScore_, 0.0) };
        inline ScoreDetails& setSemanticScore(float semanticScore) { DARABONBA_PTR_SET_VALUE(semanticScore_, semanticScore) };


      protected:
        // The keyword relevance score.
        shared_ptr<float> keywordScore_ {};
        // The semantic relevance score.
        shared_ptr<float> semanticScore_ {};
      };

      class Locations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Locations& obj) { 
          DARABONBA_PTR_TO_JSON(bottom, bottom_);
          DARABONBA_PTR_TO_JSON(left, left_);
          DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(right, right_);
          DARABONBA_PTR_TO_JSON(top, top_);
        };
        friend void from_json(const Darabonba::Json& j, Locations& obj) { 
          DARABONBA_PTR_FROM_JSON(bottom, bottom_);
          DARABONBA_PTR_FROM_JSON(left, left_);
          DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(right, right_);
          DARABONBA_PTR_FROM_JSON(top, top_);
        };
        Locations() = default ;
        Locations(const Locations &) = default ;
        Locations(Locations &&) = default ;
        Locations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Locations() = default ;
        Locations& operator=(const Locations &) = default ;
        Locations& operator=(Locations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bottom_ == nullptr
        && this->left_ == nullptr && this->pageNumber_ == nullptr && this->right_ == nullptr && this->top_ == nullptr; };
        // bottom Field Functions 
        bool hasBottom() const { return this->bottom_ != nullptr;};
        void deleteBottom() { this->bottom_ = nullptr;};
        inline int32_t getBottom() const { DARABONBA_PTR_GET_DEFAULT(bottom_, 0) };
        inline Locations& setBottom(int32_t bottom) { DARABONBA_PTR_SET_VALUE(bottom_, bottom) };


        // left Field Functions 
        bool hasLeft() const { return this->left_ != nullptr;};
        void deleteLeft() { this->left_ = nullptr;};
        inline int32_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
        inline Locations& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Locations& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // right Field Functions 
        bool hasRight() const { return this->right_ != nullptr;};
        void deleteRight() { this->right_ = nullptr;};
        inline int32_t getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, 0) };
        inline Locations& setRight(int32_t right) { DARABONBA_PTR_SET_VALUE(right_, right) };


        // top Field Functions 
        bool hasTop() const { return this->top_ != nullptr;};
        void deleteTop() { this->top_ = nullptr;};
        inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
        inline Locations& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


      protected:
        // The bottom boundary.
        shared_ptr<int32_t> bottom_ {};
        // The left boundary.
        shared_ptr<int32_t> left_ {};
        // The page number.
        shared_ptr<int32_t> pageNumber_ {};
        // The right boundary.
        shared_ptr<int32_t> right_ {};
        // The top boundary.
        shared_ptr<int32_t> top_ {};
      };

      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(imageId, imageId_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(imageId, imageId_);
          DARABONBA_PTR_FROM_JSON(url, url_);
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
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->url_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The temporary access URL.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->chunkId_ == nullptr
        && this->content_ == nullptr && this->contentType_ == nullptr && this->documentId_ == nullptr && this->documentName_ == nullptr && this->images_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->locations_ == nullptr && this->parentChunkId_ == nullptr && this->scalarFields_ == nullptr && this->score_ == nullptr
        && this->scoreDetails_ == nullptr && this->tags_ == nullptr; };
      // chunkId Field Functions 
      bool hasChunkId() const { return this->chunkId_ != nullptr;};
      void deleteChunkId() { this->chunkId_ = nullptr;};
      inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
      inline Results& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Results& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Results& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // documentId Field Functions 
      bool hasDocumentId() const { return this->documentId_ != nullptr;};
      void deleteDocumentId() { this->documentId_ = nullptr;};
      inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
      inline Results& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


      // documentName Field Functions 
      bool hasDocumentName() const { return this->documentName_ != nullptr;};
      void deleteDocumentName() { this->documentName_ = nullptr;};
      inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
      inline Results& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<Results::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<Results::Images>) };
      inline vector<Results::Images> getImages() { DARABONBA_PTR_GET(images_, vector<Results::Images>) };
      inline Results& setImages(const vector<Results::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline Results& setImages(vector<Results::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Results& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // locations Field Functions 
      bool hasLocations() const { return this->locations_ != nullptr;};
      void deleteLocations() { this->locations_ = nullptr;};
      inline const vector<Results::Locations> & getLocations() const { DARABONBA_PTR_GET_CONST(locations_, vector<Results::Locations>) };
      inline vector<Results::Locations> getLocations() { DARABONBA_PTR_GET(locations_, vector<Results::Locations>) };
      inline Results& setLocations(const vector<Results::Locations> & locations) { DARABONBA_PTR_SET_VALUE(locations_, locations) };
      inline Results& setLocations(vector<Results::Locations> && locations) { DARABONBA_PTR_SET_RVALUE(locations_, locations) };


      // parentChunkId Field Functions 
      bool hasParentChunkId() const { return this->parentChunkId_ != nullptr;};
      void deleteParentChunkId() { this->parentChunkId_ = nullptr;};
      inline string getParentChunkId() const { DARABONBA_PTR_GET_DEFAULT(parentChunkId_, "") };
      inline Results& setParentChunkId(string parentChunkId) { DARABONBA_PTR_SET_VALUE(parentChunkId_, parentChunkId) };


      // scalarFields Field Functions 
      bool hasScalarFields() const { return this->scalarFields_ != nullptr;};
      void deleteScalarFields() { this->scalarFields_ = nullptr;};
      inline       const Darabonba::Json & getScalarFields() const { DARABONBA_GET(scalarFields_) };
      Darabonba::Json & getScalarFields() { DARABONBA_GET(scalarFields_) };
      inline Results& setScalarFields(const Darabonba::Json & scalarFields) { DARABONBA_SET_VALUE(scalarFields_, scalarFields) };
      inline Results& setScalarFields(Darabonba::Json && scalarFields) { DARABONBA_SET_RVALUE(scalarFields_, scalarFields) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Results& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // scoreDetails Field Functions 
      bool hasScoreDetails() const { return this->scoreDetails_ != nullptr;};
      void deleteScoreDetails() { this->scoreDetails_ = nullptr;};
      inline const Results::ScoreDetails & getScoreDetails() const { DARABONBA_PTR_GET_CONST(scoreDetails_, Results::ScoreDetails) };
      inline Results::ScoreDetails getScoreDetails() { DARABONBA_PTR_GET(scoreDetails_, Results::ScoreDetails) };
      inline Results& setScoreDetails(const Results::ScoreDetails & scoreDetails) { DARABONBA_PTR_SET_VALUE(scoreDetails_, scoreDetails) };
      inline Results& setScoreDetails(Results::ScoreDetails && scoreDetails) { DARABONBA_PTR_SET_RVALUE(scoreDetails_, scoreDetails) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Results& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Results& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The chunk ID.
      shared_ptr<string> chunkId_ {};
      // The chunk content.
      shared_ptr<string> content_ {};
      // The content type.
      shared_ptr<string> contentType_ {};
      // The document ID.
      shared_ptr<string> documentId_ {};
      // The document name.
      shared_ptr<string> documentName_ {};
      // The list of associated images.
      shared_ptr<vector<Results::Images>> images_ {};
      // The knowledge base ID.
      shared_ptr<string> knowledgeBaseId_ {};
      // The list of document locations.
      shared_ptr<vector<Results::Locations>> locations_ {};
      // The parent chunk ID.
      shared_ptr<string> parentChunkId_ {};
      // The scalar columns of the structured knowledge base. The columns are returned by their original column names and are not used in retrieval.
      Darabonba::Json scalarFields_ {};
      // The overall relevance score.
      shared_ptr<float> score_ {};
      // The relevance score details.
      shared_ptr<Results::ScoreDetails> scoreDetails_ {};
      // The list of tags.
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->queryLabels_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline SearchKnowledgeBaseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SearchKnowledgeBaseResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchKnowledgeBaseResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchKnowledgeBaseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchKnowledgeBaseResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchKnowledgeBaseResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryLabels Field Functions 
    bool hasQueryLabels() const { return this->queryLabels_ != nullptr;};
    void deleteQueryLabels() { this->queryLabels_ = nullptr;};
    inline const vector<string> & getQueryLabels() const { DARABONBA_PTR_GET_CONST(queryLabels_, vector<string>) };
    inline vector<string> getQueryLabels() { DARABONBA_PTR_GET(queryLabels_, vector<string>) };
    inline SearchKnowledgeBaseResponseBody& setQueryLabels(const vector<string> & queryLabels) { DARABONBA_PTR_SET_VALUE(queryLabels_, queryLabels) };
    inline SearchKnowledgeBaseResponseBody& setQueryLabels(vector<string> && queryLabels) { DARABONBA_PTR_SET_RVALUE(queryLabels_, queryLabels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchKnowledgeBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<SearchKnowledgeBaseResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<SearchKnowledgeBaseResponseBody::Results>) };
    inline vector<SearchKnowledgeBaseResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<SearchKnowledgeBaseResponseBody::Results>) };
    inline SearchKnowledgeBaseResponseBody& setResults(const vector<SearchKnowledgeBaseResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline SearchKnowledgeBaseResponseBody& setResults(vector<SearchKnowledgeBaseResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchKnowledgeBaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchKnowledgeBaseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the permission verification failure.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The query labels.
    shared_ptr<vector<string>> queryLabels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of retrieval results.
    shared_ptr<vector<SearchKnowledgeBaseResponseBody::Results>> results_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of results.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
