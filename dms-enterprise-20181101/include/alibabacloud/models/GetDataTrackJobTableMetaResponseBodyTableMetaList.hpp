// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODYTABLEMETALIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODYTABLEMETALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataTrackJobTableMetaResponseBodyTableMetaListColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackJobTableMetaResponseBodyTableMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobTableMetaResponseBodyTableMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobTableMetaResponseBodyTableMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetDataTrackJobTableMetaResponseBodyTableMetaList() = default ;
    GetDataTrackJobTableMetaResponseBodyTableMetaList(const GetDataTrackJobTableMetaResponseBodyTableMetaList &) = default ;
    GetDataTrackJobTableMetaResponseBodyTableMetaList(GetDataTrackJobTableMetaResponseBodyTableMetaList &&) = default ;
    GetDataTrackJobTableMetaResponseBodyTableMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobTableMetaResponseBodyTableMetaList() = default ;
    GetDataTrackJobTableMetaResponseBodyTableMetaList& operator=(const GetDataTrackJobTableMetaResponseBodyTableMetaList &) = default ;
    GetDataTrackJobTableMetaResponseBodyTableMetaList& operator=(GetDataTrackJobTableMetaResponseBodyTableMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->schemaName_ != nullptr && this->tableName_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns>) };
    inline vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns>) };
    inline GetDataTrackJobTableMetaResponseBodyTableMetaList& setColumns(const vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetDataTrackJobTableMetaResponseBodyTableMetaList& setColumns(vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetDataTrackJobTableMetaResponseBodyTableMetaList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDataTrackJobTableMetaResponseBodyTableMetaList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The information about columns.
    std::shared_ptr<vector<Models::GetDataTrackJobTableMetaResponseBodyTableMetaListColumns>> columns_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
