// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableLineageResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableLineageResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetMetaTableLineageResponseBodyDataDataEntityList() = default ;
    GetMetaTableLineageResponseBodyDataDataEntityList(const GetMetaTableLineageResponseBodyDataDataEntityList &) = default ;
    GetMetaTableLineageResponseBodyDataDataEntityList(GetMetaTableLineageResponseBodyDataDataEntityList &&) = default ;
    GetMetaTableLineageResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableLineageResponseBodyDataDataEntityList() = default ;
    GetMetaTableLineageResponseBodyDataDataEntityList& operator=(const GetMetaTableLineageResponseBodyDataDataEntityList &) = default ;
    GetMetaTableLineageResponseBodyDataDataEntityList& operator=(GetMetaTableLineageResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->databaseName_ != nullptr && this->tableGuid_ != nullptr && this->tableName_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetMetaTableLineageResponseBodyDataDataEntityList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaTableLineageResponseBodyDataDataEntityList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableLineageResponseBodyDataDataEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaTableLineageResponseBodyDataDataEntityList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The time when the table was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The unique identifier of the table.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
