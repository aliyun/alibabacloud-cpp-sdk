// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListCustomAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListCustomAgentsResponseBody() = default ;
    ListCustomAgentsResponseBody(const ListCustomAgentsResponseBody &) = default ;
    ListCustomAgentsResponseBody(ListCustomAgentsResponseBody &&) = default ;
    ListCustomAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentsResponseBody() = default ;
    ListCustomAgentsResponseBody& operator=(const ListCustomAgentsResponseBody &) = default ;
    ListCustomAgentsResponseBody& operator=(ListCustomAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(artifact, artifact_);
        DARABONBA_PTR_TO_JSON(codePackageInfo, codePackageInfo_);
        DARABONBA_PTR_TO_JSON(createMode, createMode_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(deployType, deployType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(artifact, artifact_);
        DARABONBA_PTR_FROM_JSON(codePackageInfo, codePackageInfo_);
        DARABONBA_PTR_FROM_JSON(createMode, createMode_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(deployType, deployType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Protocol : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Protocol& obj) { 
          DARABONBA_PTR_TO_JSON(headers, headers_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Protocol& obj) { 
          DARABONBA_PTR_FROM_JSON(headers, headers_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Protocol() = default ;
        Protocol(const Protocol &) = default ;
        Protocol(Protocol &&) = default ;
        Protocol(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Protocol() = default ;
        Protocol& operator=(const Protocol &) = default ;
        Protocol& operator=(Protocol &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(name, name_);
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
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Paths& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Paths& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The purpose description of the current API path.
          shared_ptr<string> description_ {};
          // The API path corresponding to the current protocol.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->headers_ == nullptr
        && this->paths_ == nullptr && this->type_ == nullptr; };
        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
        inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
        inline Protocol& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline Protocol& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<Protocol::Paths> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Protocol::Paths>) };
        inline vector<Protocol::Paths> getPaths() { DARABONBA_PTR_GET(paths_, vector<Protocol::Paths>) };
        inline Protocol& setPaths(const vector<Protocol::Paths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Protocol& setPaths(vector<Protocol::Paths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Protocol& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The request header configuration of the current protocol. The key is the header name and the value is a string.
        shared_ptr<map<string, string>> headers_ {};
        // The list of API paths corresponding to the current protocol.
        shared_ptr<vector<Protocol::Paths>> paths_ {};
        // The invoke Protocol Type. Valid values:
        // - agui: AG-UI protocol.
        // - openai-chat-completion: OpenAI Chat Completions compatible protocol.
        // - custom: Custom protocol.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class CodePackageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodePackageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(crc64, crc64_);
          DARABONBA_PTR_TO_JSON(etag, etag_);
          DARABONBA_PTR_TO_JSON(fileName, fileName_);
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(format, format_);
        };
        friend void from_json(const Darabonba::Json& j, CodePackageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(crc64, crc64_);
          DARABONBA_PTR_FROM_JSON(etag, etag_);
          DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(format, format_);
        };
        CodePackageInfo() = default ;
        CodePackageInfo(const CodePackageInfo &) = default ;
        CodePackageInfo(CodePackageInfo &&) = default ;
        CodePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodePackageInfo() = default ;
        CodePackageInfo& operator=(const CodePackageInfo &) = default ;
        CodePackageInfo& operator=(CodePackageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->crc64_ == nullptr
        && this->etag_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->format_ == nullptr; };
        // crc64 Field Functions 
        bool hasCrc64() const { return this->crc64_ != nullptr;};
        void deleteCrc64() { this->crc64_ = nullptr;};
        inline string getCrc64() const { DARABONBA_PTR_GET_DEFAULT(crc64_, "") };
        inline CodePackageInfo& setCrc64(string crc64) { DARABONBA_PTR_SET_VALUE(crc64_, crc64) };


        // etag Field Functions 
        bool hasEtag() const { return this->etag_ != nullptr;};
        void deleteEtag() { this->etag_ = nullptr;};
        inline string getEtag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
        inline CodePackageInfo& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline CodePackageInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline CodePackageInfo& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline CodePackageInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      protected:
        // The CRC64 value of the code package object.
        shared_ptr<string> crc64_ {};
        // The ETag of the code package object.
        shared_ptr<string> etag_ {};
        // The original file name of the code package.
        shared_ptr<string> fileName_ {};
        // The compressed size of the code package.
        shared_ptr<int64_t> fileSize_ {};
        // The format of the code package.
        shared_ptr<string> format_ {};
      };

      class Artifact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(container, container_);
          DARABONBA_PTR_TO_JSON(port, port_);
        };
        friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(container, container_);
          DARABONBA_PTR_FROM_JSON(port, port_);
        };
        Artifact() = default ;
        Artifact(const Artifact &) = default ;
        Artifact(Artifact &&) = default ;
        Artifact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifact() = default ;
        Artifact& operator=(const Artifact &) = default ;
        Artifact& operator=(Artifact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Container : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Container& obj) { 
            DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(namespace, namespace_);
            DARABONBA_PTR_TO_JSON(repo, repo_);
            DARABONBA_PTR_TO_JSON(tag, tag_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Container& obj) { 
            DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(repo, repo_);
            DARABONBA_PTR_FROM_JSON(tag, tag_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Container() = default ;
          Container(const Container &) = default ;
          Container(Container &&) = default ;
          Container(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Container() = default ;
          Container& operator=(const Container &) = default ;
          Container& operator=(Container &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entrypoint_ == nullptr
        && this->instanceId_ == nullptr && this->namespace_ == nullptr && this->repo_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr; };
          // entrypoint Field Functions 
          bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
          void deleteEntrypoint() { this->entrypoint_ = nullptr;};
          inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
          inline Container& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline Container& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline Container& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // repo Field Functions 
          bool hasRepo() const { return this->repo_ != nullptr;};
          void deleteRepo() { this->repo_ = nullptr;};
          inline string getRepo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
          inline Container& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Container& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Container& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The custom container startup command and parameters. If this parameter is not configured, the default startup method of the image is used.
          shared_ptr<string> entrypoint_ {};
          // The ID of the ACR Enterprise instance.
          shared_ptr<string> instanceId_ {};
          // The ACR namespace.
          shared_ptr<string> namespace_ {};
          // The name of the ACR image repository.
          shared_ptr<string> repo_ {};
          // The image tag.
          shared_ptr<string> tag_ {};
          // The source type of the container image.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        class Code : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Code& obj) { 
            DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_TO_JSON(languageRuntime, languageRuntime_);
            DARABONBA_PTR_TO_JSON(sourceUri, sourceUri_);
          };
          friend void from_json(const Darabonba::Json& j, Code& obj) { 
            DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
            DARABONBA_PTR_FROM_JSON(languageRuntime, languageRuntime_);
            DARABONBA_PTR_FROM_JSON(sourceUri, sourceUri_);
          };
          Code() = default ;
          Code(const Code &) = default ;
          Code(Code &&) = default ;
          Code(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Code() = default ;
          Code& operator=(const Code &) = default ;
          Code& operator=(Code &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entrypoint_ == nullptr
        && this->languageRuntime_ == nullptr && this->sourceUri_ == nullptr; };
          // entrypoint Field Functions 
          bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
          void deleteEntrypoint() { this->entrypoint_ = nullptr;};
          inline string getEntrypoint() const { DARABONBA_PTR_GET_DEFAULT(entrypoint_, "") };
          inline Code& setEntrypoint(string entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };


          // languageRuntime Field Functions 
          bool hasLanguageRuntime() const { return this->languageRuntime_ != nullptr;};
          void deleteLanguageRuntime() { this->languageRuntime_ = nullptr;};
          inline string getLanguageRuntime() const { DARABONBA_PTR_GET_DEFAULT(languageRuntime_, "") };
          inline Code& setLanguageRuntime(string languageRuntime) { DARABONBA_PTR_SET_VALUE(languageRuntime_, languageRuntime) };


          // sourceUri Field Functions 
          bool hasSourceUri() const { return this->sourceUri_ != nullptr;};
          void deleteSourceUri() { this->sourceUri_ = nullptr;};
          inline string getSourceUri() const { DARABONBA_PTR_GET_DEFAULT(sourceUri_, "") };
          inline Code& setSourceUri(string sourceUri) { DARABONBA_PTR_SET_VALUE(sourceUri_, sourceUri) };


        protected:
          // The startup command for the code package. This parameter is required in code package mode. The working directory is the root directory of the extracted code, which is /code. Example: python main.py. Quotes and escape characters are supported. Environment variables, pipes, and logical operations are not automatically expanded. For complex commands, use a script within the package.
          // 
          // This parameter is required.
          shared_ptr<string> entrypoint_ {};
          // The identifier of the code runtime environment in the currently saved configuration. The runtime image uses the saved snapshot. Adding a new version to the directory does not automatically change the existing configuration.
          // 
          // This parameter is required.
          shared_ptr<string> languageRuntime_ {};
          // The fixed oss:// address of the platform code package referenced by the currently saved configuration. This address does not include the signature parameters of the source HTTPS link. You can use this address to reuse an existing code package. To download the content, call the GetAgentCodePackageDownloadUrl operation.
          // 
          // This parameter is required.
          shared_ptr<string> sourceUri_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->container_ == nullptr && this->port_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline const Artifact::Code & getCode() const { DARABONBA_PTR_GET_CONST(code_, Artifact::Code) };
        inline Artifact::Code getCode() { DARABONBA_PTR_GET(code_, Artifact::Code) };
        inline Artifact& setCode(const Artifact::Code & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
        inline Artifact& setCode(Artifact::Code && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


        // container Field Functions 
        bool hasContainer() const { return this->container_ != nullptr;};
        void deleteContainer() { this->container_ = nullptr;};
        inline const Artifact::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, Artifact::Container) };
        inline Artifact::Container getContainer() { DARABONBA_PTR_GET(container_, Artifact::Container) };
        inline Artifact& setContainer(const Artifact::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
        inline Artifact& setContainer(Artifact::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Artifact& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The code package deployment configuration. This parameter is mutually exclusive with container. The code package uses the ZIP or TAR.GZ format. Dependencies are packaged by the user. The platform does not install dependencies or perform online builds.
        shared_ptr<Artifact::Code> code_ {};
        // The container image deployment configuration.
        shared_ptr<Artifact::Container> container_ {};
        // The listening port of the agent service.
        // 
        // This parameter is required.
        shared_ptr<int32_t> port_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->artifact_ == nullptr && this->codePackageInfo_ == nullptr && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr
        && this->description_ == nullptr && this->latestSpecVersion_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->runtime_ == nullptr
        && this->status_ == nullptr && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Items& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // artifact Field Functions 
      bool hasArtifact() const { return this->artifact_ != nullptr;};
      void deleteArtifact() { this->artifact_ = nullptr;};
      inline const Items::Artifact & getArtifact() const { DARABONBA_PTR_GET_CONST(artifact_, Items::Artifact) };
      inline Items::Artifact getArtifact() { DARABONBA_PTR_GET(artifact_, Items::Artifact) };
      inline Items& setArtifact(const Items::Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
      inline Items& setArtifact(Items::Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


      // codePackageInfo Field Functions 
      bool hasCodePackageInfo() const { return this->codePackageInfo_ != nullptr;};
      void deleteCodePackageInfo() { this->codePackageInfo_ = nullptr;};
      inline const Items::CodePackageInfo & getCodePackageInfo() const { DARABONBA_PTR_GET_CONST(codePackageInfo_, Items::CodePackageInfo) };
      inline Items::CodePackageInfo getCodePackageInfo() { DARABONBA_PTR_GET(codePackageInfo_, Items::CodePackageInfo) };
      inline Items& setCodePackageInfo(const Items::CodePackageInfo & codePackageInfo) { DARABONBA_PTR_SET_VALUE(codePackageInfo_, codePackageInfo) };
      inline Items& setCodePackageInfo(Items::CodePackageInfo && codePackageInfo) { DARABONBA_PTR_SET_RVALUE(codePackageInfo_, codePackageInfo) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Items& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // deployType Field Functions 
      bool hasDeployType() const { return this->deployType_ != nullptr;};
      void deleteDeployType() { this->deployType_ = nullptr;};
      inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
      inline Items& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // latestSpecVersion Field Functions 
      bool hasLatestSpecVersion() const { return this->latestSpecVersion_ != nullptr;};
      void deleteLatestSpecVersion() { this->latestSpecVersion_ = nullptr;};
      inline int64_t getLatestSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(latestSpecVersion_, 0L) };
      inline Items& setLatestSpecVersion(int64_t latestSpecVersion) { DARABONBA_PTR_SET_VALUE(latestSpecVersion_, latestSpecVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const vector<Items::Protocol> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<Items::Protocol>) };
      inline vector<Items::Protocol> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<Items::Protocol>) };
      inline Items& setProtocol(const vector<Items::Protocol> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline Items& setProtocol(vector<Items::Protocol> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline Items& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The unique identifier of the custom agent. You can obtain this ID from the response of the CreateCustomAgent or ListCustomAgents operation.
      shared_ptr<string> agentId_ {};
      // The agent artifact.
      shared_ptr<Items::Artifact> artifact_ {};
      // The currently saved code package information.
      shared_ptr<Items::CodePackageInfo> codePackageInfo_ {};
      // The creation method of the agent. The value is CUSTOM for custom agents.
      shared_ptr<string> createMode_ {};
      // The time when the agent was created. The time is in ISO 8601 format. The trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> createdAt_ {};
      // The deployment method of the agent. Custom agents are deployed and managed by the platform. The value is MANAGED for custom agents.
      shared_ptr<string> deployType_ {};
      // The description of the agent\\"s purpose.
      shared_ptr<string> description_ {};
      // The latest configuration version number. Updates with the same configuration may retain the original version number. This field does not indicate that the configuration has taken effect.
      shared_ptr<int64_t> latestSpecVersion_ {};
      // The name of the custom agent.
      shared_ptr<string> name_ {};
      // The list of invocation protocol configurations for the agent.
      shared_ptr<vector<Items::Protocol>> protocol_ {};
      // The compute specifications of the agent. Valid values: INTERACTIVE, STANDARD, and HEAVY.
      shared_ptr<string> runtime_ {};
      // The overall status of the agent. Valid values:
      // - Creating: The agent is being created.
      // - Running: The agent is running.
      // - Failed: The agent failed.
      // - Updating: The agent is being updated.
      // - Deleting: The agent is being deleted.
      // - Deleted: The agent is deleted.
      // To query the execution progress of the latest configuration, call the GetCustomAgent operation.
      shared_ptr<string> status_ {};
      // The time when the agent was last updated. The time is in ISO 8601 format. The trailing Z indicates the UTC time zone. Fractional seconds may be included.
      shared_ptr<string> updatedAt_ {};
      // The ID of the workspace to which the custom agent belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCustomAgentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCustomAgentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCustomAgentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCustomAgentsResponseBody::Items>) };
    inline vector<ListCustomAgentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCustomAgentsResponseBody::Items>) };
    inline ListCustomAgentsResponseBody& setItems(const vector<ListCustomAgentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCustomAgentsResponseBody& setItems(vector<ListCustomAgentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomAgentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomAgentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomAgentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomAgentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request result code. The value is SUCCESS if the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code of the request. The value is 200 if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of custom agent summaries on the current page. To query the complete configuration and the execution result of the latest version, call the GetCustomAgent operation.
    shared_ptr<vector<ListCustomAgentsResponseBody::Items>> items_ {};
    // The maximum number of results returned per page for the current query.
    shared_ptr<int32_t> maxResults_ {};
    // The message that describes the result of the request. The value is success if the request is successful.
    shared_ptr<string> message_ {};
    // The opaque token used to query the next page. An empty value indicates that no more pages are available. Pass this token as-is in subsequent requests.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request. You can use this ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A value of true indicates that the request was successful. A successful creation, update, or deletion response does not mean that the background operation is complete.
    shared_ptr<bool> success_ {};
    // The total number of custom agents that meet the query conditions in the specified workspace.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
