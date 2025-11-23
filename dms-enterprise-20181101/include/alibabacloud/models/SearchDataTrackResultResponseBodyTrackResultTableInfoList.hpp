// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTTABLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTTABLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBodyTrackResultTableInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBodyTrackResultTableInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBodyTrackResultTableInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    SearchDataTrackResultResponseBodyTrackResultTableInfoList() = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoList(const SearchDataTrackResultResponseBodyTrackResultTableInfoList &) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoList(SearchDataTrackResultResponseBodyTrackResultTableInfoList &&) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBodyTrackResultTableInfoList() = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoList& operator=(const SearchDataTrackResultResponseBodyTrackResultTableInfoList &) = default ;
    SearchDataTrackResultResponseBodyTrackResultTableInfoList& operator=(SearchDataTrackResultResponseBodyTrackResultTableInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->description_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns>) };
    inline vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns>) };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoList& setColumns(const vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoList& setColumns(vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultTableInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The information about columns.
    std::shared_ptr<vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoListColumns>> columns_ = nullptr;
    // The description of the column.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
