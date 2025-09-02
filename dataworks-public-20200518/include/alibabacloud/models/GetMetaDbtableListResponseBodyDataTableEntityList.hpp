// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBTABLELISTRESPONSEBODYDATATABLEENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBTABLELISTRESPONSEBODYDATATABLEENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBTableListResponseBodyDataTableEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBTableListResponseBodyDataTableEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBTableListResponseBodyDataTableEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetMetaDBTableListResponseBodyDataTableEntityList() = default ;
    GetMetaDBTableListResponseBodyDataTableEntityList(const GetMetaDBTableListResponseBodyDataTableEntityList &) = default ;
    GetMetaDBTableListResponseBodyDataTableEntityList(GetMetaDBTableListResponseBodyDataTableEntityList &&) = default ;
    GetMetaDBTableListResponseBodyDataTableEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBTableListResponseBodyDataTableEntityList() = default ;
    GetMetaDBTableListResponseBodyDataTableEntityList& operator=(const GetMetaDBTableListResponseBodyDataTableEntityList &) = default ;
    GetMetaDBTableListResponseBodyDataTableEntityList& operator=(GetMetaDBTableListResponseBodyDataTableEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseName_ != nullptr
        && this->tableGuid_ != nullptr && this->tableName_ != nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaDBTableListResponseBodyDataTableEntityList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaDBTableListResponseBodyDataTableEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaDBTableListResponseBodyDataTableEntityList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the metadatabase.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The GUID of the metatable.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The name of the metatable.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
