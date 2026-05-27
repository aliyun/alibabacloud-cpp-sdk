// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ListMcpServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(mcpServices, mcpServices_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(mcpServices, mcpServices_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListMcpServicesResponseBody() = default ;
    ListMcpServicesResponseBody(const ListMcpServicesResponseBody &) = default ;
    ListMcpServicesResponseBody(ListMcpServicesResponseBody &&) = default ;
    ListMcpServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServicesResponseBody() = default ;
    ListMcpServicesResponseBody& operator=(const ListMcpServicesResponseBody &) = default ;
    ListMcpServicesResponseBody& operator=(ListMcpServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServices& obj) { 
        DARABONBA_PTR_TO_JSON(mcpServiceList, mcpServiceList_);
      };
      friend void from_json(const Darabonba::Json& j, McpServices& obj) { 
        DARABONBA_PTR_FROM_JSON(mcpServiceList, mcpServiceList_);
      };
      McpServices() = default ;
      McpServices(const McpServices &) = default ;
      McpServices(McpServices &&) = default ;
      McpServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServices() = default ;
      McpServices& operator=(const McpServices &) = default ;
      McpServices& operator=(McpServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class McpServiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const McpServiceList& obj) { 
          DARABONBA_PTR_TO_JSON(connection, connection_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(mcpServiceName, mcpServiceName_);
          DARABONBA_PTR_TO_JSON(network, network_);
          DARABONBA_PTR_TO_JSON(tools, tools_);
        };
        friend void from_json(const Darabonba::Json& j, McpServiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(connection, connection_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(mcpServiceName, mcpServiceName_);
          DARABONBA_PTR_FROM_JSON(network, network_);
          DARABONBA_PTR_FROM_JSON(tools, tools_);
        };
        McpServiceList() = default ;
        McpServiceList(const McpServiceList &) = default ;
        McpServiceList(McpServiceList &&) = default ;
        McpServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~McpServiceList() = default ;
        McpServiceList& operator=(const McpServiceList &) = default ;
        McpServiceList& operator=(McpServiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tools : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tools& obj) { 
            DARABONBA_ANY_TO_JSON(annotations, annotations_);
            DARABONBA_PTR_TO_JSON(confirm, confirm_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(displayName, displayName_);
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_ANY_TO_JSON(execution, execution_);
            DARABONBA_PTR_TO_JSON(icons, icons_);
            DARABONBA_ANY_TO_JSON(inputSchema, inputSchema_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_ANY_TO_JSON(outputSchema, outputSchema_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Tools& obj) { 
            DARABONBA_ANY_FROM_JSON(annotations, annotations_);
            DARABONBA_PTR_FROM_JSON(confirm, confirm_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(displayName, displayName_);
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_ANY_FROM_JSON(execution, execution_);
            DARABONBA_PTR_FROM_JSON(icons, icons_);
            DARABONBA_ANY_FROM_JSON(inputSchema, inputSchema_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_ANY_FROM_JSON(outputSchema, outputSchema_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          Tools() = default ;
          Tools(const Tools &) = default ;
          Tools(Tools &&) = default ;
          Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tools() = default ;
          Tools& operator=(const Tools &) = default ;
          Tools& operator=(Tools &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->annotations_ == nullptr
        && this->confirm_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->enable_ == nullptr && this->execution_ == nullptr
        && this->icons_ == nullptr && this->inputSchema_ == nullptr && this->name_ == nullptr && this->outputSchema_ == nullptr && this->title_ == nullptr; };
          // annotations Field Functions 
          bool hasAnnotations() const { return this->annotations_ != nullptr;};
          void deleteAnnotations() { this->annotations_ = nullptr;};
          inline           const Darabonba::Json & getAnnotations() const { DARABONBA_GET(annotations_) };
          Darabonba::Json & getAnnotations() { DARABONBA_GET(annotations_) };
          inline Tools& setAnnotations(const Darabonba::Json & annotations) { DARABONBA_SET_VALUE(annotations_, annotations) };
          inline Tools& setAnnotations(Darabonba::Json && annotations) { DARABONBA_SET_RVALUE(annotations_, annotations) };


          // confirm Field Functions 
          bool hasConfirm() const { return this->confirm_ != nullptr;};
          void deleteConfirm() { this->confirm_ = nullptr;};
          inline bool getConfirm() const { DARABONBA_PTR_GET_DEFAULT(confirm_, false) };
          inline Tools& setConfirm(bool confirm) { DARABONBA_PTR_SET_VALUE(confirm_, confirm) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Tools& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Tools& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // execution Field Functions 
          bool hasExecution() const { return this->execution_ != nullptr;};
          void deleteExecution() { this->execution_ = nullptr;};
          inline           const Darabonba::Json & getExecution() const { DARABONBA_GET(execution_) };
          Darabonba::Json & getExecution() { DARABONBA_GET(execution_) };
          inline Tools& setExecution(const Darabonba::Json & execution) { DARABONBA_SET_VALUE(execution_, execution) };
          inline Tools& setExecution(Darabonba::Json && execution) { DARABONBA_SET_RVALUE(execution_, execution) };


          // icons Field Functions 
          bool hasIcons() const { return this->icons_ != nullptr;};
          void deleteIcons() { this->icons_ = nullptr;};
          inline const vector<Darabonba::Json> & getIcons() const { DARABONBA_PTR_GET_CONST(icons_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getIcons() { DARABONBA_PTR_GET(icons_, vector<Darabonba::Json>) };
          inline Tools& setIcons(const vector<Darabonba::Json> & icons) { DARABONBA_PTR_SET_VALUE(icons_, icons) };
          inline Tools& setIcons(vector<Darabonba::Json> && icons) { DARABONBA_PTR_SET_RVALUE(icons_, icons) };


          // inputSchema Field Functions 
          bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
          void deleteInputSchema() { this->inputSchema_ = nullptr;};
          inline           const Darabonba::Json & getInputSchema() const { DARABONBA_GET(inputSchema_) };
          Darabonba::Json & getInputSchema() { DARABONBA_GET(inputSchema_) };
          inline Tools& setInputSchema(const Darabonba::Json & inputSchema) { DARABONBA_SET_VALUE(inputSchema_, inputSchema) };
          inline Tools& setInputSchema(Darabonba::Json && inputSchema) { DARABONBA_SET_RVALUE(inputSchema_, inputSchema) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // outputSchema Field Functions 
          bool hasOutputSchema() const { return this->outputSchema_ != nullptr;};
          void deleteOutputSchema() { this->outputSchema_ = nullptr;};
          inline           const Darabonba::Json & getOutputSchema() const { DARABONBA_GET(outputSchema_) };
          Darabonba::Json & getOutputSchema() { DARABONBA_GET(outputSchema_) };
          inline Tools& setOutputSchema(const Darabonba::Json & outputSchema) { DARABONBA_SET_VALUE(outputSchema_, outputSchema) };
          inline Tools& setOutputSchema(Darabonba::Json && outputSchema) { DARABONBA_SET_RVALUE(outputSchema_, outputSchema) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Tools& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          Darabonba::Json annotations_ {};
          shared_ptr<bool> confirm_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<bool> enable_ {};
          Darabonba::Json execution_ {};
          shared_ptr<vector<Darabonba::Json>> icons_ {};
          Darabonba::Json inputSchema_ {};
          shared_ptr<string> name_ {};
          Darabonba::Json outputSchema_ {};
          shared_ptr<string> title_ {};
        };

        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(accessIp, accessIp_);
            DARABONBA_PTR_TO_JSON(accessPort, accessPort_);
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
            DARABONBA_PTR_TO_JSON(mode, mode_);
            DARABONBA_PTR_TO_JSON(region, region_);
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(vswId, vswId_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
            DARABONBA_PTR_FROM_JSON(accessIp, accessIp_);
            DARABONBA_PTR_FROM_JSON(accessPort, accessPort_);
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
            DARABONBA_PTR_FROM_JSON(mode, mode_);
            DARABONBA_PTR_FROM_JSON(region, region_);
            DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(vswId, vswId_);
          };
          Network() = default ;
          Network(const Network &) = default ;
          Network(Network &&) = default ;
          Network(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Network() = default ;
          Network& operator=(const Network &) = default ;
          Network& operator=(Network &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->accessPort_ == nullptr && this->gatewayId_ == nullptr && this->mcpServerId_ == nullptr && this->mode_ == nullptr && this->region_ == nullptr
        && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr; };
          // accessIp Field Functions 
          bool hasAccessIp() const { return this->accessIp_ != nullptr;};
          void deleteAccessIp() { this->accessIp_ = nullptr;};
          inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
          inline Network& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


          // accessPort Field Functions 
          bool hasAccessPort() const { return this->accessPort_ != nullptr;};
          void deleteAccessPort() { this->accessPort_ = nullptr;};
          inline int64_t getAccessPort() const { DARABONBA_PTR_GET_DEFAULT(accessPort_, 0L) };
          inline Network& setAccessPort(int64_t accessPort) { DARABONBA_PTR_SET_VALUE(accessPort_, accessPort) };


          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline Network& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // mcpServerId Field Functions 
          bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
          void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
          inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
          inline Network& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline Network& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Network& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline Network& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Network& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // vswId Field Functions 
          bool hasVswId() const { return this->vswId_ != nullptr;};
          void deleteVswId() { this->vswId_ = nullptr;};
          inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
          inline Network& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


        protected:
          shared_ptr<string> accessIp_ {};
          shared_ptr<int64_t> accessPort_ {};
          shared_ptr<string> gatewayId_ {};
          shared_ptr<string> mcpServerId_ {};
          shared_ptr<string> mode_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> securityGroupId_ {};
          shared_ptr<string> vpcId_ {};
          shared_ptr<string> vswId_ {};
        };

        class Connection : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Connection& obj) { 
            DARABONBA_PTR_TO_JSON(auth, auth_);
            DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(platform, platform_);
            DARABONBA_PTR_TO_JSON(timeout, timeout_);
            DARABONBA_PTR_TO_JSON(transport, transport_);
          };
          friend void from_json(const Darabonba::Json& j, Connection& obj) { 
            DARABONBA_PTR_FROM_JSON(auth, auth_);
            DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(platform, platform_);
            DARABONBA_PTR_FROM_JSON(timeout, timeout_);
            DARABONBA_PTR_FROM_JSON(transport, transport_);
          };
          Connection() = default ;
          Connection(const Connection &) = default ;
          Connection(Connection &&) = default ;
          Connection(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Connection() = default ;
          Connection& operator=(const Connection &) = default ;
          Connection& operator=(Connection &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Auth : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Auth& obj) { 
              DARABONBA_PTR_TO_JSON(keyInfo, keyInfo_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Auth& obj) { 
              DARABONBA_PTR_FROM_JSON(keyInfo, keyInfo_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            Auth() = default ;
            Auth(const Auth &) = default ;
            Auth(Auth &&) = default ;
            Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Auth() = default ;
            Auth& operator=(const Auth &) = default ;
            Auth& operator=(Auth &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keyInfo_ == nullptr
        && this->type_ == nullptr; };
            // keyInfo Field Functions 
            bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
            void deleteKeyInfo() { this->keyInfo_ = nullptr;};
            inline const map<string, string> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, map<string, string>) };
            inline map<string, string> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, map<string, string>) };
            inline Auth& setKeyInfo(const map<string, string> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
            inline Auth& setKeyInfo(map<string, string> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<map<string, string>> keyInfo_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->auth_ == nullptr
        && this->endpoint_ == nullptr && this->platform_ == nullptr && this->timeout_ == nullptr && this->transport_ == nullptr; };
          // auth Field Functions 
          bool hasAuth() const { return this->auth_ != nullptr;};
          void deleteAuth() { this->auth_ = nullptr;};
          inline const Connection::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, Connection::Auth) };
          inline Connection::Auth getAuth() { DARABONBA_PTR_GET(auth_, Connection::Auth) };
          inline Connection& setAuth(const Connection::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
          inline Connection& setAuth(Connection::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline Connection& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // platform Field Functions 
          bool hasPlatform() const { return this->platform_ != nullptr;};
          void deletePlatform() { this->platform_ = nullptr;};
          inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
          inline Connection& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
          inline Connection& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          // transport Field Functions 
          bool hasTransport() const { return this->transport_ != nullptr;};
          void deleteTransport() { this->transport_ = nullptr;};
          inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
          inline Connection& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


        protected:
          shared_ptr<Connection::Auth> auth_ {};
          shared_ptr<string> endpoint_ {};
          shared_ptr<string> platform_ {};
          shared_ptr<int64_t> timeout_ {};
          shared_ptr<string> transport_ {};
        };

        virtual bool empty() const override { return this->connection_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->enable_ == nullptr && this->mcpServiceName_ == nullptr && this->network_ == nullptr
        && this->tools_ == nullptr; };
        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline const McpServiceList::Connection & getConnection() const { DARABONBA_PTR_GET_CONST(connection_, McpServiceList::Connection) };
        inline McpServiceList::Connection getConnection() { DARABONBA_PTR_GET(connection_, McpServiceList::Connection) };
        inline McpServiceList& setConnection(const McpServiceList::Connection & connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };
        inline McpServiceList& setConnection(McpServiceList::Connection && connection) { DARABONBA_PTR_SET_RVALUE(connection_, connection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline McpServiceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline McpServiceList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline McpServiceList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // mcpServiceName Field Functions 
        bool hasMcpServiceName() const { return this->mcpServiceName_ != nullptr;};
        void deleteMcpServiceName() { this->mcpServiceName_ = nullptr;};
        inline string getMcpServiceName() const { DARABONBA_PTR_GET_DEFAULT(mcpServiceName_, "") };
        inline McpServiceList& setMcpServiceName(string mcpServiceName) { DARABONBA_PTR_SET_VALUE(mcpServiceName_, mcpServiceName) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const McpServiceList::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, McpServiceList::Network) };
        inline McpServiceList::Network getNetwork() { DARABONBA_PTR_GET(network_, McpServiceList::Network) };
        inline McpServiceList& setNetwork(const McpServiceList::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline McpServiceList& setNetwork(McpServiceList::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<McpServiceList::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<McpServiceList::Tools>) };
        inline vector<McpServiceList::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<McpServiceList::Tools>) };
        inline McpServiceList& setTools(const vector<McpServiceList::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline McpServiceList& setTools(vector<McpServiceList::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      protected:
        shared_ptr<McpServiceList::Connection> connection_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> mcpServiceName_ {};
        shared_ptr<McpServiceList::Network> network_ {};
        shared_ptr<vector<McpServiceList::Tools>> tools_ {};
      };

      virtual bool empty() const override { return this->mcpServiceList_ == nullptr; };
      // mcpServiceList Field Functions 
      bool hasMcpServiceList() const { return this->mcpServiceList_ != nullptr;};
      void deleteMcpServiceList() { this->mcpServiceList_ = nullptr;};
      inline const vector<McpServices::McpServiceList> & getMcpServiceList() const { DARABONBA_PTR_GET_CONST(mcpServiceList_, vector<McpServices::McpServiceList>) };
      inline vector<McpServices::McpServiceList> getMcpServiceList() { DARABONBA_PTR_GET(mcpServiceList_, vector<McpServices::McpServiceList>) };
      inline McpServices& setMcpServiceList(const vector<McpServices::McpServiceList> & mcpServiceList) { DARABONBA_PTR_SET_VALUE(mcpServiceList_, mcpServiceList) };
      inline McpServices& setMcpServiceList(vector<McpServices::McpServiceList> && mcpServiceList) { DARABONBA_PTR_SET_RVALUE(mcpServiceList_, mcpServiceList) };


    protected:
      shared_ptr<vector<McpServices::McpServiceList>> mcpServiceList_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->mcpServices_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpServicesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mcpServices Field Functions 
    bool hasMcpServices() const { return this->mcpServices_ != nullptr;};
    void deleteMcpServices() { this->mcpServices_ = nullptr;};
    inline const ListMcpServicesResponseBody::McpServices & getMcpServices() const { DARABONBA_PTR_GET_CONST(mcpServices_, ListMcpServicesResponseBody::McpServices) };
    inline ListMcpServicesResponseBody::McpServices getMcpServices() { DARABONBA_PTR_GET(mcpServices_, ListMcpServicesResponseBody::McpServices) };
    inline ListMcpServicesResponseBody& setMcpServices(const ListMcpServicesResponseBody::McpServices & mcpServices) { DARABONBA_PTR_SET_VALUE(mcpServices_, mcpServices) };
    inline ListMcpServicesResponseBody& setMcpServices(ListMcpServicesResponseBody::McpServices && mcpServices) { DARABONBA_PTR_SET_RVALUE(mcpServices_, mcpServices) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpServicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListMcpServicesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<ListMcpServicesResponseBody::McpServices> mcpServices_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
