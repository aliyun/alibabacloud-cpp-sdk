// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTMIGRATIONMODE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREMIGRATIONJOBREQUESTMIGRATIONMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureMigrationJobRequestMigrationMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureMigrationJobRequestMigrationMode& obj) { 
      DARABONBA_PTR_TO_JSON(DataIntialization, dataIntialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(StructureIntialization, structureIntialization_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureMigrationJobRequestMigrationMode& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIntialization, dataIntialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(StructureIntialization, structureIntialization_);
    };
    ConfigureMigrationJobRequestMigrationMode() = default ;
    ConfigureMigrationJobRequestMigrationMode(const ConfigureMigrationJobRequestMigrationMode &) = default ;
    ConfigureMigrationJobRequestMigrationMode(ConfigureMigrationJobRequestMigrationMode &&) = default ;
    ConfigureMigrationJobRequestMigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureMigrationJobRequestMigrationMode() = default ;
    ConfigureMigrationJobRequestMigrationMode& operator=(const ConfigureMigrationJobRequestMigrationMode &) = default ;
    ConfigureMigrationJobRequestMigrationMode& operator=(ConfigureMigrationJobRequestMigrationMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIntialization_ == nullptr
        && return this->dataSynchronization_ == nullptr && return this->structureIntialization_ == nullptr; };
    // dataIntialization Field Functions 
    bool hasDataIntialization() const { return this->dataIntialization_ != nullptr;};
    void deleteDataIntialization() { this->dataIntialization_ = nullptr;};
    inline bool dataIntialization() const { DARABONBA_PTR_GET_DEFAULT(dataIntialization_, false) };
    inline ConfigureMigrationJobRequestMigrationMode& setDataIntialization(bool dataIntialization) { DARABONBA_PTR_SET_VALUE(dataIntialization_, dataIntialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool dataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline ConfigureMigrationJobRequestMigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // structureIntialization Field Functions 
    bool hasStructureIntialization() const { return this->structureIntialization_ != nullptr;};
    void deleteStructureIntialization() { this->structureIntialization_ = nullptr;};
    inline bool structureIntialization() const { DARABONBA_PTR_GET_DEFAULT(structureIntialization_, false) };
    inline ConfigureMigrationJobRequestMigrationMode& setStructureIntialization(bool structureIntialization) { DARABONBA_PTR_SET_VALUE(structureIntialization_, structureIntialization) };


  protected:
    // The database account of the destination database.
    // 
    // >  The permissions that are required for database accounts vary with the migration scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
    // 
    // This parameter is required.
    std::shared_ptr<bool> dataIntialization_ = nullptr;
    // The password of the destination database account.
    // 
    // This parameter is required.
    std::shared_ptr<bool> dataSynchronization_ = nullptr;
    // The name of the destination database or the authentication database.
    // 
    // > 
    // *   You must specify the database name only if the **DestinationEndpoint.EngineName** parameter is set to **PostgreSQL**, **DRDS**, or **MongoDB**.
    // *   If the **DestinationEndpoint.EngineName** parameter is set to **PostgreSQL** or **DRDS**, specify the name of the destination database. If the DestinationEndpoint.EngineName parameter is set to **MongoDB**, specify the name of the authentication database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> structureIntialization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
