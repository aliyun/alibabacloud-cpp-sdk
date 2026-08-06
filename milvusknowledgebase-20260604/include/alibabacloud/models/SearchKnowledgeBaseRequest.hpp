// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHKNOWLEDGEBASEREQUEST_HPP_
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
  class SearchKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(documentIds, documentIds_);
      DARABONBA_PTR_TO_JSON(enableKnowledgeGraph, enableKnowledgeGraph_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(rerankModelId, rerankModelId_);
      DARABONBA_PTR_TO_JSON(rerankModelName, rerankModelName_);
      DARABONBA_PTR_TO_JSON(retrievalConfig, retrievalConfig_);
      DARABONBA_PTR_TO_JSON(tagFilter, tagFilter_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SearchKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(documentIds, documentIds_);
      DARABONBA_PTR_FROM_JSON(enableKnowledgeGraph, enableKnowledgeGraph_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(rerankModelId, rerankModelId_);
      DARABONBA_PTR_FROM_JSON(rerankModelName, rerankModelName_);
      DARABONBA_PTR_FROM_JSON(retrievalConfig, retrievalConfig_);
      DARABONBA_PTR_FROM_JSON(tagFilter, tagFilter_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    SearchKnowledgeBaseRequest() = default ;
    SearchKnowledgeBaseRequest(const SearchKnowledgeBaseRequest &) = default ;
    SearchKnowledgeBaseRequest(SearchKnowledgeBaseRequest &&) = default ;
    SearchKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchKnowledgeBaseRequest() = default ;
    SearchKnowledgeBaseRequest& operator=(const SearchKnowledgeBaseRequest &) = default ;
    SearchKnowledgeBaseRequest& operator=(SearchKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagFilter& obj) { 
        DARABONBA_PTR_TO_JSON(conditions, conditions_);
        DARABONBA_PTR_TO_JSON(relation, relation_);
      };
      friend void from_json(const Darabonba::Json& j, TagFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(relation, relation_);
      };
      TagFilter() = default ;
      TagFilter(const TagFilter &) = default ;
      TagFilter(TagFilter &&) = default ;
      TagFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagFilter() = default ;
      TagFilter& operator=(const TagFilter &) = default ;
      TagFilter& operator=(TagFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(field, field_);
          DARABONBA_PTR_TO_JSON(op, op_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(field, field_);
          DARABONBA_PTR_FROM_JSON(op, op_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->field_ == nullptr
        && this->op_ == nullptr && this->value_ == nullptr; };
        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline Conditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Conditions& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Conditions& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The tag field.
        shared_ptr<string> field_ {};
        // The operator.
        shared_ptr<string> op_ {};
        // The tag value.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->relation_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<TagFilter::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<TagFilter::Conditions>) };
      inline vector<TagFilter::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<TagFilter::Conditions>) };
      inline TagFilter& setConditions(const vector<TagFilter::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline TagFilter& setConditions(vector<TagFilter::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // relation Field Functions 
      bool hasRelation() const { return this->relation_ != nullptr;};
      void deleteRelation() { this->relation_ = nullptr;};
      inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
      inline TagFilter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    protected:
      // The list of tag conditions.
      shared_ptr<vector<TagFilter::Conditions>> conditions_ {};
      // The logical relation between conditions.
      shared_ptr<string> relation_ {};
    };

    class RetrievalConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetrievalConfig& obj) { 
        DARABONBA_PTR_TO_JSON(candidateCount, candidateCount_);
        DARABONBA_PTR_TO_JSON(enableQueryExpansion, enableQueryExpansion_);
        DARABONBA_PTR_TO_JSON(minScore, minScore_);
        DARABONBA_PTR_TO_JSON(semanticWeight, semanticWeight_);
        DARABONBA_PTR_TO_JSON(translationLanguages, translationLanguages_);
      };
      friend void from_json(const Darabonba::Json& j, RetrievalConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(candidateCount, candidateCount_);
        DARABONBA_PTR_FROM_JSON(enableQueryExpansion, enableQueryExpansion_);
        DARABONBA_PTR_FROM_JSON(minScore, minScore_);
        DARABONBA_PTR_FROM_JSON(semanticWeight, semanticWeight_);
        DARABONBA_PTR_FROM_JSON(translationLanguages, translationLanguages_);
      };
      RetrievalConfig() = default ;
      RetrievalConfig(const RetrievalConfig &) = default ;
      RetrievalConfig(RetrievalConfig &&) = default ;
      RetrievalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetrievalConfig() = default ;
      RetrievalConfig& operator=(const RetrievalConfig &) = default ;
      RetrievalConfig& operator=(RetrievalConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->candidateCount_ == nullptr
        && this->enableQueryExpansion_ == nullptr && this->minScore_ == nullptr && this->semanticWeight_ == nullptr && this->translationLanguages_ == nullptr; };
      // candidateCount Field Functions 
      bool hasCandidateCount() const { return this->candidateCount_ != nullptr;};
      void deleteCandidateCount() { this->candidateCount_ = nullptr;};
      inline int32_t getCandidateCount() const { DARABONBA_PTR_GET_DEFAULT(candidateCount_, 0) };
      inline RetrievalConfig& setCandidateCount(int32_t candidateCount) { DARABONBA_PTR_SET_VALUE(candidateCount_, candidateCount) };


      // enableQueryExpansion Field Functions 
      bool hasEnableQueryExpansion() const { return this->enableQueryExpansion_ != nullptr;};
      void deleteEnableQueryExpansion() { this->enableQueryExpansion_ = nullptr;};
      inline bool getEnableQueryExpansion() const { DARABONBA_PTR_GET_DEFAULT(enableQueryExpansion_, false) };
      inline RetrievalConfig& setEnableQueryExpansion(bool enableQueryExpansion) { DARABONBA_PTR_SET_VALUE(enableQueryExpansion_, enableQueryExpansion) };


      // minScore Field Functions 
      bool hasMinScore() const { return this->minScore_ != nullptr;};
      void deleteMinScore() { this->minScore_ = nullptr;};
      inline float getMinScore() const { DARABONBA_PTR_GET_DEFAULT(minScore_, 0.0) };
      inline RetrievalConfig& setMinScore(float minScore) { DARABONBA_PTR_SET_VALUE(minScore_, minScore) };


      // semanticWeight Field Functions 
      bool hasSemanticWeight() const { return this->semanticWeight_ != nullptr;};
      void deleteSemanticWeight() { this->semanticWeight_ = nullptr;};
      inline float getSemanticWeight() const { DARABONBA_PTR_GET_DEFAULT(semanticWeight_, 0.0) };
      inline RetrievalConfig& setSemanticWeight(float semanticWeight) { DARABONBA_PTR_SET_VALUE(semanticWeight_, semanticWeight) };


      // translationLanguages Field Functions 
      bool hasTranslationLanguages() const { return this->translationLanguages_ != nullptr;};
      void deleteTranslationLanguages() { this->translationLanguages_ = nullptr;};
      inline const vector<string> & getTranslationLanguages() const { DARABONBA_PTR_GET_CONST(translationLanguages_, vector<string>) };
      inline vector<string> getTranslationLanguages() { DARABONBA_PTR_GET(translationLanguages_, vector<string>) };
      inline RetrievalConfig& setTranslationLanguages(const vector<string> & translationLanguages) { DARABONBA_PTR_SET_VALUE(translationLanguages_, translationLanguages) };
      inline RetrievalConfig& setTranslationLanguages(vector<string> && translationLanguages) { DARABONBA_PTR_SET_RVALUE(translationLanguages_, translationLanguages) };


    protected:
      // The number of candidate results to recall.
      shared_ptr<int32_t> candidateCount_ {};
      // Specifies whether to enable query expansion.
      shared_ptr<bool> enableQueryExpansion_ {};
      // The minimum relevance score.
      shared_ptr<float> minScore_ {};
      // The weight of semantic relevance.
      shared_ptr<float> semanticWeight_ {};
      // The list of translation languages.
      shared_ptr<vector<string>> translationLanguages_ {};
    };

    class Image : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Image& obj) { 
        DARABONBA_PTR_TO_JSON(base64, base64_);
        DARABONBA_PTR_TO_JSON(objectKey, objectKey_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Image& obj) { 
        DARABONBA_PTR_FROM_JSON(base64, base64_);
        DARABONBA_PTR_FROM_JSON(objectKey, objectKey_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      Image() = default ;
      Image(const Image &) = default ;
      Image(Image &&) = default ;
      Image(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Image() = default ;
      Image& operator=(const Image &) = default ;
      Image& operator=(Image &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->base64_ == nullptr
        && this->objectKey_ == nullptr && this->url_ == nullptr; };
      // base64 Field Functions 
      bool hasBase64() const { return this->base64_ != nullptr;};
      void deleteBase64() { this->base64_ = nullptr;};
      inline string getBase64() const { DARABONBA_PTR_GET_DEFAULT(base64_, "") };
      inline Image& setBase64(string base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


      // objectKey Field Functions 
      bool hasObjectKey() const { return this->objectKey_ != nullptr;};
      void deleteObjectKey() { this->objectKey_ = nullptr;};
      inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
      inline Image& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Image& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The Base64-encoded image.
      shared_ptr<string> base64_ {};
      // The object key of the image.
      shared_ptr<string> objectKey_ {};
      // The image URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->documentIds_ == nullptr
        && this->enableKnowledgeGraph_ == nullptr && this->image_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr
        && this->rerankModelId_ == nullptr && this->rerankModelName_ == nullptr && this->retrievalConfig_ == nullptr && this->tagFilter_ == nullptr && this->version_ == nullptr; };
    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline SearchKnowledgeBaseRequest& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline SearchKnowledgeBaseRequest& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // enableKnowledgeGraph Field Functions 
    bool hasEnableKnowledgeGraph() const { return this->enableKnowledgeGraph_ != nullptr;};
    void deleteEnableKnowledgeGraph() { this->enableKnowledgeGraph_ = nullptr;};
    inline bool getEnableKnowledgeGraph() const { DARABONBA_PTR_GET_DEFAULT(enableKnowledgeGraph_, false) };
    inline SearchKnowledgeBaseRequest& setEnableKnowledgeGraph(bool enableKnowledgeGraph) { DARABONBA_PTR_SET_VALUE(enableKnowledgeGraph_, enableKnowledgeGraph) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const SearchKnowledgeBaseRequest::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, SearchKnowledgeBaseRequest::Image) };
    inline SearchKnowledgeBaseRequest::Image getImage() { DARABONBA_PTR_GET(image_, SearchKnowledgeBaseRequest::Image) };
    inline SearchKnowledgeBaseRequest& setImage(const SearchKnowledgeBaseRequest::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline SearchKnowledgeBaseRequest& setImage(SearchKnowledgeBaseRequest::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchKnowledgeBaseRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchKnowledgeBaseRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchKnowledgeBaseRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // rerankModelId Field Functions 
    bool hasRerankModelId() const { return this->rerankModelId_ != nullptr;};
    void deleteRerankModelId() { this->rerankModelId_ = nullptr;};
    inline int64_t getRerankModelId() const { DARABONBA_PTR_GET_DEFAULT(rerankModelId_, 0L) };
    inline SearchKnowledgeBaseRequest& setRerankModelId(int64_t rerankModelId) { DARABONBA_PTR_SET_VALUE(rerankModelId_, rerankModelId) };


    // rerankModelName Field Functions 
    bool hasRerankModelName() const { return this->rerankModelName_ != nullptr;};
    void deleteRerankModelName() { this->rerankModelName_ = nullptr;};
    inline string getRerankModelName() const { DARABONBA_PTR_GET_DEFAULT(rerankModelName_, "") };
    inline SearchKnowledgeBaseRequest& setRerankModelName(string rerankModelName) { DARABONBA_PTR_SET_VALUE(rerankModelName_, rerankModelName) };


    // retrievalConfig Field Functions 
    bool hasRetrievalConfig() const { return this->retrievalConfig_ != nullptr;};
    void deleteRetrievalConfig() { this->retrievalConfig_ = nullptr;};
    inline const SearchKnowledgeBaseRequest::RetrievalConfig & getRetrievalConfig() const { DARABONBA_PTR_GET_CONST(retrievalConfig_, SearchKnowledgeBaseRequest::RetrievalConfig) };
    inline SearchKnowledgeBaseRequest::RetrievalConfig getRetrievalConfig() { DARABONBA_PTR_GET(retrievalConfig_, SearchKnowledgeBaseRequest::RetrievalConfig) };
    inline SearchKnowledgeBaseRequest& setRetrievalConfig(const SearchKnowledgeBaseRequest::RetrievalConfig & retrievalConfig) { DARABONBA_PTR_SET_VALUE(retrievalConfig_, retrievalConfig) };
    inline SearchKnowledgeBaseRequest& setRetrievalConfig(SearchKnowledgeBaseRequest::RetrievalConfig && retrievalConfig) { DARABONBA_PTR_SET_RVALUE(retrievalConfig_, retrievalConfig) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline const SearchKnowledgeBaseRequest::TagFilter & getTagFilter() const { DARABONBA_PTR_GET_CONST(tagFilter_, SearchKnowledgeBaseRequest::TagFilter) };
    inline SearchKnowledgeBaseRequest::TagFilter getTagFilter() { DARABONBA_PTR_GET(tagFilter_, SearchKnowledgeBaseRequest::TagFilter) };
    inline SearchKnowledgeBaseRequest& setTagFilter(const SearchKnowledgeBaseRequest::TagFilter & tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };
    inline SearchKnowledgeBaseRequest& setTagFilter(SearchKnowledgeBaseRequest::TagFilter && tagFilter) { DARABONBA_PTR_SET_RVALUE(tagFilter_, tagFilter) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline SearchKnowledgeBaseRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The list of document IDs.
    shared_ptr<vector<string>> documentIds_ {};
    // Specifies whether to enable the knowledge graph.
    shared_ptr<bool> enableKnowledgeGraph_ {};
    // The image retrieval input.
    shared_ptr<SearchKnowledgeBaseRequest::Image> image_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The query for retrieval.
    shared_ptr<string> query_ {};
    // The reranking model ID.
    shared_ptr<int64_t> rerankModelId_ {};
    // 租户已开通的重排模型名称。同时填写 rerankModelId 时，本参数优先生效。
    shared_ptr<string> rerankModelName_ {};
    // The retrieval configuration.
    shared_ptr<SearchKnowledgeBaseRequest::RetrievalConfig> retrievalConfig_ {};
    // The tag filter.
    shared_ptr<SearchKnowledgeBaseRequest::TagFilter> tagFilter_ {};
    // The knowledge base version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
