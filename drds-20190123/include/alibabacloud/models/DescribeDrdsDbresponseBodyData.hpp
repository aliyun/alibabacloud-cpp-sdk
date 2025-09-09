// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(InstRole, instRole_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(InstRole, instRole_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDrdsDBResponseBodyData() = default ;
    DescribeDrdsDBResponseBodyData(const DescribeDrdsDBResponseBodyData &) = default ;
    DescribeDrdsDBResponseBodyData(DescribeDrdsDBResponseBodyData &&) = default ;
    DescribeDrdsDBResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBResponseBodyData() = default ;
    DescribeDrdsDBResponseBodyData& operator=(const DescribeDrdsDBResponseBodyData &) = default ;
    DescribeDrdsDBResponseBodyData& operator=(DescribeDrdsDBResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dbInstType_ != nullptr && this->dbName_ != nullptr && this->instRole_ != nullptr && this->mode_ != nullptr && this->schema_ != nullptr
        && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDrdsDBResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline string dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, "") };
    inline DescribeDrdsDBResponseBodyData& setDbInstType(string dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsDBResponseBodyData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // instRole Field Functions 
    bool hasInstRole() const { return this->instRole_ != nullptr;};
    void deleteInstRole() { this->instRole_ = nullptr;};
    inline string instRole() const { DARABONBA_PTR_GET_DEFAULT(instRole_, "") };
    inline DescribeDrdsDBResponseBodyData& setInstRole(string instRole) { DARABONBA_PTR_SET_VALUE(instRole_, instRole) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDrdsDBResponseBodyData& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeDrdsDBResponseBodyData& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDrdsDBResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates the time when the database was created. The value is in the UNIX timestamp format. Unit: ms.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates the storage type of the database.
    std::shared_ptr<string> dbInstType_ = nullptr;
    // Indicates the name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // Indicates the type of the instance in which the database is deployed. Valid values:
    // 
    // *   **MASTER**: The instance is a primary instance.
    // *   **SLAVE**: The instance is a read-only instance.
    std::shared_ptr<string> instRole_ = nullptr;
    // Indicates the database sharding method.
    // 
    // *   **HORIZONTAL**: The database is horizontally sharded.
    // *   **VERTICAL**: The database is vertically sharded.
    std::shared_ptr<string> mode_ = nullptr;
    // Indicates the schema name of the database.
    std::shared_ptr<string> schema_ = nullptr;
    // Indicates the state of the database. Valid values:
    // 
    // *   **TO_BE_INIT**: The database is being created.
    // *   **NORMAL**: The database is running.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
