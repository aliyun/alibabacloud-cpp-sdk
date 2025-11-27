// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& obj) { 
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
      DARABONBA_PTR_TO_JSON(KsqlReplica, ksqlReplica_);
      DARABONBA_PTR_TO_JSON(KsqlStorage, ksqlStorage_);
      DARABONBA_PTR_TO_JSON(SchemaRegistryCU, schemaRegistryCU_);
      DARABONBA_PTR_TO_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
      DARABONBA_PTR_TO_JSON(ZooKeeperCU, zooKeeperCU_);
      DARABONBA_PTR_TO_JSON(ZooKeeperReplica, zooKeeperReplica_);
      DARABONBA_PTR_TO_JSON(ZooKeeperStorage, zooKeeperStorage_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& obj) { 
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
      DARABONBA_PTR_FROM_JSON(KsqlReplica, ksqlReplica_);
      DARABONBA_PTR_FROM_JSON(KsqlStorage, ksqlStorage_);
      DARABONBA_PTR_FROM_JSON(SchemaRegistryCU, schemaRegistryCU_);
      DARABONBA_PTR_FROM_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
      DARABONBA_PTR_FROM_JSON(ZooKeeperCU, zooKeeperCU_);
      DARABONBA_PTR_FROM_JSON(ZooKeeperReplica, zooKeeperReplica_);
      DARABONBA_PTR_FROM_JSON(ZooKeeperStorage, zooKeeperStorage_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig(GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& operator=(GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectCU_ == nullptr
        && return this->connectReplica_ == nullptr && return this->controlCenterCU_ == nullptr && return this->controlCenterReplica_ == nullptr && return this->controlCenterStorage_ == nullptr && return this->kafkaCU_ == nullptr
        && return this->kafkaReplica_ == nullptr && return this->kafkaRestProxyCU_ == nullptr && return this->kafkaRestProxyReplica_ == nullptr && return this->kafkaStorage_ == nullptr && return this->ksqlCU_ == nullptr
        && return this->ksqlReplica_ == nullptr && return this->ksqlStorage_ == nullptr && return this->schemaRegistryCU_ == nullptr && return this->schemaRegistryReplica_ == nullptr && return this->zooKeeperCU_ == nullptr
        && return this->zooKeeperReplica_ == nullptr && return this->zooKeeperStorage_ == nullptr; };
    // connectCU Field Functions 
    bool hasConnectCU() const { return this->connectCU_ != nullptr;};
    void deleteConnectCU() { this->connectCU_ = nullptr;};
    inline int32_t connectCU() const { DARABONBA_PTR_GET_DEFAULT(connectCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setConnectCU(int32_t connectCU) { DARABONBA_PTR_SET_VALUE(connectCU_, connectCU) };


    // connectReplica Field Functions 
    bool hasConnectReplica() const { return this->connectReplica_ != nullptr;};
    void deleteConnectReplica() { this->connectReplica_ = nullptr;};
    inline int32_t connectReplica() const { DARABONBA_PTR_GET_DEFAULT(connectReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setConnectReplica(int32_t connectReplica) { DARABONBA_PTR_SET_VALUE(connectReplica_, connectReplica) };


    // controlCenterCU Field Functions 
    bool hasControlCenterCU() const { return this->controlCenterCU_ != nullptr;};
    void deleteControlCenterCU() { this->controlCenterCU_ = nullptr;};
    inline int32_t controlCenterCU() const { DARABONBA_PTR_GET_DEFAULT(controlCenterCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setControlCenterCU(int32_t controlCenterCU) { DARABONBA_PTR_SET_VALUE(controlCenterCU_, controlCenterCU) };


    // controlCenterReplica Field Functions 
    bool hasControlCenterReplica() const { return this->controlCenterReplica_ != nullptr;};
    void deleteControlCenterReplica() { this->controlCenterReplica_ = nullptr;};
    inline int32_t controlCenterReplica() const { DARABONBA_PTR_GET_DEFAULT(controlCenterReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setControlCenterReplica(int32_t controlCenterReplica) { DARABONBA_PTR_SET_VALUE(controlCenterReplica_, controlCenterReplica) };


    // controlCenterStorage Field Functions 
    bool hasControlCenterStorage() const { return this->controlCenterStorage_ != nullptr;};
    void deleteControlCenterStorage() { this->controlCenterStorage_ = nullptr;};
    inline int32_t controlCenterStorage() const { DARABONBA_PTR_GET_DEFAULT(controlCenterStorage_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setControlCenterStorage(int32_t controlCenterStorage) { DARABONBA_PTR_SET_VALUE(controlCenterStorage_, controlCenterStorage) };


    // kafkaCU Field Functions 
    bool hasKafkaCU() const { return this->kafkaCU_ != nullptr;};
    void deleteKafkaCU() { this->kafkaCU_ = nullptr;};
    inline int32_t kafkaCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKafkaCU(int32_t kafkaCU) { DARABONBA_PTR_SET_VALUE(kafkaCU_, kafkaCU) };


    // kafkaReplica Field Functions 
    bool hasKafkaReplica() const { return this->kafkaReplica_ != nullptr;};
    void deleteKafkaReplica() { this->kafkaReplica_ = nullptr;};
    inline int32_t kafkaReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKafkaReplica(int32_t kafkaReplica) { DARABONBA_PTR_SET_VALUE(kafkaReplica_, kafkaReplica) };


    // kafkaRestProxyCU Field Functions 
    bool hasKafkaRestProxyCU() const { return this->kafkaRestProxyCU_ != nullptr;};
    void deleteKafkaRestProxyCU() { this->kafkaRestProxyCU_ = nullptr;};
    inline int32_t kafkaRestProxyCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKafkaRestProxyCU(int32_t kafkaRestProxyCU) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyCU_, kafkaRestProxyCU) };


    // kafkaRestProxyReplica Field Functions 
    bool hasKafkaRestProxyReplica() const { return this->kafkaRestProxyReplica_ != nullptr;};
    void deleteKafkaRestProxyReplica() { this->kafkaRestProxyReplica_ = nullptr;};
    inline int32_t kafkaRestProxyReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKafkaRestProxyReplica(int32_t kafkaRestProxyReplica) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyReplica_, kafkaRestProxyReplica) };


    // kafkaStorage Field Functions 
    bool hasKafkaStorage() const { return this->kafkaStorage_ != nullptr;};
    void deleteKafkaStorage() { this->kafkaStorage_ = nullptr;};
    inline int32_t kafkaStorage() const { DARABONBA_PTR_GET_DEFAULT(kafkaStorage_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKafkaStorage(int32_t kafkaStorage) { DARABONBA_PTR_SET_VALUE(kafkaStorage_, kafkaStorage) };


    // ksqlCU Field Functions 
    bool hasKsqlCU() const { return this->ksqlCU_ != nullptr;};
    void deleteKsqlCU() { this->ksqlCU_ = nullptr;};
    inline int32_t ksqlCU() const { DARABONBA_PTR_GET_DEFAULT(ksqlCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKsqlCU(int32_t ksqlCU) { DARABONBA_PTR_SET_VALUE(ksqlCU_, ksqlCU) };


    // ksqlReplica Field Functions 
    bool hasKsqlReplica() const { return this->ksqlReplica_ != nullptr;};
    void deleteKsqlReplica() { this->ksqlReplica_ = nullptr;};
    inline int32_t ksqlReplica() const { DARABONBA_PTR_GET_DEFAULT(ksqlReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKsqlReplica(int32_t ksqlReplica) { DARABONBA_PTR_SET_VALUE(ksqlReplica_, ksqlReplica) };


    // ksqlStorage Field Functions 
    bool hasKsqlStorage() const { return this->ksqlStorage_ != nullptr;};
    void deleteKsqlStorage() { this->ksqlStorage_ = nullptr;};
    inline int32_t ksqlStorage() const { DARABONBA_PTR_GET_DEFAULT(ksqlStorage_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setKsqlStorage(int32_t ksqlStorage) { DARABONBA_PTR_SET_VALUE(ksqlStorage_, ksqlStorage) };


    // schemaRegistryCU Field Functions 
    bool hasSchemaRegistryCU() const { return this->schemaRegistryCU_ != nullptr;};
    void deleteSchemaRegistryCU() { this->schemaRegistryCU_ = nullptr;};
    inline int32_t schemaRegistryCU() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setSchemaRegistryCU(int32_t schemaRegistryCU) { DARABONBA_PTR_SET_VALUE(schemaRegistryCU_, schemaRegistryCU) };


    // schemaRegistryReplica Field Functions 
    bool hasSchemaRegistryReplica() const { return this->schemaRegistryReplica_ != nullptr;};
    void deleteSchemaRegistryReplica() { this->schemaRegistryReplica_ = nullptr;};
    inline int32_t schemaRegistryReplica() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setSchemaRegistryReplica(int32_t schemaRegistryReplica) { DARABONBA_PTR_SET_VALUE(schemaRegistryReplica_, schemaRegistryReplica) };


    // zooKeeperCU Field Functions 
    bool hasZooKeeperCU() const { return this->zooKeeperCU_ != nullptr;};
    void deleteZooKeeperCU() { this->zooKeeperCU_ = nullptr;};
    inline int32_t zooKeeperCU() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperCU_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setZooKeeperCU(int32_t zooKeeperCU) { DARABONBA_PTR_SET_VALUE(zooKeeperCU_, zooKeeperCU) };


    // zooKeeperReplica Field Functions 
    bool hasZooKeeperReplica() const { return this->zooKeeperReplica_ != nullptr;};
    void deleteZooKeeperReplica() { this->zooKeeperReplica_ = nullptr;};
    inline int32_t zooKeeperReplica() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperReplica_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setZooKeeperReplica(int32_t zooKeeperReplica) { DARABONBA_PTR_SET_VALUE(zooKeeperReplica_, zooKeeperReplica) };


    // zooKeeperStorage Field Functions 
    bool hasZooKeeperStorage() const { return this->zooKeeperStorage_ != nullptr;};
    void deleteZooKeeperStorage() { this->zooKeeperStorage_ = nullptr;};
    inline int32_t zooKeeperStorage() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperStorage_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig& setZooKeeperStorage(int32_t zooKeeperStorage) { DARABONBA_PTR_SET_VALUE(zooKeeperStorage_, zooKeeperStorage) };


  protected:
    // The number of CPU cores of Connect.
    std::shared_ptr<int32_t> connectCU_ = nullptr;
    // The number of replicas of Connect.
    std::shared_ptr<int32_t> connectReplica_ = nullptr;
    // The number of CPU cores of Control Center.
    std::shared_ptr<int32_t> controlCenterCU_ = nullptr;
    // The number of replicas of Control Center.
    std::shared_ptr<int32_t> controlCenterReplica_ = nullptr;
    // The disk capacity of Control Center. Unit: GB.
    std::shared_ptr<int32_t> controlCenterStorage_ = nullptr;
    // The number of CPU cores of the Kafka broker.
    std::shared_ptr<int32_t> kafkaCU_ = nullptr;
    // The number of replicas of the Kafka broker.
    std::shared_ptr<int32_t> kafkaReplica_ = nullptr;
    // The number of CPU cores of Kafka Rest Proxy.
    std::shared_ptr<int32_t> kafkaRestProxyCU_ = nullptr;
    // The number of replicas of Kafka Rest Proxy.
    std::shared_ptr<int32_t> kafkaRestProxyReplica_ = nullptr;
    // The disk capacity of the Kafka broker. Unit: GB.
    std::shared_ptr<int32_t> kafkaStorage_ = nullptr;
    // The number of CPU cores of ksqlDB.
    std::shared_ptr<int32_t> ksqlCU_ = nullptr;
    // The number of replicas of ksqlDB.
    std::shared_ptr<int32_t> ksqlReplica_ = nullptr;
    // The disk capacity of ksqlDB. Unit: GB.
    std::shared_ptr<int32_t> ksqlStorage_ = nullptr;
    // The number of CPU cores of Schema Registry.
    std::shared_ptr<int32_t> schemaRegistryCU_ = nullptr;
    // The number of replicas of Schema Registry.
    std::shared_ptr<int32_t> schemaRegistryReplica_ = nullptr;
    // The number of CPU cores of ZooKeeper.
    std::shared_ptr<int32_t> zooKeeperCU_ = nullptr;
    // The number of replicas of ZooKeeper.
    std::shared_ptr<int32_t> zooKeeperReplica_ = nullptr;
    // The disk capacity of ZooKeeper. Unit: GB.
    std::shared_ptr<int32_t> zooKeeperStorage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
