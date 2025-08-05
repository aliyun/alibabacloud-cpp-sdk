// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->engineName_ != nullptr && this->IP_ != nullptr && this->instanceID_ != nullptr && this->instanceType_ != nullptr && this->oracleSID_ != nullptr
        && this->port_ != nullptr && this->userName_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // oracleSID Field Functions 
    bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
    void deleteOracleSID() { this->oracleSID_ = nullptr;};
    inline string oracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The database type of the source instance.
    std::shared_ptr<string> engineName_ = nullptr;
    // The endpoint of the source instance.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The type of the source instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // This parameter is returned only if the database type of the source instance is **Oracle**.
    std::shared_ptr<string> oracleSID_ = nullptr;
    // The database service port of the source instance.
    std::shared_ptr<string> port_ = nullptr;
    // The database account of the source instance.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
