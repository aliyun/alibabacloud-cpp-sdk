// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Relations, relations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Relations, relations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    QueryKnowledgeBasesContentResponseBody() = default ;
    QueryKnowledgeBasesContentResponseBody(const QueryKnowledgeBasesContentResponseBody &) = default ;
    QueryKnowledgeBasesContentResponseBody(QueryKnowledgeBasesContentResponseBody &&) = default ;
    QueryKnowledgeBasesContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentResponseBody() = default ;
    QueryKnowledgeBasesContentResponseBody& operator=(const QueryKnowledgeBasesContentResponseBody &) = default ;
    QueryKnowledgeBasesContentResponseBody& operator=(QueryKnowledgeBasesContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(EmbeddingEntries, embeddingEntries_);
        DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(EmbeddingEntries, embeddingEntries_);
        DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
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
      virtual bool empty() const override { return this->embeddingEntries_ == nullptr
        && this->embeddingTokens_ == nullptr; };
      // embeddingEntries Field Functions 
      bool hasEmbeddingEntries() const { return this->embeddingEntries_ != nullptr;};
      void deleteEmbeddingEntries() { this->embeddingEntries_ = nullptr;};
      inline string getEmbeddingEntries() const { DARABONBA_PTR_GET_DEFAULT(embeddingEntries_, "") };
      inline Usage& setEmbeddingEntries(string embeddingEntries) { DARABONBA_PTR_SET_VALUE(embeddingEntries_, embeddingEntries) };


      // embeddingTokens Field Functions 
      bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
      void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
      inline string getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
      inline Usage& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    protected:
      // The number of entries that are used during vectorization.
      // 
      // >  An entry refers to a single unit of vectorization processing. Processing one text input counts as 1 entry, while processing one image counts as 2 entries.
      shared_ptr<string> embeddingEntries_ {};
      // The number of tokens that are used for vectorization.
      // 
      // >  A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
      shared_ptr<string> embeddingTokens_ {};
    };

    class Relations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Relations& obj) { 
        DARABONBA_PTR_TO_JSON(relations, relations_);
      };
      friend void from_json(const Darabonba::Json& j, Relations& obj) { 
        DARABONBA_PTR_FROM_JSON(relations, relations_);
      };
      Relations() = default ;
      Relations(const Relations &) = default ;
      Relations(Relations &&) = default ;
      Relations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Relations() = default ;
      Relations& operator=(const Relations &) = default ;
      Relations& operator=(Relations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelationsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SourceEntity, sourceEntity_);
          DARABONBA_PTR_TO_JSON(TargetEntity, targetEntity_);
        };
        friend void from_json(const Darabonba::Json& j, RelationsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SourceEntity, sourceEntity_);
          DARABONBA_PTR_FROM_JSON(TargetEntity, targetEntity_);
        };
        RelationsItem() = default ;
        RelationsItem(const RelationsItem &) = default ;
        RelationsItem(RelationsItem &&) = default ;
        RelationsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationsItem() = default ;
        RelationsItem& operator=(const RelationsItem &) = default ;
        RelationsItem& operator=(RelationsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->fileName_ == nullptr && this->id_ == nullptr && this->sourceEntity_ == nullptr && this->targetEntity_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RelationsItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline RelationsItem& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline RelationsItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sourceEntity Field Functions 
        bool hasSourceEntity() const { return this->sourceEntity_ != nullptr;};
        void deleteSourceEntity() { this->sourceEntity_ = nullptr;};
        inline string getSourceEntity() const { DARABONBA_PTR_GET_DEFAULT(sourceEntity_, "") };
        inline RelationsItem& setSourceEntity(string sourceEntity) { DARABONBA_PTR_SET_VALUE(sourceEntity_, sourceEntity) };


        // targetEntity Field Functions 
        bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
        void deleteTargetEntity() { this->targetEntity_ = nullptr;};
        inline string getTargetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
        inline RelationsItem& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


      protected:
        // The description of the relationship edge.
        shared_ptr<string> description_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The ID of the link.
        shared_ptr<string> id_ {};
        // The source entity.
        shared_ptr<string> sourceEntity_ {};
        // The destination entity.
        shared_ptr<string> targetEntity_ {};
      };

      virtual bool empty() const override { return this->relations_ == nullptr; };
      // relations Field Functions 
      bool hasRelations() const { return this->relations_ != nullptr;};
      void deleteRelations() { this->relations_ = nullptr;};
      inline const vector<Relations::RelationsItem> & getRelations() const { DARABONBA_PTR_GET_CONST(relations_, vector<Relations::RelationsItem>) };
      inline vector<Relations::RelationsItem> getRelations() { DARABONBA_PTR_GET(relations_, vector<Relations::RelationsItem>) };
      inline Relations& setRelations(const vector<Relations::RelationsItem> & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
      inline Relations& setRelations(vector<Relations::RelationsItem> && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    protected:
      shared_ptr<vector<Relations::RelationsItem>> relations_ {};
    };

    class Matches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Matches& obj) { 
        DARABONBA_PTR_TO_JSON(MatchList, matchList_);
      };
      friend void from_json(const Darabonba::Json& j, Matches& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
      };
      Matches() = default ;
      Matches(const Matches &) = default ;
      Matches(Matches &&) = default ;
      Matches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Matches() = default ;
      Matches& operator=(const Matches &) = default ;
      Matches& operator=(Matches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchList& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_PTR_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_TO_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_TO_JSON(Score, score_);
        };
        friend void from_json(const Darabonba::Json& j, MatchList& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
          DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(RerankScore, rerankScore_);
          DARABONBA_PTR_FROM_JSON(RetrievalSource, retrievalSource_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
        };
        MatchList() = default ;
        MatchList(const MatchList &) = default ;
        MatchList(MatchList &&) = default ;
        MatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchList() = default ;
        MatchList& operator=(const MatchList &) = default ;
        MatchList& operator=(MatchList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr && this->fileURL_ == nullptr && this->id_ == nullptr && this->loaderMetadata_ == nullptr && this->metadata_ == nullptr
        && this->rerankScore_ == nullptr && this->retrievalSource_ == nullptr && this->score_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline MatchList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline MatchList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileURL Field Functions 
        bool hasFileURL() const { return this->fileURL_ != nullptr;};
        void deleteFileURL() { this->fileURL_ = nullptr;};
        inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
        inline MatchList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MatchList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // loaderMetadata Field Functions 
        bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
        void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
        inline string getLoaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
        inline MatchList& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
        inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
        inline MatchList& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
        inline MatchList& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


        // rerankScore Field Functions 
        bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
        void deleteRerankScore() { this->rerankScore_ = nullptr;};
        inline double getRerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
        inline MatchList& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


        // retrievalSource Field Functions 
        bool hasRetrievalSource() const { return this->retrievalSource_ != nullptr;};
        void deleteRetrievalSource() { this->retrievalSource_ = nullptr;};
        inline int32_t getRetrievalSource() const { DARABONBA_PTR_GET_DEFAULT(retrievalSource_, 0) };
        inline MatchList& setRetrievalSource(int32_t retrievalSource) { DARABONBA_PTR_SET_VALUE(retrievalSource_, retrievalSource) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline MatchList& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      protected:
        // The content of the text.
        shared_ptr<string> content_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The public network URL of the image result. By default, the URL is valid for 2 hours.
        // 
        // You can use the UrlExpiration parameter to specify a validity period.
        shared_ptr<string> fileURL_ {};
        // The unique ID of the vector data.
        shared_ptr<string> id_ {};
        // Document loader metadata.
        shared_ptr<string> loaderMetadata_ {};
        // The metadata map.
        shared_ptr<map<string, string>> metadata_ {};
        // The rerank score.
        shared_ptr<double> rerankScore_ {};
        // The source of the retrieval results. 1 indicates vector retrieval, 2 indicates full-text retrieval, and 3 indicates dual-path retrieval.
        shared_ptr<int32_t> retrievalSource_ {};
        // The similarity score of the data. It is related to the algorithm (l2, ip, or cosine) that is specified when you create an index.
        shared_ptr<double> score_ {};
      };

      virtual bool empty() const override { return this->matchList_ == nullptr; };
      // matchList Field Functions 
      bool hasMatchList() const { return this->matchList_ != nullptr;};
      void deleteMatchList() { this->matchList_ = nullptr;};
      inline const vector<Matches::MatchList> & getMatchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<Matches::MatchList>) };
      inline vector<Matches::MatchList> getMatchList() { DARABONBA_PTR_GET(matchList_, vector<Matches::MatchList>) };
      inline Matches& setMatchList(const vector<Matches::MatchList> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
      inline Matches& setMatchList(vector<Matches::MatchList> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


    protected:
      shared_ptr<vector<Matches::MatchList>> matchList_ {};
    };

    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(entities, entities_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(entities, entities_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EntitiesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntitiesItem& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Entity, entity_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EntitiesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Entity, entity_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        EntitiesItem() = default ;
        EntitiesItem(const EntitiesItem &) = default ;
        EntitiesItem(EntitiesItem &&) = default ;
        EntitiesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntitiesItem() = default ;
        EntitiesItem& operator=(const EntitiesItem &) = default ;
        EntitiesItem& operator=(EntitiesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->entity_ == nullptr && this->fileName_ == nullptr && this->id_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EntitiesItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // entity Field Functions 
        bool hasEntity() const { return this->entity_ != nullptr;};
        void deleteEntity() { this->entity_ = nullptr;};
        inline string getEntity() const { DARABONBA_PTR_GET_DEFAULT(entity_, "") };
        inline EntitiesItem& setEntity(string entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline EntitiesItem& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline EntitiesItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EntitiesItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The entity description.
        shared_ptr<string> description_ {};
        // The name of the entity.
        shared_ptr<string> entity_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The entity ID.
        shared_ptr<string> id_ {};
        // The entity type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->entities_ == nullptr; };
      // entities Field Functions 
      bool hasEntities() const { return this->entities_ != nullptr;};
      void deleteEntities() { this->entities_ = nullptr;};
      inline const vector<Entities::EntitiesItem> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<Entities::EntitiesItem>) };
      inline vector<Entities::EntitiesItem> getEntities() { DARABONBA_PTR_GET(entities_, vector<Entities::EntitiesItem>) };
      inline Entities& setEntities(const vector<Entities::EntitiesItem> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
      inline Entities& setEntities(vector<Entities::EntitiesItem> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    protected:
      shared_ptr<vector<Entities::EntitiesItem>> entities_ {};
    };

    virtual bool empty() const override { return this->embeddingTokens_ == nullptr
        && this->entities_ == nullptr && this->matches_ == nullptr && this->message_ == nullptr && this->relations_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->usage_ == nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline string getEmbeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setEmbeddingTokens(string embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBody::Entities & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, QueryKnowledgeBasesContentResponseBody::Entities) };
    inline QueryKnowledgeBasesContentResponseBody::Entities getEntities() { DARABONBA_PTR_GET(entities_, QueryKnowledgeBasesContentResponseBody::Entities) };
    inline QueryKnowledgeBasesContentResponseBody& setEntities(const QueryKnowledgeBasesContentResponseBody::Entities & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline QueryKnowledgeBasesContentResponseBody& setEntities(QueryKnowledgeBasesContentResponseBody::Entities && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBody::Matches & getMatches() const { DARABONBA_PTR_GET_CONST(matches_, QueryKnowledgeBasesContentResponseBody::Matches) };
    inline QueryKnowledgeBasesContentResponseBody::Matches getMatches() { DARABONBA_PTR_GET(matches_, QueryKnowledgeBasesContentResponseBody::Matches) };
    inline QueryKnowledgeBasesContentResponseBody& setMatches(const QueryKnowledgeBasesContentResponseBody::Matches & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline QueryKnowledgeBasesContentResponseBody& setMatches(QueryKnowledgeBasesContentResponseBody::Matches && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBody::Relations & getRelations() const { DARABONBA_PTR_GET_CONST(relations_, QueryKnowledgeBasesContentResponseBody::Relations) };
    inline QueryKnowledgeBasesContentResponseBody::Relations getRelations() { DARABONBA_PTR_GET(relations_, QueryKnowledgeBasesContentResponseBody::Relations) };
    inline QueryKnowledgeBasesContentResponseBody& setRelations(const QueryKnowledgeBasesContentResponseBody::Relations & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline QueryKnowledgeBasesContentResponseBody& setRelations(QueryKnowledgeBasesContentResponseBody::Relations && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryKnowledgeBasesContentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const QueryKnowledgeBasesContentResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, QueryKnowledgeBasesContentResponseBody::Usage) };
    inline QueryKnowledgeBasesContentResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, QueryKnowledgeBasesContentResponseBody::Usage) };
    inline QueryKnowledgeBasesContentResponseBody& setUsage(const QueryKnowledgeBasesContentResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline QueryKnowledgeBasesContentResponseBody& setUsage(QueryKnowledgeBasesContentResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The number of tokens that are used during vectorization.
    // 
    // >  A token is the minimum unit for segmenting text. A token can be a word, phrase, punctuation, or character.
    shared_ptr<string> embeddingTokens_ {};
    // The details of the entity.
    shared_ptr<QueryKnowledgeBasesContentResponseBody::Entities> entities_ {};
    // A single data record.
    shared_ptr<QueryKnowledgeBasesContentResponseBody::Matches> matches_ {};
    // The returned information.
    shared_ptr<string> message_ {};
    // The details of the relationship edge.
    shared_ptr<QueryKnowledgeBasesContentResponseBody::Relations> relations_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**.
    // *   **fail**.
    shared_ptr<string> status_ {};
    // The total number of tokens that are consumed by this query.
    shared_ptr<QueryKnowledgeBasesContentResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
