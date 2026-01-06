// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABASESUMMARYMODEL_HPP_
#define ALIBABACLOUD_MODELS_DATABASESUMMARYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DatabaseSummaryModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatabaseSummaryModel& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedBySource, createdBySource_);
      DARABONBA_PTR_TO_JSON(CreatedByUser, createdByUser_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DatabaseSummaryModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBySource, createdBySource_);
      DARABONBA_PTR_FROM_JSON(CreatedByUser, createdByUser_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DatabaseSummaryModel() = default ;
    DatabaseSummaryModel(const DatabaseSummaryModel &) = default ;
    DatabaseSummaryModel(DatabaseSummaryModel &&) = default ;
    DatabaseSummaryModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatabaseSummaryModel() = default ;
    DatabaseSummaryModel& operator=(const DatabaseSummaryModel &) = default ;
    DatabaseSummaryModel& operator=(DatabaseSummaryModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createdBySource_ == nullptr && this->createdByUser_ == nullptr && this->dbType_ == nullptr && this->description_ == nullptr && this->location_ == nullptr
        && this->owner_ == nullptr && this->schemaName_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DatabaseSummaryModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBySource Field Functions 
    bool hasCreatedBySource() const { return this->createdBySource_ != nullptr;};
    void deleteCreatedBySource() { this->createdBySource_ = nullptr;};
    inline string getCreatedBySource() const { DARABONBA_PTR_GET_DEFAULT(createdBySource_, "") };
    inline DatabaseSummaryModel& setCreatedBySource(string createdBySource) { DARABONBA_PTR_SET_VALUE(createdBySource_, createdBySource) };


    // createdByUser Field Functions 
    bool hasCreatedByUser() const { return this->createdByUser_ != nullptr;};
    void deleteCreatedByUser() { this->createdByUser_ = nullptr;};
    inline string getCreatedByUser() const { DARABONBA_PTR_GET_DEFAULT(createdByUser_, "") };
    inline DatabaseSummaryModel& setCreatedByUser(string createdByUser) { DARABONBA_PTR_SET_VALUE(createdByUser_, createdByUser) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DatabaseSummaryModel& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DatabaseSummaryModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DatabaseSummaryModel& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DatabaseSummaryModel& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DatabaseSummaryModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DatabaseSummaryModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> createdBySource_ {};
    shared_ptr<string> createdByUser_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> location_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> schemaName_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
