// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEKNOWLEDGEINFO_HPP_
#define ALIBABACLOUD_MODELS_TABLEKNOWLEDGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColumnKnowledgeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class TableKnowledgeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableKnowledgeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableKnowledgeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    TableKnowledgeInfo() = default ;
    TableKnowledgeInfo(const TableKnowledgeInfo &) = default ;
    TableKnowledgeInfo(TableKnowledgeInfo &&) = default ;
    TableKnowledgeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableKnowledgeInfo() = default ;
    TableKnowledgeInfo& operator=(const TableKnowledgeInfo &) = default ;
    TableKnowledgeInfo& operator=(TableKnowledgeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDescription_ == nullptr
        && this->assetModifiedGmt_ == nullptr && this->columnList_ == nullptr && this->description_ == nullptr && this->summary_ == nullptr && this->tableName_ == nullptr; };
    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline TableKnowledgeInfo& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // assetModifiedGmt Field Functions 
    bool hasAssetModifiedGmt() const { return this->assetModifiedGmt_ != nullptr;};
    void deleteAssetModifiedGmt() { this->assetModifiedGmt_ = nullptr;};
    inline string getAssetModifiedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetModifiedGmt_, "") };
    inline TableKnowledgeInfo& setAssetModifiedGmt(string assetModifiedGmt) { DARABONBA_PTR_SET_VALUE(assetModifiedGmt_, assetModifiedGmt) };


    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const vector<ColumnKnowledgeInfo> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<ColumnKnowledgeInfo>) };
    inline vector<ColumnKnowledgeInfo> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<ColumnKnowledgeInfo>) };
    inline TableKnowledgeInfo& setColumnList(const vector<ColumnKnowledgeInfo> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline TableKnowledgeInfo& setColumnList(vector<ColumnKnowledgeInfo> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TableKnowledgeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TableKnowledgeInfo& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableKnowledgeInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> assetDescription_ {};
    shared_ptr<string> assetModifiedGmt_ {};
    shared_ptr<vector<ColumnKnowledgeInfo>> columnList_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
