// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColdStorageInstanceResponseBodyTablesChildObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeColdStorageInstanceResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageInstanceResponseBodyTables& obj) { 
      DARABONBA_PTR_TO_JSON(ChildObjects, childObjects_);
      DARABONBA_PTR_TO_JSON(DB, DB_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(OssClusterId, ossClusterId_);
      DARABONBA_PTR_TO_JSON(Partion, partion_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageInstanceResponseBodyTables& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildObjects, childObjects_);
      DARABONBA_PTR_FROM_JSON(DB, DB_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(OssClusterId, ossClusterId_);
      DARABONBA_PTR_FROM_JSON(Partion, partion_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeColdStorageInstanceResponseBodyTables() = default ;
    DescribeColdStorageInstanceResponseBodyTables(const DescribeColdStorageInstanceResponseBodyTables &) = default ;
    DescribeColdStorageInstanceResponseBodyTables(DescribeColdStorageInstanceResponseBodyTables &&) = default ;
    DescribeColdStorageInstanceResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageInstanceResponseBodyTables() = default ;
    DescribeColdStorageInstanceResponseBodyTables& operator=(const DescribeColdStorageInstanceResponseBodyTables &) = default ;
    DescribeColdStorageInstanceResponseBodyTables& operator=(DescribeColdStorageInstanceResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childObjects_ == nullptr
        && return this->DB_ == nullptr && return this->DBName_ == nullptr && return this->fieldName_ == nullptr && return this->ossClusterId_ == nullptr && return this->partion_ == nullptr
        && return this->size_ == nullptr && return this->status_ == nullptr && return this->table_ == nullptr && return this->tableName_ == nullptr; };
    // childObjects Field Functions 
    bool hasChildObjects() const { return this->childObjects_ != nullptr;};
    void deleteChildObjects() { this->childObjects_ = nullptr;};
    inline const vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects> & childObjects() const { DARABONBA_PTR_GET_CONST(childObjects_, vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects>) };
    inline vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects> childObjects() { DARABONBA_PTR_GET(childObjects_, vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects>) };
    inline DescribeColdStorageInstanceResponseBodyTables& setChildObjects(const vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects> & childObjects) { DARABONBA_PTR_SET_VALUE(childObjects_, childObjects) };
    inline DescribeColdStorageInstanceResponseBodyTables& setChildObjects(vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects> && childObjects) { DARABONBA_PTR_SET_RVALUE(childObjects_, childObjects) };


    // DB Field Functions 
    bool hasDB() const { return this->DB_ != nullptr;};
    void deleteDB() { this->DB_ = nullptr;};
    inline string DB() const { DARABONBA_PTR_GET_DEFAULT(DB_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setDB(string DB) { DARABONBA_PTR_SET_VALUE(DB_, DB) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // ossClusterId Field Functions 
    bool hasOssClusterId() const { return this->ossClusterId_ != nullptr;};
    void deleteOssClusterId() { this->ossClusterId_ = nullptr;};
    inline string ossClusterId() const { DARABONBA_PTR_GET_DEFAULT(ossClusterId_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setOssClusterId(string ossClusterId) { DARABONBA_PTR_SET_VALUE(ossClusterId_, ossClusterId) };


    // partion Field Functions 
    bool hasPartion() const { return this->partion_ != nullptr;};
    void deletePartion() { this->partion_ = nullptr;};
    inline string partion() const { DARABONBA_PTR_GET_DEFAULT(partion_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setPartion(string partion) { DARABONBA_PTR_SET_VALUE(partion_, partion) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeColdStorageInstanceResponseBodyTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<Models::DescribeColdStorageInstanceResponseBodyTablesChildObjects>> childObjects_ = nullptr;
    std::shared_ptr<string> DB_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> ossClusterId_ = nullptr;
    std::shared_ptr<string> partion_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
