// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERCONSOLESUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERCONSOLESUMMARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerConsoleSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerConsoleSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerConsoleSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListConsumerConsoleSummariesResponseBody() = default ;
    ListConsumerConsoleSummariesResponseBody(const ListConsumerConsoleSummariesResponseBody &) = default ;
    ListConsumerConsoleSummariesResponseBody(ListConsumerConsoleSummariesResponseBody &&) = default ;
    ListConsumerConsoleSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerConsoleSummariesResponseBody() = default ;
    ListConsumerConsoleSummariesResponseBody& operator=(const ListConsumerConsoleSummariesResponseBody &) = default ;
    ListConsumerConsoleSummariesResponseBody& operator=(ListConsumerConsoleSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(complete, complete_);
        DARABONBA_PTR_TO_JSON(counts, counts_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(complete, complete_);
        DARABONBA_PTR_FROM_JSON(counts, counts_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(allModels, allModels_);
          DARABONBA_PTR_TO_JSON(consumerGroups, consumerGroups_);
          DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(credentials, credentials_);
          DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(localAccess, localAccess_);
          DARABONBA_PTR_TO_JSON(modelCount, modelCount_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(otherGateways, otherGateways_);
          DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(allModels, allModels_);
          DARABONBA_PTR_FROM_JSON(consumerGroups, consumerGroups_);
          DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(credentials, credentials_);
          DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(localAccess, localAccess_);
          DARABONBA_PTR_FROM_JSON(modelCount, modelCount_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(otherGateways, otherGateways_);
          DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
        class OtherGateways : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OtherGateways& obj) { 
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, OtherGateways& obj) { 
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          OtherGateways() = default ;
          OtherGateways(const OtherGateways &) = default ;
          OtherGateways(OtherGateways &&) = default ;
          OtherGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OtherGateways() = default ;
          OtherGateways& operator=(const OtherGateways &) = default ;
          OtherGateways& operator=(OtherGateways &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline OtherGateways& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline OtherGateways& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the AI gateway instance to which the resource belongs.
          shared_ptr<string> gatewayId_ {};
          // The name of the consumer.
          shared_ptr<string> name_ {};
        };

        class LocalAccess : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LocalAccess& obj) { 
            DARABONBA_PTR_TO_JSON(agentApis, agentApis_);
            DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
            DARABONBA_PTR_TO_JSON(modelApis, modelApis_);
          };
          friend void from_json(const Darabonba::Json& j, LocalAccess& obj) { 
            DARABONBA_PTR_FROM_JSON(agentApis, agentApis_);
            DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
            DARABONBA_PTR_FROM_JSON(modelApis, modelApis_);
          };
          LocalAccess() = default ;
          LocalAccess(const LocalAccess &) = default ;
          LocalAccess(LocalAccess &&) = default ;
          LocalAccess(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LocalAccess() = default ;
          LocalAccess& operator=(const LocalAccess &) = default ;
          LocalAccess& operator=(LocalAccess &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentApis_ == nullptr
        && this->mcpServers_ == nullptr && this->modelApis_ == nullptr; };
          // agentApis Field Functions 
          bool hasAgentApis() const { return this->agentApis_ != nullptr;};
          void deleteAgentApis() { this->agentApis_ = nullptr;};
          inline int32_t getAgentApis() const { DARABONBA_PTR_GET_DEFAULT(agentApis_, 0) };
          inline LocalAccess& setAgentApis(int32_t agentApis) { DARABONBA_PTR_SET_VALUE(agentApis_, agentApis) };


          // mcpServers Field Functions 
          bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
          void deleteMcpServers() { this->mcpServers_ = nullptr;};
          inline int32_t getMcpServers() const { DARABONBA_PTR_GET_DEFAULT(mcpServers_, 0) };
          inline LocalAccess& setMcpServers(int32_t mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };


          // modelApis Field Functions 
          bool hasModelApis() const { return this->modelApis_ != nullptr;};
          void deleteModelApis() { this->modelApis_ = nullptr;};
          inline int32_t getModelApis() const { DARABONBA_PTR_GET_DEFAULT(modelApis_, 0) };
          inline LocalAccess& setModelApis(int32_t modelApis) { DARABONBA_PTR_SET_VALUE(modelApis_, modelApis) };


        protected:
          // The number of agent APIs that have authorizations configured.
          shared_ptr<int32_t> agentApis_ {};
          // The number of MCP servers that have authorizations configured.
          shared_ptr<int32_t> mcpServers_ {};
          // The number of model APIs that have authorizations configured.
          shared_ptr<int32_t> modelApis_ {};
        };

        class Credentials : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
            DARABONBA_PTR_TO_JSON(count, count_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
            DARABONBA_PTR_FROM_JSON(count, count_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Credentials() = default ;
          Credentials(const Credentials &) = default ;
          Credentials(Credentials &&) = default ;
          Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Credentials() = default ;
          Credentials& operator=(const Credentials &) = default ;
          Credentials& operator=(Credentials &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->type_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline Credentials& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Credentials& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of credentials of this type.
          shared_ptr<int32_t> count_ {};
          // The credential type. Valid values: Apikey, Jwt, and AkSk. No keys or secrets are returned.
          shared_ptr<string> type_ {};
        };

        class ConsumerGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerGroups& obj) { 
            DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(joinTimestamp, joinTimestamp_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(joinTimestamp, joinTimestamp_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          ConsumerGroups() = default ;
          ConsumerGroups(const ConsumerGroups &) = default ;
          ConsumerGroups(ConsumerGroups &&) = default ;
          ConsumerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerGroups() = default ;
          ConsumerGroups& operator=(const ConsumerGroups &) = default ;
          ConsumerGroups& operator=(ConsumerGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->description_ == nullptr && this->joinTimestamp_ == nullptr && this->name_ == nullptr; };
          // consumerGroupId Field Functions 
          bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
          void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
          inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
          inline ConsumerGroups& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ConsumerGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // joinTimestamp Field Functions 
          bool hasJoinTimestamp() const { return this->joinTimestamp_ != nullptr;};
          void deleteJoinTimestamp() { this->joinTimestamp_ = nullptr;};
          inline int64_t getJoinTimestamp() const { DARABONBA_PTR_GET_DEFAULT(joinTimestamp_, 0L) };
          inline ConsumerGroups& setJoinTimestamp(int64_t joinTimestamp) { DARABONBA_PTR_SET_VALUE(joinTimestamp_, joinTimestamp) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the consumer group.
          shared_ptr<string> consumerGroupId_ {};
          // The description of the consumer.
          shared_ptr<string> description_ {};
          // The time when the consumer joined the consumer group. The value is a UNIX timestamp in milliseconds.
          shared_ptr<int64_t> joinTimestamp_ {};
          // The name of the consumer.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->allModels_ == nullptr
        && this->consumerGroups_ == nullptr && this->consumerId_ == nullptr && this->createTimestamp_ == nullptr && this->credentials_ == nullptr && this->deployStatus_ == nullptr
        && this->description_ == nullptr && this->enable_ == nullptr && this->localAccess_ == nullptr && this->modelCount_ == nullptr && this->name_ == nullptr
        && this->otherGateways_ == nullptr && this->updateTimestamp_ == nullptr; };
        // allModels Field Functions 
        bool hasAllModels() const { return this->allModels_ != nullptr;};
        void deleteAllModels() { this->allModels_ = nullptr;};
        inline bool getAllModels() const { DARABONBA_PTR_GET_DEFAULT(allModels_, false) };
        inline Items& setAllModels(bool allModels) { DARABONBA_PTR_SET_VALUE(allModels_, allModels) };


        // consumerGroups Field Functions 
        bool hasConsumerGroups() const { return this->consumerGroups_ != nullptr;};
        void deleteConsumerGroups() { this->consumerGroups_ = nullptr;};
        inline const vector<Items::ConsumerGroups> & getConsumerGroups() const { DARABONBA_PTR_GET_CONST(consumerGroups_, vector<Items::ConsumerGroups>) };
        inline vector<Items::ConsumerGroups> getConsumerGroups() { DARABONBA_PTR_GET(consumerGroups_, vector<Items::ConsumerGroups>) };
        inline Items& setConsumerGroups(const vector<Items::ConsumerGroups> & consumerGroups) { DARABONBA_PTR_SET_VALUE(consumerGroups_, consumerGroups) };
        inline Items& setConsumerGroups(vector<Items::ConsumerGroups> && consumerGroups) { DARABONBA_PTR_SET_RVALUE(consumerGroups_, consumerGroups) };


        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // credentials Field Functions 
        bool hasCredentials() const { return this->credentials_ != nullptr;};
        void deleteCredentials() { this->credentials_ = nullptr;};
        inline const vector<Items::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<Items::Credentials>) };
        inline vector<Items::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<Items::Credentials>) };
        inline Items& setCredentials(const vector<Items::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
        inline Items& setCredentials(vector<Items::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


        // deployStatus Field Functions 
        bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
        void deleteDeployStatus() { this->deployStatus_ = nullptr;};
        inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
        inline Items& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Items& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // localAccess Field Functions 
        bool hasLocalAccess() const { return this->localAccess_ != nullptr;};
        void deleteLocalAccess() { this->localAccess_ = nullptr;};
        inline const Items::LocalAccess & getLocalAccess() const { DARABONBA_PTR_GET_CONST(localAccess_, Items::LocalAccess) };
        inline Items::LocalAccess getLocalAccess() { DARABONBA_PTR_GET(localAccess_, Items::LocalAccess) };
        inline Items& setLocalAccess(const Items::LocalAccess & localAccess) { DARABONBA_PTR_SET_VALUE(localAccess_, localAccess) };
        inline Items& setLocalAccess(Items::LocalAccess && localAccess) { DARABONBA_PTR_SET_RVALUE(localAccess_, localAccess) };


        // modelCount Field Functions 
        bool hasModelCount() const { return this->modelCount_ != nullptr;};
        void deleteModelCount() { this->modelCount_ = nullptr;};
        inline int32_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0) };
        inline Items& setModelCount(int32_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // otherGateways Field Functions 
        bool hasOtherGateways() const { return this->otherGateways_ != nullptr;};
        void deleteOtherGateways() { this->otherGateways_ = nullptr;};
        inline const vector<Items::OtherGateways> & getOtherGateways() const { DARABONBA_PTR_GET_CONST(otherGateways_, vector<Items::OtherGateways>) };
        inline vector<Items::OtherGateways> getOtherGateways() { DARABONBA_PTR_GET(otherGateways_, vector<Items::OtherGateways>) };
        inline Items& setOtherGateways(const vector<Items::OtherGateways> & otherGateways) { DARABONBA_PTR_SET_VALUE(otherGateways_, otherGateways) };
        inline Items& setOtherGateways(vector<Items::OtherGateways> && otherGateways) { DARABONBA_PTR_SET_RVALUE(otherGateways_, otherGateways) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Items& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        // Indicates whether the authorization scope of this resource includes all models.
        shared_ptr<bool> allModels_ {};
        // The list of consumer groups that the consumer has joined.
        shared_ptr<vector<Items::ConsumerGroups>> consumerGroups_ {};
        // The consumer ID returned by the create or query consumer API.
        shared_ptr<string> consumerId_ {};
        // The time when the consumer was created. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTimestamp_ {};
        // The summary of credential types and quantities for the consumer. The actual credential content is not returned.
        shared_ptr<vector<Items::Credentials>> credentials_ {};
        // The deployment status of the consumer configuration. An empty string is returned if no deployment status is available.
        shared_ptr<string> deployStatus_ {};
        // The description of the consumer.
        shared_ptr<string> description_ {};
        // Indicates whether the consumer is enabled.
        shared_ptr<bool> enable_ {};
        // The number of authorization configurations in the current gateway, counted by resource type.
        shared_ptr<Items::LocalAccess> localAccess_ {};
        // The number of models.
        shared_ptr<int32_t> modelCount_ {};
        // The name of the consumer.
        shared_ptr<string> name_ {};
        // The summary of access configurations for the consumer in other readable gateways.
        shared_ptr<vector<Items::OtherGateways>> otherGateways_ {};
        // The time when the consumer was updated. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      class Counts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Counts& obj) { 
          DARABONBA_PTR_TO_JSON(all, all_);
          DARABONBA_PTR_TO_JSON(disabled, disabled_);
          DARABONBA_PTR_TO_JSON(granted, granted_);
          DARABONBA_PTR_TO_JSON(groups, groups_);
        };
        friend void from_json(const Darabonba::Json& j, Counts& obj) { 
          DARABONBA_PTR_FROM_JSON(all, all_);
          DARABONBA_PTR_FROM_JSON(disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(granted, granted_);
          DARABONBA_PTR_FROM_JSON(groups, groups_);
        };
        Counts() = default ;
        Counts(const Counts &) = default ;
        Counts(Counts &&) = default ;
        Counts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Counts() = default ;
        Counts& operator=(const Counts &) = default ;
        Counts& operator=(Counts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->all_ == nullptr
        && this->disabled_ == nullptr && this->granted_ == nullptr && this->groups_ == nullptr; };
        // all Field Functions 
        bool hasAll() const { return this->all_ != nullptr;};
        void deleteAll() { this->all_ = nullptr;};
        inline int32_t getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, 0) };
        inline Counts& setAll(int32_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline int32_t getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, 0) };
        inline Counts& setDisabled(int32_t disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // granted Field Functions 
        bool hasGranted() const { return this->granted_ != nullptr;};
        void deleteGranted() { this->granted_ = nullptr;};
        inline int32_t getGranted() const { DARABONBA_PTR_GET_DEFAULT(granted_, 0) };
        inline Counts& setGranted(int32_t granted) { DARABONBA_PTR_SET_VALUE(granted_, granted) };


        // groups Field Functions 
        bool hasGroups() const { return this->groups_ != nullptr;};
        void deleteGroups() { this->groups_ = nullptr;};
        inline int32_t getGroups() const { DARABONBA_PTR_GET_DEFAULT(groups_, 0) };
        inline Counts& setGroups(int32_t groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };


      protected:
        // The total number of readable consumers in the local region.
        shared_ptr<int32_t> all_ {};
        // The number of disabled consumers.
        shared_ptr<int32_t> disabled_ {};
        // The number of consumers that have authorization configurations in the current instance.
        shared_ptr<int32_t> granted_ {};
        // The number of consumer groups.
        shared_ptr<int32_t> groups_ {};
      };

      virtual bool empty() const override { return this->complete_ == nullptr
        && this->counts_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // complete Field Functions 
      bool hasComplete() const { return this->complete_ != nullptr;};
      void deleteComplete() { this->complete_ = nullptr;};
      inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
      inline Data& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


      // counts Field Functions 
      bool hasCounts() const { return this->counts_ != nullptr;};
      void deleteCounts() { this->counts_ = nullptr;};
      inline const Data::Counts & getCounts() const { DARABONBA_PTR_GET_CONST(counts_, Data::Counts) };
      inline Data::Counts getCounts() { DARABONBA_PTR_GET(counts_, Data::Counts) };
      inline Data& setCounts(const Data::Counts & counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };
      inline Data& setCounts(Data::Counts && counts) { DARABONBA_PTR_SET_RVALUE(counts_, counts) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Indicates whether the query result is complete. A successful response returns a complete projection.
      shared_ptr<bool> complete_ {};
      // The statistics of the complete consumer set in the local region. This value is not affected by the current pagination.
      shared_ptr<Data::Counts> counts_ {};
      // The list of consumers returned on the current page.
      shared_ptr<vector<Data::Items>> items_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxResults_ {};
      // The pagination token returned from the previous page. Do not specify this parameter when you query the first page.
      shared_ptr<string> nextToken_ {};
      // The total number of entries that match the current query conditions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsumerConsoleSummariesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerConsoleSummariesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerConsoleSummariesResponseBody::Data) };
    inline ListConsumerConsoleSummariesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerConsoleSummariesResponseBody::Data) };
    inline ListConsumerConsoleSummariesResponseBody& setData(const ListConsumerConsoleSummariesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerConsoleSummariesResponseBody& setData(ListConsumerConsoleSummariesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerConsoleSummariesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerConsoleSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. A value of Ok indicates success. If the call fails, a specific business error code is returned.
    shared_ptr<string> code_ {};
    // The business data returned for the consumer operation.
    shared_ptr<ListConsumerConsoleSummariesResponseBody::Data> data_ {};
    // The response message that describes the result of the request.
    shared_ptr<string> message_ {};
    // The request ID generated by the system to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
