// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREPAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREPAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePrePayOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrePayOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrePayOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    CreatePrePayOrderRequest() = default ;
    CreatePrePayOrderRequest(const CreatePrePayOrderRequest &) = default ;
    CreatePrePayOrderRequest(CreatePrePayOrderRequest &&) = default ;
    CreatePrePayOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrePayOrderRequest() = default ;
    CreatePrePayOrderRequest& operator=(const CreatePrePayOrderRequest &) = default ;
    CreatePrePayOrderRequest& operator=(CreatePrePayOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N.
      // 
      // *   Valid values of N: 1 to 20.
      // *   If this parameter is left empty, the keys of all tags are matched.
      // *   The tag key can be up to 128 characters in length and cannot start with acs: or aliyun or contain [http:// or https://.](http://https://。)
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of tag N.
      // 
      // *   Valid values of N: 1 to 20.
      // *   This parameter can be left empty.
      // *   The tag value can be 1 to 128 characters in length and cannot start with acs: or aliyun or contain [http:// or https://.](http://https://。)
      shared_ptr<string> value_ {};
    };

    class ConfluentConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfluentConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectCU, connectCU_);
        DARABONBA_PTR_TO_JSON(ConnectReplica, connectReplica_);
        DARABONBA_PTR_TO_JSON(ControlCenterCU, controlCenterCU_);
        DARABONBA_PTR_TO_JSON(ControlCenterReplica, controlCenterReplica_);
        DARABONBA_PTR_TO_JSON(ControlCenterStorage, controlCenterStorage_);
        DARABONBA_PTR_TO_JSON(KafkaCU, kafkaCU_);
        DARABONBA_PTR_TO_JSON(KafkaReplica, kafkaReplica_);
        DARABONBA_PTR_TO_JSON(KafkaRestProxyCU, kafkaRestProxyCU_);
        DARABONBA_PTR_TO_JSON(KafkaRestProxyReplica, kafkaRestProxyReplica_);
        DARABONBA_PTR_TO_JSON(KafkaStorage, kafkaStorage_);
        DARABONBA_PTR_TO_JSON(KsqlCU, ksqlCU_);
        DARABONBA_PTR_TO_JSON(KsqlList, ksqlList_);
        DARABONBA_PTR_TO_JSON(KsqlReplica, ksqlReplica_);
        DARABONBA_PTR_TO_JSON(KsqlStorage, ksqlStorage_);
        DARABONBA_PTR_TO_JSON(SchemaRegistryCU, schemaRegistryCU_);
        DARABONBA_PTR_TO_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
        DARABONBA_PTR_TO_JSON(ZooKeeperCU, zooKeeperCU_);
        DARABONBA_PTR_TO_JSON(ZooKeeperReplica, zooKeeperReplica_);
        DARABONBA_PTR_TO_JSON(ZooKeeperStorage, zooKeeperStorage_);
      };
      friend void from_json(const Darabonba::Json& j, ConfluentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectCU, connectCU_);
        DARABONBA_PTR_FROM_JSON(ConnectReplica, connectReplica_);
        DARABONBA_PTR_FROM_JSON(ControlCenterCU, controlCenterCU_);
        DARABONBA_PTR_FROM_JSON(ControlCenterReplica, controlCenterReplica_);
        DARABONBA_PTR_FROM_JSON(ControlCenterStorage, controlCenterStorage_);
        DARABONBA_PTR_FROM_JSON(KafkaCU, kafkaCU_);
        DARABONBA_PTR_FROM_JSON(KafkaReplica, kafkaReplica_);
        DARABONBA_PTR_FROM_JSON(KafkaRestProxyCU, kafkaRestProxyCU_);
        DARABONBA_PTR_FROM_JSON(KafkaRestProxyReplica, kafkaRestProxyReplica_);
        DARABONBA_PTR_FROM_JSON(KafkaStorage, kafkaStorage_);
        DARABONBA_PTR_FROM_JSON(KsqlCU, ksqlCU_);
        DARABONBA_PTR_FROM_JSON(KsqlList, ksqlList_);
        DARABONBA_PTR_FROM_JSON(KsqlReplica, ksqlReplica_);
        DARABONBA_PTR_FROM_JSON(KsqlStorage, ksqlStorage_);
        DARABONBA_PTR_FROM_JSON(SchemaRegistryCU, schemaRegistryCU_);
        DARABONBA_PTR_FROM_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
        DARABONBA_PTR_FROM_JSON(ZooKeeperCU, zooKeeperCU_);
        DARABONBA_PTR_FROM_JSON(ZooKeeperReplica, zooKeeperReplica_);
        DARABONBA_PTR_FROM_JSON(ZooKeeperStorage, zooKeeperStorage_);
      };
      ConfluentConfig() = default ;
      ConfluentConfig(const ConfluentConfig &) = default ;
      ConfluentConfig(ConfluentConfig &&) = default ;
      ConfluentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfluentConfig() = default ;
      ConfluentConfig& operator=(const ConfluentConfig &) = default ;
      ConfluentConfig& operator=(ConfluentConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KsqlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KsqlList& obj) { 
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(InternalId, internalId_);
          DARABONBA_PTR_TO_JSON(Replica, replica_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, KsqlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(InternalId, internalId_);
          DARABONBA_PTR_FROM_JSON(Replica, replica_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        KsqlList() = default ;
        KsqlList(const KsqlList &) = default ;
        KsqlList(KsqlList &&) = default ;
        KsqlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KsqlList() = default ;
        KsqlList& operator=(const KsqlList &) = default ;
        KsqlList& operator=(KsqlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cu_ == nullptr
        && this->internalId_ == nullptr && this->replica_ == nullptr && this->storage_ == nullptr && this->type_ == nullptr; };
        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
        inline KsqlList& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // internalId Field Functions 
        bool hasInternalId() const { return this->internalId_ != nullptr;};
        void deleteInternalId() { this->internalId_ = nullptr;};
        inline string getInternalId() const { DARABONBA_PTR_GET_DEFAULT(internalId_, "") };
        inline KsqlList& setInternalId(string internalId) { DARABONBA_PTR_SET_VALUE(internalId_, internalId) };


        // replica Field Functions 
        bool hasReplica() const { return this->replica_ != nullptr;};
        void deleteReplica() { this->replica_ = nullptr;};
        inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
        inline KsqlList& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
        inline KsqlList& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline KsqlList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> cu_ {};
        shared_ptr<string> internalId_ {};
        shared_ptr<int32_t> replica_ {};
        shared_ptr<int32_t> storage_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->connectCU_ == nullptr
        && this->connectReplica_ == nullptr && this->controlCenterCU_ == nullptr && this->controlCenterReplica_ == nullptr && this->controlCenterStorage_ == nullptr && this->kafkaCU_ == nullptr
        && this->kafkaReplica_ == nullptr && this->kafkaRestProxyCU_ == nullptr && this->kafkaRestProxyReplica_ == nullptr && this->kafkaStorage_ == nullptr && this->ksqlCU_ == nullptr
        && this->ksqlList_ == nullptr && this->ksqlReplica_ == nullptr && this->ksqlStorage_ == nullptr && this->schemaRegistryCU_ == nullptr && this->schemaRegistryReplica_ == nullptr
        && this->zooKeeperCU_ == nullptr && this->zooKeeperReplica_ == nullptr && this->zooKeeperStorage_ == nullptr; };
      // connectCU Field Functions 
      bool hasConnectCU() const { return this->connectCU_ != nullptr;};
      void deleteConnectCU() { this->connectCU_ = nullptr;};
      inline int32_t getConnectCU() const { DARABONBA_PTR_GET_DEFAULT(connectCU_, 0) };
      inline ConfluentConfig& setConnectCU(int32_t connectCU) { DARABONBA_PTR_SET_VALUE(connectCU_, connectCU) };


      // connectReplica Field Functions 
      bool hasConnectReplica() const { return this->connectReplica_ != nullptr;};
      void deleteConnectReplica() { this->connectReplica_ = nullptr;};
      inline int32_t getConnectReplica() const { DARABONBA_PTR_GET_DEFAULT(connectReplica_, 0) };
      inline ConfluentConfig& setConnectReplica(int32_t connectReplica) { DARABONBA_PTR_SET_VALUE(connectReplica_, connectReplica) };


      // controlCenterCU Field Functions 
      bool hasControlCenterCU() const { return this->controlCenterCU_ != nullptr;};
      void deleteControlCenterCU() { this->controlCenterCU_ = nullptr;};
      inline int32_t getControlCenterCU() const { DARABONBA_PTR_GET_DEFAULT(controlCenterCU_, 0) };
      inline ConfluentConfig& setControlCenterCU(int32_t controlCenterCU) { DARABONBA_PTR_SET_VALUE(controlCenterCU_, controlCenterCU) };


      // controlCenterReplica Field Functions 
      bool hasControlCenterReplica() const { return this->controlCenterReplica_ != nullptr;};
      void deleteControlCenterReplica() { this->controlCenterReplica_ = nullptr;};
      inline int32_t getControlCenterReplica() const { DARABONBA_PTR_GET_DEFAULT(controlCenterReplica_, 0) };
      inline ConfluentConfig& setControlCenterReplica(int32_t controlCenterReplica) { DARABONBA_PTR_SET_VALUE(controlCenterReplica_, controlCenterReplica) };


      // controlCenterStorage Field Functions 
      bool hasControlCenterStorage() const { return this->controlCenterStorage_ != nullptr;};
      void deleteControlCenterStorage() { this->controlCenterStorage_ = nullptr;};
      inline int32_t getControlCenterStorage() const { DARABONBA_PTR_GET_DEFAULT(controlCenterStorage_, 0) };
      inline ConfluentConfig& setControlCenterStorage(int32_t controlCenterStorage) { DARABONBA_PTR_SET_VALUE(controlCenterStorage_, controlCenterStorage) };


      // kafkaCU Field Functions 
      bool hasKafkaCU() const { return this->kafkaCU_ != nullptr;};
      void deleteKafkaCU() { this->kafkaCU_ = nullptr;};
      inline int32_t getKafkaCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaCU_, 0) };
      inline ConfluentConfig& setKafkaCU(int32_t kafkaCU) { DARABONBA_PTR_SET_VALUE(kafkaCU_, kafkaCU) };


      // kafkaReplica Field Functions 
      bool hasKafkaReplica() const { return this->kafkaReplica_ != nullptr;};
      void deleteKafkaReplica() { this->kafkaReplica_ = nullptr;};
      inline int32_t getKafkaReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaReplica_, 0) };
      inline ConfluentConfig& setKafkaReplica(int32_t kafkaReplica) { DARABONBA_PTR_SET_VALUE(kafkaReplica_, kafkaReplica) };


      // kafkaRestProxyCU Field Functions 
      bool hasKafkaRestProxyCU() const { return this->kafkaRestProxyCU_ != nullptr;};
      void deleteKafkaRestProxyCU() { this->kafkaRestProxyCU_ = nullptr;};
      inline int32_t getKafkaRestProxyCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyCU_, 0) };
      inline ConfluentConfig& setKafkaRestProxyCU(int32_t kafkaRestProxyCU) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyCU_, kafkaRestProxyCU) };


      // kafkaRestProxyReplica Field Functions 
      bool hasKafkaRestProxyReplica() const { return this->kafkaRestProxyReplica_ != nullptr;};
      void deleteKafkaRestProxyReplica() { this->kafkaRestProxyReplica_ = nullptr;};
      inline int32_t getKafkaRestProxyReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyReplica_, 0) };
      inline ConfluentConfig& setKafkaRestProxyReplica(int32_t kafkaRestProxyReplica) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyReplica_, kafkaRestProxyReplica) };


      // kafkaStorage Field Functions 
      bool hasKafkaStorage() const { return this->kafkaStorage_ != nullptr;};
      void deleteKafkaStorage() { this->kafkaStorage_ = nullptr;};
      inline int32_t getKafkaStorage() const { DARABONBA_PTR_GET_DEFAULT(kafkaStorage_, 0) };
      inline ConfluentConfig& setKafkaStorage(int32_t kafkaStorage) { DARABONBA_PTR_SET_VALUE(kafkaStorage_, kafkaStorage) };


      // ksqlCU Field Functions 
      bool hasKsqlCU() const { return this->ksqlCU_ != nullptr;};
      void deleteKsqlCU() { this->ksqlCU_ = nullptr;};
      inline int32_t getKsqlCU() const { DARABONBA_PTR_GET_DEFAULT(ksqlCU_, 0) };
      inline ConfluentConfig& setKsqlCU(int32_t ksqlCU) { DARABONBA_PTR_SET_VALUE(ksqlCU_, ksqlCU) };


      // ksqlList Field Functions 
      bool hasKsqlList() const { return this->ksqlList_ != nullptr;};
      void deleteKsqlList() { this->ksqlList_ = nullptr;};
      inline const vector<ConfluentConfig::KsqlList> & getKsqlList() const { DARABONBA_PTR_GET_CONST(ksqlList_, vector<ConfluentConfig::KsqlList>) };
      inline vector<ConfluentConfig::KsqlList> getKsqlList() { DARABONBA_PTR_GET(ksqlList_, vector<ConfluentConfig::KsqlList>) };
      inline ConfluentConfig& setKsqlList(const vector<ConfluentConfig::KsqlList> & ksqlList) { DARABONBA_PTR_SET_VALUE(ksqlList_, ksqlList) };
      inline ConfluentConfig& setKsqlList(vector<ConfluentConfig::KsqlList> && ksqlList) { DARABONBA_PTR_SET_RVALUE(ksqlList_, ksqlList) };


      // ksqlReplica Field Functions 
      bool hasKsqlReplica() const { return this->ksqlReplica_ != nullptr;};
      void deleteKsqlReplica() { this->ksqlReplica_ = nullptr;};
      inline int32_t getKsqlReplica() const { DARABONBA_PTR_GET_DEFAULT(ksqlReplica_, 0) };
      inline ConfluentConfig& setKsqlReplica(int32_t ksqlReplica) { DARABONBA_PTR_SET_VALUE(ksqlReplica_, ksqlReplica) };


      // ksqlStorage Field Functions 
      bool hasKsqlStorage() const { return this->ksqlStorage_ != nullptr;};
      void deleteKsqlStorage() { this->ksqlStorage_ = nullptr;};
      inline int32_t getKsqlStorage() const { DARABONBA_PTR_GET_DEFAULT(ksqlStorage_, 0) };
      inline ConfluentConfig& setKsqlStorage(int32_t ksqlStorage) { DARABONBA_PTR_SET_VALUE(ksqlStorage_, ksqlStorage) };


      // schemaRegistryCU Field Functions 
      bool hasSchemaRegistryCU() const { return this->schemaRegistryCU_ != nullptr;};
      void deleteSchemaRegistryCU() { this->schemaRegistryCU_ = nullptr;};
      inline int32_t getSchemaRegistryCU() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryCU_, 0) };
      inline ConfluentConfig& setSchemaRegistryCU(int32_t schemaRegistryCU) { DARABONBA_PTR_SET_VALUE(schemaRegistryCU_, schemaRegistryCU) };


      // schemaRegistryReplica Field Functions 
      bool hasSchemaRegistryReplica() const { return this->schemaRegistryReplica_ != nullptr;};
      void deleteSchemaRegistryReplica() { this->schemaRegistryReplica_ = nullptr;};
      inline int32_t getSchemaRegistryReplica() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryReplica_, 0) };
      inline ConfluentConfig& setSchemaRegistryReplica(int32_t schemaRegistryReplica) { DARABONBA_PTR_SET_VALUE(schemaRegistryReplica_, schemaRegistryReplica) };


      // zooKeeperCU Field Functions 
      bool hasZooKeeperCU() const { return this->zooKeeperCU_ != nullptr;};
      void deleteZooKeeperCU() { this->zooKeeperCU_ = nullptr;};
      inline int32_t getZooKeeperCU() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperCU_, 0) };
      inline ConfluentConfig& setZooKeeperCU(int32_t zooKeeperCU) { DARABONBA_PTR_SET_VALUE(zooKeeperCU_, zooKeeperCU) };


      // zooKeeperReplica Field Functions 
      bool hasZooKeeperReplica() const { return this->zooKeeperReplica_ != nullptr;};
      void deleteZooKeeperReplica() { this->zooKeeperReplica_ = nullptr;};
      inline int32_t getZooKeeperReplica() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperReplica_, 0) };
      inline ConfluentConfig& setZooKeeperReplica(int32_t zooKeeperReplica) { DARABONBA_PTR_SET_VALUE(zooKeeperReplica_, zooKeeperReplica) };


      // zooKeeperStorage Field Functions 
      bool hasZooKeeperStorage() const { return this->zooKeeperStorage_ != nullptr;};
      void deleteZooKeeperStorage() { this->zooKeeperStorage_ = nullptr;};
      inline int32_t getZooKeeperStorage() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperStorage_, 0) };
      inline ConfluentConfig& setZooKeeperStorage(int32_t zooKeeperStorage) { DARABONBA_PTR_SET_VALUE(zooKeeperStorage_, zooKeeperStorage) };


    protected:
      // The number of CPU cores of Connect.
      shared_ptr<int32_t> connectCU_ {};
      // The number of replicas of Connect.
      shared_ptr<int32_t> connectReplica_ {};
      // The number of CPU cores of Control Center.
      shared_ptr<int32_t> controlCenterCU_ {};
      // The number of replicas of Control Center.
      shared_ptr<int32_t> controlCenterReplica_ {};
      // The disk capacity of Control Center. Unit: GB
      shared_ptr<int32_t> controlCenterStorage_ {};
      // The number of CPU cores of the Kafka broker.
      shared_ptr<int32_t> kafkaCU_ {};
      // The number of replicas of the Kafka broker.
      shared_ptr<int32_t> kafkaReplica_ {};
      // The number of CPU cores of Kafka Rest Proxy.
      shared_ptr<int32_t> kafkaRestProxyCU_ {};
      // The number of replicas of Kafka Rest Proxy.
      shared_ptr<int32_t> kafkaRestProxyReplica_ {};
      // The disk capacity of the Kafka broker. Unit: GB
      shared_ptr<int32_t> kafkaStorage_ {};
      // The number of CPU cores of ksqIDB.
      shared_ptr<int32_t> ksqlCU_ {};
      shared_ptr<vector<ConfluentConfig::KsqlList>> ksqlList_ {};
      // The number of replicas of ksqlDB.
      shared_ptr<int32_t> ksqlReplica_ {};
      // The disk capacity of ksqlDB. Unit: GB
      shared_ptr<int32_t> ksqlStorage_ {};
      // The number of CPU cores of Schema Registry.
      shared_ptr<int32_t> schemaRegistryCU_ {};
      // The number of replicas of Schema Registry.
      shared_ptr<int32_t> schemaRegistryReplica_ {};
      // The number of CPU cores of ZooKeeper.
      shared_ptr<int32_t> zooKeeperCU_ {};
      // The number of replicas of ZooKeeper.
      shared_ptr<int32_t> zooKeeperReplica_ {};
      // The disk capacity of ZooKeeper. Unit: GB
      shared_ptr<int32_t> zooKeeperStorage_ {};
    };

    virtual bool empty() const override { return this->confluentConfig_ == nullptr
        && this->deployType_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->duration_ == nullptr && this->eipMax_ == nullptr
        && this->ioMax_ == nullptr && this->ioMaxSpec_ == nullptr && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->specType_ == nullptr && this->tag_ == nullptr && this->topicQuota_ == nullptr; };
    // confluentConfig Field Functions 
    bool hasConfluentConfig() const { return this->confluentConfig_ != nullptr;};
    void deleteConfluentConfig() { this->confluentConfig_ = nullptr;};
    inline const CreatePrePayOrderRequest::ConfluentConfig & getConfluentConfig() const { DARABONBA_PTR_GET_CONST(confluentConfig_, CreatePrePayOrderRequest::ConfluentConfig) };
    inline CreatePrePayOrderRequest::ConfluentConfig getConfluentConfig() { DARABONBA_PTR_GET(confluentConfig_, CreatePrePayOrderRequest::ConfluentConfig) };
    inline CreatePrePayOrderRequest& setConfluentConfig(const CreatePrePayOrderRequest::ConfluentConfig & confluentConfig) { DARABONBA_PTR_SET_VALUE(confluentConfig_, confluentConfig) };
    inline CreatePrePayOrderRequest& setConfluentConfig(CreatePrePayOrderRequest::ConfluentConfig && confluentConfig) { DARABONBA_PTR_SET_RVALUE(confluentConfig_, confluentConfig) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePrePayOrderRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePrePayOrderRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePrePayOrderRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePrePayOrderRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePrePayOrderRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePrePayOrderRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePrePayOrderRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePrePayOrderRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePrePayOrderRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrePayOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrePayOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePrePayOrderRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePrePayOrderRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePrePayOrderRequest::Tag>) };
    inline vector<CreatePrePayOrderRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePrePayOrderRequest::Tag>) };
    inline CreatePrePayOrderRequest& setTag(const vector<CreatePrePayOrderRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePrePayOrderRequest& setTag(vector<CreatePrePayOrderRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePrePayOrderRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The configurations of Confluent.
    // 
    // >  When you create an ApsaraMQ for Confluent instance, you must configure this parameter.
    shared_ptr<CreatePrePayOrderRequest::ConfluentConfig> confluentConfig_ {};
    // The type of the network in which the instance is deployed. Valid values:
    // 
    // *   **4**: Internet and virtual private cloud (VPC)
    // *   **5**: VPC
    // 
    // >  If you create an ApsaraMQ for Confluent instance, set the value to 5. After the instance is created, you can specify whether to enable each component.
    shared_ptr<int32_t> deployType_ {};
    // The disk size. Unit: GB
    // 
    // For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type. Valid values:
    // 
    // *   **0**: ultra disk
    // *   **1**: standard SSD
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<string> diskType_ {};
    // The subscription duration. Unit: months. Default value: 1. Valid values:
    // 
    // *   **1 to 12**
    shared_ptr<int32_t> duration_ {};
    // The maximum Internet traffic in the instance.
    // 
    // *   If you set **DeployType** to **4**, you must configure this parameter.
    // *   For information about the valid values, see [Pay-as-you-go](https://help.aliyun.com/document_detail/72142.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<int32_t> eipMax_ {};
    // The maximum traffic in the instance. We recommend that you do not configure this parameter.
    // 
    // *   You must set one of **IoMax** and **IoMaxSpec**. If both parameters are configured, the value of **IoMaxSpec** is used. We recommend that you configure only **IoMaxSpec**.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification of the instance. We recommend that you configure this parameter.
    // 
    // *   You must configure one of **IoMax** and **IoMaxSpec**. If both parameters are configured, the value of **IoMaxSpec** is used. We recommend that you configure only **IoMaxSpec**.
    // *   For more information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **0**: the subscription billing method
    // *   **4**: the subscription billing method for ApsaraMQ for Confluent instances
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions. We recommend that you configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    // 
    // If this parameter is left empty, the default resource group is used. You can view the resource group ID on the Resource Group page in the Resource Management console.
    shared_ptr<string> resourceGroupId_ {};
    // The instance edition. Valid values:
    // 
    // *   **normal**: Standard Edition (High Write)
    // *   **professional**: Professional Edition (High Write)
    // *   **professionalForHighRead**: Professional Edition (High Read)
    // 
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<string> specType_ {};
    // The tags.
    shared_ptr<vector<CreatePrePayOrderRequest::Tag>> tag_ {};
    // The number of topics. We recommend that you do not configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   The default value of TopicQuota varies based on the value of IoMaxSpec. If the number of topics that you use exceeds the default value, you are charged additional fees.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
