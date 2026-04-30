// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEINSTRUCTIONSVO_HPP_
#define ALIBABACLOUD_MODELS_TABLEINSTRUCTIONSVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class TableInstructionsVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableInstructionsVO& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCreatedGmt, assetCreatedGmt_);
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableInstructionsVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCreatedGmt, assetCreatedGmt_);
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    TableInstructionsVO() = default ;
    TableInstructionsVO(const TableInstructionsVO &) = default ;
    TableInstructionsVO(TableInstructionsVO &&) = default ;
    TableInstructionsVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableInstructionsVO() = default ;
    TableInstructionsVO& operator=(const TableInstructionsVO &) = default ;
    TableInstructionsVO& operator=(TableInstructionsVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCreatedGmt_ == nullptr
        && this->assetDescription_ == nullptr && this->assetModifiedGmt_ == nullptr && this->dbId_ == nullptr && this->dbType_ == nullptr && this->summary_ == nullptr
        && this->tableName_ == nullptr; };
    // assetCreatedGmt Field Functions 
    bool hasAssetCreatedGmt() const { return this->assetCreatedGmt_ != nullptr;};
    void deleteAssetCreatedGmt() { this->assetCreatedGmt_ = nullptr;};
    inline string getAssetCreatedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetCreatedGmt_, "") };
    inline TableInstructionsVO& setAssetCreatedGmt(string assetCreatedGmt) { DARABONBA_PTR_SET_VALUE(assetCreatedGmt_, assetCreatedGmt) };


    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline TableInstructionsVO& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // assetModifiedGmt Field Functions 
    bool hasAssetModifiedGmt() const { return this->assetModifiedGmt_ != nullptr;};
    void deleteAssetModifiedGmt() { this->assetModifiedGmt_ = nullptr;};
    inline string getAssetModifiedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetModifiedGmt_, "") };
    inline TableInstructionsVO& setAssetModifiedGmt(string assetModifiedGmt) { DARABONBA_PTR_SET_VALUE(assetModifiedGmt_, assetModifiedGmt) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline TableInstructionsVO& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline TableInstructionsVO& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TableInstructionsVO& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableInstructionsVO& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> assetCreatedGmt_ {};
    shared_ptr<string> assetDescription_ {};
    shared_ptr<string> assetModifiedGmt_ {};
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
