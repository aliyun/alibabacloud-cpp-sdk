// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETREFERENCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETREFERENCESRESPONSEBODY_HPP_
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
  class ListSecretReferencesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretReferencesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretReferencesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListSecretReferencesResponseBody() = default ;
    ListSecretReferencesResponseBody(const ListSecretReferencesResponseBody &) = default ;
    ListSecretReferencesResponseBody(ListSecretReferencesResponseBody &&) = default ;
    ListSecretReferencesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretReferencesResponseBody() = default ;
    ListSecretReferencesResponseBody& operator=(const ListSecretReferencesResponseBody &) = default ;
    ListSecretReferencesResponseBody& operator=(ListSecretReferencesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
          DARABONBA_PTR_TO_JSON(PluginConfig, pluginConfig_);
          DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
          DARABONBA_PTR_TO_JSON(consumerConfig, consumerConfig_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(PluginConfig, pluginConfig_);
          DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
          DARABONBA_PTR_FROM_JSON(consumerConfig, consumerConfig_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
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
        class McpServerConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const McpServerConfig& obj) { 
            DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(routeId, routeId_);
          };
          friend void from_json(const Darabonba::Json& j, McpServerConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(routeId, routeId_);
          };
          McpServerConfig() = default ;
          McpServerConfig(const McpServerConfig &) = default ;
          McpServerConfig(McpServerConfig &&) = default ;
          McpServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~McpServerConfig() = default ;
          McpServerConfig& operator=(const McpServerConfig &) = default ;
          McpServerConfig& operator=(McpServerConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->httpApiId_ == nullptr
        && this->name_ == nullptr && this->routeId_ == nullptr; };
          // httpApiId Field Functions 
          bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
          void deleteHttpApiId() { this->httpApiId_ = nullptr;};
          inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
          inline McpServerConfig& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline McpServerConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // routeId Field Functions 
          bool hasRouteId() const { return this->routeId_ != nullptr;};
          void deleteRouteId() { this->routeId_ = nullptr;};
          inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
          inline McpServerConfig& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        protected:
          shared_ptr<string> httpApiId_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> routeId_ {};
        };

        class ConsumerConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerConfig& obj) { 
            DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          ConsumerConfig() = default ;
          ConsumerConfig(const ConsumerConfig &) = default ;
          ConsumerConfig(ConsumerConfig &&) = default ;
          ConsumerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerConfig() = default ;
          ConsumerConfig& operator=(const ConsumerConfig &) = default ;
          ConsumerConfig& operator=(ConsumerConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->name_ == nullptr; };
          // consumerId Field Functions 
          bool hasConsumerId() const { return this->consumerId_ != nullptr;};
          void deleteConsumerId() { this->consumerId_ = nullptr;};
          inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
          inline ConsumerConfig& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> consumerId_ {};
          shared_ptr<string> name_ {};
        };

        class ServiceConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceConfig& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
          };
          ServiceConfig() = default ;
          ServiceConfig(const ServiceConfig &) = default ;
          ServiceConfig(ServiceConfig &&) = default ;
          ServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceConfig() = default ;
          ServiceConfig& operator=(const ServiceConfig &) = default ;
          ServiceConfig& operator=(ServiceConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->serviceId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ServiceConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline ServiceConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> serviceId_ {};
        };

        class PluginConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginConfig& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
            DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
          };
          friend void from_json(const Darabonba::Json& j, PluginConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
            DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
          };
          PluginConfig() = default ;
          PluginConfig(const PluginConfig &) = default ;
          PluginConfig(PluginConfig &&) = default ;
          PluginConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginConfig() = default ;
          PluginConfig& operator=(const PluginConfig &) = default ;
          PluginConfig& operator=(PluginConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->pluginClassId_ == nullptr && this->pluginId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PluginConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // pluginClassId Field Functions 
          bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
          void deletePluginClassId() { this->pluginClassId_ = nullptr;};
          inline string getPluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
          inline PluginConfig& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


          // pluginId Field Functions 
          bool hasPluginId() const { return this->pluginId_ != nullptr;};
          void deletePluginId() { this->pluginId_ = nullptr;};
          inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
          inline PluginConfig& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> pluginClassId_ {};
          shared_ptr<string> pluginId_ {};
        };

        virtual bool empty() const override { return this->pluginConfig_ == nullptr
        && this->serviceConfig_ == nullptr && this->consumerConfig_ == nullptr && this->gatewayId_ == nullptr && this->mcpServerConfig_ == nullptr && this->resourceType_ == nullptr; };
        // pluginConfig Field Functions 
        bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
        void deletePluginConfig() { this->pluginConfig_ = nullptr;};
        inline const Items::PluginConfig & getPluginConfig() const { DARABONBA_PTR_GET_CONST(pluginConfig_, Items::PluginConfig) };
        inline Items::PluginConfig getPluginConfig() { DARABONBA_PTR_GET(pluginConfig_, Items::PluginConfig) };
        inline Items& setPluginConfig(const Items::PluginConfig & pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };
        inline Items& setPluginConfig(Items::PluginConfig && pluginConfig) { DARABONBA_PTR_SET_RVALUE(pluginConfig_, pluginConfig) };


        // serviceConfig Field Functions 
        bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
        void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
        inline const Items::ServiceConfig & getServiceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, Items::ServiceConfig) };
        inline Items::ServiceConfig getServiceConfig() { DARABONBA_PTR_GET(serviceConfig_, Items::ServiceConfig) };
        inline Items& setServiceConfig(const Items::ServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
        inline Items& setServiceConfig(Items::ServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


        // consumerConfig Field Functions 
        bool hasConsumerConfig() const { return this->consumerConfig_ != nullptr;};
        void deleteConsumerConfig() { this->consumerConfig_ = nullptr;};
        inline const Items::ConsumerConfig & getConsumerConfig() const { DARABONBA_PTR_GET_CONST(consumerConfig_, Items::ConsumerConfig) };
        inline Items::ConsumerConfig getConsumerConfig() { DARABONBA_PTR_GET(consumerConfig_, Items::ConsumerConfig) };
        inline Items& setConsumerConfig(const Items::ConsumerConfig & consumerConfig) { DARABONBA_PTR_SET_VALUE(consumerConfig_, consumerConfig) };
        inline Items& setConsumerConfig(Items::ConsumerConfig && consumerConfig) { DARABONBA_PTR_SET_RVALUE(consumerConfig_, consumerConfig) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // mcpServerConfig Field Functions 
        bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
        void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
        inline const Items::McpServerConfig & getMcpServerConfig() const { DARABONBA_PTR_GET_CONST(mcpServerConfig_, Items::McpServerConfig) };
        inline Items::McpServerConfig getMcpServerConfig() { DARABONBA_PTR_GET(mcpServerConfig_, Items::McpServerConfig) };
        inline Items& setMcpServerConfig(const Items::McpServerConfig & mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };
        inline Items& setMcpServerConfig(Items::McpServerConfig && mcpServerConfig) { DARABONBA_PTR_SET_RVALUE(mcpServerConfig_, mcpServerConfig) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<Items::PluginConfig> pluginConfig_ {};
        shared_ptr<Items::ServiceConfig> serviceConfig_ {};
        shared_ptr<Items::ConsumerConfig> consumerConfig_ {};
        shared_ptr<string> gatewayId_ {};
        shared_ptr<Items::McpServerConfig> mcpServerConfig_ {};
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSecretReferencesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSecretReferencesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSecretReferencesResponseBody::Data) };
    inline ListSecretReferencesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSecretReferencesResponseBody::Data) };
    inline ListSecretReferencesResponseBody& setData(const ListSecretReferencesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSecretReferencesResponseBody& setData(ListSecretReferencesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSecretReferencesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretReferencesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSecretReferencesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
