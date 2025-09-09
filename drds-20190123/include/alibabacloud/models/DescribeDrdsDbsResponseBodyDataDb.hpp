// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBSRESPONSEBODYDATADB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBSRESPONSEBODYDATADB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBsResponseBodyDataDb : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBsResponseBodyDataDb& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBsResponseBodyDataDb& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDrdsDBsResponseBodyDataDb() = default ;
    DescribeDrdsDBsResponseBodyDataDb(const DescribeDrdsDBsResponseBodyDataDb &) = default ;
    DescribeDrdsDBsResponseBodyDataDb(DescribeDrdsDBsResponseBodyDataDb &&) = default ;
    DescribeDrdsDBsResponseBodyDataDb(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBsResponseBodyDataDb() = default ;
    DescribeDrdsDBsResponseBodyDataDb& operator=(const DescribeDrdsDBsResponseBodyDataDb &) = default ;
    DescribeDrdsDBsResponseBodyDataDb& operator=(DescribeDrdsDBsResponseBodyDataDb &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dbInstType_ != nullptr && this->dbName_ != nullptr && this->mode_ != nullptr && this->schema_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDrdsDBsResponseBodyDataDb& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the database is created. The value of this parameter is a UNIX timestamp. Unit: ms.
    std::shared_ptr<string> createTime_ = nullptr;
    // The type of the database. Valid values: **RDS** and **POLARDB**.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The partitioning mode of the database. Valid values:
    // 
    // *   **HORIZONTAL**: The database is horizontally partitioned.
    // *   **VERTICAL**: The database is vertically partitioned.
    std::shared_ptr<string> mode_ = nullptr;
    // The schema ID that is assigned to the partitioned database.
    std::shared_ptr<string> schema_ = nullptr;
    // The state of the database.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
