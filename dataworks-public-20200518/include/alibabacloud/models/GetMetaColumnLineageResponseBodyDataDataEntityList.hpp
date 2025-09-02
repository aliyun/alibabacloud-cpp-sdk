// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOLUMNLINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOLUMNLINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaColumnLineageResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaColumnLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaColumnLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ColumnGuid, columnGuid_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetMetaColumnLineageResponseBodyDataDataEntityList() = default ;
    GetMetaColumnLineageResponseBodyDataDataEntityList(const GetMetaColumnLineageResponseBodyDataDataEntityList &) = default ;
    GetMetaColumnLineageResponseBodyDataDataEntityList(GetMetaColumnLineageResponseBodyDataDataEntityList &&) = default ;
    GetMetaColumnLineageResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaColumnLineageResponseBodyDataDataEntityList() = default ;
    GetMetaColumnLineageResponseBodyDataDataEntityList& operator=(const GetMetaColumnLineageResponseBodyDataDataEntityList &) = default ;
    GetMetaColumnLineageResponseBodyDataDataEntityList& operator=(GetMetaColumnLineageResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->columnGuid_ != nullptr && this->columnName_ != nullptr && this->databaseName_ != nullptr && this->tableName_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaColumnLineageResponseBodyDataDataEntityList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // columnGuid Field Functions 
    bool hasColumnGuid() const { return this->columnGuid_ != nullptr;};
    void deleteColumnGuid() { this->columnGuid_ = nullptr;};
    inline string columnGuid() const { DARABONBA_PTR_GET_DEFAULT(columnGuid_, "") };
    inline GetMetaColumnLineageResponseBodyDataDataEntityList& setColumnGuid(string columnGuid) { DARABONBA_PTR_SET_VALUE(columnGuid_, columnGuid) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetMetaColumnLineageResponseBodyDataDataEntityList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaColumnLineageResponseBodyDataDataEntityList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaColumnLineageResponseBodyDataDataEntityList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The EMR cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The unique identifier of the field.
    std::shared_ptr<string> columnGuid_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> columnName_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
