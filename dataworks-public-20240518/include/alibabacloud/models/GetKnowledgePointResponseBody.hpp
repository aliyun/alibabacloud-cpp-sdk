// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEPOINTRESPONSEBODY_HPP_
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
  class GetKnowledgePointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgePointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgePointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKnowledgePointResponseBody() = default ;
    GetKnowledgePointResponseBody(const GetKnowledgePointResponseBody &) = default ;
    GetKnowledgePointResponseBody(GetKnowledgePointResponseBody &&) = default ;
    GetKnowledgePointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgePointResponseBody() = default ;
    GetKnowledgePointResponseBody& operator=(const GetKnowledgePointResponseBody &) = default ;
    GetKnowledgePointResponseBody& operator=(GetKnowledgePointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Graph, graph_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(KnowledgeContent, knowledgeContent_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Warnings, warnings_);
        DARABONBA_PTR_TO_JSON(Wiki, wiki_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Graph, graph_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeContent, knowledgeContent_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
        DARABONBA_PTR_FROM_JSON(Wiki, wiki_);
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
      class Wiki : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Wiki& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Sources, sources_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Wiki& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Wiki() = default ;
        Wiki(const Wiki &) = default ;
        Wiki(Wiki &&) = default ;
        Wiki(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Wiki() = default ;
        Wiki& operator=(const Wiki &) = default ;
        Wiki& operator=(Wiki &&) = default ;
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
          // The temporary HTTPS download URL of the original file, which is valid for 2 hours. This parameter is returned only when the source can be reliably located and the caller has read permissions for the original file. Do not forward this URL publicly or store it for a long time.
          shared_ptr<string> downloadUrl_ {};
          // The expiration time of the download URL, in UNIX milliseconds.
          shared_ptr<int64_t> expirationTime_ {};
          // The full file name of the original document used for building. This is not the name of the current knowledge point fragment.
          shared_ptr<string> fileName_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->sources_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Wiki& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const vector<Wiki::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Wiki::Sources>) };
        inline vector<Wiki::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<Wiki::Sources>) };
        inline Wiki& setSources(const vector<Wiki::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline Wiki& setSources(vector<Wiki::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Wiki& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The currently public Markdown body. The knowledge content may be a document fragment or a readable projection of structured knowledge, and is not guaranteed to be the full text of the original file.
        shared_ptr<string> content_ {};
        // The download information of the uploaded original document explicitly associated with the current content. This parameter is omitted when no reliable source is available or when you do not have read permissions for the original file. The ability to retrieve a knowledge point does not imply the ability to download the complete original file.
        shared_ptr<vector<Wiki::Sources>> sources_ {};
        // The display title of the current knowledge point.
        shared_ptr<string> title_ {};
      };

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
        // The truncation or degradation prompt code. For example, CONTENT_TRUNCATED indicates that the content is truncated, and SOURCE_UNAVAILABLE indicates that the original file download is temporarily unavailable.
        shared_ptr<string> code_ {};
        // The sanitized and readable description of the current prompt. Use Code for programmatic judgment instead of relying on the text.
        shared_ptr<string> message_ {};
      };

      class KnowledgeContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeContent& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Sources, sources_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeContent& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        KnowledgeContent() = default ;
        KnowledgeContent(const KnowledgeContent &) = default ;
        KnowledgeContent(KnowledgeContent &&) = default ;
        KnowledgeContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeContent() = default ;
        KnowledgeContent& operator=(const KnowledgeContent &) = default ;
        KnowledgeContent& operator=(KnowledgeContent &&) = default ;
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
          // The temporary HTTPS download URL of the original file, which is valid for 2 hours. This parameter is returned only when the source can be reliably located and the caller has read permissions for the original file. Do not forward this URL publicly or store it for a long time.
          shared_ptr<string> downloadUrl_ {};
          // The expiration time of the download URL, in UNIX milliseconds.
          shared_ptr<int64_t> expirationTime_ {};
          // The full file name of the original document used for building. This is not the name of the current knowledge point fragment.
          shared_ptr<string> fileName_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->sources_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline KnowledgeContent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const vector<KnowledgeContent::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<KnowledgeContent::Sources>) };
        inline vector<KnowledgeContent::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<KnowledgeContent::Sources>) };
        inline KnowledgeContent& setSources(const vector<KnowledgeContent::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline KnowledgeContent& setSources(vector<KnowledgeContent::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline KnowledgeContent& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The currently public Markdown body. The knowledge content may be a document fragment or a readable projection of structured knowledge, and is not guaranteed to be the full text of the original file.
        shared_ptr<string> content_ {};
        // The download information of the uploaded original document explicitly associated with the current content. This parameter is omitted when no reliable source is available or when you do not have read permissions for the original file. The ability to retrieve a knowledge point does not imply the ability to download the complete original file.
        shared_ptr<vector<KnowledgeContent::Sources>> sources_ {};
        // The display title of the current knowledge point.
        shared_ptr<string> title_ {};
      };

      class Graph : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Graph& obj) { 
          DARABONBA_PTR_TO_JSON(Edges, edges_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
          DARABONBA_PTR_TO_JSON(RootNodeId, rootNodeId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Graph& obj) { 
          DARABONBA_PTR_FROM_JSON(Edges, edges_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
          DARABONBA_PTR_FROM_JSON(RootNodeId, rootNodeId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Graph() = default ;
        Graph(const Graph &) = default ;
        Graph(Graph &&) = default ;
        Graph(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Graph() = default ;
        Graph& operator=(const Graph &) = default ;
        Graph& operator=(Graph &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Nodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
            DARABONBA_PTR_TO_JSON(Aliases, aliases_);
            DARABONBA_PTR_TO_JSON(Definition, definition_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EntityId, entityId_);
            DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
            DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
            DARABONBA_PTR_FROM_JSON(Definition, definition_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
            DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
          virtual bool empty() const override { return this->aliases_ == nullptr
        && this->definition_ == nullptr && this->description_ == nullptr && this->entityId_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr
        && this->nodeId_ == nullptr && this->type_ == nullptr; };
          // aliases Field Functions 
          bool hasAliases() const { return this->aliases_ != nullptr;};
          void deleteAliases() { this->aliases_ = nullptr;};
          inline const vector<string> & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<string>) };
          inline vector<string> getAliases() { DARABONBA_PTR_GET(aliases_, vector<string>) };
          inline Nodes& setAliases(const vector<string> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
          inline Nodes& setAliases(vector<string> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


          // definition Field Functions 
          bool hasDefinition() const { return this->definition_ != nullptr;};
          void deleteDefinition() { this->definition_ = nullptr;};
          inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
          inline Nodes& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Nodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // entityId Field Functions 
          bool hasEntityId() const { return this->entityId_ != nullptr;};
          void deleteEntityId() { this->entityId_ = nullptr;};
          inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
          inline Nodes& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


          // knowledgeBaseId Field Functions 
          bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
          void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
          inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
          inline Nodes& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Nodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The list of reliable aliases for the node. This parameter is omitted when no aliases are available.
          shared_ptr<vector<string>> aliases_ {};
          // The reliable business definition of the graph node. This parameter is omitted when no public definition is available.
          shared_ptr<string> definition_ {};
          // The readable supplementary description of the current node or relationship. This parameter is omitted when no reliable content is available.
          shared_ptr<string> description_ {};
          // The asset ID in DataWorks Data Map that can be reliably located. This is not the NodeId of the graph node. This parameter is omitted when no unique and reliable asset mapping is available.
          shared_ptr<string> entityId_ {};
          // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
          shared_ptr<string> knowledgeBaseId_ {};
          // The display name of the graph node.
          shared_ptr<string> name_ {};
          // The ID of the node in the current knowledge base graph. You can use this value as the Id parameter when Type is set to GRAPH to read the local graph of this node.
          shared_ptr<string> nodeId_ {};
          // The business category of the graph node, such as TABLE for a data table. This is not the read category of the knowledge point.
          shared_ptr<string> type_ {};
        };

        class Edges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Edges& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EdgeId, edgeId_);
            DARABONBA_PTR_TO_JSON(FromNodeId, fromNodeId_);
            DARABONBA_PTR_TO_JSON(Join, join_);
            DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_TO_JSON(RelationType, relationType_);
            DARABONBA_PTR_TO_JSON(ToNodeId, toNodeId_);
          };
          friend void from_json(const Darabonba::Json& j, Edges& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EdgeId, edgeId_);
            DARABONBA_PTR_FROM_JSON(FromNodeId, fromNodeId_);
            DARABONBA_PTR_FROM_JSON(Join, join_);
            DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
            DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
            DARABONBA_PTR_FROM_JSON(ToNodeId, toNodeId_);
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
          class Join : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Join& obj) { 
              DARABONBA_PTR_TO_JSON(Cardinality, cardinality_);
              DARABONBA_PTR_TO_JSON(JoinKeys, joinKeys_);
            };
            friend void from_json(const Darabonba::Json& j, Join& obj) { 
              DARABONBA_PTR_FROM_JSON(Cardinality, cardinality_);
              DARABONBA_PTR_FROM_JSON(JoinKeys, joinKeys_);
            };
            Join() = default ;
            Join(const Join &) = default ;
            Join(Join &&) = default ;
            Join(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Join() = default ;
            Join& operator=(const Join &) = default ;
            Join& operator=(Join &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class JoinKeys : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const JoinKeys& obj) { 
                DARABONBA_PTR_TO_JSON(FromField, fromField_);
                DARABONBA_PTR_TO_JSON(ToField, toField_);
              };
              friend void from_json(const Darabonba::Json& j, JoinKeys& obj) { 
                DARABONBA_PTR_FROM_JSON(FromField, fromField_);
                DARABONBA_PTR_FROM_JSON(ToField, toField_);
              };
              JoinKeys() = default ;
              JoinKeys(const JoinKeys &) = default ;
              JoinKeys(JoinKeys &&) = default ;
              JoinKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~JoinKeys() = default ;
              JoinKeys& operator=(const JoinKeys &) = default ;
              JoinKeys& operator=(JoinKeys &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->fromField_ == nullptr
        && this->toField_ == nullptr; };
              // fromField Field Functions 
              bool hasFromField() const { return this->fromField_ != nullptr;};
              void deleteFromField() { this->fromField_ = nullptr;};
              inline string getFromField() const { DARABONBA_PTR_GET_DEFAULT(fromField_, "") };
              inline JoinKeys& setFromField(string fromField) { DARABONBA_PTR_SET_VALUE(fromField_, fromField) };


              // toField Field Functions 
              bool hasToField() const { return this->toField_ != nullptr;};
              void deleteToField() { this->toField_ = nullptr;};
              inline string getToField() const { DARABONBA_PTR_GET_DEFAULT(toField_, "") };
              inline JoinKeys& setToField(string toField) { DARABONBA_PTR_SET_VALUE(toField_, toField) };


            protected:
              // The name of the association field for the node corresponding to FromNodeId.
              shared_ptr<string> fromField_ {};
              // The name of the association field for the node corresponding to ToNodeId.
              shared_ptr<string> toField_ {};
            };

            virtual bool empty() const override { return this->cardinality_ == nullptr
        && this->joinKeys_ == nullptr; };
            // cardinality Field Functions 
            bool hasCardinality() const { return this->cardinality_ != nullptr;};
            void deleteCardinality() { this->cardinality_ = nullptr;};
            inline string getCardinality() const { DARABONBA_PTR_GET_DEFAULT(cardinality_, "") };
            inline Join& setCardinality(string cardinality) { DARABONBA_PTR_SET_VALUE(cardinality_, cardinality) };


            // joinKeys Field Functions 
            bool hasJoinKeys() const { return this->joinKeys_ != nullptr;};
            void deleteJoinKeys() { this->joinKeys_ = nullptr;};
            inline const vector<Join::JoinKeys> & getJoinKeys() const { DARABONBA_PTR_GET_CONST(joinKeys_, vector<Join::JoinKeys>) };
            inline vector<Join::JoinKeys> getJoinKeys() { DARABONBA_PTR_GET(joinKeys_, vector<Join::JoinKeys>) };
            inline Join& setJoinKeys(const vector<Join::JoinKeys> & joinKeys) { DARABONBA_PTR_SET_VALUE(joinKeys_, joinKeys) };
            inline Join& setJoinKeys(vector<Join::JoinKeys> && joinKeys) { DARABONBA_PTR_SET_RVALUE(joinKeys_, joinKeys) };


          protected:
            // The association cardinality from the start node to the end node. Valid values: ONE_TO_ONE, ONE_TO_MANY, MANY_TO_ONE, and MANY_TO_MANY. This parameter is returned when the cardinality is reliable.
            shared_ptr<string> cardinality_ {};
            // The equivalent association field pairing for the nodes at both ends. Composite keys are returned in full.
            shared_ptr<vector<Join::JoinKeys>> joinKeys_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->edgeId_ == nullptr && this->fromNodeId_ == nullptr && this->join_ == nullptr && this->knowledgeBaseId_ == nullptr && this->relationType_ == nullptr
        && this->toNodeId_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Edges& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // edgeId Field Functions 
          bool hasEdgeId() const { return this->edgeId_ != nullptr;};
          void deleteEdgeId() { this->edgeId_ = nullptr;};
          inline string getEdgeId() const { DARABONBA_PTR_GET_DEFAULT(edgeId_, "") };
          inline Edges& setEdgeId(string edgeId) { DARABONBA_PTR_SET_VALUE(edgeId_, edgeId) };


          // fromNodeId Field Functions 
          bool hasFromNodeId() const { return this->fromNodeId_ != nullptr;};
          void deleteFromNodeId() { this->fromNodeId_ = nullptr;};
          inline string getFromNodeId() const { DARABONBA_PTR_GET_DEFAULT(fromNodeId_, "") };
          inline Edges& setFromNodeId(string fromNodeId) { DARABONBA_PTR_SET_VALUE(fromNodeId_, fromNodeId) };


          // join Field Functions 
          bool hasJoin() const { return this->join_ != nullptr;};
          void deleteJoin() { this->join_ = nullptr;};
          inline const Edges::Join & getJoin() const { DARABONBA_PTR_GET_CONST(join_, Edges::Join) };
          inline Edges::Join getJoin() { DARABONBA_PTR_GET(join_, Edges::Join) };
          inline Edges& setJoin(const Edges::Join & join) { DARABONBA_PTR_SET_VALUE(join_, join) };
          inline Edges& setJoin(Edges::Join && join) { DARABONBA_PTR_SET_RVALUE(join_, join) };


          // knowledgeBaseId Field Functions 
          bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
          void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
          inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
          inline Edges& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


          // relationType Field Functions 
          bool hasRelationType() const { return this->relationType_ != nullptr;};
          void deleteRelationType() { this->relationType_ = nullptr;};
          inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
          inline Edges& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


          // toNodeId Field Functions 
          bool hasToNodeId() const { return this->toNodeId_ != nullptr;};
          void deleteToNodeId() { this->toNodeId_ = nullptr;};
          inline string getToNodeId() const { DARABONBA_PTR_GET_DEFAULT(toNodeId_, "") };
          inline Edges& setToNodeId(string toNodeId) { DARABONBA_PTR_SET_VALUE(toNodeId_, toNodeId) };


        protected:
          // The readable supplementary description of the current node or relationship. This parameter is omitted when no reliable content is available.
          shared_ptr<string> description_ {};
          // The ID of the relationship in the current knowledge base graph.
          shared_ptr<string> edgeId_ {};
          // The NodeId of the start node of the relationship. The start node must exist in the Graph.Nodes of the same page.
          shared_ptr<string> fromNodeId_ {};
          // The typed field association information for verified relationships. This parameter is omitted when no reliable and complete field pairing is available.
          shared_ptr<Edges::Join> join_ {};
          // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
          shared_ptr<string> knowledgeBaseId_ {};
          // The public relationship type from the start node to the end node. For example, CALCULATED_FROM indicates that the start node is calculated based on the end node. You cannot infer the complete formula based solely on the type.
          shared_ptr<string> relationType_ {};
          // The NodeId of the end node of the relationship. The end node must exist in the Graph.Nodes of the same page.
          shared_ptr<string> toNodeId_ {};
        };

        virtual bool empty() const override { return this->edges_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->nodes_ == nullptr && this->rootNodeId_ == nullptr && this->updateTime_ == nullptr; };
        // edges Field Functions 
        bool hasEdges() const { return this->edges_ != nullptr;};
        void deleteEdges() { this->edges_ = nullptr;};
        inline const vector<Graph::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<Graph::Edges>) };
        inline vector<Graph::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<Graph::Edges>) };
        inline Graph& setEdges(const vector<Graph::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
        inline Graph& setEdges(vector<Graph::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Graph& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline const vector<Graph::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Graph::Nodes>) };
        inline vector<Graph::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Graph::Nodes>) };
        inline Graph& setNodes(const vector<Graph::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
        inline Graph& setNodes(vector<Graph::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


        // rootNodeId Field Functions 
        bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
        void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
        inline string getRootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, "") };
        inline Graph& setRootNodeId(string rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Graph& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The visible one-hop adjacency relationships on the current page. At least one end of each edge is the RootNodeId, and both ends are in the Nodes of the current page.
        shared_ptr<vector<Graph::Edges>> edges_ {};
        // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
        shared_ptr<string> knowledgeBaseId_ {};
        // All visible endpoints involved by the entry node and the relationships on the current page, deduplicated by NodeId. Subsequent pages still include the entry node.
        shared_ptr<vector<Graph::Nodes>> nodes_ {};
        // The ID of the entry node for the current local graph, which is the same as the requested Id.
        shared_ptr<string> rootNodeId_ {};
        // The time when the current graph was last published. This parameter is returned when the time is reliable.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->graph_ == nullptr
        && this->id_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeContent_ == nullptr && this->nextToken_ == nullptr && this->type_ == nullptr
        && this->warnings_ == nullptr && this->wiki_ == nullptr; };
      // graph Field Functions 
      bool hasGraph() const { return this->graph_ != nullptr;};
      void deleteGraph() { this->graph_ = nullptr;};
      inline const Data::Graph & getGraph() const { DARABONBA_PTR_GET_CONST(graph_, Data::Graph) };
      inline Data::Graph getGraph() { DARABONBA_PTR_GET(graph_, Data::Graph) };
      inline Data& setGraph(const Data::Graph & graph) { DARABONBA_PTR_SET_VALUE(graph_, graph) };
      inline Data& setGraph(Data::Graph && graph) { DARABONBA_PTR_SET_RVALUE(graph_, graph) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // knowledgeContent Field Functions 
      bool hasKnowledgeContent() const { return this->knowledgeContent_ != nullptr;};
      void deleteKnowledgeContent() { this->knowledgeContent_ = nullptr;};
      inline const Data::KnowledgeContent & getKnowledgeContent() const { DARABONBA_PTR_GET_CONST(knowledgeContent_, Data::KnowledgeContent) };
      inline Data::KnowledgeContent getKnowledgeContent() { DARABONBA_PTR_GET(knowledgeContent_, Data::KnowledgeContent) };
      inline Data& setKnowledgeContent(const Data::KnowledgeContent & knowledgeContent) { DARABONBA_PTR_SET_VALUE(knowledgeContent_, knowledgeContent) };
      inline Data& setKnowledgeContent(Data::KnowledgeContent && knowledgeContent) { DARABONBA_PTR_SET_RVALUE(knowledgeContent_, knowledgeContent) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // warnings Field Functions 
      bool hasWarnings() const { return this->warnings_ != nullptr;};
      void deleteWarnings() { this->warnings_ = nullptr;};
      inline const vector<Data::Warnings> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<Data::Warnings>) };
      inline vector<Data::Warnings> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<Data::Warnings>) };
      inline Data& setWarnings(const vector<Data::Warnings> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
      inline Data& setWarnings(vector<Data::Warnings> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


      // wiki Field Functions 
      bool hasWiki() const { return this->wiki_ != nullptr;};
      void deleteWiki() { this->wiki_ = nullptr;};
      inline const Data::Wiki & getWiki() const { DARABONBA_PTR_GET_CONST(wiki_, Data::Wiki) };
      inline Data::Wiki getWiki() { DARABONBA_PTR_GET(wiki_, Data::Wiki) };
      inline Data& setWiki(const Data::Wiki & wiki) { DARABONBA_PTR_SET_VALUE(wiki_, wiki) };
      inline Data& setWiki(Data::Wiki && wiki) { DARABONBA_PTR_SET_RVALUE(wiki_, wiki) };


    protected:
      // The one-hop local graph with the requested Id as the entry point. This parameter is returned only when Type is set to GRAPH. It includes the entry point, the relationships on the current page, and their visible endpoints.
      shared_ptr<Data::Graph> graph_ {};
      // The location ID of the knowledge point. Copy this value exactly as it appears in the search results and use it together with the corresponding KnowledgeBaseId and Type. Do not parse or convert this value.
      shared_ptr<string> id_ {};
      // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
      shared_ptr<string> knowledgeBaseId_ {};
      // The title, Markdown body, and optional sources of the knowledge content. This parameter is returned only when Type is set to KNOWLEDGE_CONTENT.
      shared_ptr<Data::KnowledgeContent> knowledgeContent_ {};
      // The pagination cursor. Do not specify this parameter when you request the first page. For subsequent pages, use the NextToken value returned in the previous response. An empty response indicates that no more pages are available. If the current page is empty but the cursor is not empty, continue pagination. This parameter is used only when Type is set to GRAPH. You must keep the same knowledge base, entry point, and MaxResults values.
      shared_ptr<string> nextToken_ {};
      // The read category of the knowledge point. Valid values: GRAPH for local graphs, WIKI for topic pages, and KNOWLEDGE_CONTENT for knowledge content.
      shared_ptr<string> type_ {};
      // The truncation, scope limitation, or degradation prompts for the current call. Use Code for programmatic judgment. Message is for reading purposes only.
      shared_ptr<vector<Data::Warnings>> warnings_ {};
      // The title, Markdown body, and optional sources of the topic page. This parameter is returned only when Type is set to WIKI.
      shared_ptr<Data::Wiki> wiki_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKnowledgePointResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKnowledgePointResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKnowledgePointResponseBody::Data) };
    inline GetKnowledgePointResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKnowledgePointResponseBody::Data) };
    inline GetKnowledgePointResponseBody& setData(const GetKnowledgePointResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKnowledgePointResponseBody& setData(GetKnowledgePointResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKnowledgePointResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgePointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKnowledgePointResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. This parameter is omitted when the request is successful. For failures, the common error response protocol is followed.
    shared_ptr<string> code_ {};
    // The typed details of a single knowledge point. Only the item corresponding to the Type value is returned among Graph, Wiki, and KnowledgeContent.
    shared_ptr<GetKnowledgePointResponseBody::Data> data_ {};
    // The readable description of the business error. This parameter is omitted when the request is successful. Provide the RequestId when troubleshooting failures.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
