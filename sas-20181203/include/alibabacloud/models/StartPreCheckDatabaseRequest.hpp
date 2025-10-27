// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPRECHECKDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPRECHECKDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartPreCheckDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPreCheckDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPreCheckDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
    };
    StartPreCheckDatabaseRequest() = default ;
    StartPreCheckDatabaseRequest(const StartPreCheckDatabaseRequest &) = default ;
    StartPreCheckDatabaseRequest(StartPreCheckDatabaseRequest &&) = default ;
    StartPreCheckDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPreCheckDatabaseRequest() = default ;
    StartPreCheckDatabaseRequest& operator=(const StartPreCheckDatabaseRequest &) = default ;
    StartPreCheckDatabaseRequest& operator=(StartPreCheckDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseType_ == nullptr
        && return this->instanceUuid_ == nullptr && return this->uniRegionId_ == nullptr; };
    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline StartPreCheckDatabaseRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline StartPreCheckDatabaseRequest& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // uniRegionId Field Functions 
    bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
    void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
    inline string uniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
    inline StartPreCheckDatabaseRequest& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


  protected:
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **MSSQL**
    // *   **Oracle**
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseType_ = nullptr;
    // The UUID of the agent that is used to back up the data of the database.
    // 
    // > You can call the [DescribeUniBackupDatabase](~~DescribeUniBackupDatabase~~) operation to query the UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The region ID of the server that hosts the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> uniRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
