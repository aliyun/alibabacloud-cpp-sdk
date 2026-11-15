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
      DARABONBA_PTR_TO_JSON(evidenceNextToken, evidenceNextToken_);
      DARABONBA_PTR_TO_JSON(evidenceResults, evidenceResults_);
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
      DARABONBA_PTR_FROM_JSON(evidenceNextToken, evidenceNextToken_);
      DARABONBA_PTR_FROM_JSON(evidenceResults, evidenceResults_);
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
        DARABONBA_PTR_TO_JSON(mediaEndMs, mediaEndMs_);
        DARABONBA_PTR_TO_JSON(mediaStartMs, mediaStartMs_);
        DARABONBA_PTR_TO_JSON(mediaTimeline, mediaTimeline_);
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
        DARABONBA_PTR_FROM_JSON(mediaEndMs, mediaEndMs_);
        DARABONBA_PTR_FROM_JSON(mediaStartMs, mediaStartMs_);
        DARABONBA_PTR_FROM_JSON(mediaTimeline, mediaTimeline_);
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

      class MediaTimeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaTimeline& obj) { 
          DARABONBA_PTR_TO_JSON(endMs, endMs_);
          DARABONBA_PTR_TO_JSON(startMs, startMs_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, MediaTimeline& obj) { 
          DARABONBA_PTR_FROM_JSON(endMs, endMs_);
          DARABONBA_PTR_FROM_JSON(startMs, startMs_);
          DARABONBA_PTR_FROM_JSON(text, text_);
        };
        MediaTimeline() = default ;
        MediaTimeline(const MediaTimeline &) = default ;
        MediaTimeline(MediaTimeline &&) = default ;
        MediaTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaTimeline() = default ;
        MediaTimeline& operator=(const MediaTimeline &) = default ;
        MediaTimeline& operator=(MediaTimeline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endMs_ == nullptr
        && this->startMs_ == nullptr && this->text_ == nullptr; };
        // endMs Field Functions 
        bool hasEndMs() const { return this->endMs_ != nullptr;};
        void deleteEndMs() { this->endMs_ = nullptr;};
        inline int64_t getEndMs() const { DARABONBA_PTR_GET_DEFAULT(endMs_, 0L) };
        inline MediaTimeline& setEndMs(int64_t endMs) { DARABONBA_PTR_SET_VALUE(endMs_, endMs) };


        // startMs Field Functions 
        bool hasStartMs() const { return this->startMs_ != nullptr;};
        void deleteStartMs() { this->startMs_ = nullptr;};
        inline int64_t getStartMs() const { DARABONBA_PTR_GET_DEFAULT(startMs_, 0L) };
        inline MediaTimeline& setStartMs(int64_t startMs) { DARABONBA_PTR_SET_VALUE(startMs_, startMs) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline MediaTimeline& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // The end time of the segment.
        shared_ptr<int64_t> endMs_ {};
        // The start time of the segment.
        shared_ptr<int64_t> startMs_ {};
        // The segment text.
        shared_ptr<string> text_ {};
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
        && this->knowledgeBaseId_ == nullptr && this->locations_ == nullptr && this->mediaEndMs_ == nullptr && this->mediaStartMs_ == nullptr && this->mediaTimeline_ == nullptr
        && this->parentChunkId_ == nullptr && this->scalarFields_ == nullptr && this->score_ == nullptr && this->scoreDetails_ == nullptr && this->tags_ == nullptr; };
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


      // mediaEndMs Field Functions 
      bool hasMediaEndMs() const { return this->mediaEndMs_ != nullptr;};
      void deleteMediaEndMs() { this->mediaEndMs_ = nullptr;};
      inline int64_t getMediaEndMs() const { DARABONBA_PTR_GET_DEFAULT(mediaEndMs_, 0L) };
      inline Results& setMediaEndMs(int64_t mediaEndMs) { DARABONBA_PTR_SET_VALUE(mediaEndMs_, mediaEndMs) };


      // mediaStartMs Field Functions 
      bool hasMediaStartMs() const { return this->mediaStartMs_ != nullptr;};
      void deleteMediaStartMs() { this->mediaStartMs_ = nullptr;};
      inline int64_t getMediaStartMs() const { DARABONBA_PTR_GET_DEFAULT(mediaStartMs_, 0L) };
      inline Results& setMediaStartMs(int64_t mediaStartMs) { DARABONBA_PTR_SET_VALUE(mediaStartMs_, mediaStartMs) };


      // mediaTimeline Field Functions 
      bool hasMediaTimeline() const { return this->mediaTimeline_ != nullptr;};
      void deleteMediaTimeline() { this->mediaTimeline_ = nullptr;};
      inline const vector<Results::MediaTimeline> & getMediaTimeline() const { DARABONBA_PTR_GET_CONST(mediaTimeline_, vector<Results::MediaTimeline>) };
      inline vector<Results::MediaTimeline> getMediaTimeline() { DARABONBA_PTR_GET(mediaTimeline_, vector<Results::MediaTimeline>) };
      inline Results& setMediaTimeline(const vector<Results::MediaTimeline> & mediaTimeline) { DARABONBA_PTR_SET_VALUE(mediaTimeline_, mediaTimeline) };
      inline Results& setMediaTimeline(vector<Results::MediaTimeline> && mediaTimeline) { DARABONBA_PTR_SET_RVALUE(mediaTimeline_, mediaTimeline) };


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
      // The end time of the audio or video chunk in the original media, in milliseconds. This field is not returned for non-media chunks.
      shared_ptr<int64_t> mediaEndMs_ {};
      // The start time of the audio or video chunk in the original media, in milliseconds. This field is not returned for non-media chunks.
      shared_ptr<int64_t> mediaStartMs_ {};
      // The time ranges of sentence-by-sentence or paragraph-by-paragraph content within the chunk in the original media. This field is not returned for non-audio chunks.
      shared_ptr<vector<Results::MediaTimeline>> mediaTimeline_ {};
      // The parent chunk ID.
      shared_ptr<string> parentChunkId_ {};
      // The scalar fields of the structured knowledge base. These fields are returned by their original column names and are not used for retrieval.
      Darabonba::Json scalarFields_ {};
      // The overall relevance score.
      shared_ptr<float> score_ {};
      // The relevance details.
      shared_ptr<Results::ScoreDetails> scoreDetails_ {};
      // The list of tags.
      shared_ptr<vector<string>> tags_ {};
    };

    class EvidenceResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvidenceResults& obj) { 
        DARABONBA_PTR_TO_JSON(batchId, batchId_);
        DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(documentId, documentId_);
        DARABONBA_PTR_TO_JSON(entityId, entityId_);
        DARABONBA_PTR_TO_JSON(evidenceId, evidenceId_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(knowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(pageId, pageId_);
        DARABONBA_PTR_TO_JSON(relationId, relationId_);
        DARABONBA_PTR_TO_JSON(revisionId, revisionId_);
        DARABONBA_PTR_TO_JSON(score, score_);
        DARABONBA_PTR_TO_JSON(sectionId, sectionId_);
        DARABONBA_PTR_TO_JSON(sourceRefCount, sourceRefCount_);
        DARABONBA_PTR_TO_JSON(sourceRefs, sourceRefs_);
        DARABONBA_PTR_TO_JSON(sourceRefsTruncated, sourceRefsTruncated_);
        DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, EvidenceResults& obj) { 
        DARABONBA_PTR_FROM_JSON(batchId, batchId_);
        DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(documentId, documentId_);
        DARABONBA_PTR_FROM_JSON(entityId, entityId_);
        DARABONBA_PTR_FROM_JSON(evidenceId, evidenceId_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(knowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(pageId, pageId_);
        DARABONBA_PTR_FROM_JSON(relationId, relationId_);
        DARABONBA_PTR_FROM_JSON(revisionId, revisionId_);
        DARABONBA_PTR_FROM_JSON(score, score_);
        DARABONBA_PTR_FROM_JSON(sectionId, sectionId_);
        DARABONBA_PTR_FROM_JSON(sourceRefCount, sourceRefCount_);
        DARABONBA_PTR_FROM_JSON(sourceRefs, sourceRefs_);
        DARABONBA_PTR_FROM_JSON(sourceRefsTruncated, sourceRefsTruncated_);
        DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      EvidenceResults() = default ;
      EvidenceResults(const EvidenceResults &) = default ;
      EvidenceResults(EvidenceResults &&) = default ;
      EvidenceResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvidenceResults() = default ;
      EvidenceResults& operator=(const EvidenceResults &) = default ;
      EvidenceResults& operator=(EvidenceResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceRefs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceRefs& obj) { 
          DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
          DARABONBA_PTR_TO_JSON(documentId, documentId_);
          DARABONBA_PTR_TO_JSON(documentName, documentName_);
          DARABONBA_PTR_TO_JSON(mediaEndMs, mediaEndMs_);
          DARABONBA_PTR_TO_JSON(mediaStartMs, mediaStartMs_);
          DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(sourceRevisionId, sourceRevisionId_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, SourceRefs& obj) { 
          DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
          DARABONBA_PTR_FROM_JSON(documentId, documentId_);
          DARABONBA_PTR_FROM_JSON(documentName, documentName_);
          DARABONBA_PTR_FROM_JSON(mediaEndMs, mediaEndMs_);
          DARABONBA_PTR_FROM_JSON(mediaStartMs, mediaStartMs_);
          DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(sourceRevisionId, sourceRevisionId_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        SourceRefs() = default ;
        SourceRefs(const SourceRefs &) = default ;
        SourceRefs(SourceRefs &&) = default ;
        SourceRefs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceRefs() = default ;
        SourceRefs& operator=(const SourceRefs &) = default ;
        SourceRefs& operator=(SourceRefs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chunkId_ == nullptr
        && this->documentId_ == nullptr && this->documentName_ == nullptr && this->mediaEndMs_ == nullptr && this->mediaStartMs_ == nullptr && this->pageNumber_ == nullptr
        && this->sourceRevisionId_ == nullptr && this->version_ == nullptr; };
        // chunkId Field Functions 
        bool hasChunkId() const { return this->chunkId_ != nullptr;};
        void deleteChunkId() { this->chunkId_ = nullptr;};
        inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
        inline SourceRefs& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


        // documentId Field Functions 
        bool hasDocumentId() const { return this->documentId_ != nullptr;};
        void deleteDocumentId() { this->documentId_ = nullptr;};
        inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
        inline SourceRefs& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


        // documentName Field Functions 
        bool hasDocumentName() const { return this->documentName_ != nullptr;};
        void deleteDocumentName() { this->documentName_ = nullptr;};
        inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
        inline SourceRefs& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


        // mediaEndMs Field Functions 
        bool hasMediaEndMs() const { return this->mediaEndMs_ != nullptr;};
        void deleteMediaEndMs() { this->mediaEndMs_ = nullptr;};
        inline int64_t getMediaEndMs() const { DARABONBA_PTR_GET_DEFAULT(mediaEndMs_, 0L) };
        inline SourceRefs& setMediaEndMs(int64_t mediaEndMs) { DARABONBA_PTR_SET_VALUE(mediaEndMs_, mediaEndMs) };


        // mediaStartMs Field Functions 
        bool hasMediaStartMs() const { return this->mediaStartMs_ != nullptr;};
        void deleteMediaStartMs() { this->mediaStartMs_ = nullptr;};
        inline int64_t getMediaStartMs() const { DARABONBA_PTR_GET_DEFAULT(mediaStartMs_, 0L) };
        inline SourceRefs& setMediaStartMs(int64_t mediaStartMs) { DARABONBA_PTR_SET_VALUE(mediaStartMs_, mediaStartMs) };


        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
        inline SourceRefs& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // sourceRevisionId Field Functions 
        bool hasSourceRevisionId() const { return this->sourceRevisionId_ != nullptr;};
        void deleteSourceRevisionId() { this->sourceRevisionId_ = nullptr;};
        inline string getSourceRevisionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRevisionId_, "") };
        inline SourceRefs& setSourceRevisionId(string sourceRevisionId) { DARABONBA_PTR_SET_VALUE(sourceRevisionId_, sourceRevisionId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline SourceRefs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
        // 
        // This parameter is required.
        shared_ptr<string> chunkId_ {};
        // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
        // 
        // This parameter is required.
        shared_ptr<string> documentId_ {};
        // Optional or conditionally returned. The document name that can be returned only after authorization. Constraints: {"maxLength":1024}.
        shared_ptr<string> documentName_ {};
        // Optional or conditionally returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minimum":0,"maximum":9223372036854775807}.
        shared_ptr<int64_t> mediaEndMs_ {};
        // Optional or conditionally returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minimum":0,"maximum":9223372036854775807}.
        shared_ptr<int64_t> mediaStartMs_ {};
        // Optional or conditionally returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minimum":1,"maximum":9223372036854775807}.
        shared_ptr<int64_t> pageNumber_ {};
        // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
        // 
        // This parameter is required.
        shared_ptr<string> sourceRevisionId_ {};
        // Required and always returned. The display name of the version. Does not fall back to draft if invalid or unavailable. Constraints: {"maxLength":64,"pattern":"^(DRAFT|LATEST_PUBLISHED|v[1-9][0-9]*)$","default":"DRAFT"}.
        // 
        // This parameter is required.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->chunkId_ == nullptr && this->content_ == nullptr && this->documentId_ == nullptr && this->entityId_ == nullptr && this->evidenceId_ == nullptr
        && this->kind_ == nullptr && this->knowledgeBaseId_ == nullptr && this->pageId_ == nullptr && this->relationId_ == nullptr && this->revisionId_ == nullptr
        && this->score_ == nullptr && this->sectionId_ == nullptr && this->sourceRefCount_ == nullptr && this->sourceRefs_ == nullptr && this->sourceRefsTruncated_ == nullptr
        && this->sourceTaskId_ == nullptr && this->title_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline EvidenceResults& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // chunkId Field Functions 
      bool hasChunkId() const { return this->chunkId_ != nullptr;};
      void deleteChunkId() { this->chunkId_ = nullptr;};
      inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
      inline EvidenceResults& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline EvidenceResults& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // documentId Field Functions 
      bool hasDocumentId() const { return this->documentId_ != nullptr;};
      void deleteDocumentId() { this->documentId_ = nullptr;};
      inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
      inline EvidenceResults& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline EvidenceResults& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // evidenceId Field Functions 
      bool hasEvidenceId() const { return this->evidenceId_ != nullptr;};
      void deleteEvidenceId() { this->evidenceId_ = nullptr;};
      inline string getEvidenceId() const { DARABONBA_PTR_GET_DEFAULT(evidenceId_, "") };
      inline EvidenceResults& setEvidenceId(string evidenceId) { DARABONBA_PTR_SET_VALUE(evidenceId_, evidenceId) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline EvidenceResults& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline EvidenceResults& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // pageId Field Functions 
      bool hasPageId() const { return this->pageId_ != nullptr;};
      void deletePageId() { this->pageId_ = nullptr;};
      inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
      inline EvidenceResults& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


      // relationId Field Functions 
      bool hasRelationId() const { return this->relationId_ != nullptr;};
      void deleteRelationId() { this->relationId_ = nullptr;};
      inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
      inline EvidenceResults& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


      // revisionId Field Functions 
      bool hasRevisionId() const { return this->revisionId_ != nullptr;};
      void deleteRevisionId() { this->revisionId_ = nullptr;};
      inline string getRevisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
      inline EvidenceResults& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline EvidenceResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline string getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, "") };
      inline EvidenceResults& setSectionId(string sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


      // sourceRefCount Field Functions 
      bool hasSourceRefCount() const { return this->sourceRefCount_ != nullptr;};
      void deleteSourceRefCount() { this->sourceRefCount_ = nullptr;};
      inline int64_t getSourceRefCount() const { DARABONBA_PTR_GET_DEFAULT(sourceRefCount_, 0L) };
      inline EvidenceResults& setSourceRefCount(int64_t sourceRefCount) { DARABONBA_PTR_SET_VALUE(sourceRefCount_, sourceRefCount) };


      // sourceRefs Field Functions 
      bool hasSourceRefs() const { return this->sourceRefs_ != nullptr;};
      void deleteSourceRefs() { this->sourceRefs_ = nullptr;};
      inline const vector<EvidenceResults::SourceRefs> & getSourceRefs() const { DARABONBA_PTR_GET_CONST(sourceRefs_, vector<EvidenceResults::SourceRefs>) };
      inline vector<EvidenceResults::SourceRefs> getSourceRefs() { DARABONBA_PTR_GET(sourceRefs_, vector<EvidenceResults::SourceRefs>) };
      inline EvidenceResults& setSourceRefs(const vector<EvidenceResults::SourceRefs> & sourceRefs) { DARABONBA_PTR_SET_VALUE(sourceRefs_, sourceRefs) };
      inline EvidenceResults& setSourceRefs(vector<EvidenceResults::SourceRefs> && sourceRefs) { DARABONBA_PTR_SET_RVALUE(sourceRefs_, sourceRefs) };


      // sourceRefsTruncated Field Functions 
      bool hasSourceRefsTruncated() const { return this->sourceRefsTruncated_ != nullptr;};
      void deleteSourceRefsTruncated() { this->sourceRefsTruncated_ = nullptr;};
      inline bool getSourceRefsTruncated() const { DARABONBA_PTR_GET_DEFAULT(sourceRefsTruncated_, false) };
      inline EvidenceResults& setSourceRefsTruncated(bool sourceRefsTruncated) { DARABONBA_PTR_SET_VALUE(sourceRefsTruncated_, sourceRefsTruncated) };


      // sourceTaskId Field Functions 
      bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
      void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
      inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
      inline EvidenceResults& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline EvidenceResults& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> batchId_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> chunkId_ {};
      // Required and always returned. The readable evidence text. Constraints: {"maxLength":65535}.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> documentId_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> evidenceId_ {};
      // Required and always returned. The actual evidence object type. Constraints: {"enum":["raw","wiki_page","wiki_section","graph_fact"],"maxLength":64}.
      // 
      // This parameter is required.
      shared_ptr<string> kind_ {};
      // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> knowledgeBaseId_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> pageId_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> relationId_ {};
      // Required and always returned. An opaque business ID generated by the server. Ownership is validated, and arbitrary paths are not accepted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> revisionId_ {};
      // Required and always returned. A finite numerical value used for unified ranking. For hybrid, it is the relevance of the existing Dealer.rerank. For rerank, it is the text and model hybrid relevance of the existing Dealer.rerank_by_model, along semanticWeight and rank features, and is not a relevance probability. minScore is applied according to the existing unified scoring rules. Can be null for non-ranked factual evidence. Null is allowed and can be omitted.
      // 
      // This parameter is required.
      shared_ptr<double> score_ {};
      // Required and always returned. Null is allowed. The semantics of null values follow the field description. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":128,"pattern":"^[A-Za-z0-9][A-Za-z0-9_-]{0,127}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> sectionId_ {};
      // Required and always returned. The total number of source chunk references. Authentication is performed on the full set. Constraints: {"minimum":1,"maximum":9223372036854775807}.
      // 
      // This parameter is required.
      shared_ptr<int64_t> sourceRefCount_ {};
      // Required and always returned. The actually supported sources. Constraints: {"minItems":1,"maxItems":1000}.
      // 
      // This parameter is required.
      shared_ptr<vector<EvidenceResults::SourceRefs>> sourceRefs_ {};
      // Required and always returned. True when a single sourceRefs contains only the first 1,000 items. You can paginate and verify by using sourceTaskId.
      // 
      // This parameter is required.
      shared_ptr<bool> sourceRefsTruncated_ {};
      // Required and always returned. The entry for complete sources. Must be a non-null locator when sourceRefsTruncated is true. Source operation references held by artifacts or revisions remain readable, and archiving task details does not delete the source manifest. Null is allowed and can be omitted. Constraints: {"minLength":32,"maxLength":32,"pattern":"^[0-9a-f]{32}$"}.
      // 
      // This parameter is required.
      shared_ptr<string> sourceTaskId_ {};
      // Required and always returned. The display title after authorization. Constraints: {"maxLength":1024}.
      // 
      // This parameter is required.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->evidenceNextToken_ == nullptr && this->evidenceResults_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryLabels_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
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


    // evidenceNextToken Field Functions 
    bool hasEvidenceNextToken() const { return this->evidenceNextToken_ != nullptr;};
    void deleteEvidenceNextToken() { this->evidenceNextToken_ = nullptr;};
    inline string getEvidenceNextToken() const { DARABONBA_PTR_GET_DEFAULT(evidenceNextToken_, "") };
    inline SearchKnowledgeBaseResponseBody& setEvidenceNextToken(string evidenceNextToken) { DARABONBA_PTR_SET_VALUE(evidenceNextToken_, evidenceNextToken) };


    // evidenceResults Field Functions 
    bool hasEvidenceResults() const { return this->evidenceResults_ != nullptr;};
    void deleteEvidenceResults() { this->evidenceResults_ = nullptr;};
    inline const vector<SearchKnowledgeBaseResponseBody::EvidenceResults> & getEvidenceResults() const { DARABONBA_PTR_GET_CONST(evidenceResults_, vector<SearchKnowledgeBaseResponseBody::EvidenceResults>) };
    inline vector<SearchKnowledgeBaseResponseBody::EvidenceResults> getEvidenceResults() { DARABONBA_PTR_GET(evidenceResults_, vector<SearchKnowledgeBaseResponseBody::EvidenceResults>) };
    inline SearchKnowledgeBaseResponseBody& setEvidenceResults(const vector<SearchKnowledgeBaseResponseBody::EvidenceResults> & evidenceResults) { DARABONBA_PTR_SET_VALUE(evidenceResults_, evidenceResults) };
    inline SearchKnowledgeBaseResponseBody& setEvidenceResults(vector<SearchKnowledgeBaseResponseBody::EvidenceResults> && evidenceResults) { DARABONBA_PTR_SET_RVALUE(evidenceResults_, evidenceResults) };


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
    // The details of the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The returned status code.
    shared_ptr<int32_t> code_ {};
    // Optional or conditionally returned. Required when includeWiki is set to true. The cursor for the next page of evidence, which is null for the last page. Not used for legacy results pagination. Null is allowed and can be omitted. Constraints: {"minLength":1,"maxLength":4096}.
    shared_ptr<string> evidenceNextToken_ {};
    // Optional or conditionally returned. Returned only when includeWiki is set to true. The current page of unified and merged results. Constraints: {"minItems":0,"maxItems":100}.
    shared_ptr<vector<SearchKnowledgeBaseResponseBody::EvidenceResults>> evidenceResults_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of items per page.
    shared_ptr<int32_t> pageSize_ {};
    // The query labels.
    shared_ptr<vector<string>> queryLabels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of search results.
    shared_ptr<vector<SearchKnowledgeBaseResponseBody::Results>> results_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total count.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
