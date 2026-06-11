// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICTABLEINDEX_HPP_
#define ALIBABACLOUD_MODELS_AGENTICTABLEINDEX_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticTableIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticTableIndex& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(RealColumnNames, realColumnNames_);
      DARABONBA_PTR_TO_JSON(Unique, unique_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticTableIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(RealColumnNames, realColumnNames_);
      DARABONBA_PTR_FROM_JSON(Unique, unique_);
    };
    AgenticTableIndex() = default ;
    AgenticTableIndex(const AgenticTableIndex &) = default ;
    AgenticTableIndex(AgenticTableIndex &&) = default ;
    AgenticTableIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticTableIndex() = default ;
    AgenticTableIndex& operator=(const AgenticTableIndex &) = default ;
    AgenticTableIndex& operator=(AgenticTableIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnNames_ == nullptr
        && this->description_ == nullptr && this->indexName_ == nullptr && this->indexType_ == nullptr && this->primary_ == nullptr && this->realColumnNames_ == nullptr
        && this->unique_ == nullptr; };
    // columnNames Field Functions 
    bool hasColumnNames() const { return this->columnNames_ != nullptr;};
    void deleteColumnNames() { this->columnNames_ = nullptr;};
    inline const vector<string> & getColumnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
    inline vector<string> getColumnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
    inline AgenticTableIndex& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
    inline AgenticTableIndex& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgenticTableIndex& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline AgenticTableIndex& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline AgenticTableIndex& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline AgenticTableIndex& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // realColumnNames Field Functions 
    bool hasRealColumnNames() const { return this->realColumnNames_ != nullptr;};
    void deleteRealColumnNames() { this->realColumnNames_ = nullptr;};
    inline const vector<string> & getRealColumnNames() const { DARABONBA_PTR_GET_CONST(realColumnNames_, vector<string>) };
    inline vector<string> getRealColumnNames() { DARABONBA_PTR_GET(realColumnNames_, vector<string>) };
    inline AgenticTableIndex& setRealColumnNames(const vector<string> & realColumnNames) { DARABONBA_PTR_SET_VALUE(realColumnNames_, realColumnNames) };
    inline AgenticTableIndex& setRealColumnNames(vector<string> && realColumnNames) { DARABONBA_PTR_SET_RVALUE(realColumnNames_, realColumnNames) };


    // unique Field Functions 
    bool hasUnique() const { return this->unique_ != nullptr;};
    void deleteUnique() { this->unique_ = nullptr;};
    inline bool getUnique() const { DARABONBA_PTR_GET_DEFAULT(unique_, false) };
    inline AgenticTableIndex& setUnique(bool unique) { DARABONBA_PTR_SET_VALUE(unique_, unique) };


  protected:
    // An array of column names included in the index.
    shared_ptr<vector<string>> columnNames_ {};
    // An optional, user-defined description for the index.
    shared_ptr<string> description_ {};
    // The unique name of the index within the table.
    shared_ptr<string> indexName_ {};
    // The type of the index, such as PRIMARY, UNIQUE, or NORMAL.
    shared_ptr<string> indexType_ {};
    // Specifies if the index is the primary key. A table can have only one primary key.
    shared_ptr<bool> primary_ {};
    // An array of physical column names from the database. Use this parameter when the names in ColumnNames are aliases or logical names.
    shared_ptr<vector<string>> realColumnNames_ {};
    // Specifies if the index enforces a unique constraint, requiring all its values to be unique across rows.
    shared_ptr<bool> unique_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
