// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyDatabaseDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DbDescription, dbDescription_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DbDescription, dbDescription_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDatabaseDescriptionRequest() = default ;
    ModifyDatabaseDescriptionRequest(const ModifyDatabaseDescriptionRequest &) = default ;
    ModifyDatabaseDescriptionRequest(ModifyDatabaseDescriptionRequest &&) = default ;
    ModifyDatabaseDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseDescriptionRequest() = default ;
    ModifyDatabaseDescriptionRequest& operator=(const ModifyDatabaseDescriptionRequest &) = default ;
    ModifyDatabaseDescriptionRequest& operator=(ModifyDatabaseDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceName_ != nullptr
        && this->dbDescription_ != nullptr && this->dbName_ != nullptr && this->regionId_ != nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyDatabaseDescriptionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dbDescription Field Functions 
    bool hasDbDescription() const { return this->dbDescription_ != nullptr;};
    void deleteDbDescription() { this->dbDescription_ = nullptr;};
    inline string dbDescription() const { DARABONBA_PTR_GET_DEFAULT(dbDescription_, "") };
    inline ModifyDatabaseDescriptionRequest& setDbDescription(string dbDescription) { DARABONBA_PTR_SET_VALUE(dbDescription_, dbDescription) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyDatabaseDescriptionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabaseDescriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
