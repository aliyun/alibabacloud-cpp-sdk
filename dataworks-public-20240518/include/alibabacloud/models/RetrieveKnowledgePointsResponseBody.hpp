// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RetrieveKnowledgePointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgePointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgePointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RetrieveKnowledgePointsResponseBody() = default ;
    RetrieveKnowledgePointsResponseBody(const RetrieveKnowledgePointsResponseBody &) = default ;
    RetrieveKnowledgePointsResponseBody(RetrieveKnowledgePointsResponseBody &&) = default ;
    RetrieveKnowledgePointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgePointsResponseBody() = default ;
    RetrieveKnowledgePointsResponseBody& operator=(const RetrieveKnowledgePointsResponseBody &) = default ;
    RetrieveKnowledgePointsResponseBody& operator=(RetrieveKnowledgePointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Ambiguities, ambiguities_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Warnings, warnings_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Ambiguities, ambiguities_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
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
      class Warnings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Warnings& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Warnings& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Warnings() = default ;
        Warnings(const Warnings &) = default ;
        Warnings(Warnings &&) = default ;
        Warnings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Warnings() = default ;
        Warnings& operator=(const Warnings &) = default ;
        Warnings& operator=(Warnings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Warnings& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Warnings& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The truncation or degradation warning code. For example, CONTENT_TRUNCATED indicates that the content is truncated, and SOURCE_UNAVAILABLE indicates that the original file download is temporarily unavailable.
        shared_ptr<string> code_ {};
        // The sanitized readable description of the current warning. Use Code for programmatic judgment instead of relying on the text.
        shared_ptr<string> message_ {};
      };

      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(Sources, sources_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class Sources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sources& obj) { 
            DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
            DARABONBA_PTR_TO_JSON(FileName, fileName_);
          };
          friend void from_json(const Darabonba::Json& j, Sources& obj) { 
            DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
            DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          };
          Sources() = default ;
          Sources(const Sources &) = default ;
          Sources(Sources &&) = default ;
          Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sources() = default ;
          Sources& operator=(const Sources &) = default ;
          Sources& operator=(Sources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->expirationTime_ == nullptr && this->fileName_ == nullptr; };
          // downloadUrl Field Functions 
          bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
          void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
          inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
          inline Sources& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


          // expirationTime Field Functions 
          bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
          void deleteExpirationTime() { this->expirationTime_ = nullptr;};
          inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
          inline Sources& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline Sources& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        protected:
          // The temporary HTTPS download URL of the original file. The URL is valid for 2 hours. This parameter is returned only when the source can be reliably located and the caller has read permissions for the original file. Do not forward the URL publicly or store it for a long time.
          shared_ptr<string> downloadUrl_ {};
          // The expiration time of the download URL. The value is a UNIX timestamp in milliseconds.
          shared_ptr<int64_t> expirationTime_ {};
          // The full file name of the original document used for building. This is not the name of the current knowledge point segment.
          shared_ptr<string> fileName_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->sources_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Results& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const vector<Results::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Results::Sources>) };
        inline vector<Results::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<Results::Sources>) };
        inline Results& setSources(const vector<Results::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline Results& setSources(vector<Results::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Results& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Results& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Results& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The location ID of the knowledge point. Copy this value exactly as it appears in the search results and use it together with the corresponding KnowledgeBaseId and Type. Do not parse or convert this value.
        shared_ptr<string> id_ {};
        // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
        shared_ptr<string> knowledgeBaseId_ {};
        // The download information of the uploaded original documents explicitly associated with the current content. This parameter is omitted if no reliable source is available or if the caller lacks read permissions for the original files. The ability to retrieve knowledge points does not imply the permission to download the complete original files.
        shared_ptr<vector<Results::Sources>> sources_ {};
        // The readable summary of the knowledge point. The summary is not guaranteed to contain the complete content. To obtain details, call GetKnowledgePoint.
        shared_ptr<string> summary_ {};
        // The display title of the current knowledge point.
        shared_ptr<string> title_ {};
        // The read category of the knowledge point. GRAPH indicates a local graph, WIKI indicates a topic page, and KNOWLEDGE_CONTENT indicates knowledge content.
        shared_ptr<string> type_ {};
      };

      class Paths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Paths& obj) { 
          DARABONBA_PTR_TO_JSON(Edges, edges_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, Paths& obj) { 
          DARABONBA_PTR_FROM_JSON(Edges, edges_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        };
        Paths() = default ;
        Paths(const Paths &) = default ;
        Paths(Paths &&) = default ;
        Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Paths() = default ;
        Paths& operator=(const Paths &) = default ;
        Paths& operator=(Paths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Nodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Nodes() = default ;
          Nodes(const Nodes &) = default ;
          Nodes(Nodes &&) = default ;
          Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Nodes() = default ;
          Nodes& operator=(const Nodes &) = default ;
          Nodes& operator=(Nodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Nodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // knowledgeBaseId Field Functions 
          bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
          void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
          inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
          inline Nodes& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Nodes& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Nodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The location ID of the knowledge point. Copy this value exactly as it appears in the search results and use it together with the corresponding KnowledgeBaseId and Type. Do not parse or convert this value.
          shared_ptr<string> id_ {};
          // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
          shared_ptr<string> knowledgeBaseId_ {};
          // The display title of the current knowledge point.
          shared_ptr<string> title_ {};
          // The read category of the knowledge point. Use GRAPH for the current focus objects and graph nodes.
          shared_ptr<string> type_ {};
        };

        class Edges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Edges& obj) { 
            DARABONBA_PTR_TO_JSON(FromId, fromId_);
            DARABONBA_PTR_TO_JSON(RelationType, relationType_);
            DARABONBA_PTR_TO_JSON(ToId, toId_);
          };
          friend void from_json(const Darabonba::Json& j, Edges& obj) { 
            DARABONBA_PTR_FROM_JSON(FromId, fromId_);
            DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
            DARABONBA_PTR_FROM_JSON(ToId, toId_);
          };
          Edges() = default ;
          Edges(const Edges &) = default ;
          Edges(Edges &&) = default ;
          Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Edges() = default ;
          Edges& operator=(const Edges &) = default ;
          Edges& operator=(Edges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fromId_ == nullptr
        && this->relationType_ == nullptr && this->toId_ == nullptr; };
          // fromId Field Functions 
          bool hasFromId() const { return this->fromId_ != nullptr;};
          void deleteFromId() { this->fromId_ = nullptr;};
          inline string getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
          inline Edges& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


          // relationType Field Functions 
          bool hasRelationType() const { return this->relationType_ != nullptr;};
          void deleteRelationType() { this->relationType_ = nullptr;};
          inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
          inline Edges& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


          // toId Field Functions 
          bool hasToId() const { return this->toId_ != nullptr;};
          void deleteToId() { this->toId_ = nullptr;};
          inline string getToId() const { DARABONBA_PTR_GET_DEFAULT(toId_, "") };
          inline Edges& setToId(string toId) { DARABONBA_PTR_SET_VALUE(toId_, toId) };


        protected:
          // The Id of the start node in the Nodes array of the same path.
          shared_ptr<string> fromId_ {};
          // The public relationship type directed from the start node to the end node. For example, CALCULATED_FROM indicates that the start node is calculated based on the end node. You cannot infer the complete formula based solely on the relationship type.
          shared_ptr<string> relationType_ {};
          // The Id of the end node in the Nodes array of the same path.
          shared_ptr<string> toId_ {};
        };

        virtual bool empty() const override { return this->edges_ == nullptr
        && this->nodes_ == nullptr; };
        // edges Field Functions 
        bool hasEdges() const { return this->edges_ != nullptr;};
        void deleteEdges() { this->edges_ = nullptr;};
        inline const vector<Paths::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Paths::Edges>) };
        inline vector<Paths::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<Paths::Edges>) };
        inline Paths& setEdges(const vector<Paths::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
        inline Paths& setEdges(vector<Paths::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline const vector<Paths::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Paths::Nodes>) };
        inline vector<Paths::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Paths::Nodes>) };
        inline Paths& setNodes(const vector<Paths::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
        inline Paths& setNodes(vector<Paths::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      protected:
        // The directed relationships that connect the nodes in the Nodes array of the current path.
        shared_ptr<vector<Paths::Edges>> edges_ {};
        // The graph nodes in the relationship path. You can read the details of each node by using its KnowledgeBaseId, Type, and Id.
        shared_ptr<vector<Paths::Nodes>> nodes_ {};
      };

      class Ambiguities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ambiguities& obj) { 
          DARABONBA_PTR_TO_JSON(Candidates, candidates_);
          DARABONBA_PTR_TO_JSON(Mention, mention_);
        };
        friend void from_json(const Darabonba::Json& j, Ambiguities& obj) { 
          DARABONBA_PTR_FROM_JSON(Candidates, candidates_);
          DARABONBA_PTR_FROM_JSON(Mention, mention_);
        };
        Ambiguities() = default ;
        Ambiguities(const Ambiguities &) = default ;
        Ambiguities(Ambiguities &&) = default ;
        Ambiguities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ambiguities() = default ;
        Ambiguities& operator=(const Ambiguities &) = default ;
        Ambiguities& operator=(Ambiguities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Candidates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Candidates& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Candidates& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Candidates() = default ;
          Candidates(const Candidates &) = default ;
          Candidates(Candidates &&) = default ;
          Candidates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Candidates() = default ;
          Candidates& operator=(const Candidates &) = default ;
          Candidates& operator=(Candidates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Candidates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // knowledgeBaseId Field Functions 
          bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
          void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
          inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
          inline Candidates& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Candidates& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Candidates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The location ID of the knowledge point. Copy this value exactly as it appears in the search results and use it together with the corresponding KnowledgeBaseId and Type. Do not parse or convert this value.
          shared_ptr<string> id_ {};
          // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
          shared_ptr<string> knowledgeBaseId_ {};
          // The display title of the current knowledge point.
          shared_ptr<string> title_ {};
          // The read category of the knowledge point. Use GRAPH for the current focus objects and graph nodes.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->candidates_ == nullptr
        && this->mention_ == nullptr; };
        // candidates Field Functions 
        bool hasCandidates() const { return this->candidates_ != nullptr;};
        void deleteCandidates() { this->candidates_ = nullptr;};
        inline const vector<Ambiguities::Candidates> & getCandidates() const { DARABONBA_PTR_GET_CONST(candidates_, vector<Ambiguities::Candidates>) };
        inline vector<Ambiguities::Candidates> getCandidates() { DARABONBA_PTR_GET(candidates_, vector<Ambiguities::Candidates>) };
        inline Ambiguities& setCandidates(const vector<Ambiguities::Candidates> & candidates) { DARABONBA_PTR_SET_VALUE(candidates_, candidates) };
        inline Ambiguities& setCandidates(vector<Ambiguities::Candidates> && candidates) { DARABONBA_PTR_SET_RVALUE(candidates_, candidates) };


        // mention Field Functions 
        bool hasMention() const { return this->mention_ != nullptr;};
        void deleteMention() { this->mention_ = nullptr;};
        inline string getMention() const { DARABONBA_PTR_GET_DEFAULT(mention_, "") };
        inline Ambiguities& setMention(string mention) { DARABONBA_PTR_SET_VALUE(mention_, mention) };


      protected:
        // The candidate graph nodes when ambiguity exists. Each candidate carries the KnowledgeBaseId, Type, and Id for reading details, which does not indicate that the user has confirmed the selection.
        shared_ptr<vector<Ambiguities::Candidates>> candidates_ {};
        // The name or description of the object whose referent is not yet determined in the query.
        shared_ptr<string> mention_ {};
      };

      virtual bool empty() const override { return this->ambiguities_ == nullptr
        && this->paths_ == nullptr && this->results_ == nullptr && this->warnings_ == nullptr; };
      // ambiguities Field Functions 
      bool hasAmbiguities() const { return this->ambiguities_ != nullptr;};
      void deleteAmbiguities() { this->ambiguities_ = nullptr;};
      inline const vector<Data::Ambiguities> & getAmbiguities() const { DARABONBA_PTR_GET_CONST(ambiguities_, vector<Data::Ambiguities>) };
      inline vector<Data::Ambiguities> getAmbiguities() { DARABONBA_PTR_GET(ambiguities_, vector<Data::Ambiguities>) };
      inline Data& setAmbiguities(const vector<Data::Ambiguities> & ambiguities) { DARABONBA_PTR_SET_VALUE(ambiguities_, ambiguities) };
      inline Data& setAmbiguities(vector<Data::Ambiguities> && ambiguities) { DARABONBA_PTR_SET_RVALUE(ambiguities_, ambiguities) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<Data::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Data::Paths>) };
      inline vector<Data::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<Data::Paths>) };
      inline Data& setPaths(const vector<Data::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline Data& setPaths(vector<Data::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // warnings Field Functions 
      bool hasWarnings() const { return this->warnings_ != nullptr;};
      void deleteWarnings() { this->warnings_ = nullptr;};
      inline const vector<Data::Warnings> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<Data::Warnings>) };
      inline vector<Data::Warnings> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<Data::Warnings>) };
      inline Data& setWarnings(const vector<Data::Warnings> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
      inline Data& setWarnings(vector<Data::Warnings> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


    protected:
      // The ambiguity descriptions and candidate objects returned when the target is not yet confirmed.
      shared_ptr<vector<Data::Ambiguities>> ambiguities_ {};
      // The relationship paths matched by the search. Path indexes do not correspond to indexes in the Results array. The paths may cover only a subset of relationships.
      shared_ptr<vector<Data::Paths>> paths_ {};
      // Knowledge point summaries ranked by relevance across all knowledge bases. The total number of results does not exceed MaxResults. Results can include GRAPH, WIKI, and KNOWLEDGE_CONTENT.
      shared_ptr<vector<Data::Results>> results_ {};
      // The truncation, scope limitation, or degradation warnings for the current call. Use Code for programmatic judgment. Message is for reading purposes only.
      shared_ptr<vector<Data::Warnings>> warnings_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetrieveKnowledgePointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetrieveKnowledgePointsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetrieveKnowledgePointsResponseBody::Data) };
    inline RetrieveKnowledgePointsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetrieveKnowledgePointsResponseBody::Data) };
    inline RetrieveKnowledgePointsResponseBody& setData(const RetrieveKnowledgePointsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetrieveKnowledgePointsResponseBody& setData(RetrieveKnowledgePointsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RetrieveKnowledgePointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveKnowledgePointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RetrieveKnowledgePointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. This field may be omitted if the request succeeds. If the request fails, the common error response protocol applies.
    shared_ptr<string> code_ {};
    // The knowledge point summaries, relationship paths, ambiguity candidates, and warnings for the current search.
    shared_ptr<RetrieveKnowledgePointsResponseBody::Data> data_ {};
    // A human-readable description of the business error. This field may be omitted if the request succeeds. Provide the RequestId when troubleshooting failures.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
