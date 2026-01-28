// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VECTORSTORECONFIG_HPP_
#define ALIBABACLOUD_MODELS_VECTORSTORECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class VectorStoreConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VectorStoreConfig& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(mysqlConfig, mysqlConfig_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, VectorStoreConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(mysqlConfig, mysqlConfig_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    VectorStoreConfig() = default ;
    VectorStoreConfig(const VectorStoreConfig &) = default ;
    VectorStoreConfig(VectorStoreConfig &&) = default ;
    VectorStoreConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VectorStoreConfig() = default ;
    VectorStoreConfig& operator=(const VectorStoreConfig &) = default ;
    VectorStoreConfig& operator=(VectorStoreConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MysqlConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MysqlConfig& obj) { 
        DARABONBA_PTR_TO_JSON(collectionName, collectionName_);
        DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
        DARABONBA_PTR_TO_JSON(dbName, dbName_);
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(user, user_);
        DARABONBA_PTR_TO_JSON(vectorDimension, vectorDimension_);
      };
      friend void from_json(const Darabonba::Json& j, MysqlConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(collectionName, collectionName_);
        DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
        DARABONBA_PTR_FROM_JSON(dbName, dbName_);
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(user, user_);
        DARABONBA_PTR_FROM_JSON(vectorDimension, vectorDimension_);
      };
      MysqlConfig() = default ;
      MysqlConfig(const MysqlConfig &) = default ;
      MysqlConfig(MysqlConfig &&) = default ;
      MysqlConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MysqlConfig() = default ;
      MysqlConfig& operator=(const MysqlConfig &) = default ;
      MysqlConfig& operator=(MysqlConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collectionName_ == nullptr
        && this->credentialName_ == nullptr && this->dbName_ == nullptr && this->host_ == nullptr && this->port_ == nullptr && this->user_ == nullptr
        && this->vectorDimension_ == nullptr; };
      // collectionName Field Functions 
      bool hasCollectionName() const { return this->collectionName_ != nullptr;};
      void deleteCollectionName() { this->collectionName_ = nullptr;};
      inline string getCollectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
      inline MysqlConfig& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


      // credentialName Field Functions 
      bool hasCredentialName() const { return this->credentialName_ != nullptr;};
      void deleteCredentialName() { this->credentialName_ = nullptr;};
      inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
      inline MysqlConfig& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline MysqlConfig& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline MysqlConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline MysqlConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline MysqlConfig& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // vectorDimension Field Functions 
      bool hasVectorDimension() const { return this->vectorDimension_ != nullptr;};
      void deleteVectorDimension() { this->vectorDimension_ = nullptr;};
      inline int32_t getVectorDimension() const { DARABONBA_PTR_GET_DEFAULT(vectorDimension_, 0) };
      inline MysqlConfig& setVectorDimension(int32_t vectorDimension) { DARABONBA_PTR_SET_VALUE(vectorDimension_, vectorDimension) };


    protected:
      shared_ptr<string> collectionName_ {};
      shared_ptr<string> credentialName_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<string> host_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> user_ {};
      shared_ptr<int32_t> vectorDimension_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(collectionName, collectionName_);
        DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(vectorDimension, vectorDimension_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(collectionName, collectionName_);
        DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(vectorDimension, vectorDimension_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collectionName_ == nullptr
        && this->endpoint_ == nullptr && this->instanceName_ == nullptr && this->vectorDimension_ == nullptr; };
      // collectionName Field Functions 
      bool hasCollectionName() const { return this->collectionName_ != nullptr;};
      void deleteCollectionName() { this->collectionName_ = nullptr;};
      inline string getCollectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
      inline Config& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Config& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Config& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // vectorDimension Field Functions 
      bool hasVectorDimension() const { return this->vectorDimension_ != nullptr;};
      void deleteVectorDimension() { this->vectorDimension_ = nullptr;};
      inline int32_t getVectorDimension() const { DARABONBA_PTR_GET_DEFAULT(vectorDimension_, 0) };
      inline Config& setVectorDimension(int32_t vectorDimension) { DARABONBA_PTR_SET_VALUE(vectorDimension_, vectorDimension) };


    protected:
      shared_ptr<string> collectionName_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<int32_t> vectorDimension_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->mysqlConfig_ == nullptr && this->provider_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const VectorStoreConfig::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, VectorStoreConfig::Config) };
    inline VectorStoreConfig::Config getConfig() { DARABONBA_PTR_GET(config_, VectorStoreConfig::Config) };
    inline VectorStoreConfig& setConfig(const VectorStoreConfig::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline VectorStoreConfig& setConfig(VectorStoreConfig::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // mysqlConfig Field Functions 
    bool hasMysqlConfig() const { return this->mysqlConfig_ != nullptr;};
    void deleteMysqlConfig() { this->mysqlConfig_ = nullptr;};
    inline const VectorStoreConfig::MysqlConfig & getMysqlConfig() const { DARABONBA_PTR_GET_CONST(mysqlConfig_, VectorStoreConfig::MysqlConfig) };
    inline VectorStoreConfig::MysqlConfig getMysqlConfig() { DARABONBA_PTR_GET(mysqlConfig_, VectorStoreConfig::MysqlConfig) };
    inline VectorStoreConfig& setMysqlConfig(const VectorStoreConfig::MysqlConfig & mysqlConfig) { DARABONBA_PTR_SET_VALUE(mysqlConfig_, mysqlConfig) };
    inline VectorStoreConfig& setMysqlConfig(VectorStoreConfig::MysqlConfig && mysqlConfig) { DARABONBA_PTR_SET_RVALUE(mysqlConfig_, mysqlConfig) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline VectorStoreConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    shared_ptr<VectorStoreConfig::Config> config_ {};
    shared_ptr<VectorStoreConfig::MysqlConfig> mysqlConfig_ {};
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
